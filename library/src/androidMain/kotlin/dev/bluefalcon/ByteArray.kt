package dev.bluefalcon


actual fun ByteArray.toInt(): Int {
    val numBits = this.size * 8
    return BitSet.valueOf(this).toInt(numBits)
}

@ExperimentalUnsignedTypes
actual fun ByteArray.asUnsignedToInt(): Int {
    val uByteArray = this.asUByteArray()
    var result : UInt = 0u
    for (i in uByteArray.indices){
        result = result or (this[i].toUInt() shl 8 * i)
    }
    return result.toInt()
}

actual fun ByteArray.toBitSet(): BitSet {
    return BitSet.valueOf(this)
}