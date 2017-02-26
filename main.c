#include <stdio.h> 
3 typedef struct{ 
4     float real; 
5     float imaginary; 
6 }complex; 
7  main(){ 
8      complex number; 
9      float a,b,c,d; 
10      printf("enter real and imaginary part of first complex number: \n"); 
11      scanf("%f%f",&a,&b); 
12       
13      printf("enter real and imaginary part of second complex number: \n"); 
14      scanf("%f%f",&c,&d); 
15       
16     number.real=a+c; 
17     number.imaginary=b+d; 
18       
19      printf("sum of the two complex numbers is:%f+i%f",number.real,number.imaginary); 
20  } 
