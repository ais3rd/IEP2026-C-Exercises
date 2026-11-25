/*
    * prog1.c
    * 31 Agustus 2026
    * Reagan
*/

#include <stdio.h>

int main(void)
{
    printf("The code has run!\n");
    printf("................ jangan aneh aneh ya\rSedang apa kamu?\n");
    printf("My major is\tbiomedical engineering\n");

    // test for \t
    printf("Name\t\t: Reagan\n");
    printf("Institution\t: Universitas Indonesia\n");
    printf("Major\t\t: Biomedical Engineering\n");

    return 0;
}

/*
    * \n is for new line so it goes to the next line
    * \r is for carriage return so it goes to the beginning of the line
    * \t is for tab so it goes to the next tab space
    * they are called escape sequences and they are used to represent special characters in strings.
*/