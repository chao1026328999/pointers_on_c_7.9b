/*计算指定数量的值的平均值*/
#include <stdio.h>
#include <stdarg.h>

float average(int n_values , ...)
{
	va_list var_arg;
	int count;
	float sum = 0;
	
	/*访问可变参数*/
	va_start(var_arg, n_values);

	/*添加可变参数列表的值*/
	for (count = 0; count < n_values; count+=1)
	{
		sum += va_arg(var_arg, int);
	}

	/*完成处理可变参数*/
	va_end(var_arg);

	return sum / n_values;
}

int main()
{
	printf("%f", average(3,3,3,3));
	getchar();
}
