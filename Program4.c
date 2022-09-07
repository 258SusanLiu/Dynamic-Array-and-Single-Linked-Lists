/* CS261- HW1 - Program4.c*/
/* Name: Susan Liu
*  Date: 4/12/19 (its midnight... 0.0)
*  Solution description: user inputs in number of people and program prints
*  people before and after being sorted alphabetically. User can input any number.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct student{
  char in[2];
  int score;
};

int main(){
  int n;
  /*Declare an integer n and assign it a value.*/
  printf("Please input number of students\n");
  scanf("%d", &n);
  
  if (n == 0){
    printf("There is no people in this group..... Bye\n");
    exit(0);
  }
  else{
    /*Allocate memory for n students using malloc.*/
    struct student * students;
  	students = (struct student*)malloc(n* sizeof(struct student));
    
    /*Generate random IDs and scores for the n students, using rand().*/
    int arrin[10];
	  int randScore;
    char string[100];
    struct student temp;
    srand(time(NULL));
    
    for (int i = 0; i < 2; i++) {
		  arrin[i] = i + 1;
	  }
    printf("Before sorting:\n");
    for (int i = 0; i < n; i++) {
    	char c1 = rand()%26 + 'A';
     	char c2 = rand()%26 + 'A';	
      /* At least once, generate random letter*/
     	students[i].in[0] = c1;
      students[i].in[1] = c2;
      
      /* Generate random score for student (not unique) */
    	randScore = rand() % 100 + 1;
    	students[i].score = randScore;
      
      printf("%c%c, %d \n", students[i].in[0], students[i].in[1], students[i].score); 
    }
    
    for (int i = 0; i < n-1; i++) {
      for (int j = i+1; j < n; j++) {
        if (strcmp(students[j].in ,students[i].in) < 0) {
          temp = students[i];
          students[i] = students[j];
          students[j] = temp;
        }
      }
    }
    printf("After sorting:\n");
    for (int i = 0; i < n; i++) {
      printf("%c%c, %d \n", students[i].in[0], students[i].in[1], students[i].score); 
    }
  }
  return 0;
}