#import "base_model.cpp"

#include <bits/stdc++.h>

using namespace std;

class Advertiser : public BaseAdvertising{
private:
    static int totalClicks;
    string name;

public:
    Advertiser(int _id, string _name);

    string getName(){
        return name;
    }

    void setName(string _name){
        name = _name;
        return;
    }

    static string help(){
        return "Advertiser::help()\n";
    }

    static int getTotalClicks(){
        return totalClicks;
    }

    void incClicks(){
        clicks++;
        totalClicks++;
        return;
    }

    void describeMe(){
        cout << "I'm the Advertiser class, use me to control the advertisers' info\ngetName() returns the name as a string\nsetName(string new_name) changes the name\n\nhelp() doesn't do anything to be honest\n\ngetTotalClicks() returns sum of the number of clicks over all advertisers\n\nincViews() increases the number of views\nintClicks() increases the number of clicks(also applies it to total clicks)\n\ngetClicks() returns the number of clicks\ngetViews() returns the number of views\n" << endl;
    }
};

int Advertiser::totalClicks = 0;

Advertiser::Advertiser(int _id, string _name){
    this->name = _name;
    this->id = _id;
}
