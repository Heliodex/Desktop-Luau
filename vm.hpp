#include "./luau/VM/include/lua.h"
#include "./luau/VM/include/luaconf.h"
#include "./luau/VM/include/lualib.h"

#undef LUAI_FUNC
#define LUAI_FUNC extern

#include "./luau/VM/src/lapi.h"
#include "./luau/VM/src/lbuiltins.h"
#include "./luau/VM/src/lbytecode.h"
#include "./luau/VM/src/lcommon.h"
#include "./luau/VM/src/ldebug.h"
#include "./luau/VM/src/ldo.h"
#include "./luau/VM/src/lfunc.h"
#include "./luau/VM/src/lgc.h"
#include "./luau/VM/src/lmem.h"
#include "./luau/VM/src/lnumutils.h"
#include "./luau/VM/src/lobject.h"
#include "./luau/VM/src/lstate.h"
#include "./luau/VM/src/lstring.h"
#include "./luau/VM/src/ltable.h"
#include "./luau/VM/src/lbuffer.h"
#include "./luau/VM/src/ltm.h"
#include "./luau/VM/src/lvm.h"
