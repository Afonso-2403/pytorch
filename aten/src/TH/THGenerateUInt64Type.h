#ifndef TH_GENERIC_FILE
#error "You must define TH_GENERIC_FILE before including THGenerateIntType.h"
#endif

#define scalar_t uint64_t
#define accreal uint64_t
#define Real Teste
#define TH_REAL_IS_TESTE
#line 1 TH_GENERIC_FILE
#include TH_GENERIC_FILE
#undef scalar_t
#undef accreal
#undef Real
#undef TH_REAL_IS_INT

#ifndef THGenerateManyTypes
#undef TH_GENERIC_FILE
#endif
