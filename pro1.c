#include <stdio.h>
int sum(int num1, int num2);
int sub(int num1, int num2);
int mult(int num1, int num2);
int div(int num1, int num2);

int main() 
{  int x, y, choice, result;
  int (*fptr[4])(int, int);
  fptr[0] = sum;
  fptr[1] = sub;
  fptr[2] = mult;
  fptr[3] = div;
  printf("Enter two integer numbers: ");
  scanf("%d%d", &x, &y);
  printf("Enter 0 to sum, 1 to subtract, 2 to multiply, or 3 to divide: ");
  scanf("%d", &choice);
  result = fptr[choice](x, y);
  printf("%d", result);
return 0;
    
}

int sum(int x, int y) {
    return(x + y);
    }
int sub(int x, int y) {
    return(x - y);
    }
int mult(int x, int y) {
    return(x * y);
    }
int div(int x, int y) {
    return (x / y); 
    
}
