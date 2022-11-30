//基底クラス
class A {
};
//派生クラス
struct B : A {
};
int main()
{
	B x;
	A& r = x;
}
