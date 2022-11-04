#include <iostream>
#include <AudioPlayer.hpp>

int main()
{
    AudioPlayer player;
    player.open("./audio/song.mp3");
    player.open("./audio/song.ogg");
    player.play();
    player.setVolume(6);
    
    cout << "Your song is playing!" << endl;
    cout << "Press enter to stop and exit." << endl;
    cin.ignore(10000, '\n');
    player.stop();
    return EXIT_SUCCESS;
}