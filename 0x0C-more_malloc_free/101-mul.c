#include <stdio.h>
#include <stdlib.h>

void print_error_and_exit(void)
{
    printf("Error\n");
    exit(98);
}

int is_digit(char c)
{
    return c >= '0' && c <= '9';
}

unsigned int str_to_uint(char *str)
{
    unsigned int result = 0;

    while (*str)
    {
        if (!is_digit(*str))
            print_error_and_exit();

        result = result * 10 + (*str - '0');
        str++;
    }

    return result;
}

void multiply(char *num1, char *num2)
{
    unsigned int len1 = 0, len2 = 0, i, j;
    unsigned int result_size;
    unsigned int *result;

    // Calculate the lengths of the input numbers
    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    // Calculate the size of the result array
    result_size = len1 + len2;

    // Allocate memory for the result array
    result = calloc(result_size, sizeof(unsigned int));
    if (result == NULL)
        exit(98);

    // Multiply each digit and update the result array
    for (i = 0; i < len1; i++)
    {
        for (j = 0; j < len2; j++)
        {
            result[i + j + 1] += (num1[i] - '0') * (num2[j] - '0');
        }
    }

    // Perform carry operations
    for (i = result_size - 1; i > 0; i--)
    {
        result[i - 1] += result[i] / 10;
        result[i] %= 10;
    }

    // Print the result
    for (i = result[0] == 0 ? 1 : 0; i < result_size; i++)
        printf("%d", result[i]);
    printf("\n");

    // Free allocated memory
    free(result);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
        print_error_and_exit();

    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            if (!is_digit(argv[i][j]))
                print_error_and_exit();
        }
    }

    multiply(argv[1], argv[2]);

    return 0;
}

