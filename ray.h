//
// Created by 58413 on 2023/6/11.
//

#ifndef RAY_TRACING_IN_ONE_WEEKEND_RAY_H
#define RAY_TRACING_IN_ONE_WEEKEND_RAY_H

#include "vec3.h"

class ray {
public:
    ray() {}

    ray(const point3 &origin, const vec3 &direction, double time = 0.0)
            : orig(origin), dir(direction), tm(time) {}

    [[nodiscard]] point3 origin() const { return orig; }

    [[nodiscard]] vec3 direction() const { return dir; }

    [[nodiscard]] double time() const { return tm; }

    [[nodiscard]] point3 at(double t) const {
        return orig + t * dir;
    }

public:
    point3 orig;
    vec3 dir;
    double tm;
};

#endif //RAY_TRACING_IN_ONE_WEEKEND_RAY_H
