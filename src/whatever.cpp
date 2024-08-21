#include <math.h>

#include "whatever.hpp"

/*********************************************************************
 * @file  whatever.cpp
 * 
 * @brief Example brief for whatever.cpp
 *********************************************************************/

double euclidean_distance(Point a, Point b) {
    double x_difference = a.x - b.x;
    double y_difference = a.y - b.y;

    double x_squared = x_difference * x_difference;
    double y_squared = y_difference * y_difference;

    double distance_squared = x_squared + y_squared;
    double distance = sqrt(distance_squared);

    return distance;
}
