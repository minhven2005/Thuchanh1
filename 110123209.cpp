#include <stdio.h>
#include <math.h> 
int arrMAX;
int main(){
    int n;
    printf("\nNhap so luong phan tu n =");
    scanf("%d", &n);
    for(int i = 0;i < n; ++i){
        printf("\nNhap a[%d] = ", i);
        scanf"%d", &arr[i];
    }
    
    int sum = 0;
    int count = 0;
    for(int i = 1; i < n; i+=2){
        if(row[i] % 2 == 1){
            ++count;
            sum += arr[i];
        }
    }
    printf("\nTrung binh cong = %f", (float)sum/count);
}
