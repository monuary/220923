#ifndef __CAR_H__	//	#ifndef�� #endif�� ��������� �ߺ������� ���� �����̴�.
#define __CAR_H__

namespace CAR_CONST	//	namespace�� class�� ����� ���� ����� �ƴ϶�� ���� �� �� �ִ�.
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