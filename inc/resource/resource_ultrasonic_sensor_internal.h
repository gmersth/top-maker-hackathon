/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *
 * Contact: Jin Yoon <jinny.yoon@samsung.com>
 *          Geunsun Lee <gs86.lee@samsung.com>
 *          Eunyoung Lee <ey928.lee@samsung.com>
 *          Junkyu Han <junkyu.han@samsung.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __RCC_RESOURCE_ULTRASONIC_SENSOR_INTERNAL_H__
#define __RCC_RESOURCE_ULTRASONIC_SENSOR_INTERNAL_H__

/**
 * @brief Releases the gpio handle and changes the gpio pin state to the close(0).
 * @param[in] trig_pin_num The number of the gpio pin connected to the trig of the ultrasonic sensor
 * @param[in] echo_pin_num The number of the gpio pin connected to the echo of the ultrasonic sensor
 */
extern void resource_close_ultrasonic_sensor_trig(int trig_pin_num);
extern void resource_close_ultrasonic_sensor_echo(int echo_pin_num);

#endif /* __RCC_RESOURCE_ULTRASONIC_SENSOR_INTERNAL_H__ */
