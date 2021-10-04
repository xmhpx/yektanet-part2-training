#include <bits/stdc++.h>

using namespace std;

class BaseAdvertising{
protected:
    int id;
    int clicks = 0, views = 0;
    //TODO

public:
    BaseAdvertising(){
        //TODO
    }
    
    int getClicks(){
        return clicks;
    }

    int getViews(){
        return views;
    }
    
    virtual void incClicks(){
        clicks++;
        return;
    }

    virtual void incViews(){
        views++;
        return;
    }

    virtual void describeMe(){
        //TODO
        cout << "TODO Desc BaseAdvertising" << endl;
    }
};

