#pragma once
#include <iostream>
#include <string>
#include "Seat.h"
using namespace std;

class Schedule
{
	string schedule_name;
	int N_seats;
	Seat* seats;
public:
	Schedule(string name, int N_seats) : N_seats(N_seats), schedule_name(name) {
		seats = new Seat[N_seats];
	}
	~Schedule() { delete [] seats; }
	string get_name() { return schedule_name; }
	bool reserve();
	bool cancel();
	void show();
};