#include<iostream>
using namespace std;
int main(){

int c, arr[100], max=0, i, sum=0;

cin>>c;

for(i=0;i<c;i++){
	     cin>>arr[i];
	if(arr[i]>max){
		 max = arr[i];
	}
}

for(i=0;i<c;i++){
    sum = sum + (max - arr[i]);
    }

cout<<sum;

}
