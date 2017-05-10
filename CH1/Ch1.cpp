#include <iostream>
#include "Sales_item.h" 
using namespace std;

int test(int a){
	cout << " function test:" << a << endl; 
}

int main(){
	test(1);	
	cerr<< " exit!"<<endl;
	return -1;
	Sales_item book, sum;
	cin >> sum;
	while (cin >> book){
	  	if (book.isbn() == sum.isbn())
	  	sum += book;
	  	else {
	  		cout<<sum<<endl;
	  		sum = book;
	  	}
	}
		
	cout<<sum<<endl;
	return 0;
}
