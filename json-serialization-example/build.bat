:: Compilo código objeto
g++ -Wall -std=c++11 -c main.cpp -o main.o -I.\include

:: Compilo el Binario
g++ -Wall -std=c++11 main.o -o .\main.exe -I.\include 

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
:: main.exe