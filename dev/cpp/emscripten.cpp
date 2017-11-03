#include <stdio.h>
#include <emscripten.h>
#include "main.cpp"

int main(int argc, char const *argv[]) {
    printf("[WASM] Loaded\n");

    EM_ASM(
        if (typeof window!="undefined") {
            window.dispatchEvent(new CustomEvent("wasmLoaded"))
        } else {
            global.onWASMLoaded && global.onWASMLoaded()
        }
    );

    return 0;
}

extern "C" {

    EMSCRIPTEN_KEEPALIVE
    int addTwo (int a, int b) {
        return Util::addTwo(a, b);
    }
}