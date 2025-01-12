#include "Distance.h"

/**
 * This method converts a distance in meters at the earth surface to the
 * corresponding angle in radians.
 *
 * @param distanceInMeters distance to be converted in radians
 * @return the distance converted in radians
 */
double Distance::ToRadians(double distanceInMeters)
{

    return distanceInMeters / EARTH_RADIUS;
}

/**
 * This method converts an angle in radians to a distance in meters at the earth
 * surface
 *
 * @param distanceInRadians radians to be converted to meters
 * @return the distance in radians converted in meters
 */
double Distance::ToMeters(double distanceInRadians)
{

    return distanceInRadians * EARTH_RADIUS;
}
