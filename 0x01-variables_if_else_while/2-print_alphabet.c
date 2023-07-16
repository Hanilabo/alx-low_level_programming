#include <stdio.h>

/**
 * main - A program that print alphabets
 *
 * Return: 0 (Success)
 */
int main() {
    char lowercase = 'a';

    while (lowercase <= 'z') {
        putchar(lowercase);
        lowercase++;
    }
    return(0);
}
