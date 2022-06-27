#include <stdio.h>

int addIntegers (int *arrPtr, int n){
    if(n == 0){
        return *arrPtr;
    }
    return *(arrPtr + n) + addIntegers(arrPtr, n - 1);
}

int main(void){
    //input array
    int list[] = {25, 31, 60, 91, 14, 78, 
    28, 29, 0, 57, 72, 89, 79, 20, 
    27, 19, 100, 3, 51};

    //indices of the array range from 0 to (arrLength - 1)
    int indices = sizeof(list)/sizeof(int) - 1;

    //pointer to the 0-th element of array "list"
    int *p = list;

    //compute the sum
    int result = addIntegers(p, indices);

    //print it to the console
    printf("The sum is: %d\n", result);
    return 0;
}