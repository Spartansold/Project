CFLAGS = -Wall

all: fileio.o utils.o proj_refractor_file.o
		g++ $(CFLAGS) -o myexe fileio.o utils.o proj_refractor_file.o

fileio.o: ../fileio/fileio.cpp ../includes/fileio.h ../includes/constants.h
		g++ $(CFLAGS) -c ../fileio/fileio.cpp

utils.o: ../utils/utils.cpp ../includes/utils.h ../includes/constants.h
		g++ $(CFLAGS) -c ../utils/utils.cpp
		
proj_refractor_file.o: ../src/proj_refractor_file.cpp ../includes/fileio.h ../includes/constants.h ../includes/utils.h
		g++ $(CFLAGS) -c ../src/proj_refractor_file.cpp

clean: 
		rm -f *.o myexe