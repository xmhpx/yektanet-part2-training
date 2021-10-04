#include <bits/stdc++.h>

using namespace std;

class BaseAdvertising{
protected:
    int id;
    int clicks = 0, views = 0;

public:
    BaseAdvertising(){
        clicks = 0;
        views = 0;
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
        cout << "I'm the base model for Ad and Advertiser\nincViews() increases the number of views\nincClicks() increases the number of clicks\n\ngetClicks() returns the number of clicks\ngetViews() returns the number of views\n" << endl;
    }
};

