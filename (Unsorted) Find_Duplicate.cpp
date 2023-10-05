// find duplicate elements from unsorted array

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

void find_duplicate(int* Arr, int n)
{
	int* hash = NULL;
	int max_element = max(Arr, n);

	hash = new int[max_element + 1];

	if (hash == NULL)
		return;

	fill(hash, hash + max_element + 1, 0);

	for (int i = 0; i < n; i++)
		hash[Arr[i]]++;

	for (int i = 0; i <= max_element; i++)
	{
		if (hash[i] != 0)
            cout << i << " occurred " << hash[i] << " times" << endl;
	}

	delete[]hash;
}

int main(void)
{
    int Arr[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};

    find_duplicate(Arr, 10);

    return 0;
}