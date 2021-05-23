/* tan example */
#include <stdio.h>      /* printf */
#include <math.h>       /* tan */
#include <conio.h>

/*	Source by CPlusPlus
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019
*/

#define PI 3.14159265

int main(){
	double param, result;
	param = 45.0;

	result = tan(param * PI / 180.0);
	printf("The tangent of %f degrees is %f.\n", param, result);

	_getch();
	return 0;
}