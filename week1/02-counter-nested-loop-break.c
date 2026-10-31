// Problem 2: Finding Complexity using Counter Method
#include <stdio.h>

void func(int n)
{
    int counter = 0;

    if(n == 1)
    {
        // printf("*");   // remove printing
        counter++;       // count printf
    }
    else
    {
        counter++; // initial entry into else

        for(int i = 1; i <= n; i++)
        {
            counter++; // outer loop comparison

            for(int j = 1; j <= n; j++)
            {
                counter++; // inner loop comparison

                // printf("*");   // remove printing
                counter++; // count printf

                // printf("*");   // remove printing
                counter++; // count printf

                counter++; // count break
                break;
            }
        }

        counter++; // final outer loop failed comparison
    }

    printf("%d", counter);
}

int main()
{
    int n;
    scanf("%d", &n);
    func(n);
    return 0;
}
