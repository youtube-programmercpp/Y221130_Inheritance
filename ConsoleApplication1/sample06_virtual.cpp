struct A {
	virtual void f()
	{
	}
	void g()
	{
		f();//‚±‚±‚©‚ç”h¶æ‚Ì‰¼‘zŠÖ”‚É”ò‚Ô
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
