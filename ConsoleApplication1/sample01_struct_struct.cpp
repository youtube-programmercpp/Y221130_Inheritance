//���N���X
struct A {
	int a;//�����o�ϐ�
	void reset()
	{
		a = 0;
	}
};
//�h���N���X
struct B : A {
	//A ��������p���ł���
	int a;//�ʂ� a ���ǉ�����Ă���
	void reset()
	{
		a = 0;
	}
};


int main()
{
	B x;
	x.a = 100;//B �^�� a ���O�ʂɏo�Ă���
	x.A::a = 200;//���ɉB��Ă��� A �^�� a �� 200 ������
	x.   reset();
	x.A::reset();
}
