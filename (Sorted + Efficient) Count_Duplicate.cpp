// count duplicate elements from sorted array (efficient)

#include <iostream>
using std::cout;
using std::endl;

void count_duplicate(int* Arr, int n)
{
	int i, j;

	for (i = 0, j = i + 1; i < n;)
	{
		if (Arr[i] == Arr[j])
		{
			j++;
			continue;
		}

        cout << Arr[i] << " occurred " << j - i << " times" << endl;
		i = j;
	}
}

int main(void)
{
    int Arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

    count_duplicate(Arr, 10);

    return 0;
}