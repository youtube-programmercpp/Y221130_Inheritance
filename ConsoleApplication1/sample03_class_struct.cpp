//���N���X
class A {
};
//�h���N���X
struct B : A {
};
int main()
{
	B x;
	A& r = x;
}
