package dev.bluefalcon


actual fun ByteArray.toInt(): Int {
    val numBits = this.size * 8
    return BitSet.valueOf(this).toInt(numBits)
}

actual fun ByteArray.toBitSet(): BitSet {
    return BitSet.valueOf(this)
}

