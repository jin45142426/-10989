#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int num = 0;
	int Array[10001] = { 0 };
	int temp = 0;
	int j = 0, m =0;

	//몇개의 숫자를 출력할지 입력받는다.
	scanf("%d",&num);

	//temp에 숫자를 입력받고 자연수의 범위가 1부터 10000까지임으로 배열을 통해 1을 여러개 입력받으면 Array[1]에 하나씩 증가시킨다.
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp);
		Array[temp] += 1;

	}

	//num은 출력 숫자 
	while(m!=num)
	{
		j++;
		//하나도 입력받지 못한 숫자가 있으면 배열의 값은 0임으로 continue
		if (Array[j] == 0)
			continue;
		//숫자 출력후 몇개의 숫자를 출력했는지 개수를 센다.
		for (int k = 0; k < Array[j]; k++)
		{
			printf("%d\n",j);
			m++;
		}

	}

	return 0;
}