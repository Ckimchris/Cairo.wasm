"use strict"

const {Main, Util} = require("./app.min.js")
const wasmModule = require("./appWASM.js")

global.onWASMLoaded = () => {
    const main = new Main(wasmModule)
}