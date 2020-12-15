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









