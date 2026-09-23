#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c){

    return b * b - 4 * a * c;

}

float x1(float a, float b, float d){
    
   return (-b + sqrt(d)) / (2*a);

}

float x2(float a, float b, float d){

   return (-b - sqrt(d)) / (2*a);

}

int main(){
    float a, b, c, d;
    float res1, res2;

    printf("qual o numero A?\n");
    scanf("%f", &a);

    printf("qual o numero B?\n"); 
    scanf("%f", &b);

    printf("qual o numero C?\n");    
    scanf("%f", &c);

    d = delta(a, b, c);
    res1 = x1(a,b,d);
    res2 = x2(a,b,d);

    if(d > 0){
        
        printf("a equação possui duas raízes reais\n");
        printf("as raízes são:%.1f e %.1f\n", res1, res2);

    } else if(d == 0){
        
        printf("a equação possui uma raiz real\n");
        printf("a raiz é:%.1f\n", res1);

    } else {
        
        printf("a equação não possui raízes reais\n");

    }

}