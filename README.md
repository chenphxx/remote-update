## 说明

项目尚处于开发初期, 还并没有实现功能 

## 关于本项目

本项目通过`bootloader`实现开发板的远程更新, 适用于具有蓝牙通信模块的开发板 

## 典型的启动方式

1. `boot0 = 1; boot1 = 0`, 厂家在该地址预置了一段bootloader, 也就是常说的`ISP`程序, 范围为`0x1FFFF000`到`0x1FFFF7FF` 

2. `boot0 = 0`, 从主Flash存储器启动, 典型的启动流程, 通常从`0x08000000`开始, 也就是用户程序的开始地址; 一般情况下, 使用烧录器也是将程序烧录到这个地址 

3. 从SRAM启动, 在某些应用场景下用于调试, 地址开始于`0x20000000` 

## 使用usart烧录程序

首先将`boot0`置1, 使开发板进入bootloader, 开发板使用usart连接上电脑, 在软件中打开对应端口, 选择编译好的hex文件, 然后点击烧录, 随后按下开发板复位键, 等待程序烧录完成 

## 常规更新方式

1. 全量升级 

将新版本完全下载, 然后将其搬运到用户程序位置, 校验完成后重启设备 

2. 差分升级 

首先利用算法将其新版APP和原版APP进行差分, 输出差分包, 即两个版本不同的地方, bootloader使用算法将其写入用户程序位置, 随后进行校验并重启 

> 需要保证原版APP程序的完整以及数据一致性, 否则会导致差分包无法正常更新 

3. 原地升级 

直接将升级包搬运过来 

> 升级过程中不能断电, 否则将导致设备无法使用 

4. AB面升级 

可以在系统运行期间进行, 并不会打断用户, 整个过程中, 唯一的宕机发生在设备重新启动到更新后的磁盘分区时 

## 文档参考

[AN2606](https://www.st.com/resource/en/application_note/cd00167594-stm32-microcontroller-system-memory-boot-mode-stmicroelectronics.pdf) 不同型号的STM32微控制器的bootloader的功能, 支持的接口以及如何进入bootloader模式的引导和引脚配置 

[AN3155](https://www.st.com/resource/en/application_note/cd00264342-usart-protocol-used-in-the-stm32-bootloader-stmicroelectronics.pdf) 通过`USART`来使用bootloader的详细协议, 包括了启动流程, 可用流程以及相应格式 


