#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50 //max num of reminders
#define MSG_LEN 60 //max len of message

int read_line(char str[], int n);

int main() {
    char reminders[MAX_REMIND][MSG_LEN+3];
    char day_str[3], msg_str[MSG_LEN+1];
    int day, i, j;
    int num_remind = 0; //stored num of reminders 

    while(1) {
	if (num_remind == MAX_REMIND) {
	    printf("NO SPACE LEFT\n");
	    break;
	}
	
	printf("Enter day and reminder: ");
	
	scanf("%2d", &day);
	if (day==0) break;
	sprintf(day_str, "%2d", day); //not printing, only transfer entered integer to string
	read_line(msg_str, MSG_LEN); //return value is not needed, so call like void type func
	
	for (i=0; i<num_remind; i++) {
	    if (strcmp(day_str, reminders[i])<0) //compare dates, stop when bigger date comes out 
		break;
	}

	for (j=num_remind; j>i; j--) {
	    strcpy(reminders[j], reminders[j-1]); //move back one space
	}

	strcpy(reminders[i], day_str);
	strcat(reminders[i], msg_str);

	num_remind++;
    }

    // start when entering finished
    printf("\nDAY REMINDER\n");
    for (i=0; i<num_remind; i++) 
	printf(" %s\n", reminders[i]);

    return 0;
}


int read_line(char str[], int n) {
    int ch, i=0;

    while ((ch=getchar()) != '\n')
	if (i<n)
	    str[i++] = ch;

    str[i] = '\0'; //string end
    
    return i;
}
