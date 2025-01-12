#pragma once

struct Distance
{
    static constexpr double EARTH_RADIUS = 6371000;
    static double ToRadians(double distanceInMeters);
    static double ToMeters(double distanceInRadians);
};
