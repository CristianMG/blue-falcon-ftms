package dev.bluefalcon

actual typealias BitSet = java.util.BitSet
actual fun ByteArray.toInt(): Int {
    val numBits = this.size * 8
    return BitSet.valueOf(this).toInt(numBits)
}


actual fun BitSet.toInt(numBits: Int): Int {
    var value = 0
    var isNegative = false
    for (i in 0 until this.length()) {
        if (i == numBits - 1) isNegative = this[numBits - 1] // handle two's compliment
        else value += if (this[i]) 1 shl i else 0
    }
    if (isNegative) return value * -1
    return value
}


actual fun ByteArray.toBitSet(): BitSet {
    return BitSet.valueOf(this)
}

@Suppress("EXTENSION_SHADOWED_BY_MEMBER")
actual fun BitSet.size(): Int {
    return (this as java.util.BitSet).size()
}