/* CS261- HW1 - Program1.c
*  Name: Susan Liu
*  Date: 3/27/19
*  Solution description: The result given depends on what the x and y int in the main
*  is, the x is incremented and y is decremented. z will be replacedd with c and the
*  result will be printed on to the counsol.
*/
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

int foo(int* a, int* b, int c){
	//increment a
 //(*a)++ also works
 *a = *a + 1;
  //decrement b
  *b = *b - 1;
  //assign a-b to c
  c=*a-*b;
  //return c
  return c;
}

int main(){
  //give random results to x, y, z
  int x;
  int y;
  int z;
  x = rand()%11;
  y = rand()%11;
  z = rand()%11;
  //print values of x, y, z
  printf("Before foo()\n");
  printf("The number for x is %d\n",x);
  printf("The number for y is %d\n",y);
  printf("The number for z is %d\n",z);
  printf("\n");
  printf("\n");
  //call foo passing x, y, z and parameters;
  //print values by foo
  int result = foo(&x,&y,z);
  printf("After foo()\n");
  printf("Value from foo %d\n",result);
  printf("The number for x is %d\n",x);
  printf("The number for y is %d\n",y);
  printf("The number for z (now c) is %d\n",result);
  //is return value diffrent value than z? Why?
  return 0;
}
