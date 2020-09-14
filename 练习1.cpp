#include <iostream>
#include <stdio.h>
using namespace std;

//void es(int &x,int&y) {
//	
//	y = x+y;
//	x = y - x;
//	y = y - x;
	

//}
//int main() {
//	int a, b;
//	cin >> a
//		>> b;
//	es(a, b);
//	cout << a
//		<<"\n"
//		<< b;
//		return 0;
//
//}

int add(int ad[],int n) {
	int sum = 0;
	for (int i = 0; i < n; i++)
		sum += ad[i];
	return sum;
	
}
 int main() {
	 int vol1[] = {1,2,3,4,5,6,7,8,9,10};
	
	
	/*for (int i = 0; i < x; i++)
		cin >> vol1[i];*/
	int sum_1=add(vol1, 10);
	cout << sum_1;


	
}


