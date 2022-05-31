// Write a program to remove comments from a C program

#include <stdio.h>
#define MAXLEN 2000
#define true 1
#define false 0

int main(void)
{
    int c;
    int i = 0;
    int prev = '\0';

    int in_comment = false;
    int in_ml_comment = false;
    int in_string = false;

    while ((c = getchar()) != EOF)
    {
        switch (c)
        {
            case '*':
                if (prev == '/' && !in_string)
                    in_ml_comment = true;
                if (in_string)
                    putchar('*');
                break;
            
            case '/':
                if (prev == '/' && !in_string)
                    in_comment = true;
                if (prev == '*' && !in_string)
                    in_ml_comment = false;
                if (in_string)
                    putchar('/');
                break;
            
            case '\n':
                in_comment = false;
                putchar('\n');
                break;

            case '\"':
                if (!in_comment && !in_ml_comment)
                {
                    in_string = !in_string;
                    putchar('\"');
                }
                break;
            
            default:
                if (!in_comment && !in_ml_comment)
                    putchar(c);
                break;
        }

        prev = c;
    }
}