CXX=g++
LDFLAGS = -g -lpthread -lnghttp2
INCLUDES = -I. \
	   -I../nghttp2-1.39.2/lib/includes//

LDLIBS = -L../nghttp2-1.39.2/lib/.libs/

CPPFLAGS =  ${INCLUDES}

OBJS = server.o 

all: server

server: $(OBJS)
	$(CXX) -o server  $(OBJS) $(LDLIBS) $(LDFLAGS)

server.o: ./server.cpp
	$(CXX) $(CPPFLAGS) -c server.cpp

clean: 
	$(RM) *.o

distclean: 
	$(RM) *.o \
		$(RM) server
