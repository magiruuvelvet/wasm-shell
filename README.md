# wasm-shell

tiny WebAssembly module loader and REPL for Node.js

tired of using web browsers and html files to test and debug headless code?
wasm-shell to the rescue

```plaintext
Usage: wasm-shell /path/to/module.wasm
```

**Example:**

```plaintext
$ ./wasm-shell test/test.wasm
WASM Exports: [Object: null prototype] {
  memory: Memory [WebAssembly.Memory] {},
  __wasm_call_ctors: [Function: 0],
  add: [Function: 1],
  __dso_handle: Global [WebAssembly.Global] {},
  __data_end: Global [WebAssembly.Global] {},
  __global_base: Global [WebAssembly.Global] {},
  __heap_base: Global [WebAssembly.Global] {},
  __memory_base: Global [WebAssembly.Global] {},
  __table_base: Global [WebAssembly.Global] {}
}
WASM module loaded, use the variable 'wasm' to access its exports.
> wasm.add(2,5)
7
>
```
