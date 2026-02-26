#include <stdio.h>
#include <string.h>

int main() {

    char str1[] = "Shreyansh Prasad";
    char str2[] = "Shreyansh Prasad";

    if (!strcmp(str1, str2)) {
        printf("The strings are equal.\n");
    } 
    
    if (str1 == str2) {
        printf("The strings are equal. == \n");
    }

    return 0;
}