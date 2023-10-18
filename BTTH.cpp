#include <stdio.h>
#include <math.h>
using namespace std;

int main()
 {
 int a = 12 , b =15 ;
 
 return 0 ;
	}	
	int Max (int a [] , int n)
	{ 
	int max = a [0];
	for (int i = 1 ; i < n ; i++)
	if (max < a [i])
        max = a [i];
		return max; 
		}
		
