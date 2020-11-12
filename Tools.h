#pragma once
class Tools{
public:
	Tools();
	~Tools();

	enum Options { Yes = 1, No };
	void InputError(char err);
	void ClearScreen();
	int CloseApplication();
};

