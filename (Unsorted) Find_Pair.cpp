// find pair a + b == k
// efficient for space complexity
// don't give duplicate numbers as input

#include <iostream>
using std::cout;
using std::endl;
using std::fill;

void find_pair(int *Arr, int n, int k)
{
	int i, j;

	for (i = 0; i < k; i++)
	{
		for (j = i + 1; j < k; j++)
		{
			if (Arr[i] + Arr[j] == k)
				printf("%d + %d = %d\n", Arr[i], Arr[j], k);
		}
	}
}

int main(void)
{
    int Arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};

    find_pair(Arr, 10, 10);

    return 0;
}