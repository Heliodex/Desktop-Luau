#include <iostream>
#include <string.h>

#include "ast.hpp"
#include "compiler.hpp"
#include "vm.hpp"

// I don't know C++ bruh

size_t heapSize = 0;
size_t kHeapLimit = 512 * 1024 * 1024;

void *allocate(void *ud, void *ptr, size_t osize, size_t nsize)
{
	if (nsize == 0)
	{
		heapSize -= osize;
		free(ptr);
		return NULL;
	}
	else
	{
		if (heapSize - osize + nsize > kHeapLimit)
			return NULL;

		heapSize -= osize;
		heapSize += nsize;

		return realloc(ptr, nsize);
	}
}

int main()
{ 
	std::cout << "Hello, World!" << std::endl;

	const char *source = "print('Hello from Luau!')";
	const char *chunkname = "mychunk";


	lua_State *L = lua_newstate(allocate, NULL);
	


}