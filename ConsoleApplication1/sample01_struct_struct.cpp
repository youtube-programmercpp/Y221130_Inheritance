//基底クラス
struct A {
	int a;//メンバ変数
	void reset()
	{
		a = 0;
	}
};
//派生クラス
struct B : A {
	//A から引き継いでいる
	int a;//別の a が追加されている
	void reset()
	{
		a = 0;
	}
};


int main()
{
	B x;
	x.a = 100;//B 型の a が前面に出ている
	x.A::a = 200;//裏に隠れている A 型の a に 200 を入れる
	x.   reset();
	x.A::reset();
}
