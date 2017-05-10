#include <iostream>
#include "Sales_data.h"
using namespace std;


int main(){
	Sales_data book1, book2;
	double price;	
	cin >> book1.book_no >> book1.units_sold >> price;
	book1.revenue = book1.units_sold * price;
	cin >> book2.book_no >> book2.units_sold >> price;
	book2.revenue = book2.units_sold * price;
	
	if (book1.book_no==book2.book_no) {
		book2.units_sold += book1.units_sold;
		book2.revenue += book1.revenue;
		double avg;
		if (book2.units_sold != 0) avg = (book2.revenue/book2.units_sold);
		else avg = 0;
		
		cout << book2.book_no << " " << book2.units_sold << " " << book2.revenue << " " << avg << endl;
	}
	else cout<< "Wrong data!" <<endl;
	
	return 0;
}

