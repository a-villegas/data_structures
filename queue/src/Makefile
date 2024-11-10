GCC         :=g++
CFLAGS      :=-std=c++17 -Wall -Werror -pedantic
DBGFLAGS    :=-g
LDFLAGS     :=
DEST_DEBUG  := ../build/debug
DEST_RELEASE:= ../build/release
INCLUDE_DIR := ../include
OBJECTS     :=arrqueue

all: rls dbg

rls:
	$(GCC) $(CFLAGS) $(OBJECTS).cpp -o $(OBJECTS).o
	mv $(OBJECTS).o $(DEST_RELEASE)

dbg:
	$(GCC) $(CFLAGS) $(OBJECTS).cpp $(DBGFLAGS) -o $(OBJECTS).o
	mv $(OBJECTS).o $(DEST_DEBUG)

clean:
	[ -f $(DEST_RELEASE)/*.o ] && rm -rf $(DEST_RELEASE)/* || true

	[ -f $(DEST_DEBUG)/*.o ] && rm -rf $(DEST_DEBUG)/* || true 
