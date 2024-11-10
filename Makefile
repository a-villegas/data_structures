LL_DIR  := ../linkedlist
QUE_DIR := ../queue
STAK_DIR:= ../stack

all: llist queue stack

llist:
	$(MAKE) -C $(LL_DIR) 

queue:
	$(MAKE) -C $(QUE_DIR)

stack:
	$(MAKE) -C $(STAK_DIR)

clean: clist cqueue cstack

clist:
	$(MAKE) -C $(LL_DIR) clean
cqueue:
	$(MAKE) -C $(QUE_DIR) clean
cstack:
	$(MAKE) -C $(STAK_DIR) clean
