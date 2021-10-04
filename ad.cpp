#import "advertiser.cpp"
#import "base_model.cpp"

#include <bits/stdc++.h>

using namespace std;

class Ad : public BaseAdvertising{
private:
    string title, imgUrl, link;
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
        cout << "I'm the Ad class, use me to control the ads' info\ngetTitle() returns the title as a string\nsetTitle(string new_title) changes the title\n\ngetImgUrl() returns the img URL as a string\nsetImgUrl(string new_img_url) changes the img URL\n\ngetLink() returns the link as a string\nsetLink(string new_link) changes the link\n\nsetAdvertiser() changes the advertiser\n\nincViews() increases the number of views(also applies it to the advertiser)\nintClicks() increases the number of clicks(also applies it to the advertiser)\n\ngetClicks() returns the number of clicks\ngetViews() returns the number of views\n" << endl;
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

