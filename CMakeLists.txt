cmake_minimum_required(VERSION 3.20)
project(ray_tracing_in_one_weekend)

set(CMAKE_CXX_STANDARD 17)

add_executable(ray_tracing_in_one_weekend main.cpp vec3.h color.h ray.h hittable.h sphere.h hittable_list.h
        rtweekend.h camera.h material.h moving_sphere.h aabb.h bvh.h texture.h)

