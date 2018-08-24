# WebAssemblyNodeJSSample
Compile a simple C code and execute in Node.js

## Preliminary
On my machine, I have emcc and Node.js installed as a preparation of this project. I list the version information for your reference:
* Node.js v8.9.1
* emcc 1.38.11 

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
