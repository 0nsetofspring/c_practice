#include <stdio.h>
#include <string.h>

int main() {
    char str1[15] = "1234567890";
    char str2[5];

    // case1) error (no space for \n)
    strncpy(str2, str1, sizeof(str2));
    printf("%s\n", str2);
    
    // case2) correct
    strncpy(str2, str1, sizeof(str2)-1);
    str2[sizeof(str2)-1] = 0;
    printf("%s\n", str2);

    return 0;
}
