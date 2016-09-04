//
//  tv.h
//  友元，异常和其他
//
//  Created by XiongGuang on 16/8/22.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#ifndef tv_h
#define tv_h
class Tv
{
public:
    friend class Remote;
    
    enum{OFF,ON};
    enum{MinVal,MaxVal=20};
    enum{Antenna,Cable};
    enum{TV,DVD};
    
    Tv(int s=OFF,int mc=125):state(s),volume(5),
    maxchannel(mc),channel(2),mode(Cable),input(TV){}
    
    void onoff(){state=(state==ON)?OFF:ON;}
    bool ison() const {return state==ON;}
    
    bool volup();
    bool voldown();
    void chanup();
    void chandown();
    void set_mode(){mode=(mode==Antenna)?Cable:Antenna;}
    void set_input(){input=(input==TV)? DVD :TV;}
    void settings()const ;
    
private:
    int state;
    int volume;
    int maxchannel;
    int channel;
    int mode;
    int input;
};

class Remote
{
private:
    int mode;
public:
    Remote(int m=Tv::TV):mode(m){}
    
    bool volup(Tv &t){return t.volup();}
    bool voldown(Tv &t){return t.voldown();}
    void onoff(Tv &t){t.onoff();}
    void chanup(Tv &t){t.chanup();}
    void chandown(Tv &t){t.chandown();}
    void set_chan(Tv &t,int c){t.channel=c;}
    void set_mode(Tv &t){t.set_mode();}
    void set_input(Tv &t){t.set_input();}
    
};
#endif /* tv_h */
