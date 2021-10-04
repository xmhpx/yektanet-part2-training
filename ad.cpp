#import "advertiser.cpp"
#import "base_model.cpp"

#include <bits/stdc++.h>

using namespace std;

class Ad : public BaseAdvertising{
private:
    int id;
    string title, imgUrl, link;
    int clicks = 0, views = 0;
    Advertiser *adv;

public:
    Ad(int _id, string _title, string _imgUrl, string _link, Advertiser *_adv);

    string getTitle(){
        return title;
    }

    void setTitle(string _title){
        title = _title;
        return;
    }

    string getImgUrl(){
        return imgUrl;
    }

    void setImgUrl(string _imgUrl){
        imgUrl = _imgUrl;
        return;
    }

    string getLink(){
        return link;
    }

    void setLink(string _link){
        link = _link;
        return;
    }

    void setAdvertiser(Advertiser *_adv){
        adv = _adv;
        return;
    }

    void describeMe(){
        //todo
        cout << "TODO Desc Ad" << endl;
    }

    int getClicks(){
        return clicks;
    }

    int getViews(){
        return views;
    }

    void incClicks(){
        clicks++;
        adv->incClicks();
        return;
    }

    void incViews(){
        views++;
        adv->incViews();
        return;
    }
};

Ad::Ad(int _id, string _title, string _imgUrl, string _link, Advertiser* _adv){
    this->id = _id;
    this->title = _title;
    this->imgUrl = _imgUrl;
    this->link = _link;
    this->adv = _adv;
}

