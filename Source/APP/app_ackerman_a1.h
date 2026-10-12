#ifndef __APP_ACKERMAN_A1_H__
#define __APP_ACKERMAN_A1_H__

#include "stdint.h"

// 阿克曼车底盘间距
#define AKM_A1_WIDTH                   (173.55f)    // 毫米
#define AKM_A1_LENGTH                  (194.02f)    // 毫米

// 阿克曼小车轮子转一整圈的位移，单位为MM
#define AKM_A1_CIRCLE_MM               (215.2f)

// 舵机ID和初始化角度
#define AKM_A1_ANGLE_ID                (PWMServo_ID_S1)
#define AKM_A1_ANGLE_INIT              (90)


#define AKM_A1_ANGLE_LIMIT_MAX         (45)
#define AKM_A1_ANGLE_LIMIT_MIN         (-35)


// 阿克曼A1电机最高速度
#define AKM_A1_MOTOR_MAX_SPEED         (730)


int16_t Ackerman_A1_Get_Steer_Angle(void);
void Ackerman_A1_Steering(int16_t angle);
void Ackerman_A1_Steering_with_car(int16_t angle);
void Ackerman_A1_Ctrl(int16_t V_x, int16_t V_y, int16_t V_z, uint8_t adjust);
void Ackerman_A1_State(uint8_t state, uint16_t speed, uint8_t adjust);
uint16_t Ackerman_A1_Get_Default_Angle(void);
void Ackerman_A1_Set_Default_Angle(uint16_t angle, uint8_t forever);

void Ackerman_A1_Send_Default_Angle(void);

void Ackerman_A1_Yaw_Calc(float yaw);

#endif /* __APP_ACKERMAN_A1_H__ */
