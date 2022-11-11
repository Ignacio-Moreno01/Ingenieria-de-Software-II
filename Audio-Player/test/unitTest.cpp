#define CATCH_CONFIG_MAIN
#include <iostream>
#include <fstream>
#include <catch.hpp>
#include <AudioPlayer.hpp>
using namespace std;

TEST_CASE( "Audio instance create test", "[AudioPlayer]" ) 
{
    //Arrange
    AudioPlayer* player;

    //Act
    player = new AudioPlayer();
    bool isAudioPlayer = ( dynamic_cast<AudioPlayer*> (player) != nullptr );
    
    //Assert
    REQUIRE( isAudioPlayer == true );
}

TEST_CASE( "Audio opening test", "[AudioPlayer]" )
{
    //Arrange
    string filePath = "../audio/song.ogg";
    AudioPlayer player;

    //Act
    player.open(filePath);

    //Assert
    REQUIRE( player.getOpen() == true );
}

TEST_CASE( "Audio playback test", "[AudioPlayer]" ) 
{
    //Arrange
    string filePath = "../audio/song.ogg";
    AudioPlayer player;
    player.open(filePath);

    //Act
    player.play();
    
    //Assert
    REQUIRE( player.getPlay() == true );
}

TEST_CASE( "Audio stop test", "[AudioPlayer]" ) 
{
    //Arrange
    string filePath = "../audio/song.ogg";
    AudioPlayer player;
    player.open(filePath);
    player.play();

    //Act
    player.stop();
    
    //Assert
    REQUIRE( player.getStop() == true );
}

TEST_CASE( "Audio volume test", "[AudioPlayer]" ) 
{
    //Arrange
    AudioPlayer player;

    //Act
    player.setVolume(6);
    
    //Assert
    REQUIRE( player.getVolume() == 6 );
}

TEST_CASE( "Audio wind test", "[AudioPlayer]" )
{
    //Arrange
    string filePath = "../audio/song.ogg";
    AudioPlayer player;
    player.open(filePath);
    player.play();

    //Act
    player.wind();

    //Assert
    REQUIRE( player.getWind() == true );
}

TEST_CASE( "Audio rewind test", "[AudioPlayer]" )
{
    //Arrange
    string filePath = "../audio/song.ogg";
    AudioPlayer player;
    player.open(filePath);
    player.play();

    //Act
    player.rewind();

    //Assert
    REQUIRE( player.getRewind() == true );
}

TEST_CASE( "Audio switch test", "[AudioPlayer]" )
{
    //Arrange
    string filePath = "../audio/song.ogg";
    AudioPlayer player;
    player.open(filePath);
    player.play();

    //Act
    player.changeSong();

    //Assert
    REQUIRE( player.getChangeSong() == true );
}