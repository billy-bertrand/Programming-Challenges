#ifndef VECTOR2D_H_
#define VECTOR2D_H_

typedef struct Vector2d{
    float x;
    float y;
}Vector2d;

Vector2d add (const Vector2d *vector_1, const Vector2d *vector_2);

Vector2d subtract (const Vector2d *vector_1, const Vector2d *vector_2);

Vector2d multiply (const Vector2d *vector_1, const int k);

Vector2d divide (const Vector2d *vector_1, const int k);
#endif