#include <Ex3.h> 
#include <stdio.h>
#define N 6

void shift_element(int* arr, int i){
    while(i>0){
        *(arr +i) = *(arr + i-1);
        i--;
    }
}
void insertion_sort(int* arr , int len){
    for (int i=0;i<len;i++){
        int place = *(arr+i);
        int s = 0;
        int j=1;
        while ((s<i)&&*(arr+i)<*(arr+i-j))
        {
            s++;
            j++;
        }
        shift_element(arr+i-s,s);
        *(arr +i-s)=place;
    }
}




int main (){
int arr[N];
int* check = arr+1;
//shift_element(check,3);

for(int i=0;i<N;i++){
    int num;
    scanf("%d",&num);
    arr[i]=num;
}
insertion_sort(arr,N);
for (int i = 0; i < N; i++)
{
    printf("%d,",arr[i] );
}

return 0;}