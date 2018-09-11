#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

}
void inserction (int data[], int len)
{

    int i;
    int j;
    int temp;

    for(i=1; i < len; i++)
    {
        temp = data[i];
        j = i - 1;
        while(j >= 0 && temp < data[j])
        {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = temp;

}

    return 0;
}
