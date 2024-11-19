#include <iostream>
#include <cstdio>

int main()
{
    // const char *name = "Anas";
    // // name[0] = 'a';
    // printf("My name is: %s\n", name);
    char name[] = "Anas Abdullah";

    printf("My Name is : %s\n", name);
    printf("The is %*c\n", 1, name[0]);
    printf("The is %*c\n", 2, name[1]);
    printf("The is %*c\n", 3, name[2]);
    printf("The is %*c\n", 4, name[3]);
    printf("The is %*c\n", 5, name[4]);

    return 0;
}
