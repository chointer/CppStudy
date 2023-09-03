#include "Schedule.h"
bool Schedule::reserve() {
	int seat_number;

	cout << "Seat Number\t>> ";
	cin >> seat_number;
	
	return seats[seat_number - 1].reserve();
}

bool Schedule::cancel() {
	int seat_number;

	cout << "Seat Number\t>> ";
	cin >> seat_number;
	
	return seats[seat_number - 1].cancel();
}

void Schedule::show() {
	cout << schedule_name << ":\t";
	for (int i = 0; i < N_seats; i++) {
		seats[i].show();
	}
	cout << endl;
}