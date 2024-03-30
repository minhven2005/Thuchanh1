#include<iostream>
using namespace std;
int binarysearch(int arr[],
int  x , int left , int right){
	while (left<=right){ 
	int mid = left + (right+left)/2;
	if (arr[mid] ==x){ return mid;
	}
	else if (arr[mid]>x){
		riht = mid -1 ;
	}
	else { left = mid +1;l
	}
	} return -1;
	
}
int main() {
	int n;
	cout << " nhap so luong phan tu cua mang: ";
	cin>>n;
	int arr[n];
	cout << "nhap cac phan tu cua mang: " ;
	for ( int i = 0; i <n;
	++i){
		cin >> arr[i];
	}
}
int x;
cout << " nhap gia tri can tim kiem: ";
cin >> x;
 int result = 
 binarySearch(arr, target, 0 , n -1);
 if (result != -1 ){
 	cout << " gia tri tai vi tri "<<
 }
