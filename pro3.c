#include<stdio.h> //Used to include basic c library files
int sum(int a, int b);// Including method
void main()//main() method for executing the application
{
//declaring and defining the variables
int a=100;
int b=200;
//displaying the output
printf("Sum of %d and %d is=%d\n",a,b,sum(a,b));//sum(a,b) is calling method
}
//called method
int sum(int a, int b)
{
return a*b;//instead of sum here developer make a mistake by return multiplication logic
}
