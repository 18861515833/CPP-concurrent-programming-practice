#include<iostream>
#include<thread>

using namespace std;


void hello_world()
{
	cout << "hello world" << endl;
}

class A{
public:
	A()
	{
		cout << "constrator" << endl;
	}
	A(const A &a)
	{
		cout << "constrator =" << endl;
	}
	~A()
	{
		cout << "Îö¹¹" << endl;
	}
};

int main()
{
	thread t1(hello_world);
	t1.join();
	A a=A();
	A b = a;
	return 0;
}
