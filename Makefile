# makefile for liblinAlg.a

include config.mak
include Funs.mak

#MAKE = gmake

SRCDIR = src
OBJDIR = obj
BINDIR = bin
TARGET = lib/libTomFun.a
INCDIR = inc

#CCFILES1 = $(wildcard $(SRCDIR)/*/*.cc)
#TESTFILES = $(CCFILES1)
#CCFILES = $(filter-out %Test.cc,$(CCFILES1))
CCFILES = $(FUNCCS)
OBJS = $(addprefix $(OBJDIR)/,$(notdir $(CCFILES:.cc=.o)))
#($OBJSFROM:$(OBJSFROM):$(SRCDIR)/$(OBJSFROM))

INCLDIRS = -I$(SRCDIR) -I$(INCDIR)

#CC = g++

#build the library
$(TARGET): $(OBJS)
	ar r $@ $?
	chmod 755 $@
	ranlib $@
	#Remember to run make install with permissions on $(prefix)

#.cc.o:
$(OBJDIR)/%.o: $(SRCDIR)/%/*.cc
	$(CC) $(CCFLAGS) -c -o $@ $(filter-out %Test.cc,$^) $(INCLDIRS)

# install the library
install: $(TARGET)
	cp $(TARGET) $(prefix)/lib/
	cp $(SRCDIR)/*/*.h $(INCDIR)/*.h $(prefix)/include/
	#Remember to make sure $(prefix)/lib is in /etc/ld.so.conf
	#And to run ldconfig as root.

all: config.mak $(OBJS) $(TARGET)

copyheaders:
	cp $(SRCDIR)/*/*.h $(prefix)/include

mrproper: clean
	rm -f config.h config.mak

clean:	
	rm -rf */*.o






