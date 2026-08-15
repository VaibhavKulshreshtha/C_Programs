#include <stdio.h>
int prime(int num)
{
    int i;

    if (num <= 1)
    {
        return 0;
    }

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}


int main()
{
    int num, result;
    printf("Enter the number : ");
    scanf("%d", &num);

    result = prime(num);
    if (result == 1)
    {
        printf("%d is Prime Number\n", num);
    }
    else
    {
        printf("%d is Not a Prime Number\n", num);
    }
}