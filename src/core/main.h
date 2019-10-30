#pragma once

#include <map>
#include <Windows.h>
#include <vector>
#include <string>

class Main
{
private:
	
public:
	HMODULE module;

private:
	void SetConsole(bool open);

	void VanillaRideFix();

	void VanillaGliderFix();

	void PatchRegionLock();

public:
	static Main& GetInstance();

	void Start();

};




































