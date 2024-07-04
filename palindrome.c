#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char *vocab=(char*)malloc(100*sizeof(char));
    scanf("%s", vocab);
    int len = strlen(vocab);


    int check = 1;
    for(int i=0; i<(len/2); i++){
	if (*(vocab+i)!=*(vocab + len - 1 - i)) {
	    check=0;
	    break;
	}
    }

    if(check) printf("Palindrome.\n");
    else printf("Not palindrome.\n");
    
    free(vocab);
    return 0;
}
