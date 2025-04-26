#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Welcome to the Trivia Game!!!\n\n");
    int i;
    printf("Enter the Game? Yes[1] No[0]: ");
    scanf("%d", &i);
    char sol1, sol2, sol3, sol4, sol5, sol6, sol7, sol8, sol9, sol10;
    int a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
    int a01, a02, a03, a04, a05, a06, a07, a08, a09, a010;
    int total_marks = 0;
    if(i==1)
        printf("\nLet's Begin!\n\n");
    else if(i==0)
        printf("\nThank You!");
    else
        printf("\nInvalid Input!");

    if(i==1)
    {
        //Question 1
        printf("Q1: Which physicist developed the uncertainty principle?\n");
        printf("\tA) Albert Einstein\n\tB) Niels Bohr\n\tC) Werner Heisenberg\n\tD) Max Planck\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol1);

        if(sol1=='C')
        {
            printf("\n\nCorrect!\n\n");
            a1 = 1;
            total_marks += a1;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a01 = 0;
            total_marks += a01;
        }

        //Question 2
        printf("Q2: What is the longest river in Asia?\n");
        printf("\tA) Mekong\n\tB) Yangtze\n\tC) Ganges\n\tD) Yellow River\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol2);

        if(sol2=='B')
        {
            printf("\n\nCorrect!\n\n");
            a2 = 1;
            total_marks += a2;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a02 = 0;
            total_marks += a02;
        }

        //Question 3
        printf("Q3: Who was the first person to reach the South Pole?\n");
        printf("\tA) Robert Falcon Scott\n\tB) Ernest Shackleton\n\tC) Roald Amundsen\n\tD) Edmund Hillary\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol3);

        if(sol3=='C')
        {
            printf("\n\nCorrect!\n\n");
            a3 = 1;
            total_marks += a3;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a03 = 0;
            total_marks += a03;
        }

        //Question 4
        printf("Q4: Which language has the most native speakers worldwide?\n");
        printf("\tA) English\n\tB)  Mandarin Chinese\n\tC) Hindi\n\tD) Spanish\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol4);

        if(sol4=='B')
        {
            printf("\n\nCorrect!\n\n");
            a4 = 1;
            total_marks += a4;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a04 = 0;
            total_marks += a04;
        }

        //Question 5
        printf("Q5: What is the smallest prime number greater than 100?\n");
        printf("\tA) 101\n\tB)  103\n\tC) 107\n\tD) 109\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol5);

        if(sol5=='A')
        {
            printf("\n\nCorrect!\n\n");
            a5 = 1;
            total_marks += a5;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a05 = 0;
            total_marks += a05;
        }

        //Question 6
        printf("Q6: What metal has the highest melting point?\n");
        printf("\tA) Iron\n\tB)  Platinum\n\tC) Tungsten\n\tD) Titanium\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol6);

        if(sol6=='C')
        {
            printf("\n\nCorrect!\n\n");
            a6 = 1;
            total_marks += a6;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a06 = 0;
            total_marks += a06;
        }

        //Question 7
        printf("Q7: The Suez Canal connects the Mediterranean Sea to which body of water?\n");
        printf("\tA) Arabian Sea\n\tB)  Persian Gulf\n\tC) Red Sea\n\tD) Gulf of Aden\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol7);

        if(sol7=='C')
        {
            printf("\n\nCorrect!\n\n");
            a7 = 1;
            total_marks += a7;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a07 = 0;
            total_marks += a07;
        }

        //Question 8
        printf("Q8: Who is the author of the Divine Comedy?\n");
        printf("\tA) Homer\n\tB) Vergil\n\tC) Dante Alighieri\n\tD) Geoffrey Chaucer\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol8);

        if(sol8=='C')
        {
            printf("\n\nCorrect!\n\n");
            a8 = 1;
            total_marks += a8;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a08 = 0;
            total_marks += a08;
        }

        //Question 9
        printf("Q9: In computing, what does 'HTTP' stand for\n");
        printf("\tA) HyperText Transmission Protocol\n\tB) High Transfer Text Protocol\n\tC) HyperText Transfer Protocol\n\tD) Host Transfer Text Protocol\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol9);

        if(sol9=='C')
        {
            printf("\n\nCorrect!\n\n");
            a9 = 1;
            total_marks += a9;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a09 = 0;
            total_marks += a09;
        }

        //Question 10
        printf("Q10: What is the term for a word or phrase that reads the same forwards and backwards?\n");
        printf("\tA) Homonym\n\tB) Palindrome\n\tC) Oxymoron\n\tD) Anagram\n\n");
        printf("Your Answer [A][B][C][D]: ");
        scanf(" %c", &sol10);

        if(sol10=='B')
        {
            printf("\n\nCorrect!\n\n");
            a10 = 1;
            total_marks += a10;
        }
        else
        {
            printf("\n\nWrong!\n\n");
            a010 = 0;
            total_marks += a010;
        }

        int j;
        printf("Congratulations! You have reached the end of the Trivia Game!\n\n");
        printf("View your score? Yes[1] No[0]: ");
        scanf("%d", &j);

        if(j==1)
        {
            printf("Your Total Score: %d\n\n", total_marks);
            printf("Thank You For Playing!");
        }
        else if(j==0)
            printf("Thank You For Playing!");
        else
            printf("Invalid Input!");
    }
    return 0;
}
