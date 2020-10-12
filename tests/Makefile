CC = gcc
CPP = g++ -std=c++1y
FLAGS = -Wall -O3 -fPIC 
INCLUDE = ../include/upl


all: 
	$(CC) $(FLAGS) -I $(INCLUDE) -L ../lib libtester.c -o cctester -lupl -lm 
	$(CPP) $(FLAGS) -I $(INCLUDE) -L ../lib libtester.cpp -o cpptester -lupl -lm 
	$(CC) $(FLAGS) -I $(INCLUDE) -L ../lib proc_cpu_util.c -o proc_cpu_util_c -lupl -lm 
	$(CPP) $(FLAGS) -I $(INCLUDE) -L ../lib proc_cpu_util.cpp -o proc_cpu_util_cpp -lupl -lm 
clean:
	rm -rf cpptester cctester proc_cpu_util_c proc_cpu_util_cpp

