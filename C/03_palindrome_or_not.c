#include <stdio.h>
int palindrome(int num)
{
    int rem, rev = 0, temp = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if (rev == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int num = 0;
    int result = 0;

    printf("Enter the number : ");
    scanf("%d", &num);
    result = palindrome(num);

    if (result == 1)
    {
        printf("The given number is Palindrome\n");
    }
    else
    {
        printf("The given number is not Palindrome\n");
    }
}