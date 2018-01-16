#include <stdio.h>
#include <math.h>

void main()
{
    int i,j,k;

    for(i=2;i<100;i++){

        k=(int)sqrt(i);
        for(j=2;j<=k;j++){
            if(i%j==0) break;
        }

        if(j>k){
            printf("%d\n",i);
        }

    }


}