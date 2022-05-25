# CC:=g++
# XXX:=cc
CC:=gcc
XXX:=c
SRCS:=$(wildcard *.$(XXX))
EXES:=$(SRCS:%.$(XXX)=%)
all:$(EXES)
%:%.$(XXX)
	$(CC) $^ -o $@
#	$(CC) $^ -o $@ -g
#	$(CC) $^ -o $@ -lpthread
#	$(CC) $^ -o $@ -llog4cpp -lpthread
#  	$(CC) $^ -o $@ -lpthread -lcrypt -lmysqlclient
#	$(CC) $^ -o $@ -llog4cpp -lpthread -lcrypt -lmysqlclient
#	$(CC) $^ -o $@ -lhiredis
.PHONY:clean rebuild
clean:
	$(RM) $(EXES)
rebuild: clean all
