#include "AirlineBook.h"

int AirlineBook::get_schedule_number() {
	int schedule_number;

	for (int i = 0; i < N_schedules; i++) {
		cout << '[' << i + 1 << "] " << schedules[i].get_name();
		if (i != N_schedules - 1) cout << ", ";
	}
	cout << " >> ";
	cin >> schedule_number;
	return schedule_number-1;
}

bool AirlineBook::reserve() {
	int schedule_number = get_schedule_number();
	schedules[schedule_number].show();
	return schedules[schedule_number].reserve();
}

bool AirlineBook::cancel() {
	int schedule_number = get_schedule_number();
	schedules[schedule_number].show();
	return schedules[schedule_number].cancel();
}
void AirlineBook::show() {
	for (int i = 0; i < N_schedules; i++) {
		schedules[i].show();
	}
}