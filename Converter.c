#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <ctype.h>
#include <math.h>

char main(void){
	
	int x, y;           // Initial and final bases for your number
	char z[50];      // Array that holds the beginning number
	int a[50];	     // Array that holds the number converted to integers
	int b[50];	    // Array that holds the parts to be added to convert to base 10
	int c;         	// Counter to run through the arrays
	int h;            // Stores the length of array z
	int sum;        // Holds sum of all values in array b
	
	sum = 0;
	
	printf("Please enter two bases: ");  
	scanf("%d", &x);
	scanf("%d", &y);
	
	if(y < 2 || y > 36){
		printf("Base entered not accepted.\n");
			return 0;
	}
	
	if(x < 2 || x > 36){
		printf("Base entered not accepted.\n");
			return 0;
	}
	
	printf("Please enter number: ");
	scanf("%s", z);		
	
	h = strlen(z);
	
	for (c = 0; c < h; c++){
	if((48 <= z[c]) && (z[c] <= 57)){
		a[c] = (z[c] - 48);
	}
	if((65 <= z[c]) && (z[c]<= 90)){
		a[c] = (z[c] - 55);
	}
	}
	
	for (c = 0; c < h; c++){
		printf("%d ", a[c]);
	}
	
	printf("\n");
	
	for (c = 0; c < h; c++){      // multiply integer by initial base ^ decreasing 
		b[c] = a[c] * pow(x , h - (c + 1));    // number length - 1
	}
	
	for (c = 0; c < h; c++){     // prints out all the values in array b
		printf("%d ", b[c]);
	}
	
	printf("\n");
	
	for (c = 0; c < h; c++){		// adds up the values of array b
		sum = sum + b[c];
	}
	
	printf("%d", sum);             // prints out sum, equal to base 10 number
	printf("\n");
	
	int digit[50];                     // holds the digits converted from base 10 to 2nd base
	
	c = 0;
	h = 0;
	while (sum !=0){             // converts base 10 to 2nd base given
		digit[c] = sum % y;
		sum /= y;
		c++;
		h++;
	}
	
	char answer[50];
	
	for (c = 0; c < h; c++){    // convert integers to characters
		if((10 <= digit[c]) && (digit[c] <= 35)){
			answer[c] = (digit[c] + 55);
		}
		if((0 <= digit[c]) && (digit[c] <= 9)){
			answer[c] = (digit[c] + 48);
		}
	}
	
	for (c = h - 1; c >= 0; c--){    // print out the values from answer array backwards
		printf("%c", answer[c]);
	}
	
	printf("\n");
}
