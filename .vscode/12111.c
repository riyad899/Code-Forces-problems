#include<stdio.h>
#include<math.h>

int main(){
    float num;
    float num2;
    scanf("%f",&num);
    scanf("%f",&num2);
    float sol = fmod(num, num2);
    printf("%f", sol);
    return 0; 
}