// clang -target wasm32 -O3 --no-standard-libraries -Wl,--no-entry -Wl,--export-all test.c -o test.wasm

long add(long a, long b)
{
    return a + b;
}
