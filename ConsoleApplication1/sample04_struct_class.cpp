//���N���X
struct A {
	int a[3];
};
//�h���N���X
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
