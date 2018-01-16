#include <stdio.h>
#include <stdlib.h>

int getRand(void)
{
    return rand();
}

void setArray(int *array,size_t arraySize,int(*p)(void))
{
    for(int i=0;i<arraySize;i++){
       array[i] = p();
    }

}

int main()
{
    int myArray[10];
    setArray(myArray,10,getRand);

    for(int i = 0; i < 10; i++) {
        printf("%d ", myArray[i]);
    }
    return 0;

}