/*
 * Copyright 2010 Rockchip Electronics S.LSI Co. LTD
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

#ifndef __MPP_ALLOCATOR_H__
#define __MPP_ALLOCATOR_H__

#include "rk_type.h"
#include "mpp_buffer.h"

typedef void *MppAllocator;

typedef struct {
    RK_U32  size;
    RK_U32  version;

    MPP_RET (*alloc)(MppAllocator allocator, MppBufferData **data, size_t size);
    MPP_RET (*free)(MppAllocator allocator, MppBufferData *data);
} MppAllocatorApi;

#ifdef __cplusplus
extern "C" {
#endif

MPP_RET mpp_alloctor_get(MppAllocator *allocator, MppAllocatorApi **api);
MPP_RET mpp_alloctor_put(MppAllocator *allocator);

#ifdef __cplusplus
}
#endif

#endif /*__MPP_ALLOCATOR_H__*/
