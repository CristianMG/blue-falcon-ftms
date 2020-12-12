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




@ExperimentalUnsignedTypes
fun UByteArray.toInt(): Int {
    var result : UInt = 0u
    for (i in this.indices){
        result = result or (this[i].toUInt() shl 8 * i)
    }
    return result.toInt()
}

expect class BitSet(size: Int) {
    operator fun get(index: Int): Boolean
    fun set(index: Int, value: Boolean)
    fun clear(index: Int)
    fun or(another: BitSet)

}
expect fun BitSet.size(): Int
expect fun BitSet.toInt(numBits: Int): Int

expect fun ByteArray.toInt(): Int
expect fun ByteArray.toBitSet(): BitSet
