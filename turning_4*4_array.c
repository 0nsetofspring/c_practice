#include <stdio.h>

void printing_array(int a[4][4]);
void turn(int a[4][4]); //function that turns array 90'

int main() {
    int arr[4][4] = { {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16} };
    
    printing_array(arr); 
    turn(arr); 
    turn(arr); 
    turn(arr);

    return 0;
}

void printing_array(int a[4][4]) {
    for (int i=0; i<4; i++) {
	for (int j=0; j<4; j++) {
	    printf("%d ", a[i][j]);
	}
	printf("\n");
    }
    printf("\n");
}

void turn(int a[4][4]) {
    int b[4][4];

    for (int i=0; i<4; i++) {
	for (int j=0; j<4; j++) {
	    //turning algorythm : [i][j] -> [j][n-1-i]
	    b[j][3-i] = a[i][j];
	}
    }

    for (int i=0; i<4; i++) {
	for (int j=0; j<4; j++) {
	    a[i][j] = b[i][j];
	}
    }
    printing_array(a);
}
