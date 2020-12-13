package dev.bluefalcon

actual typealias BitSet = kotlin.native.BitSet
actual fun BitSet.size(): Int{
    return this.size
}
actual fun BitSet.toInt(numBits: Int): Int {
    var value = 0
    var isNegative = false
    for (i in 0 until this.size) {
        if (i == numBits - 1) isNegative = this[numBits - 1] // handle two's compliment
        else value += if (this[i]) 1 shl i else 0
    }
    if (isNegative) return value * -1
    return value
}

actual fun ByteArray.toInt(): Int {
    val numBits = this.size * 8
    return this.toBitSet().toInt(numBits)
}

actual fun ByteArray.toBitSet(): BitSet {
    val bitset = BitSet(this.size * 8)
    //TODO: May need to reverse order due to iOS endianness (confirm through testing)
    for (byteIndex in this.indices) {
        val byte = this[byteIndex]
        //TODO: May need to reverse order due to iOS endianness (confirm through testing)
        for (bitIndex in 7 downTo 0) {
            val bit = byte.getBitAt(bitIndex)
            bitset.set(byteIndex*8 + bitIndex, bit)
        }
    }
    return bitset
}

fun Byte.getBitAt(pos: Int): Boolean {
    val num = this.toInt()
    return ((num.and(1 shl pos)) != 0);
}

fun Byte.getBits(): BitSet {
    val bs = BitSet(8)
    //TODO: May need to reverse order due to iOS endianness (confirm through testing)
    for (i in 7 downTo 0) {
        val bit = this.getBitAt(i)
        bs.set(i,bit)
    }
    return bs
}


