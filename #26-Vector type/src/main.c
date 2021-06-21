#include <stdio.h>
#include "vector2d.h"

int main(void)
{
    Vector2d Vector1 = {16,20};
    Vector2d Vector2 = {3,6};


    Vector2d add_Vector = add (&Vector1, &Vector2);
    Vector2d sub_Vector = subtract (&Vector1, &Vector2);
    Vector2d mul_vector = multiply (&Vector2, 5);
    Vector2d div_vector = divide (&Vector1, 2);

    printf("Add_vector has coordinate x: %f y: %f\n", add_Vector.x, add_Vector.y);
    printf("sub_Vector has coordinate x: %f y: %f\n", sub_Vector.x, sub_Vector.y);
    printf("mul_vector has coordinate x: %f y: %f\n", mul_vector.x, mul_vector.y);
    printf("div_vector has coordinate x: %f y: %f\n", div_vector.x, div_vector.y);
    
    return 0;
}
