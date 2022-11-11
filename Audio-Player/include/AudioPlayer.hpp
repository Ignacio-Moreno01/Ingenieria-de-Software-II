#ifndef AUDIOPLAYER_H
#define AUDIOPLAYER_H
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
using namespace std;

class AudioPlayer
{
     private:
          bool isOpen;
          bool isPlaying;
          bool isStopping;
          float volume;
          bool isWind;
          bool isRewind;
          bool isChangeSong;

     public:
          AudioPlayer();
          ~AudioPlayer();

          bool open(string filePath);
          void play();
          void stop();
          void setVolume(float value);
          void wind();
          void rewind();
          void changeSong();

          bool getOpen();
          bool getPlay();
          bool getStop();
          float getVolume();
          bool getWind();
          bool getRewind();
          bool getChangeSong();
};

#endif