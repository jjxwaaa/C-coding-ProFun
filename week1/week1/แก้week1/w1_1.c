#include<stdio.h>
int main(){
    int a, b, c, max, d;
    printf("Input : "); 
    scanf("%d %d %d %d", &a ,&b ,&c ,&d);
    max=a;
    if( max < b ){
        max = b;
    }
    if( max < c ){
        max = c;
    }
    if(max < d ){
        max = d;
    }
    printf("The maximum is %d\n",max);
    return 0;
}