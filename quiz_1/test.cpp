#include <iostream>
#include <time.h>

using namespace std;
long c_frac(int i){
	if (i == 1)
	{
		return 2;
	}
	return 1 + 1/c_frac(i-1);
}

int main(int argc, char const *argv[])
{
	clock_t t1,t2;

	t1 = clock();
	long a = c_frac(1000000);
	t2 = clock();
	float diff ((float)t2-(float)t1);
	cout << a << endl;
	cout << diff << endl;

	return 0;
}