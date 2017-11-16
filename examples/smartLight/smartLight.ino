/*
 ************************************************************************
 * 作者:  IntoRobot Team
 * 版本:  V1.0.0
 * 日期:  03-30-15
 ************************************************************************
 功能描述：
 智能灯：控制智能灯开关

 所需器件:
 1.LED灯泡
 2.继电器模块

 接线说明:
 继电器模块
 1.DC+：                      +5V
 2.DC-：                      GND
 3.IN：                       D7
 4.NO：                       灯的正极
 5.COM：                      +5V
 6.NC：                       悬空
 7.触发选择端：选择跳线与high短接, 即高电平触发。
 */

#include <WidgetSmartLight.h>

#define LED_PIN D7

WidgetSmartLight smartLight = WidgetSmartLight();

void smartLightSwitchCb(void)
{
    if(smartLight.getLightSwitch())
    {
        smartLight.control(LED_PIN,1); //打开灯泡
    }
    else
    {
        smartLight.control(LED_PIN,0); //关闭灯泡
    }
}

void setup()
{
    smartLight.begin(smartLightSwitchCb);
}

void loop()
{
}
