//
// Created by win10 on 26-07-2022.
//

/* WAP to find the area of the circle. Take radius of circle from user as input and print the
result in below given format. */

#include <stdio.h>

int main(){
    float pi = 3.14;
    float radius;
    printf("Enter radius of circle : ");
    scanf("%f", &radius);
    printf("Radius of circle : %f", pi*radius*radius);
    return 0;

}
