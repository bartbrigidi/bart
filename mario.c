#include <cs50.h>
#include <stdio.h>

int main(void)
{
   int n;
   do
   {
       n = get_int("Height: ");
   }
   while (n < 1 || n > 8);
    for (int row = 0; row < n; row++)
   {
       for (int space = n - row - 1; space > 0; space--)
       {
           printf(" ");
       }
       for (int hash = 0; hash < row + 1; hash++)

           printf("#");

       printf("\n");
   }

}

