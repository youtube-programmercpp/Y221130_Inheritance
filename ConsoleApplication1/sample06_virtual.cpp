struct A {
	virtual void f()
	{
	}
	void g()
	{
		f();//��������h����̉��z�֐��ɔ��
	}
};
struct B : A{
	void f() override
	{
	}
};
int main()
{
	B x;
	x.g();


}
