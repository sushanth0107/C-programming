#include <stdio.h>

int main() {
	int res;
    int num =5;
    num=num|(1<<1);
    res=num&(1<<1);
    printf("%d",res);
}

