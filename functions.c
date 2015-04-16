#include <functions.h>

// Converts from a number in given base to another given base

char Converter(x, y, z[]){
	To_Base10(x, z[]
	
}


int To_Base10(x, z[]){
	int c;
	int h;
	
	h = strlen(z)
	
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
	
	for (c = 0; c < h; c++){     
		b[c] = a[c] * pow(x , h - (c + 1));
	}
}

char To_Any(y, b[]){
	
	int c;
	int h;
	int digit[50];
	
	for (c = 0; c < h; c++){		// adds up the values of array b
		sum = sum + b[c];
	}
	
	printf("%d", sum);             // prints out sum, equal to base 10 number
	printf("\n");
	
	c = 0;
	h = 0;
	while (sum !=0){             // converts base 10 to 2nd base given
		digit[c] = sum % y;
		sum /= y;
		c++;
		h++;
	}
}