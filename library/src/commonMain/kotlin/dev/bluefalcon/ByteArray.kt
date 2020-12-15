package dev.bluefalcon

//@ExperimentalUnsignedTypes
//fun UByteArray.toInt(): Int {
//    var result : UInt = 0u
//    for (i in this.indices){
//        result = result or (this[i].toUInt() shl 8 * i)
//    }
//    return result.toInt()
//}
expect fun ByteArray.toInt(): Int
expect fun ByteArray.toBitSet(): BitSet
