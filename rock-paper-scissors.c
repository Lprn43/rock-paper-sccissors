#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char select;
char computer;

int game()
{
    if (select == 'r' && computer == 'p')
    {
        return -1;
    }
    if (select == 'r' && computer == 'r')
    {
        return 0;
    }
    if (select == 'r' && computer == 's')
    {
        return 1;
    }
    if (select == 'p' && computer == 'r')
    {
        return 1;
    }
    if (select == 'p' && computer == 'p')
    {
        return 0;
    }if (select == 'p' && computer == 's')
    {
        return -1;
    }
    if (select == 's' && computer == 'r')
    {
        return -1;
    }
    if (select == 's' && computer == 'p')
    {
        return 1;
    }
    if (select == 's' && computer == 's')
    {
        return 0;
    }
}

int main()
{
    printf("select(r,p,s) :");
    scanf(" %c",&select);

    int n;
    srand(time(NULL));
    n = rand() % 100;
    if (n <= 33)
    {
        computer = 'r';
    }
    else if (n> 33 && n<=66)
    {
        computer = 'p';
    }
    else if (n>66)
    {
        computer = 's';
    }
    int result;
    result = game();
    if (result == -1)
    {
        printf("you lost computer select : %c",computer);
    }
    else if (result == 0)
    {
        printf("draw");
    }
    else if (result == 1)
    {
        printf("you win computer select : %c",computer);
    }
    
    

    return 0;
}

