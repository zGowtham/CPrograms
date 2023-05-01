#include <stdio.h>

#ifdef DEBUG_ENABLE
#define DBG(...) printf(__VA_ARGS__)
#else
#define DBG(...) 0  // Do nothing
#endif