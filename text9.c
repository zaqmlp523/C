#include<stdio.h>
main(){

    int n;

    printf("변수값을 입력하시오:");
    scanf("%d",&n);

    if(n >= 100)
    printf("large");
    else if(n < 100)
    printf("small");
}