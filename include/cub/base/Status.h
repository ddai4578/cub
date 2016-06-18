#ifndef H5712E60C_DEF5_4A3B_93C0_C074CD80C63B
#define H5712E60C_DEF5_4A3B_93C0_C074CD80C63B

#include <cub/cub.h>
#include <cub/base/BaseTypes.h>

CUB_NS_BEGIN

typedef U32 Status;

const U16 INVALID_U16 = 0xFFFF;
const U32 INVALID_U32 = 0xFFFFFFFF;

const Status CUB_SUCCESS = 0;
const Status CUB_FAILURE = INVALID_U32;

#define __CUB_FAILED(result)   (result != CUB_SUCCESS)
#define __CUB_SUCCESS(result)  (result == CUB_SUCCESS)

CUB_NS_END

#endif
