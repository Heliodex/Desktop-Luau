# Desktop-Luau

Experiment

```bash
g++ -std=c++17 -c bridge.cpp -o bridge.o -L. -lluaucompiler -lluauvm -I../luau/Compiler/include -I../luau/Ast/include -I../luau/Common/include && ar rcs libbridge.a bridge.o
```
