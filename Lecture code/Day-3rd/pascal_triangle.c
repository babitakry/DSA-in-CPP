#include<stdio.h>

int main(){
    
    int i,j,k,line;
    
    for(i=1;i<=line;i++)
    {
        k=1;
        for(j=1;j<=(2*line-1);j++)
        {
            if(j>=line+1-i&&j<=line-1+i)
            {
                printf("%d ",k);
                j<line?k++:k--;
            }
            else
               printf("  ");
        }
        printf("\n");
    }
    return 0;
}