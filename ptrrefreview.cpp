#include <iostream>
using namespace std;
void f3(int& a,int& b){
	int tmp=a;
	a=b;
	b=tmp;
}
void f1(int a,int b){
	int tmp=a;
	a=b;
	b=tmp;
}
void f2(int* a,int* b){
	int* tmp=a;
	a=b;
	b=tmp;
}
void f4(int*& a,int*& b){
	int* tmp=a;
	a=b;
	b=tmp;
}
int main(void){
	int x=5;
	int y=6;
	int* p = &x;
	int* q = &y;
	f4(p,q);
	cout << x << " " << y << endl;
	cout << *p << " " << *q << endl;
}
