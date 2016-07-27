/*Jinoo Hong*/
/*Write a program `vowels.c` that takes a string as input, removes vowels, and outputs the new string.*/

#include <stdio.h>
#include <string.h>

int main() {
	int count, count1, current;
	char string1[256];
	char string2[256];
	printf("Please input a string: ");
	fgets(string1, 256, stdin);
	for (count=0; count<strlen(string1); count++) {
		current=string1[count];
		if (current=='a'||current=='e'||current=='i'||current=='o'||current=='u'||current=='A'||current=='I'||current=='O'||current=='U'){
			continue;
		}
		else{
			string2[count1]=current;
			count1++;
		}
	}
	printf("%s\n", string2);
	return 0;
}
