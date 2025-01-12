#pragma once

#include <functional>

struct Math2
{
    static double constexpr PI = 3.14159265358979323846;
    static constexpr double PI2 = PI * 2;

    /**
     * A method that calculate the square of x
     *
     * @param x the real number to be squared
     * @return the square of x
     */
    static double Square(double x);

    /**
     * A method that calculate the floor mod of a division
     *
     * @param x numerator of the division
     * @param y denominator of the division
     * @return the floor of the division
     */
    static double FloorMod(double x, double y);

    /**
     * A method that calculate the haversin of the point x
     *
     * @param x the argument used for the haversin function
     * @return the haversin function applied at the point x
     */
    static double HaverSin(double x);

    /**
     * A method that calculate the angular distance between two angles in radians
     *
     * @param a1 angle 1 in radians
     * @param a2 angle 2 in radians
     * @return the angular distance between a1 and a2 in radians
     */
    static double AngularDistance(double a1, double a2);

    /**
     * A method that calculate f(x) by linear interpolation
     *
     * @param y0 the value of f(0)
     * @param y1 the value of f(1)
     * @param x  variable
     * @return f(x)
     */
    static double Lerp(double y0, double y1, double x);

    /**
     * A method that calculate the value of f(x, y) by bilinear interpolation
     *
     * @param z00 the value of f(0, 0)
     * @param z10 the value of f(1, 0)
     * @param z01 the value of f(0, 1)
     * @param z11 the value of f(1, 1)
     * @param x   variable
     * @param y   variable
     * @return f(x, y)
     */
    static double Bilerp(double z00, double z10, double z01, double z11, double x, double y);

    /**
     *
     * @param f    the function to be used in this operation
     * @param minX the lower bound
     * @param maxX the upper bound
     * @param dX   the distance used in each step of calculation
     * @return the lower bound once the distance between the two bounds is reduced
     *         to less than dx, and Positive infinity if there no root is found
     */
    static double FirstIntervalContainingRoot(std::function<double(double)>  f, double minX, double maxX, double dX);

    /**
     * Checks if two double have the same sign
     *
     * @param x1 variable 1
     * @param x2 variable 2
     * @return true if x1 and x2 have the same sign, false otherwise
     */

    static bool IsSameSign(double x1, double x2);

    /**
     *
     * @param f       the function to be used in this operation
     * @param x1      One of the two bounds
     * @param x2      One of the two bounds
     * @param epsilon maximal distance desired between the two bounds
     * @return the lower bound once the distance between the two bounds is reduced
     *         to less than epsilon
     * @throws IllegalArgumentException if f(x1) and f(x2) don't have the same sign
     */
    static double ImproveRoot(std::function<double(double)> f, double x1, double x2, double epsilon);
};
