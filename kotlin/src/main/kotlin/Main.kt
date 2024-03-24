package org.example

fun main() {
    val length: Double = readln().toDouble()
    val width:Double = readln().toDouble()
    println("Square = ${rectangleSquare(width, length)}")
    println("Perimeter = ${rectangleDiagonal(width, length)}")
    println("Diagonal = ${rectanglePerimeter(width, length)}")
}