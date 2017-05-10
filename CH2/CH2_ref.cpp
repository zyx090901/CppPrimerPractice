
int i=0, &r1=i;
double d = 0, &r2 = d;

void test(){
	return;
}

int main(){
	r2 = 3.14;
	r1 = r2;
	i = r2;
	r1 = d;

}'
