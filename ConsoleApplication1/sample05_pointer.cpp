struct A {
	int a[3];
};
struct B {
	int b;
};
//‘½dŒp³
struct C : A, B{
	int c;
};
int main()
{
	C x;
	x.a[0] = 0x00000000;
	x.a[1] = 0x11111111;
	x.a[2] = 0x22222222;
	x.b    = 0x33333333;
	x.c    = 0x44444444;

	A* pa = &x;
	B* pb = &x;
	C* pc = &x;//©‘R



}
