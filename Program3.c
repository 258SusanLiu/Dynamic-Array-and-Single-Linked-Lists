/* CS261- HW1 - Program3.c
*  Name: Susan Liu
*  Date: 4/11/19
*  Solution description: Program creates array of numbers, then the program will
*  store the numbers in arrays and sort the numbers from smallest to biggest.
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sort(int* number, int n){
  /*Sort the array of integeres of length n*/
  for (int i = 0; i < (n - 1); i++){
		for (int j = 0; j < (n - i - 1); j++) {
			if (number[j] > number[j + 1]) {
				int temp = number[j];
				number[j] = number[j + 1];
				number[j + 1] = temp;
			}
		}
  }
}

int main(){
  /*Declare an integer n and assign it a value of 20.*/
  int n;
  /*Declare an integer n and assign it a value.*/
  printf("Please input number of students\n");
  scanf("%d", &n);
  
  if (n==0){
    printf("There is no people in this group..... Bye\n");
    exit(0);
  }
  else{
    /*Allocate memory for an array of n integers using malloc.*/
    int * pArray;
  	pArray = (int *)malloc(n * sizeof(int));
    
    /*Fill this array with random numbers, using rand().*/
    for (int i = 0; i < (n); i++) {
    	pArray[i] = rand();
  	}
    
    /*Print the contents of the array.*/
    printf("\nBefore sorting, the contents of the array are as follows:\n");
  
  	for (int i = 0; i < (n); i++) {
  		printf("Array %d = %d\n", i, pArray[i]);
  	}
   
    /*Pass this array along with n to the sort() function of part a.*/
    sort(pArray, n);
    
    /*Print the contents of the array.*/
    printf("\nAfter sorting, the contents of the array are as follows:\n");
  
  	for (int i = 0; i < n; i++) {
  		printf("Array %d = %d\n", i, pArray[i]);
  	}
  }
  
  return 0;
}