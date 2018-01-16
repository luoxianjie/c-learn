#include <stdio.h>

int jc(unsigned int i)
{
    if(i>1)
        return i * jc(i - 1);
    else
        return 1;

}

int main()
{
    int i = 5;
    printf("!%d=%d",i,jc(i));
    return 0;
}
