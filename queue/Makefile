BINARY_DIR := ./bin
DOCS_DIR   := ./doc
SOURCE_DIR := ./src
OBJECT     := arrqueue

all: rls dbg

rls:
	$(MAKE) -C $(SOURCE_DIR) rls

dbg:
	$(MAKE) -C $(SOURCE_DIR) dbg

run:
	$(BINARY_DIR)/$(OBJECT).o

clean:
	$(MAKE) -C $(SOURCE_DIR) clean

