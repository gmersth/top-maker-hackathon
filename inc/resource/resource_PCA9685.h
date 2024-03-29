/*
 * Copyright (c) 2017 Samsung Electronics Co., Ltd.
 *
 * Contact: Jeonghoon Park <jh1979.park@samsung.com>
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

#ifndef __RCC_RESOURCE_PCA9685_H__
#define __RCC_RESOURCE_PCA9685_H__

#define PCA9685_CH_MAX 15

int resource_pca9685_init(unsigned int ch);
int resource_pca9685_fini(unsigned int ch);
int resource_pca9685_set_frequency(unsigned int freq_hz);
int resource_pca9685_set_value_to_channel(unsigned int channel, int on, int off);

#endif /* __RCC_RESOURCE_PCA9685_H__ */
