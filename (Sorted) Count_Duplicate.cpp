// count duplicate elements from sorted array

#include <iostream>
using std::cout;
using std::endl;

void count_duplicate(int *Arr, int n)
{
	int i, j;
	int count;

	for (i = 0; i < n; i++)
	{
		count = 1;

		if (Arr[i] == Arr[i + 1])
		{
			j = i;

			while (Arr[i] == Arr[++j])
				count++;
			i = j - 1;
		}
		cout << Arr[i] << " occurred " << count << " times" << endl;
	}
}

int main(void)
{
    int Arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

    count_duplicate(Arr, 10);

    return 0;
}