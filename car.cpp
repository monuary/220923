//Ŭ���� �ȿ��� ����� �Լ��� �ۿ��� ������ �� �ִ�.
//Ŭ���� �ȿ��� ������ �������� �����ڸ� �������� ������, ��� private�� ����ȴ�.

//����ü�� �������� �����ڸ� �̿��� �� �ִ�.
//����ü���� �������� �����ڰ� ���� ��, public���� ����ȴ�.

//�������� �����ڿ��� �ݷ�(:)�� �ٴµ�, �̴� ���̺��� �ǹ��Ѵ�. switch���� case�� �̿� ���Ѵ�.
//���̺��� ��ġ������ �˸���.

//switch(����)
//{
//case a :
//	���;
//	break;	//	break�� ������ �Ʒ��� ��� ��ɾ ����. case�� ����� �������� ���� ����. ����, switch���� �ݺ����� �������� �� �� �ִ�.
//default :	//	����� ���� ������ default�� ���� ����
//	���;

//����ü�� Ŭ������ ������ �ƴ� ��ü��� ǥ���� ����Ѵ�.

//Ŭ������ ������ �������, �Լ��� ����Լ���� �Ѵ�.
//Ŭ������ ���� : Ŭ������ �����ϴ� �ּ����� �������� Ʋ
//Ŭ������ ���� : �ڼ��� �Լ��� ����

#include<iostream>
#include<cstring>
#include"���.h"	//	�� ���Ͽ��� ���.h���� ������ �Լ��� �����Ѵ�. ���� ����� �Լ��� ���ǿ� �ʿ��� ����̴�.
using namespace std;

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::Show()
{
	cout << "������ID: " << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
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