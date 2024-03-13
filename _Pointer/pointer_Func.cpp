#include<iostream>
using namespace std;

//值传递、地址传递、引用传递
//地址传递
void swap(int * a, int * b){
    int temp = 0;
    temp = *a;
    *a = *b; //a指向的值变为b指向的值
    *b = temp;
    cout<<*a<<" "<<*b<<endl;
}
//冒泡排序
void bubblesort(int * arr, int len){
    for(int i=0;i<len-1;i++){
        for(int j=0;j<len-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int main(){
    int a = 10;
    int b = 20;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
    int arr[10] = {4,3,6,9,1,2,10,8,7,5};
    int len = sizeof(arr)/sizeof(int);
    bubblesort(arr,len);
    int i=0;
    while(i<len){
        cout<<arr[i++]<<endl;
    }
    // system("pause");
    return 0;
}