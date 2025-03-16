#pragma once
#include <iostream>
#include <algorithm>
//#include <string>
using namespace std;

class MusicTrack
{
protected:
	string title;
	string artist;
	int duration;
	int year;
public:
	MusicTrack(string t, string a, int d, int y): title(t),artist(a), duration(d),year(y){}//конструктор

	virtual void print() const = 0;

	int getYear() const {return year;}
	int getDurartion() const {return duration;}
	virtual string getType() const = 0;//объявление пустого метода
};

class Rock : public MusicTrack {
	bool hasSolo;
public:
	Rock(string t, string a, int d, int y,bool solo): MusicTrack(t, a, d, y),hasSolo(solo) {}//конструктор
	
	string getType() const override {return "Rock";}

	void print() const override{
		cout << "title: " << title << ", artist: " << artist 
			<< ", duration: " << duration << ", year: " << year
			<<", solo: "<<(hasSolo ? "yes":"no")<<endl;
	}
};

class Pop: public MusicTrack {
	int listeners;
public:
	Pop(string t, string a, int d, int y, int l) : MusicTrack(t, a, d, y), listeners(l){}//конструктор

	string getType() const override { return "Pop"; }

	void print() const override {
		cout << "title: " << title << ", artist: " << artist
			<< ", duration: " << duration << ", year: " << year
			<< ", listeners: " <<listeners << endl;
	}
};

class ClassicalMusic: public MusicTrack {
	string country;
public:
	ClassicalMusic(string t, string a, int d, int y, string c) : MusicTrack(t, a, d, y), country(c){} //конструктор
	string getType() const override { return "Classical Music"; }

	void print() const override {
		cout << "title: " << title << ", artist: " << artist
			<< ", duration: " << duration << ", year: " << year
			<< ", county: " <<country << endl;
	}
};

