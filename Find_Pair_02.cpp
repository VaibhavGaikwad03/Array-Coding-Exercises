// find pair a + b == k
// efficient for time complexity using hashing
// don't give duplicate numbers as input

#include <iostream>
using std::cout;
using std::endl;
using std::fill;

int max(int *Arr, int n)
{
	int i;
	int max_element = Arr[0];

	for (i = 1; i < n; i++)
	{
		if (max_element < Arr[i])
			max_element = Arr[i];
	}
	return max_element;
}


void find_pair(int *Arr, int n, int k)
{
	int i, j;
	int max_element = max(Arr, n);
	int *hash = new int[max_element + 1];

	if (hash == NULL)
		return;

	fill(hash, hash + max_element + 1, 0);

	for (i = 0; i < n; i++)
	{
		if (hash[k - Arr[i]] != 0 && k - Arr[i] >= 0)
			printf("%d + %d = %d\n", Arr[i], k - Arr[i], k);
		else
			hash[Arr[i]]++;
	}
}

int main(void)
{
    int Arr[] = {6, 3, 8, 10, 16, 7, 5, 2, 9, 14};

    find_pair(Arr, 10, 10);

    return 0;
}