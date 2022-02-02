// Write a program to receive values of latitude(L1, L2) and longitude (G1, G2) in degrees, of two places on the earth and output the distance (D) between them in miles. The formula for distance in miles is:
// D = 3963 cos-1 (sin L1 sinL2+cos L1 cosL2*cos(G2-G1))

#include <stdio.h>
#include <math.h>

int main()
{
    double L1, L2, G1, G2;
    printf("Enter L1, L2, G1, G2:\n");
    scanf("%lf%lf%lf%lf", &L1, &L2, &G1, &G2);
    double distance = 3963 * acos((sin(L1) * sin(L2)) + (cos(L1) * cos(L2) * cos(G2 - G1)));
    printf("Distance between the two points is %lf miles\n", distance);
}