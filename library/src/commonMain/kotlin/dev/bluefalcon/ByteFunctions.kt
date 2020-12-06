package dev.bluefalcon

typealias Predicate<T> = (T) -> Boolean
typealias Procedure<T> = (T) -> Unit

inline infix fun <T> Predicate<T>.and(crossinline other: Predicate<T>): Predicate<T> {
    return { this(it) && other(it) }
}


inline infix fun <T> Predicate<T>.or(crossinline other: Predicate<T>): Predicate<T> {
    return { this(it) || other(it) }
}


inline infix fun <T> Predicate<T>.not(crossinline other: Predicate<T>): Predicate<T> {
    return negate(other)
}


inline fun <T> negate(crossinline toNegate: Predicate<T>): Predicate<T> {
    return { !toNegate(it) }
}


fun ByteArray.toInt(): Int {
    val numBits = this.size * 8
    return BitSet.valueOf(this).toInt(numBits)

}

@ExperimentalUnsignedTypes
fun UByteArray.toInt(): Int {
    var result : UInt = 0u
    for (i in this.indices){
        result = result or (this[i].toUInt() shl 8 * i)
    }
    return result.toInt()
}


fun BitSet.toInt(numBits : Int ): Int {
    var value = 0
    var isNegative = false
    for (i in 0 until this.length()) {
        if (i == numBits - 1) isNegative = this[numBits - 1] // handle two's compliment
        else value += if (this[i]) 1 shl i else 0
    }
    if (isNegative) return value * -1
    return value
}