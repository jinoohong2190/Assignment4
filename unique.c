/*Jinoo Hong*/
/*Implement an algorithm to determine if a string has all unique characters. Name this program `unique.c`.*/

#include <stdio.h>
#include <string.h>

int main() {
	char string[256];
	int doubled, length, counter, counter1;
	printf("Please input a string: ");
	fgets(string, 256, stdin);
	length = strlen(string);
	counter=0;
	doubled=0;
	while (doubled==0&&counter<length) {
		for (counter1=counter+1; counter1-counter<length; counter1++) {
			if (string[counter1]==string[counter]){
				doubled=1;
				break;
		
			}
		}
		counter++;
	}
	if (doubled ==0){
		printf("Unique!\n");
	}
	else {
		printf("Not Unique!\n");
	}
}
