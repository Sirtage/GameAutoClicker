#include "pch.h"
#include "MainWind.h"
#include <regex>
#include <string>
#include <Windows.h>

bool checkNumb(std::string str) {
	//return std::regex_match(str, std::regex("(\\d)\\w+")) || std::regex_match(str, std::regex("(\\d)"));
	return std::regex_match(str, std::regex("^[0-9]*\\.*[0-9]*$"));
}

System::Void AutoClickerGui::MainWind::Start(System::Object^ sender, System::EventArgs^ e) {
	Random^ rand = gcnew Random();
	this->sets->insert_or_assign("enabled", "1");
	while (std::stoi(this->sets->operator[]("enabled")))
	{
		if (GetAsyncKeyState(std::stoi(this->sets->operator[]("bindLeft")))) {
			size_t delay = std::stoi(this->sets->operator[]("delLeft"));
			if (std::stoi(this->sets->operator[]("rndLeft"))) {
				if (rand->Next() % 2) {
					delay += rand->Next() % (std::stoi(this->sets->operator[]("rnduLeft")) + 1);
				}
				else {
					delay += -(rand->Next() % (std::stoi(this->sets->operator[]("rnddLeft")) + 1));
				}
			}

			mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			if (std::stoi(this->sets->operator[]("dcLeft"))) {
				Sleep(1);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}

			Sleep(delay);
		}
		if (GetAsyncKeyState(std::stoi(this->sets->operator[]("bindRight")))) {
			size_t delay = std::stoi(this->sets->operator[]("delRight"));
			if (std::stoi(this->sets->operator[]("rndRight"))) {
				if (rand->Next() % 2) {
					delay += rand->Next() % std::stoi(this->sets->operator[]("rnduRight")) + 1;
				}
				else {
					delay += -(rand->Next() % std::stoi(this->sets->operator[]("rnddRight")) + 1);
				}
			}

			mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			if (std::stoi(this->sets->operator[]("dcRight"))) {
				Sleep(1);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			}
			Sleep(delay);
		}
		if (GetAsyncKeyState(std::stoi(this->sets->operator[]("bindstop")))) {
			this->sets->insert_or_assign("enabled", "0");
		}
	}
}