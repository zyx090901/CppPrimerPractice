#include <iostream>
#include "Sales_item.h"
using namespace std;
int main(){
	Sales_item ans, tem;
	if (cin >> ans) {
		while (cin>>tem) {
			if (ans.isbn()==tem.isbn())
			ans+=tem;
			else {
			    cout << ans << endl;
			    ans=tem;
			}
		}
		cout << ans << endl;
	}
	else cout << "no books" << endl;
	return 0;
}
