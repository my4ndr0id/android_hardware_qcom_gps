ifneq ($(BUILD_TINY_ANDROID),true)
#Compile this library only for builds with the latest modem image
ifeq ($(BOARD_VENDOR_QCOM_GPS_LOC_API_AMSS_VERSION),50001)
AMSS_VERSION:=6356

BIT_ENABLED_PRODUCT_LIST := msm7630_fusion
BIT_ENABLED_PRODUCT_LIST += msm8660_surf
ifneq (, $(filter $(BIT_ENABLED_PRODUCT_LIST), $(QCOM_TARGET_PRODUCT)))
FEATURE_GNSS_BIT_API := true
endif # QCOM_TARGET_PRODUCT

LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE := libloc_eng_v01.$(BOARD_VENDOR_QCOM_GPS_LOC_API_HARDWARE)

## Libs

LOCAL_SHARED_LIBRARIES := \
    librpc \
    libutils \
    libcutils \
    libgps.utils \
    libdl

LOCAL_SRC_FILES += \
    loc_eng.cpp \
    loc_eng_ioctl.cpp \
    loc_eng_xtra.cpp \
    loc_eng_ni.cpp \
    loc_eng_cfg.cpp \
    loc_eng_msg.cpp \
    gps.c

ifeq ($(FEATURE_GNSS_BIT_API), true)
LOCAL_CFLAGS += -DFEATURE_GNSS_BIT_API
endif # FEATURE_GNSS_BIT_API

LOCAL_SRC_FILES += \
    loc_eng_dmn_conn.cpp \
    loc_eng_dmn_conn_handler.cpp \
    loc_eng_dmn_conn_thread_helper.c \
    loc_eng_dmn_conn_glue_msg.c \
    loc_eng_dmn_conn_glue_pipe.c

## Check if GPS is unsupported
ifeq ($(BOARD_VENDOR_QCOM_GPS_LOC_API_AMSS_VERSION),50001)
    LOCAL_SHARED_LIBRARIES += libloc_api-rpc-qc
else
    LOCAL_STATIC_LIBRARIES:= libloc_api-rpc
endif

LOCAL_CFLAGS += \
     -fno-short-enums \
     -D_ANDROID_ \
     -DUSE_QCOM_AUTO_RPC \
     -DAMSS_VERSION=$(BOARD_VENDOR_QCOM_GPS_LOC_API_AMSS_VERSION)

## Includes
LOCAL_C_INCLUDES:= \
  $(TARGET_OUT_HEADERS)/libcommondefs-rpc/inc \
  $(TARGET_OUT_HEADERS)/librpc \
  $(TARGET_OUT_HEADERS)/gps.utils

ifeq ($(BOARD_VENDOR_QCOM_GPS_LOC_API_AMSS_VERSION),50001)
LOCAL_C_INCLUDES += \
        $(TARGET_OUT_HEADERS)/libloc_api-rpc-qc \
        $(TARGET_OUT_HEADERS)/libloc_api-rpc-qc/rpc_inc \
        $(TARGET_OUT_HEADERS)/loc_api/rpcgen/inc \
        $(TARGET_OUT_HEADERS)/libcommondefs/rpcgen/inc \
        hardware/qcom/gps/loc_api/ulp/inc \
        hardware/msm7k/librpc
else
LOCAL_C_INCLUDES += \
        $(TARGET_OUT_HEADERS)/libloc_api-rpc \
        $(TARGET_OUT_HEADERS)/libloc_api-rpc/inc
endif

LOCAL_PRELINK_MODULE := false
LOCAL_MODULE_PATH := $(TARGET_OUT_SHARED_LIBRARIES)/hw
include $(BUILD_SHARED_LIBRARY)
include $(LOCAL_PATH)/../symlink.in
endif # BOARD_VENDOR_QCOM_GPS_LOC_API_AMSS_VERSION = 50001
endif # not BUILD_TINY_ANDROID
