all: CSSR

obj=Main.o Hash.o States.o AllStates.o ParseTree.o G_Array.o Hash2.o	\
 Machine.o TransTable.o Test.o

hfiles=AllStates.h Common.h G_Array.h Hash2.h Hash.h Machine.h Main.h	\
 ParseTree.h States.h Test.h TransTable.h

Main: $(obj)
CSSR: CC=$(CXX)
CSSR: Main
	cp Main CSSR
	chmod +x CSSR

TAGS: $(obj:.o=.cpp) $(hfiles)
	etags $^

clean:
	-rm -f $(obj) Main CSSR

.PHONY: all clean
