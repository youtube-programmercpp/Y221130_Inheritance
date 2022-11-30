struct A {
	virtual void f()
	{
	}
};
struct B : A {
	void f()
	{
	}
};
void g(A* p)
{
	p->f();
}

int main()
{
	A x;
	B y;
	g(&x);
	g(&y);
	g(nullptr);
}
