#include <stdio.h>
#include <stdlib.h>
#define maxsize 99999

int binarySearch(int value, int *arr, int length)
{
    int left = 0;
    // 设置左端索引
    int right = length-1;
    // 设置右端索引
    int mid;
    // 中间索引
    // 是不是正中间其实无所谓，前一个后一个不影响
    if (arr[left] > value || arr[right] < value)        // 如果左值已经比待查找值大，或者右值已经比待查找值小
    {
        return -1;                                      // 则直接跳出，不可能查到
    }

    while (left <= right)           // 设置左索引一定要小于等于右索引
    {                               // 如果左右索引相等时且中值不等于待查找值，则设置左值加一右值减一，这样就有跳出条件了
        
        
        mid = (left + right) / 2;                           // 否则设置好中值
        if (arr[mid] == value)                              // 情况1/3：中值所在即为所求
        {
            return mid;                                     // 返回索引
        }
        else if (arr[mid] < value)                          // 情况2/3: 中值小于待查找值
        {                                                   // 说明结果在中值与右端值之间
            left = mid + 1;                                 // 设置左值为前一次中值向后一位
            continue;
        }
        else                                                // 情况3/3: 中值大于待查找值
        {                                                   // 说明结果在左值与中值之间
            right = mid - 1;                                // 设置右值为前一次中值向前一位
            continue;
        }
    }
    return -1;                                              // 如果到达循环跳出条件，则说明查找失败，返回-1
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