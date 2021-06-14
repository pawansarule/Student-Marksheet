//C Program for Student Marksheet Using Structure

#include <stdio.h>
#include <string.h>
struct MARKSHEET
{
    char  name[20];
    int   rollno;
    int   marks[10];
    int   total;
    float average;
    char  rem[10];
    char  cl[20];
} std[100];

int main()
{
    int a, b, n, flag = 1;

    printf("\nHow many students : ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        printf("\nENTER THE DETAILS OF STUDENTS\n\n");
        printf("Enter student %d Name        : ", a);
        scanf("%s", std[a].name);
        printf("Enter student %d Roll Number : ", a);
        scanf("%d", &std[a].rollno);
        std[a].total = 0;
        for (b = 1; b <= 4; ++b)
        {
            printf("Enter the mark of subject-%d : ", b);
            scanf("%d", &std[a].marks[b]);

            std[a].total += std[a].marks[b];
            if (std[a].marks[b] < 40)
                flag = 0;
        }
        std[a].average = (float)(std[a].total) / 4.0;
        if ((std[a].average >= 75) && (flag == 1))
            strcpy(std[a].cl, "Honour");
        else if ((std[a].average >= 60) && (flag == 1))
            strcpy(std[a].cl, "First Class");
        else if ((std[a].average >= 50) && (flag == 1))
            strcpy(std[a].cl, "Second Class");
        else if ((std[a].average >= 40) && (flag == 1))
            strcpy(std[a].cl, "Third Class");
        if (flag == 1)
            strcpy(std[a].rem, "Pass");
        else
            strcpy(std[a].rem, "Fail");
        flag = 1;
    }

    for (a = 1; a <= n; a++)
    {

        printf("                                                       \n");
        printf("=======================================================\n");
        printf("          Dr. DY Patil ACS College, Pimpri             \n");
        printf("=======================================================\n");
        printf("Name of Student : %s                       \n", std[a].name);
        printf("Roll No : %d                             \n", std[a].rollno);
        printf("-------------------------------------------------------\n");
        for (b = 1; b <= 4; b++)
        {
            printf("Subject %d             Obtain Mark: %d\n", b, std[a].marks[b]);
        }
        printf("-------------------------------------------------------\n");
        printf("Totl Marks    : %d                       \n", std[a].total);
        printf("-------------------------------------------------------\n");
        printf("Average Marks : %5.2f                  \n", std[a].average);
        printf("-------------------------------------------------------\n");
        printf("Class         : %s                          \n", std[a].cl);
        printf("-------------------------------------------------------\n");
        printf("Status        : %s                         \n", std[a].rem);
        printf("=======================================================\n");
    }
}