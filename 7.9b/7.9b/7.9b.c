/*����ָ��������ֵ��ƽ��ֵ*/
#include <stdio.h>
#include <stdarg.h>

float average(int n_values , ...)
{
	va_list var_arg;
	int count;
	float sum = 0;
	
	/*���ʿɱ����*/
	va_start(var_arg, n_values);

	/*���ӿɱ�����б���ֵ*/
	for (count = 0; count < n_values; count+=1)
	{
		sum += va_arg(var_arg, int);
	}

	/*��ɴ����ɱ����*/
	va_end(var_arg);

	return sum / n_values;
}

int main()
{
	printf("%f", average(3,3,3,3));
	getchar();
}