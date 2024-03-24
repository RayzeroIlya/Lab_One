package org.example

fun main() {
    val length: Double = readln().toDouble()
    val width:Double = readln().toDouble()
    println(rectangleSquare(width, length))
    println(rectangleDiagonal(width, length))
    println(rectanglePerimeter(width, length))
}