# g++ -I/usr/include/libxml2 HelloWorld.cpp -lxml2 
INCLUDES = -I/usr/include/libxml2
LIBS = -lxml2
TARGET = parseMem.out
SRC = parseMem.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	g++ $(INCLUDES) $(SRC) $(LIBS) -o $(TARGET)


clean:
	rm $(TARGET) 
