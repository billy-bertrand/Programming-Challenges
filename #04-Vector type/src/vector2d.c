#include "vector2d.h"

Vector2d add (const Vector2d *vector_1, const Vector2d *vector_2){
    Vector2d res_vector = {
        vector_1->x + vector_2->x,
        vector_1->y + vector_2->y
    };

    return res_vector;
}

Vector2d subtract (const Vector2d *vector_1, const Vector2d *vector_2){
    Vector2d res_vector = {
        vector_1->x - vector_2->x,
        vector_1->y - vector_2->y
    };

    return res_vector;
}

Vector2d multiply (const Vector2d *vector_1, const int k){
    Vector2d res_vector = {
        (vector_1->x)*k,
        (vector_1->y)*k
    };

    return res_vector;
}

Vector2d divide (const Vector2d *vector_1, const int k){
    Vector2d res_vector = {
        (vector_1->x)/k,
        (vector_1->y)/k
    };

    return res_vector;
}