struct A {
	virtual void f()
	{
	}
	void g()
	{
		f();//ここから派生先の仮想関数に飛ぶ
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
