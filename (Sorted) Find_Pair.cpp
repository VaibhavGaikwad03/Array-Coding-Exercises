// find pair a + b == k
// for sorted array
// don't give duplicate numbers as input

#include <iostream>
using std::cout;
using std::endl;

void find_pair(int *Arr, int n, int k)
{
	int i = 0, j = n - 1;

	while (i < j)
	{
		if (k < Arr[i] + Arr[j])
			j--;
		else if (k > Arr[i] + Arr[j])
			i++;
		else
			printf("%d %d\n", Arr[i++], Arr[j--]);
	}
}

int main(void)
{

	int Arr[10] = {1, 3, 4, 5, 6, 8, 9, 10, 12, 14};

	find_pair(Arr, 10, 10);

	return 0;
}