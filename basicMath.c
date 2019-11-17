#include <stdio.h>
#include "myMath.h"

float add(float x, float y){
    return(x+y);
}

float sub(float x, float y){
    return(x-y);
}

double mul(double x, int y){
    return(x*y);
}

double div(double x, int y){
    if(y != 0){
        return(x/y);
    }
    else return -1;
}

//int main(){
//    printf("TESTER:\n");
//    printf("add: %f\n",add(5,5));
//    printf("sub: %f\n",sub(20,10));
//    printf("mul: %f\n",mul(2.5,4));
//    printf("div: %f\n",div(30,3));
//    return 1;
//}