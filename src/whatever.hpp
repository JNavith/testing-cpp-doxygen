/*********************************************************************
 * @file  whatever.hpp
 * 
 * @brief Example brief for whatever.hpp
 *********************************************************************/


/** A point in the Cartesian plane */
struct Point {
    /** The x coordinate of this point */
    double x;
    /** The y coordinate of this point */
    double y;
};

/**
 * @brief Calculate the Euclidean distance between two `Point`s
 * @param a One of the points
 * @param b The other point
 * @return The Euclidean distance between point `a` and point `b`
 */
double euclidean_distance(Point a, Point b);
