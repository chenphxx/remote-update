## 实现原理

`bootloader`是程序在运行前, 首先启动的一个程序, 可以对设备进行初始化; 通过对其进行重写, 可以实现远程更新的功能 

在flash中, 逻辑上分为两部分内容, 从首地址开始, 为bootloader的地址, 然后是用户编写的程序的存储地址 

在开发板启动时, 运行bootloader程序, 查看是否具有更新, 有更新则将更新文件写入用户程序存储地址; 没有更新, 则运行之前的用户程序 

## 具体实现

需要在写入bootloader程序和用户程序时, 在keil中指定两个程序的烧录地址 

## 常规更新方式

1. 全量升级 

将新版本完全下载, 然后将其搬运到用户程序位置, 校验完成后重启设备 

2. 差分升级 

首先利用算法将其新版APP和原版APP进行差分, 输出差分包, 即两个版本不同的地方, bootloader使用算法将其写入用户程序位置, 随后进行校验并重启 

> 需要保证原版APP程序的完整以及数据一致性, 否则会导致差分包无法正常更新 

3. 原地升级 

直接将升级包搬运过来 

4. AB面升级 

可以在系统运行期间进行, 并不会打断用户, 整个过程中, 唯一的宕机发生在设备重新启动到更新后的磁盘分区时 

