# g++ -I/usr/include/libxml2 HelloWorld.cpp -lxml2 
INCLUDES = -I/usr/include/libxml2
LIBS = -lxml2
TARGET = xpath.out
SRC = xpath.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	g++ $(INCLUDES) $(SRC) $(LIBS) -o $(TARGET)


clean:
	rm $(TARGET) 
