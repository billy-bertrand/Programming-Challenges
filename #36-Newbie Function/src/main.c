#include <stdio.h>

int newbie(){
	static int counter = 0;
    counter ++;
	return (counter == 1)? 1: 0;
}

int main(void){
    
    int a = newbie(); // a = 1
    int b = newbie(); // b = 0
    int c = newbie(); // c = 0
    int d = newbie(); // d = 0

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);

    return 0;
}