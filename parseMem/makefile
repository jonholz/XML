# g++ -I/usr/include/libxml2 HelloWorld.cpp -lxml2 
INCLUDES = -I/usr/include/libxml2
LIBS = -lxml2
TARGET = parseMem.out

all: $(TARGET)

$(TARGET): parseMem.cpp
	g++ $(INCLUDES) parseMem.cpp $(LIBS) -o $(TARGET)


clean:
	rm $(TARGET) 
