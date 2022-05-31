#include <stdio.h>
int main()
{
  int var = 5;
  printf("var: %d\n", var);
  printf("address of var: %p", &var);  
  return 0;
}
Output:
var: 5
address of var: 0x7ffec7e18344