//基底クラス
class A {
public:
	int a;
	void reset()
	{
		a = 0;
	}
};
//派生クラス
class B : public A {
public:
	void reset()
	{
		A::reset();
	}
};
int main()
{
	B x;
	x.a = 10;
	x.reset();
}
