#include <stdio.h>
#include <stdlib.h>
#define maxsize 99999

int binarySearch(int value, int *arr, int length)
{
    int left = 0;
    int right = length-1;
    int mid;
    while (left <= right)
    {
        if (arr[left] > value || arr[right] < value)
        {
            return -1;
        }
        
        mid = (left + right) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value)
        {
            left = mid + 1;
            continue;
        }
        else
        {
            right = mid - 1;
            continue;
        }
    }
    return -1;
}

int main(void)
{
    int binarySearch(int, int*, int);

    // int arr[13] = {5, 16, 39, 45, 51, 98, 100, 202, 226, 321, 368, 444, 501};
    // int flag = binarySearch(43, arr, 13);
    // int a = 43, b = 45, c = 202, d = 502;
    // if (flag >= 0)
    // {
    //     printf("%d为数列中第%d个元素。\n", 43, flag);
    // }
    // else
    // {
    //     printf("%d不在数列中。\n", 43);
    // }

    // flag = binarySearch(b, arr, 13);
    // if (flag >= 0)
    // {
    //     printf("%d为数列中第%d个元素。\n", b, flag+1);
    // }
    // else
    // {
    //     printf("%d不在数列中。\n", b);
    // }

    // flag = binarySearch(c, arr, 13);
    // if (flag >= 0)
    // {
    //     printf("%d为数列中第%d个元素。\n", c, flag+1);
    // }
    // else
    // {
    //     printf("%d不在数列中。\n", c);
    // }

    // flag = binarySearch(d, arr, 13);
    // if (flag >= 0)
    // {
    //     printf("%d为数列中第%d个元素。\n", d, flag+1);
    // }
    // else
    // {
    //     printf("%d不在数列中。\n", d);
    // }




    int arr[maxsize];
    int i = 0;
    while (i < maxsize)
    {
        arr[i] = i+1;
        i++;
    }

    int flag = binarySearch(8, arr, maxsize);
    if (flag >= 0)
    {
        printf("%d为数列中第%d个元素。\n", 8, flag+1);
    }
    else
    {
        printf("%d不在数列中。\n", 8);
    }

    flag = binarySearch(88, arr, maxsize);
    if (flag >= 0)
    {
        printf("%d为数列中第%d个元素。\n", 88, flag+1);
    }
    else
    {
        printf("%d不在数列中。\n", 88);
    }

    flag = binarySearch(maxsize+1, arr, maxsize);
    if (flag >= 0)
    {
        printf("%d为数列中第%d个元素。\n", maxsize+1, flag+1);
    }
    else
    {
        printf("%d不在数列中。\n", maxsize+1);
    }
    

    system("pause");
    return 0;
    
}