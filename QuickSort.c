#include <stdio.h>
#include <limits.h>

void swap(int *array,int x,int y)
{
    int item=array[x];
    array[x]=array[y];
    array[y]=item;
}

void QuickSort(int *A,int l,int r)//±Æ§ÇA[l]~A[r] whileª©
{
    if(l<r)
    {
        int i=l,j=r+1;
        while(i<j){
            while(A[j]>A[l])
                j--;
            while(A[i]<A[l])
                i++;
            swap(A,i,j);
        }
        swap(A,l,j);
        QuickSort(A,l,j-1);
        QuickSort(A,j+1,r);
    }
}

int main(){
    int array[12]={-1,5,9,2,1,4,7,8,3,10,6,-1};
    array[11]=INT_MAX;
    QuickSort(array,1,10);
    for(int i=1;i<=10;i++)
        printf("%d ",array[i]);
}
