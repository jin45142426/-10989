#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main()
{
	int num = 0;
	int Array[10001] = { 0 };
	int temp = 0;
	int j = 0, m =0;

	//��� ���ڸ� ������� �Է¹޴´�.
	scanf("%d",&num);

	//temp�� ���ڸ� �Է¹ް� �ڿ����� ������ 1���� 10000���������� �迭�� ���� 1�� ������ �Է¹����� Array[1]�� �ϳ��� ������Ų��.
	for (int i = 0; i < num; i++)
	{
		scanf("%d", &temp);
		Array[temp] += 1;

	}

	//num�� ��� ���� 
	while(m!=num)
	{
		j++;
		//�ϳ��� �Է¹��� ���� ���ڰ� ������ �迭�� ���� 0������ continue
		if (Array[j] == 0)
			continue;
		//���� ����� ��� ���ڸ� ����ߴ��� ������ ����.
		for (int k = 0; k < Array[j]; k++)
		{
			printf("%d\n",j);
			m++;
		}

	}

	return 0;
}