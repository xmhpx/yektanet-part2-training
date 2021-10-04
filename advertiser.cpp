#import "base_model.cpp"

#include <bits/stdc++.h>

using namespace std;

class Advertiser : public BaseAdvertising{
private:
    static int totalClicks;
    int id;
    int clicks = 0, views = 0;
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
        //todo
        return "TODO Adv HELP";
    }

    static int getTotalClicks(){
        return totalClicks;
    }

    int getClicks(){
        return clicks;
    }

    int getViews(){
        return views;
    }

    void incClicks(){
        clicks++;
        totalClicks++;
        return;
    }

    void incViews(){
        views++;
        return;
    }

    void describeMe(){
        //todo
        cout << "TODO Desc Adv" << endl;
    }
};

int Advertiser::totalClicks = 0;

Advertiser::Advertiser(int _id, string _name){
    this->name = _name;
    this->id = _id;
}
