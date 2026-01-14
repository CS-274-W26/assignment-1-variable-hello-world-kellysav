#include <stdio.h>  // Necessary for printf()
#include <stdlib.h> // Necessary for rand() and srand()
#include <time.h>   // Necessary for time()

int main() {

	srand(time(NULL));		  

	int myrand = rand() % 11; //generates a random number between 1 and 10

	if (myrand >= 0 && myrand <= 4) {					//generates all of the given
		printf("Eat more beef, kick less cats\n");		//text when the random number
	} else if (myrand >= 5 && myrand <= 9) {			//is produced
		printf("FRODO LIVES\n");
	} else if (myrand == 10) {
		printf("Larn is the best roguelike\n");
	} else {
		printf("ERROR PRINTING NUMBER");
	}

	printf("The random number was: %d\n", myrand);		
	
	return 0;
}
