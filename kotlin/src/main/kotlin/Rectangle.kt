package org.example

import kotlin.math.sqrt

fun rectangleSquare(width : Double , length : Double)  = width*length
fun rectanglePerimeter(width : Double , length : Double) = (width+length)*2
fun rectangleDiagonal(width : Double , length : Double) = sqrt(length*length+width*width)