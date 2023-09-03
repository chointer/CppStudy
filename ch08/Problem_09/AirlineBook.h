#pragma once
#include <iostream>
#include "Schedule.h"

class AirlineBook
{
	const int N_schedules = 3;     // vector�� �Ẹ�� �ʾƼ� ������ �����. 3���� ����
	Schedule* schedules;
	int get_schedule_number();
public:
	AirlineBook() {
		schedules = new Schedule[N_schedules]{ Schedule("07:00", 8), Schedule("12:00", 8), Schedule("17:00", 8) };
	}
	~AirlineBook() { delete [] schedules; }
	bool reserve();
	bool cancel();
	void show();
};