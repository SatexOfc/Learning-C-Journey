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

    printf("qual o numero A?");
    scanf("%f", &a);

    printf("qual o numero B?"); 
    scanf("%f", &b);

    printf("qual o numero C?");    
    scanf("%f", &c);

    d = delta(a, b, c);

    res1 = x1(a,b,d);
    res2 = x2(a,b,d);

    printf("o primeiro resultado é %.1f", res1);

    printf("o segundo resultado é %.1f", res2);

}

   