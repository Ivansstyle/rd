TARGET=rd

OBJECTS_DIR=obj

#Forking depending on OS

QMAKE_CXXFLAGS +=  -Wall -O3 -ffast-math

# Multiplatform : Linux

unix:linux
{
INCLUDEPATH += . /usr/include packages/obj-0.1
#QMAKE_CXXFLAGS += -fopenmp
#LIBS += -lSDL2 -lglut -lGLU -lGL -lpng
DEFINES += __OS_LINUX__

INCLUDEPATH  += /usr/include/
#QMAKE_LFLAGS += -fopenmp
}





# Multiplatform : Mac OsX
macx
{
DEFINES += __OS_OSX__
QMAKE_LFLAGS += -F/Library/Frameworks
#  LIBS += -F/Library/Frameworks -framework SDL2
#  LIBS += -F/Library/Frameworks -framework SDL2_image
#  INCLUDEPATH  += Library/Frameworks/SDL.framework/Headers
#  INCLUDEPATH  += /usr/local/include
#  INCLUDEPATH  += /usr/local/include/SDL2
#  INCLUDEPATH  += /Library/Frameworks/SDL2_image.framework/Headers
}


#Compiler settings

CONFIG+=C++14

HEADERS += \
    include/queries.hpp \
    include/process.hpp \
    include/testprocess.hpp \
    sdf/src/SDFSimpleTracer.hpp

SOURCES += \
    sdf/src/SDFSimpleTracer.cpp \
    src/testprocess.cpp \
    src/process.cpp \
    src/queries.cpp \
    src/main.cpp




#Defines
DEFINES += DEBUG

