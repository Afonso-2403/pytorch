#ifndef TH_GENERIC_FILE
#error "You must define TH_GENERIC_FILE before including THGenerateIntTypes.h"
#endif

#ifndef THGenerateManyTypes
#define THTesteLocalGenerateManyTypes
#define THGenerateManyTypes
#endif

#include <TH/THGenerateUInt64Type.h>

#ifdef THTesteLocalGenerateManyTypes
#undef THTesteLocalGenerateManyTypes
#undef THGenerateManyTypes
#undef TH_GENERIC_FILE
#endif
