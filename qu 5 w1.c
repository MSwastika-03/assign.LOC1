#include<stdio.h>
 int main()
{
  float radius, area, circumference, diameter;
 
  printf("Enter the radius of a circle : \n");
  scanf("%f",&radius);
 
  diameter = 2 * radius;
  circumference = 2 * 3.14 * radius;
  area = 3.14*radius*radius; 
 
  printf("Diameter Of a Circle = %f\n", diameter);
  printf("Circumference Of a Circle = %f\n", circumference);
  printf("Area Of a Circle = %f\n", area);
 
  return 0;
}