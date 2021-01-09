#include <stdio.h>
#include <stdlib.h>
#define maxsize 99999

int binarySearch(int value, int *arr, int length)
{
    int left = 0;
    // �����������
    int right = length-1;
    // �����Ҷ�����
    int mid;
    // �м�����
    // �ǲ������м���ʵ����ν��ǰһ����һ����Ӱ��
    if (arr[left] > value || arr[right] < value)        // �����ֵ�Ѿ��ȴ�����ֵ�󣬻�����ֵ�Ѿ��ȴ�����ֵС
    {
        return -1;                                      // ��ֱ�������������ܲ鵽
    }

    while (left <= right)           // ����������һ��ҪС�ڵ���������
    {                               // ��������������ʱ����ֵ�����ڴ�����ֵ����������ֵ��һ��ֵ��һ��������������������
        
        
        mid = (left + right) / 2;                           // �������ú���ֵ
        if (arr[mid] == value)                              // ���1/3����ֵ���ڼ�Ϊ����
        {
            return mid;                                     // ��������
        }
        else if (arr[mid] < value)                          // ���2/3: ��ֵС�ڴ�����ֵ
        {                                                   // ˵���������ֵ���Ҷ�ֵ֮��
            left = mid + 1;                                 // ������ֵΪǰһ����ֵ���һλ
            continue;
        }
        else                                                // ���3/3: ��ֵ���ڴ�����ֵ
        {                                                   // ˵���������ֵ����ֵ֮��
            right = mid - 1;                                // ������ֵΪǰһ����ֵ��ǰһλ
            continue;
        }
    }
    return -1;                                              // �������ѭ��������������˵������ʧ�ܣ�����-1
}

int main(void)
{
    int binarySearch(int, int*, int);

    // int arr[13] = {5, 16, 39, 45, 51, 98, 100, 202, 226, 321, 368, 444, 501};
    // int flag = binarySearch(43, arr, 13);
    // int a = 43, b = 45, c = 202, d = 502;
    // if (flag >= 0)
    // {
    //     printf("%dΪ�����е�%d��Ԫ�ء�\n", 43, flag);
    // }
    // else
    // {
    //     printf("%d���������С�\n", 43);
    // }

    // flag = binarySearch(b, arr, 13);
    // if (flag >= 0)
    // {
    //     printf("%dΪ�����е�%d��Ԫ�ء�\n", b, flag+1);
    // }
    // else
    // {
    //     printf("%d���������С�\n", b);
    // }

    // flag = binarySearch(c, arr, 13);
    // if (flag >= 0)
    // {
    //     printf("%dΪ�����е�%d��Ԫ�ء�\n", c, flag+1);
    // }
    // else
    // {
    //     printf("%d���������С�\n", c);
    // }

    // flag = binarySearch(d, arr, 13);
    // if (flag >= 0)
    // {
    //     printf("%dΪ�����е�%d��Ԫ�ء�\n", d, flag+1);
    // }
    // else
    // {
    //     printf("%d���������С�\n", d);
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
        printf("%dΪ�����е�%d��Ԫ�ء�\n", 8, flag+1);
    }
    else
    {
        printf("%d���������С�\n", 8);
    }

    flag = binarySearch(88, arr, maxsize);
    if (flag >= 0)
    {
        printf("%dΪ�����е�%d��Ԫ�ء�\n", 88, flag+1);
    }
    else
    {
        printf("%d���������С�\n", 88);
    }

    flag = binarySearch(maxsize+1, arr, maxsize);
    if (flag >= 0)
    {
        printf("%dΪ�����е�%d��Ԫ�ء�\n", maxsize+1, flag+1);
    }
    else
    {
        printf("%d���������С�\n", maxsize+1);
    }
    

    system("pause");
    return 0;
    
}