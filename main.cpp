#include"헤더.h"	//	헤더의 함수가 정의되었다면, 정의에 필요한 타 헤더는 필요없다.

int main()
{
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.Show();
	run99.Break();
	run99.Show();
	return 0;
}