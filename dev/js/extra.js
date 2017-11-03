"use strict"

class Util {

    static addTwo (a, b) {
        return a + b
    }
}

typeof window=="undefined" && (exports.Util = Util)