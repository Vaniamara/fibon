#include <stdio.h>
#include<stdlib.h>
 int fibo (int N){

    if(N==0){
        return 1;
    }
    else if(N==1){
        return 1;
    }else{
        return fibo(N-1)+fibo(N-2);
 }
 }

int main ( ) {

int x;

    scanf("%d",&x);
    printf("%d",fibo(x));

return 0;
}
