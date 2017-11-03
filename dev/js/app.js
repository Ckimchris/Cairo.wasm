"use strict"

class Main {

    constructor (module) {

        if (module==undefined) {
            throw new Error("No WASM module provided")
        }
        this.module = module
    }
}

typeof window=="undefined" && (exports.Main = Main)