/*******************************************************************************
****版本：V1.0.0
****平台：STM8S003
****日期：2021-01-12
****作者：Qitas
****版权：OS-Q
*******************************************************************************/

#include "delay.h"

void delay_us(uint16_t nCount)
{
    while(nCount--)
    {
        nop();
        nop();
        nop();
        nop();
    }
}
/*******************************************************************************
**函数信息 ：
**功能描述 ：
**输入参数 ：
**输出参数 ：
*******************************************************************************/
void delay_ms(uint16_t nCount)
{
    while(nCount--)
    {
        delay_us(999);
    }
}

/*---------------------------(C) COPYRIGHT 2021 OS-Q -------------------------*/