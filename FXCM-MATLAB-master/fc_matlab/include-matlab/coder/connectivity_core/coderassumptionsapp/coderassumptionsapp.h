/* Copyright 2015 The MathWorks, Inc. */

#ifndef CODERASSUMPTIONSAPP_H
#define CODERASSUMPTIONSAPP_H

#include "coderassumptionsapp_spec.h"

#if defined (MATLAB_MEX_FILE) || defined(BUILDING_LIBMWCODERASSUMPTIONSAPP)

#include "tmwtypes.h"
#else

#include "rtwtypes.h"
#endif

#define CODERASSUMPTIONS_SERVICE_ID 3

static const boolean_T CODERASSUMPTIONS_ERROR = 0;
static const boolean_T CODERASSUMPTIONS_SUCCESS = 1;

typedef enum {
   CA_HW_IMPL_SIZES_1=0,
   CA_HW_IMPL_SIZES_2,
   CA_HW_IMPL_SIZES_3,
   CA_PWS
} CODERASSUMPTIONS_COMMAND;

typedef enum {
   CA_HW_IMPL_BIT_CHAR = 0,
   CA_HW_IMPL_BIT_SHORT,
   CA_HW_IMPL_BIT_INT,
   CA_HW_IMPL_BIT_LONG,
   CA_HW_IMPL_BIT_LONGLONG,
   CA_HW_IMPL_BIT_FLOAT,
   CA_HW_IMPL_BIT_DOUBLE,
   CA_HW_IMPL_BIT_POINTER,
   CA_HW_IMPL_SUPPORT_LONGLONG,
   CA_HW_IMPL_SHIFT_RIGHT,
   CA_HW_IMPL_INT_DIV_ROUND,
   CA_HW_IMPL_BYTE_ORDER
} CA_HW_IMPL_RESULT;

typedef enum {
   CA_PWS_ENABLED = 0,
   CA_PWS_CONFIG_SETTING
} CA_PWS_RESULT;

typedef enum {
   CA_LITTLE_ENDIAN = 0,
   CA_BIG_ENDIAN,
   CA_UNSPECIFIED,
   CA_UNABLE_TO_DETERMINE_ON_TARGET
} CA_EndianessValue;

typedef enum {
   CA_FLOOR = 0,
   CA_ZERO,
   CA_UNDEFINED
} CA_IntDivRoundToValue;

typedef enum {
   CA_NOT_RUN = 0,
   CA_FAIL,
   CA_PASS,
   CA_WARN
} CA_TestResultStatus;

typedef enum {
   CA_NO_MSG = 0,
   CA_WARN_INT_DIV_UNDEFINED,
   CA_WARN_BYTE_ORDER_UNSPECIFIED,
   CA_ERROR_PWS_CONFIG_SETTING
} CA_TestResultMsgId;

#endif

