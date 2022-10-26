#include <stdio.h>
#include <limits.h>

void swap(int *array,int x,int y)
{
    int item=array[x];
    array[x]=array[y];
    array[y]=item;
}

void Qsort(int *A,int l,int r)//±Æ§ÇA[l]~A[r],¬x¶hrepeat untilª©
{
    if(l<r)
    {
        int pk=A[l],i=l,j=r+1;
        do{
            do
                i++;
                while(A[i]<pk);
            do
                j--;
                while(A[j]>pk);
            if(i<j)
                swap(A,i,j);
        }while(i<j);
        swap(A,l,j);
        Qsort(A,l,j-1);
        Qsort(A,j+1,r);
    }
}

int main(){
    int array[12]={-1,5,9,2,1,4,7,8,3,10,6,-1};
    array[11]=INT_MAX;
    Qsort(array,1,10);
    for(int i=1;i<=10;i++)
        printf("%d ",array[i]);
}
