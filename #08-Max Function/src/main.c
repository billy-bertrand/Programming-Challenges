#include <stdio.h>

int max(int a){
	static int maxValue = 0;
	maxValue = (a > maxValue)? a: maxValue;
	return maxValue;
}

int main(void){

    int a = max(3); // a = 3
    int b = max(2); // b = 3
    int c = max(10); //c = 10
    int d = max(1); // d = 10

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    
    return 0;
}