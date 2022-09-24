//클래스 안에서 선언된 함수를 밖에서 수식할 수 있다.
//클래스 안에서 별도의 접근제어 지시자를 선언하지 않으면, 모두 private로 선언된다.

//구조체도 접근제어 지시자를 이용할 수 있다.
//구조체에선 접근제어 지시자가 없을 시, public으로 선언된다.

//접근제어 지시자에는 콜론(:)이 붙는데, 이는 레이블을 의미한다. switch문의 case도 이에 속한다.
//레이블은 위치정보를 알린다.

//switch(변수)
//{
//case a :
//	명령;
//	break;	//	break가 없으면 아래의 모든 명령어가 실행. case는 명령의 시작으로 봐도 좋다. 또한, switch문은 반복문의 일종으로 볼 수 있다.
//default :	//	명령할 것이 없으면 default는 생략 가능
//	명령;

//구조체와 클래스는 변수가 아닌 객체라는 표현을 사용한다.

//클래스의 변수를 멤버변수, 함수를 멤버함수라고 한다.
//클래스의 선언 : 클래스를 구성하는 최소한의 외형적인 틀
//클래스의 정의 : 자세한 함수의 정의

#include<iostream>
#include<cstring>
#include"헤더.h"	//	이 파일에서 헤더.h에서 선언한 함수를 정의한다. 위의 헤더는 함수의 정의에 필요한 헤더이다.
using namespace std;

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::Show()
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}
	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}
	curSpeed -= CAR_CONST::BRK_STEP;
}