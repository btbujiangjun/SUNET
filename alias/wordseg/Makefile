MACRO=DEBUGALL
CFLAGS+=-pg -w -D$(MACRO)
SRCPATH=.
INCLUDEPATH=../gtest/include ../crf/CRF++-0.53 ../../log ../../config
LIB=../gtest 
CRF_LIB=../crf/CRF++-0.53/libs
ALIAS_OBJ=../../log/sub_log.o ../../config/config.o
TARGET=test_wordseg
SOURCES=$(wildcard $(SRCPATH)/*.cpp)

#OBJS := $(patsubst %.cpp, %.o,$(SOURCES))
OBJS=$(SOURCES:.cpp=.o)
CFLAGS+=$(foreach dir, $(INCLUDEPATH), -I$(dir))

all: build
	@echo "Build Done!"
	@echo $(CFLAGS)
clean:
	$(RM) $(OBJS) $(TARGET)

build:
	g++ -c ${CFLAGS} ${SOURCES}
	g++ ${CFLAGS} -o ${TARGET} ${OBJS} ${ALIAS_OBJ} -L${LIB} -lgtest ../crf/CRF++-0.53/libs/libcrfpp.a -lpthread

