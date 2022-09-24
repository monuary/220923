#ifndef __CAR_H__	//	#ifndef와 #endif는 헤더파일의 중복포함을 막기 위함이다.
#define __CAR_H__

namespace CAR_CONST	//	namespace와 class는 헤더에 의한 기능이 아니라는 것을 알 수 있다.
{
	enum
	{
		ID_LEN=20,
		MAX_SPD=200,
		FUEL_STEP=2,
		ACC_STEP=10,
		BRK_STEP=10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char* ID, int fuel);
	void Show();
	void Accel();
	void Break();
};

#endif