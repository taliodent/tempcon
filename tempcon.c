#include <stdio.h>

#define LOWER 0		/* lower limit of table */
#define UPPER 300	/* upper limit */	
#define STEP 20		/* step size */
#define HELLO "\n Press \"f\" for fahrenheit and \"c\" for celsius\n"

main()
{


printf(HELLO);


switch(getchar()) {

	case 'f':	
	fahr();
	break;
	
	case 'c':
	celsius();
	break;

	
	
	default:
		printf("\nyou've chosen the default option\n");

}
return 0;

}


int fahr (int i)


{
	flush();
	printf("\n choose between z or t\n");
	switch(getchar()) {

	case 'z':	
	fahr0();
	break;
	
	case 't':
	fahr300();
	break;

	
	
	default:
		printf("\nyou've chosen the default option\n");
	}

}

int celsius (int i)


{
	flush();
	printf("\n choose between z or t\n");
	switch(getchar()) {

	case 'z':	
	celsius0();
	break;
	
	case 't':
	celsius300();
	break;

	
	
	default:
		printf("\nyou've chosen the default option\n");
	}

}

/* And heeeere comes the actual main function aka "fahr", 
*  which is divided into fahr0, which shows creates a conversion table
*  starting at 0 going all the way up to 300
*/

int fahr0 (int i)
{
	int fahr;
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
	printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
} 

/* Likewise we have the corresponding function for creating
 * celsius conversion tables starting at 0
 */

int celsius0 (int i)
{
	int celsius;
	for(celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
	printf("%3d %6.1f\n", celsius, (9.0/5.0) * (celsius + 32));
}

/* Here's the same function creating fahr tables starting from 300 counting down */

int fahr300 (int i)
{
	int fahr;
	for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
	printf("%3d %6.1f\n", fahr, (5.0/9.0) * (fahr-32));
}

/* here's the corresponding function for celsius tables */

int celsius300 (int i)
{
	int celsius;
	for(celsius = UPPER; celsius >=LOWER; celsius = celsius - STEP)
	printf("%3d %6.1f\n", celsius, (9.0/5.0) * (celsius + 32));	
}

/* flush() is needed to reset the input buffer so that getchar() can read
 * whatever input is given to it in the second switch statment which should
 * determine whether you want to count downwards from 300 or upwards from 0
 */

int flush (int i)
{
	char ch;
	while ((ch = getchar()) != '\n' && ch != EOF)
	continue;
}


