/* CS261- HW1 - Program2.c
*  Name: Susan liu
*  Date: 4/11/19
*  Solution description: Program prints out initials of people and grades
*  and finds the max, min and average and prints out the informaiton
*/

#include <stdio.h>
#include<stdlib.h>
#include<math.h>

#define num 10

struct student{
  char in[2];
  int score;
};

struct student* allocate(){
  /*Allocate memory for ten students*/
  struct student * students;
  students = (struct student*)malloc(num * sizeof(struct student));
  /*return the pointer*/
  return students;
}

void generate(struct student* students){
  /*Generate random initials and scores for ten students.
  The two initial letters must be capital and must be between A and Z.
  The scores must be between 0 and 100*/
  
  /*Generate random initials for 10 students*/
  
  int arrin[10];
	int randScore;
 
  for (int i = 0; i < 2; i++) {
		arrin[i] = i + 1;
	}
  
  for (int i = 0; i < num; i++) {
  	char c1 = rand()%26 + 'A';
   	char c2 = rand()%26 + 'A';	
    /* At least once, generate random letter*/
   	students[i].in[0] = c1;
    students[i].in[1] = c2;
    
  
    /* Generate random score for student (not unique) */
  	randScore = rand() % 100 + 1;
  	students[i].score = randScore;
  }
}

void output(struct student* students){
  /*Output information about the ten students in the format:
  1.  Initials  Score
  2.  Initials  Score
  ...
  10. Initials Score*/
  for (int i = 0; i< num; i++){
    printf("%c%c, %d \n", students[i].in[0],students[i].in[1], students[i].score);
  }
}

void summary(struct student* students){
  /*Compute and print the minimum, maximum and average scores of the 
  ten students*/
  int smallest = students[0].score;
	int largest = students[0].score;
	int sum = 0;
	int average;

	for (int i = 0; i < num; i++) {
		if (students[i].score < smallest) {
			smallest = students[i].score;
		}
		if (students[i].score > largest) {
			largest = students[i].score;
		}
		sum += students[i].score;
	}

	/* Compute Average */
	average = sum / num;

	/* Print Minimum, Maximum, and Average */
	printf("The minimum score is %d\n", smallest);
	printf("The maximum score is %d\n", largest);
	printf("The average score is %d\n", average);
}

void deallocate(struct student* stud){
  /*Deallocate memory from stud*/
  free(stud);
}

int main(){
  struct student* stud = NULL;
  /*call allocate*/
  stud = allocate();
  /*call generate*/
  generate(stud);
  /*call output*/
  output(stud);
  
  /*call summary*/
  summary(stud);
  /*call deallocate*/
  deallocate(stud);
  
  return 0;
}