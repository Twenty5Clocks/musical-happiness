#ifndef DEF_CPLAYER_H
#define DEF_CPLAYER_H

#include <string>

class CPlayer{

    //FUNCTIONS
    CPlayer(void);
    void CPlayer::ChangeStat(int stat, bool increase, int amount);

    //NAME
    std::string firstName;
    std::string middleName;
    std::string lastName;

    //LOCATION
    std::string city;
    std::string state;
    std::string school;
    std::string mascot;

    //FAVORITES
    std::string movie;
    std::string band;
    std::string candy;
    std::string food;
    std::string hobby;
    std::string subject;

    //PERSONAL ATTRIBUTES
    int birthday;
    std::string bats;
    std::string throws;

    //OVERALL RATINGS
    int speed;
    int stamina;
    int exhaustion;
    int likeability;
    int curiosity;  //ABILITY TO LEARN
    int leadership;
    std::string personality;


    //BATTING RATINGS
    std::string type; //contact/power/OBP
    int bunt;

    //RIGHT HAND
    int rEye;
    int rPower;
    int rContact;

    //LEFT HAND
    int lEye;
    int lPower;
    int lContact;

    //PITCHING RATINGS
    int stuff;
    int movement;
    int velocity;
    int control;
    

    //PITCHES KNOWN
    bool fourSeam;
    bool twoSeam;
    bool slider;
    bool curveball;
    bool changeup;
    bool cutter;
    bool euphus;
    bool forkball;
    bool knuckleball;
    bool screwball;
    bool sinker;
    bool splitter;
    bool knucklecurve;

    //BASERUNNING
    int baserunning;
    int awarenessBaseRunning;

    //PRIMARY POSITION
    bool firstBase;
    bool secondBase;
    bool thirdBase;
    bool shortStop;
    bool rightField;
    bool leftField;
    bool centerField;
    bool catcher;
    bool startingPitcher;
    bool reliever;
    bool closer;

    //SECONDARY POSITIONS
    bool firstBaseSecondary;
    bool secondBaseSecondary;
    bool thirdBaseSecondary;
    bool shortStopSecondary;
    bool rightFieldSecondary;
    bool leftFieldSecondary;
    bool centerFieldSecondary;
    bool catcherSecondary;
    bool startingPitcherSecondary;
    bool relieverSecondary;
    bool closerSecondary;

    //POSITION RATING
    int firstBase;
    int secondBase;
    int thirdBase;
    int shortStop;
    int rightField;
    int leftField;
    int centerField;
    int catcher;
    int startingPitcher;
    int reliever;
    int closer;

    //DEFENSE
    int range;
    int awarenessDefense;
    int positioning;
    int preperation;

    

};




#endif
