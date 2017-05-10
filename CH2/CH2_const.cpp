
int main(){
	int i=-1;
	const int i2 =i, &r = i;
	const int *p1 = &i2;
	//int *const p2 = &i2; 
	const int *const p3 = &i;
	const int & r2 = i2 ;
	int ii, *const cp = &ii ;
	const int ic=0, &rc = ic, *pc;
	int *pp1;
	ic = *p3;
}
