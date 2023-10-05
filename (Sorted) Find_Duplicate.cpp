// find duplicate elements from sorted array

#include <iostream>
using std::cout;
using std::endl;

void find_duplicate(int *Arr, int n)
{
    int i;
    int last_dup = 0;

    for (i = 0; i < n; i++)
    {
        if (Arr[i] == Arr[i + 1] && Arr[i] != last_dup)
        {
            last_dup = Arr[i];
            cout << Arr[i] << " ";
        }
    }
}

int main(void)
{
    int Arr[] = {3, 6, 8, 8, 10, 12, 15, 15, 15, 20};

    find_duplicate(Arr, 10);

    return 0;
}