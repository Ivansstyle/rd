TARGET=rd


#Compiler settings
QMAKE_CXXFLAGS +=  -Wall -O3 -ffast-math -fopenmp
#QMAKE_LFLAGS += -fopenmp
CONFIG+=C++14

HEADERS += \
    include/queries.hpp

SOURCES += \
    src/main.cpp \
    src/queries.cpp


#Defines
DEFINES += DEBUG

