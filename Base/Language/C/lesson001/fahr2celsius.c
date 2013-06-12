#include <stdio.h>
/*当fahr=0,20,...,300时，分别
打印华氏温度与摄氏温度对照表*/

int main(void)
{
	float fahr,celsius;
	int lower,upper,step;
	
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * ( fahr-32) / 9;
		printf("%3.0f\t%6.1f\n",fahr,celsius);
		fahr += step;
	}
	
	return 0;
}
