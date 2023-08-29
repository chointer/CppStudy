#pragma once

class UpAndDownGame
{
public:
	static int answer, lim_up, lim_down, turn;
	UpAndDownGame() : UpAndDownGame("Kim Insu", "Oh Eunkyung") { };
	UpAndDownGame(const char name1[], const char name2[]);
};