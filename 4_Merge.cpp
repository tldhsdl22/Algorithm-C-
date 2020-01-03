#include <iostream>
#include <string>
using namespace std;

int* mergeArray(int* arrayData1, int len1, int* arrayData2, int len2) { // cur��° row�� ���� ��ġ�� ������

	int* result = (int*)malloc(sizeof(int) * (len1 + len2));
	int idx1 = 0;
	int idx2 = 0;

	for (int idx = 0; idx < len1 + len2; idx++)
	{
		if (idx1 >= len1)
		{
			result[idx] = arrayData2[idx2++];
		}
		else if (idx2 >= len2)
		{
			result[idx] = arrayData1[idx1++];
		}
		else
		{
			result[idx] = arrayData1[idx1] < arrayData2[idx2] ? arrayData1[idx1++] : arrayData2[idx2++];
		}
	}

	return result;
}
/*
int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	// �Է�(����)
	int size1, size2;
	cin >> size1 >> size2;

	// �����Ҵ�
	int* array1 = (int*)malloc(sizeof(int) * size1);
	int* array2 = (int*)malloc(sizeof(int) * size2);

	// �Է�(�迭1)
	for (int idx = 0; idx < size1; idx++)
	{
		cin >> array1[idx];
	}
	// �Է�(�迭2)
	for (int idx = 0; idx < size2; idx++)
	{
		cin >> array2[idx];
	}

	// ���
	int* result = mergeArray(array1, size1, array2, size2);
	for (int idx = 0; idx < size1 + size2; idx++)
	{
		cout << result[idx] << " ";
	}
	return 0;
}	
*/