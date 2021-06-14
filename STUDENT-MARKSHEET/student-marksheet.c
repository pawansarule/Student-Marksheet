/* C Program for Student Marksheet Using Following Points:
1. Macro Preprocessor
2. Arrey
3. Function
4. String */

#include <stdio.h>
#define SUM(subject1, subject2, subject3, subject4) (subject1 + subject2 + subject3 + subject4)
#include <string.h>
int main()
{
  int   roll_no1;
  int   total;
  int   subject1, subject2, subject3, subject4;
  float per;
  char  nm[20]; 
  char  div[10];
 
  printf("\nENTER THE DETAILS OF STUDENTS\n\n");
  printf("Enter the Roll No        : ");
  scanf("%d", &roll_no1);
  printf("Enter Student Name       : ");
  scanf("%s",nm);
  // gets(nm);
  printf("Enter Four Subject Marks :\n");
  scanf("%d%d%d%d", &subject1, &subject2, &subject3, &subject4);
  total = SUM(subject1, subject2, subject3, subject4);
  printf("\n");
  per = total / 4.0;

  if (per >= 75)
    strcpy(div, "First");
  else if (per >= 64)
    strcpy(div, "Second");
  else if (per >= 52)
    strcpy(div, "Third");
  else if (per >= 40)
    strcpy(div, "Pass");
  else
    strcpy(div, "Fail");

  printf("=====================================================\n");
  printf("         Dr. DY Patil ACS College, Pimpri\n");
  printf("=====================================================\n");
  printf("Roll No: %d \t   Name: %s\n", roll_no1, nm);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("Subject                    Max      Min     Obt.Marks\n");
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("Advance C Programing       100      40       %d\n", subject1);
  printf("Computer Organization      100      40       %d\n", subject2);
  printf("Operating System           100      40       %d\n", subject3);
  printf("Database Management System 100      40       %d\n", subject4);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  printf("       Total Marks         %d\n", total);
  printf("-----------------------------------------------------\n");
  printf("percentage: %f\t     div: %s \n", per, div);
  printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
  return 0;
}