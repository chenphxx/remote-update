#include "stm32f10x.h"

#define FLASH_JUMP_ADDR (0x08000000)

typedef void (*pFunction)(void);
void jump_to_app(uint32_t app_addr);

int main(void)
{
    /*
      初始化程序省略.....
    */

    if (((FLASH_JUMP_ADDR + 4) & 0xFF000000) == 0x08000000) // Judge if start at 0X08XXXXXX.
    {
        jump_to_app(FLASH_JUMP_ADDR); // 跳转到程序地址
    }

    while (1){}
}


/**
 * @brief 跳转到应用程序段
 * 
 * @param app_addr 用户代码起始地址
 * @return 无
 */
void jump_to_app(uint32_t app_addr)
{
    pFunction jump_to_application;
    uint32_t jump_address;

    // 检查地址有效性, 然后跳转到用户程序地址
    if (((*(__IO uint32_t *)app_addr) & 0x2FFE0000) == 0x20000000)
    {
        // 跳转到用户程序地址
        jump_address = *(__IO uint32_t *)(app_addr + 4);
        jump_to_application = (pFunction)jump_address;
        // 初始化用户程序栈指针
        __set_MSP(*(__IO uint32_t *)jump_address);
        jump_to_application();
    }
}
