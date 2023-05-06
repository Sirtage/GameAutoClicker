#pragma once
#include <iostream>
#include <string>

class KeyBlock {
public:
	long long key;
	int bind;
	int del;
	int rndu;
	int rndd;

	KeyBlock() {};
	KeyBlock(long long key, int bindc, int del, int rndu, int rndd) {
		this->key = key;
		this->del = del;
		this->rndu = rndu;
		this->rndd = rndd;
		this->bind = bindc;
	}

	static KeyBlock deform(std::string id, std::string str) {
		int buf[4] = {1000};
		std::string cbuf;
		int c = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == ':') {
				buf[c] = std::stoi(cbuf);
				c++;
			}
			else {
				cbuf += str[i];
			}
		}
		return KeyBlock(std::stoll(id), buf[0], buf[1], buf[2], buf[3]);
	}
};