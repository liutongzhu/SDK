#include <stdio.h>
/*celsius = 5 * (fahr-32) / 9
->fahr = celsius/5*9+32
将摄氏度转换华氏度
从0到40摄氏度到华氏度映射表*/
int main(void)
{	
	float celsius,fahr;

	for(celsius = 0;celsius<=40;celsius++)
	{	
		fahr = celsius/5*9+32;
		printf("%3.0f\t%6.1f\n",celsius,fahr);
		
	}
	return 0;
}
