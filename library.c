#include<stdio.h>

struct student
{
    char name[25];
    int id;
    int rollno;
};


struct Book
{
    char title[20];
    char author[20];
    int bookID;
    int page;
    float price;
};

int main()
{
    int a;
    printf("* * * * * Library * * * * *\n");
    printf("Type Number You want to Perform");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        question (1);
        break;
    
    case 2:
        question (2);
        break;
    
    case 3:
        question (3);
        break;
    
    case 4:
        question (4);
        break;
    }
    return 0;
}

void question (int a)
{
    printf("Question 1");
}

void question (int a)
{
    printf("Question 2");
}

void question (int a)
{
    printf("Question 3");
}

void question (int a)
{
    printf("Question 4");
}