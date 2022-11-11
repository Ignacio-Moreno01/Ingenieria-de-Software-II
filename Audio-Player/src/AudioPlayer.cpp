#include <AudioPlayer.hpp>

AudioPlayer::AudioPlayer() 
{ 
    isOpen = false; 
    isPlaying = false;
    setVolume(10);
}

AudioPlayer::~AudioPlayer(){}

bool AudioPlayer::open(string filePath)
{
    ifstream file(filePath.c_str());
    if(file.good())isOpen = true;
}

bool AudioPlayer::getOpen()
{
    return isOpen;
}

void AudioPlayer::play()
{
    if(isOpen) isPlaying = true;
}

bool AudioPlayer::getPlay()
{
    return isPlaying;
}

void AudioPlayer::stop()
{
    if(isPlaying) isPlaying = false;
}

bool AudioPlayer::getStop()
{
    return isStopping;
}

void AudioPlayer::setVolume(float value)
{
    volume = value;
}

float AudioPlayer::getVolume()
{
    return volume;
}

void AudioPlayer::wind()
{
    if(isPlaying) isWind = true;
}

bool AudioPlayer::getWind()
{
    return isWind;
}

void AudioPlayer::rewind()
{
    if(isPlaying) isRewind = true;
}

bool AudioPlayer::getRewind()
{
    return isRewind;
}

void AudioPlayer::changeSong()
{
    if(isPlaying) isChangeSong = true;
}

bool AudioPlayer::getChangeSong()
{
    return isChangeSong;
}