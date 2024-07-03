#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


void prime (int num, bool a[], int i, int j);

int main() {
    int num;
    scanf("%d", &num);

    //to check prime number including the number entered
    num+=1;

    bool* a = (bool*) malloc(num*sizeof(bool));
    for (int i=0; i<num; i++) a[i] = false;

    prime(num, a, 2, 2);

    for (int i=2; i<num; i++) {
        if (a[i]) printf("%d ", i);
    }

    printf("\n");

    free(a);
    return 0;
}

void prime(int num, bool a[], int i, int j) {
    
    //start with i=2, j=2
    //i increases first, and then j increases once it turns

    //end when i reaches entered num
    if (i>=num) return;

    // prime number algorithm (j^2>i, i must be prime num)
    if (j*j > i) {
        a[i] = true;
        prime(num, a, i+1, 2);
    }
    else {
        if(i%j==0) {
            a[i] = false;
            prime(num, a, i+1, 2);
        }
        else prime(num, a, i, j+1);
    }
}
