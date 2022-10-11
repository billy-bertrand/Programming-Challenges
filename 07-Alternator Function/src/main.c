#include <stdio.h>

int alternator(){
	static int counter = 0;
	
	if (counter == 0){
		counter ++;
		return counter;
	}else{
		counter --;
		return counter;
	}
}

int main(void){

    int a = alternator(); // 1
    int b = alternator(); // 0
    int c = alternator(); // 1
    int d = alternator(); // 0

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", d);

    return 0;
}
