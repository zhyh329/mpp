/*
*
* Copyright 2015 Rockchip Electronics Co. LTD
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/
#define MODULE_TAG "hal_h264d"

#include "h264d_log.h"
#include "hal_h264d_api.h"


MPP_RET hal_h264d_init(void *hal, MppHalCfg *cfg)
{
    printf("begin=%s \n", logenv_name.begframe);


    (void)hal;
    (void)cfg;

    return MPP_OK;
}

MPP_RET hal_h264d_deinit(void *hal)
{
    (void)hal;
    return MPP_OK;
}

MPP_RET hal_h264d_gen_regs(void *hal, HalTask *task)
{
    (void)hal;

    ((HalDecTask*)&task->dec)->valid = 0;


    return MPP_OK;
}
MPP_RET hal_h264d_start(void *hal, HalTask *task)
{
    (void)hal;
    (void)task;
    return MPP_OK;
}

MPP_RET hal_h264d_wait(void *hal, HalTask *task)
{
    (void)hal;
    (void)task;
    return MPP_OK;
}

MPP_RET hal_h264d_reset(void *hal)
{
    (void)hal;
    return MPP_OK;
}

MPP_RET hal_h264d_flush(void *hal)
{
    (void)hal;
    return MPP_OK;
}

MPP_RET hal_h264d_control(void *hal, RK_S32 cmd_type, void *param)
{
    (void)hal;
    (void)cmd_type;
    (void)param;
    return MPP_OK;
}

const MppHalApi hal_api_h264d = {
    "h264d_rkdec",
    MPP_CTX_DEC,
    MPP_VIDEO_CodingAVC,
    0,
    0,
    hal_h264d_init,
    hal_h264d_deinit,
    hal_h264d_gen_regs,
    hal_h264d_start,
    hal_h264d_wait,
    hal_h264d_reset,
    hal_h264d_flush,
    hal_h264d_control,
};
