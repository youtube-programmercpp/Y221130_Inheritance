//基底クラス
struct A {
	int a[3];
};
//派生クラス
class B : public A {
public:
	int b;
};
int main()
{
	B x;
	x.a[0] = 10;
	x.a[1] = 20;
	x.a[2] = 30;
	x.b = 40;

}
