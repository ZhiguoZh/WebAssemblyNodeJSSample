# WebAssemblyNodeJSSample
Compile a simple C code and execute in Node.js

## Compile
To compile the source code, we should firstly set the environment for emsdk:
```bash
$ source path/to/emsdk/emsdk_env.sh
```
Thus, makefile could find the toolchain. Then, we run:
```bash
$ make
```
The resultant files are addTwo.js and addTwo.wasm.

## Execution
In node, we firstly load the js file and call the addTwo function, it's to be noted that exported functions' names begin with an underscore:

```bash
> w=require('./addTwo.js')
> w._addTwo(12,222)
234
```
