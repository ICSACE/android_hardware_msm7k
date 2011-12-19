/*
** Copyright 2008, The Android Open-Source Project
**
** Licensed under the Apache License, Version 2.0 (the "License"); 
** you may not use this file except in compliance with the License. 
** You may obtain a copy of the License at 
**
**     http://www.apache.org/licenses/LICENSE-2.0 
**
** Unless required by applicable law or agreed to in writing, software 
** distributed under the License is distributed on an "AS IS" BASIS, 
** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
** See the License for the specific language governing permissions and 
** limitations under the License.
*/

#ifndef DEBUG_H
#define DEBUG_H

#include <stdio.h>

#define LOG_TAG "RPC"
#include <utils/Log.h>

#ifdef RPC_LOG_TO_STDOUT_ONLY
#define PRINT(x...) do {                                    \
        fprintf(stdout, "%s(%d) ", __FUNCTION__, __LINE__); \
        fprintf(stdout, ##x);                               \
    } while(0)
#elif defined(RPC_LOG_TO_STDOUT_AND_LOG)
#define PRINT(x...) do {                                    \
        fprintf(stdout, "%s(%d) ", __FUNCTION__, __LINE__); \
        fprintf(stdout, ##x);                               \
        LOGI(x);                               \
    } while(0)
#else
#define PRINT(x...) LOGI(x)
#endif

#ifdef DEBUG
<<<<<<< HEAD
#define D(x...) PRINT(x...)
=======
#define D PRINT
>>>>>>> 7d8d81d3474a3605127222ce35cd1be78298b297
#else
#define D(x...) do { } while(0)
#endif

#ifdef VERBOSE
<<<<<<< HEAD
#define V(x...) PRINT(x...)
=======
#define V PRINT
>>>>>>> 7d8d81d3474a3605127222ce35cd1be78298b297
#else
#define V(x...) do { } while(0)
#endif

<<<<<<< HEAD
#define LIBRPC_DEBUG(x...) do { \
        SLOGD(x);               \
    } while(0)

=======
>>>>>>> 7d8d81d3474a3605127222ce35cd1be78298b297
#define E(x...) do {                                        \
        fprintf(stderr, "%s(%d) ", __FUNCTION__, __LINE__); \
        fprintf(stderr, ##x);                               \
        LOGE(x);                                            \
    } while(0)

#define FAILIF(cond, msg...) do {                                              \
        if (__builtin_expect (cond, 0)) {                                      \
            fprintf(stderr, "%s:%s:(%d): ", __FILE__, __FUNCTION__, __LINE__); \
            fprintf(stderr, ##msg);                                            \
<<<<<<< HEAD
        	LOGE(msg);                                            \
=======
            LOGE(msg);                                                         \
>>>>>>> 7d8d81d3474a3605127222ce35cd1be78298b297
        }                                                                      \
    } while(0)

#endif/*DEBUG_H*/
