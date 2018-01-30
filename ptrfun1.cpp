#include <iostream>
using namespace std;
int main(void){
	int x = 5;
	int arr[3]={1,2,3};
	int* p=arr;
	for(int i=0;i<3;i++){
		cout << arr[i] << endl;
	}
	for(int i=0;i<3;i++,p++){
		cout << p[0] << endl;
	}
}