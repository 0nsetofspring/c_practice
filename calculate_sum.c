#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *a = (char*)malloc(sizeof(char)*100);
    scanf("%99s", a); // aware not to over size

    int sum = 0;
    
    for(int i=0; i<strlen(a); i++) {
	if (a[i]>='0' && a[i]<='9')
	    //transfer char value to real num value
	    sum += a[i]-'0'; 
    }

    printf("%d\n", sum);

    free(a);

    return 0;
}
