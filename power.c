#include <stdio.h>
#include "myMath.h"
#define E 2.7182;

double Exp(int x){
    double answer = 1;
    if(x != 0){
        for(int i=0; i<x; i++){
            answer *= E;
        }
        return answer;
    }
    else return 1;
}

double Pow(double x, int y){
    double answer = 1;
    if(x*y != 0){
        for(int i=0; i<y ; i++){
            answer *= x;
        }
        return answer;
    }
    else return 0;
}

//int main(){
//    printf("TEST: \n");
//    printf("Exp: %f\n",Exp(2));
//    printf("Pow: %f \n",Pow(4,2));
//    return 1;
//}