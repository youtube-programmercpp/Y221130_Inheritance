//���N���X
class A {
public:
	int a;
	void reset()
	{
		a = 0;
	}
};
//�h���N���X
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
