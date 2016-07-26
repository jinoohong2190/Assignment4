/* Jinoo Hong */
/* Write a program `sum.c` given an array of n integers where n > 1, return an array of same size as the input array where every index of the output array is the cumulative sum of elements in the array so far. You can have it so that the array is input by the user. */

#include <stdio.h>

int main() {
	int numindex, counter, newnum, prevtotal;

	/*prompt for number of indexes for the array*/
	printf("Please enter the number of integers you want in this array: ");
	scanf("%d", &numindex);
	
	/*create arrays*/
	int array[numindex], newarray[numindex];

	/*prompt for data, then add data to array, then add data to newarray by adding newnum and prevtotal, lastly add newnum to prevtotal*/
	prevtotal=0;
	for (counter=0; counter<numindex; counter++) {
		printf("Please enter an integer for pos %d of the array: ", counter+1);
		scanf("%d", &newnum);
		array[counter]=newnum;
		newarray[counter]=newnum+prevtotal;
		prevtotal+=newnum;
	}
	
	/*print the inputted array*/
	printf("inputted array: ");
	for (counter=0; counter<numindex; counter++) {
		printf("%d  ", array[counter]);
	}

	/*print the new array*/
	printf("\nnew array:      ");
	for (counter=0; counter<numindex; counter++) {
		printf("%d  ", newarray[counter]);
	}
	printf("\n");

	return 0;
}
