#include "Math2.h"
#include <cmath>
#include <limits>

double Math2::Square(double x)
{
    return x * x;
}

double Math2::FloorMod(double x, double y)
{
    return x - y * floor(x / y);
}

double Math2::HaverSin(double x)
{
    return (1 - cos(x)) / 2;
}

double Math2::AngularDistance(double a1, double a2)
{
    return acos(cos(a1) * cos(a2) + sin(a1) * sin(a2));
}

double Math2::Lerp(double y0, double y1, double x)
{
    return y0 + x * (y1 - y0);
}

double Math2::Bilerp(double z00, double z10, double z01, double z11, double x, double y)
{
    return Lerp(Lerp(z00, z10, x), Lerp(z01, z11, x), y);
}

double Math2::FirstIntervalContainingRoot(std::function<double(double)> f, double minX, double maxX, double dX)
{
    for (double x = minX; x < maxX; x += dX)
    {
        if (f(x) * f(x + dX) <= 0)
        {
            return x;
        }
    }
    return std::numeric_limits<double>::infinity();
}

bool Math2::IsSameSign(double x1, double x2)
{
    return (x1 >= 0 && x2 >= 0) || (x1 < 0 && x2 < 0);
}

double Math2::ImproveRoot(std::function<double(double)> f, double x1, double x2, double epsilon)
{
    if (!IsSameSign(f(x1), f(x2)))
    {
        throw std::invalid_argument("f(x1) and f(x2) must have the same sign");
    }

    while (fabs(x2 - x1) > epsilon)
    {
        double xMid = (x1 + x2) / 2;
        if (IsSameSign(f(x1), f(xMid)))
        {
            x1 = xMid;
        }
        else
        {
            x2 = xMid;
        }
    }
    return x1;
}