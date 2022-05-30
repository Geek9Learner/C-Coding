#include <iostream>
using namespace std;

int main() {
	// your code goes here
	double arr[5]={0.0};
	arr[0]=12;arr[1]=23.44;arr[2]=56;arr[3]=45;arr[4]=98;
	arr[5]=10.55;
	int i=0;
	for( i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<i;
	return 0;
}