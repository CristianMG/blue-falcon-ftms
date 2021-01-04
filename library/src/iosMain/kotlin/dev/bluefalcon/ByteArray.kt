package dev.bluefalcon

actual fun ByteArray.toInt(): Int {
    val numBits = this.size * 8
    return this.toBitSet().toInt(numBits)
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
    val bitSet = BitSet(this.size * 8)
    //TODO: May need to reverse order due to iOS endianness (confirm through testing)
    for (byteIndex in this.indices) {
        val byte = this[byteIndex]
        //TODO: May need to reverse order due to iOS endianness (confirm through testing)
        for (bitIndex in 7 downTo 0) {
            val bit = byte.getBitAt(bitIndex)
            bitSet.set(byteIndex*8 + bitIndex, bit)
        }
    }
    return bitSet
}

private fun Byte.getBitAt(pos: Int): Boolean {
    val num = this.toInt()
    return ((num.and(1 shl pos)) != 0);
}
//Used for debugging
private fun Byte.getBits(): BitSet {
    val bs = BitSet(8)
    //TODO: May need to reverse order due to iOS endianness (confirm through testing)
    for (i in 7 downTo 0) {
        val bit = this.getBitAt(i)
        bs.set(i,bit)
    }
    return bs
}