%module luau

%{
#include "luau/Compiler/src/lcode.cpp"
#include "luau/VM/src/lvmload.cpp"

extern int luau_load(lua_State* L, const char* chunkname, const char* data, size_t size, int env);
extern char *luau_compile(const char *source, size_t size, lua_CompileOptions *options, size_t *outsize);

%}

#include "luau/Compiler/src/lcode.cpp"
#include "luau/VM/src/lvmload.cpp"

int luau_load(lua_State *L, const char *chunkname, const char *data, size_t size, int env);
char *luau_compile(const char *source, size_t size, lua_CompileOptions *options, size_t *outsize);
