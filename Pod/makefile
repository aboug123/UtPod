final: UtPodDriver.o UtPod.o song.o
	g++ -std=c++11 -o test UtPodDriver.o UtPod.o song.o
driver: UtPodDriver.cpp UtPod.h Song.h
	g++ -c UtPodDriver.cpp
UtPod.o: UtPod.cpp UtPod.h Song.h
	g++ -std=c++11 -c UtPod.cpp
song.o: Song.cpp Song.h
	g++ -std=c++11 -o song.o -c Song.cpp