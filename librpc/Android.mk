LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= xdr.c rpc.c svc.c clnt.c ops.c svc_clnt_common.c

LOCAL_C_INCLUDES:=$(LOCAL_PATH)

<<<<<<< HEAD
LOCAL_CFLAGS:= -fno-short-enums 
=======
LOCAL_CFLAGS:= -fno-short-enums -O0
>>>>>>> 7d8d81d3474a3605127222ce35cd1be78298b297

LOCAL_CFLAGS+=-DRPC_OFFSET=0
#LOCAL_CFLAGS+=-DDEBUG -DVERBOSE

LOCAL_COPY_HEADERS_TO:= librpc/rpc
LOCAL_COPY_HEADERS:= \
	rpc/clnt.h \
	rpc/pmap_clnt.h \
	rpc/rpc.h \
	rpc/rpc_router_ioctl.h \
	rpc/svc.h \
	rpc/types.h \
	rpc/xdr.h

LOCAL_MODULE:= librpc

include $(BUILD_STATIC_LIBRARY)

include $(CLEAR_VARS)
LOCAL_MODULE := librpc
<<<<<<< HEAD
LOCAL_SHARED_LIBRARIES := liblog libcutils
LOCAL_STATIC_LIBRARIES := libpower
LOCAL_WHOLE_STATIC_LIBRARIES := librpc
# LOCAL_PRELINK_MODULE := false
=======
LOCAL_SHARED_LIBRARIES := liblog
LOCAL_STATIC_LIBRARIES := libpower
LOCAL_WHOLE_STATIC_LIBRARIES := librpc
>>>>>>> 7d8d81d3474a3605127222ce35cd1be78298b297
include $(BUILD_SHARED_LIBRARY)
