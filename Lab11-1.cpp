#include <stdio.h>

int BinSearch(int data[6], int n, int find);

int main()
{
    int data[6] = {1, 2, 3, 4, 5, 7};
    int n, find = 5;
    int pos = BinSearch(data, n, find);
    return 0;
} // end function
int BinSearch(int data[6], int n, int find)
{
    int i, pos = -1;
    for (i = 0; i < n; i++)
    {
        if (data[i] == find)
        {
            pos = i;
            break;
        }
    }
    printf("Found %d at %d",find,pos);
}// end function
