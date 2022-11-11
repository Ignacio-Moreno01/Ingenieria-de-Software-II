:: Compilo código objeto
g++ -Wall -std=c++11 -c .\src/AudioPlayer.cpp -o AudioPlayer.o -I.\include
g++ -Wall -std=c++11 -c main.cpp -o main.o -I.\include

:: Compilo el Binario
g++ -Wall -std=c++11 AudioPlayer.o main.o -o .\Playback.exe -I.\include 

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
Playback.exe