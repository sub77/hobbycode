#############################################################################
# Makefile for building: serial-io
# Generated by qmake (2.01a) (Qt 4.3.3) on: Mi Jul 9 22:11:22 2008
# Project:  serial-io.pro
# Template: app
# Command: /usr/bin/qmake -unix -o Makefile serial-io.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_XML_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -march=athlon-xp -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O0 -march=athlon-xp -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4/QtXml -I/usr/include/qt4 -I. -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib/qt4 -lserial -lQtXml -L/usr/lib/qt4 -pthread -pthread -lQtGui -L/usr/lib -lpng -lSM -lICE -pthread -pthread -lXrender -lXrandr -lXfixes -lXcursor -lfreetype -lfontconfig -lXext -lX11 -lQtCore -lz -lm -pthread -lgthread-2.0 -lrt -lglib-2.0 -ldl -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = DeviceDialog.cpp \
		main.cpp \
		mainwindow.cpp \
		SerialReceiveThread.cpp \
		EditBufferDialog.cpp \
		EditEventDialog.cpp \
		ValueBuffer.cpp \
		Event.cpp \
		InitialValueDialog.cpp \
		OptionsDlg.cpp \
		RxTxValue.cpp \
		SaveBufferDlg.cpp \
		Dialog.cpp \
		EditDialogDialog.cpp \
		Variable.cpp \
		Representation.cpp \
		VariableDialog.cpp \
		LongLongIntValidator.cpp moc_DeviceDialog.cpp \
		moc_mainwindow.cpp \
		moc_SerialReceiveThread.cpp \
		moc_EditBufferDialog.cpp \
		moc_EditEventDialog.cpp \
		moc_InitialValueDialog.cpp \
		moc_OptionsDlg.cpp \
		moc_SaveBufferDlg.cpp \
		moc_EditDialogDialog.cpp \
		moc_VariableDialog.cpp \
		moc_LongLongIntValidator.cpp \
		qrc_siom.cpp
OBJECTS       = DeviceDialog.o \
		main.o \
		mainwindow.o \
		SerialReceiveThread.o \
		EditBufferDialog.o \
		EditEventDialog.o \
		ValueBuffer.o \
		Event.o \
		InitialValueDialog.o \
		OptionsDlg.o \
		RxTxValue.o \
		SaveBufferDlg.o \
		Dialog.o \
		EditDialogDialog.o \
		Variable.o \
		Representation.o \
		VariableDialog.o \
		LongLongIntValidator.o \
		moc_DeviceDialog.o \
		moc_mainwindow.o \
		moc_SerialReceiveThread.o \
		moc_EditBufferDialog.o \
		moc_EditEventDialog.o \
		moc_InitialValueDialog.o \
		moc_OptionsDlg.o \
		moc_SaveBufferDlg.o \
		moc_EditDialogDialog.o \
		moc_VariableDialog.o \
		moc_LongLongIntValidator.o \
		qrc_siom.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		serial-io.pro
QMAKE_TARGET  = serial-io
DESTDIR       = 
TARGET        = serial-io

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: serial-io.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/qt4/libQtXml.prl \
		/usr/lib/qt4/libQtCore.prl \
		/usr/lib/qt4/libQtGui.prl
	$(QMAKE) -unix -o Makefile serial-io.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/qt4/libQtXml.prl:
/usr/lib/qt4/libQtCore.prl:
/usr/lib/qt4/libQtGui.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile serial-io.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/serial-io1.0.0 || $(MKDIR) .tmp/serial-io1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/serial-io1.0.0/ && $(COPY_FILE) --parents DeviceDialog.h mainwindow.h SerialReceiveThread.h EditBufferDialog.h EditEventDialog.h ValueBuffer.h Event.h InitialValueDialog.h OptionsDlg.h RxTxValue.h SaveBufferDlg.h Dialog.h EditDialogDialog.h Variable.h Representation.h VariableDialog.h LongLongIntValidator.h .tmp/serial-io1.0.0/ && $(COPY_FILE) --parents siom.qrc .tmp/serial-io1.0.0/ && $(COPY_FILE) --parents DeviceDialog.cpp main.cpp mainwindow.cpp SerialReceiveThread.cpp EditBufferDialog.cpp EditEventDialog.cpp ValueBuffer.cpp Event.cpp InitialValueDialog.cpp OptionsDlg.cpp RxTxValue.cpp SaveBufferDlg.cpp Dialog.cpp EditDialogDialog.cpp Variable.cpp Representation.cpp VariableDialog.cpp LongLongIntValidator.cpp .tmp/serial-io1.0.0/ && $(COPY_FILE) --parents siom_ger.ts .tmp/serial-io1.0.0/ && (cd `dirname .tmp/serial-io1.0.0` && $(TAR) serial-io1.0.0.tar serial-io1.0.0 && $(COMPRESS) serial-io1.0.0.tar) && $(MOVE) `dirname .tmp/serial-io1.0.0`/serial-io1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/serial-io1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_DeviceDialog.cpp moc_mainwindow.cpp moc_SerialReceiveThread.cpp moc_EditBufferDialog.cpp moc_EditEventDialog.cpp moc_InitialValueDialog.cpp moc_OptionsDlg.cpp moc_SaveBufferDlg.cpp moc_EditDialogDialog.cpp moc_VariableDialog.cpp moc_LongLongIntValidator.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_DeviceDialog.cpp moc_mainwindow.cpp moc_SerialReceiveThread.cpp moc_EditBufferDialog.cpp moc_EditEventDialog.cpp moc_InitialValueDialog.cpp moc_OptionsDlg.cpp moc_SaveBufferDlg.cpp moc_EditDialogDialog.cpp moc_VariableDialog.cpp moc_LongLongIntValidator.cpp
moc_DeviceDialog.cpp: DeviceDialog.h
	/usr/bin/moc $(DEFINES) $(INCPATH) DeviceDialog.h -o moc_DeviceDialog.cpp

moc_mainwindow.cpp: SerialReceiveThread.h \
		ValueBuffer.h \
		Event.h \
		Dialog.h \
		Variable.h \
		Representation.h \
		RxTxValue.h \
		mainwindow.h
	/usr/bin/moc $(DEFINES) $(INCPATH) mainwindow.h -o moc_mainwindow.cpp

moc_SerialReceiveThread.cpp: SerialReceiveThread.h
	/usr/bin/moc $(DEFINES) $(INCPATH) SerialReceiveThread.h -o moc_SerialReceiveThread.cpp

moc_EditBufferDialog.cpp: ValueBuffer.h \
		EditBufferDialog.h
	/usr/bin/moc $(DEFINES) $(INCPATH) EditBufferDialog.h -o moc_EditBufferDialog.cpp

moc_EditEventDialog.cpp: Event.h \
		EditEventDialog.h
	/usr/bin/moc $(DEFINES) $(INCPATH) EditEventDialog.h -o moc_EditEventDialog.cpp

moc_InitialValueDialog.cpp: InitialValueDialog.h
	/usr/bin/moc $(DEFINES) $(INCPATH) InitialValueDialog.h -o moc_InitialValueDialog.cpp

moc_OptionsDlg.cpp: OptionsDlg.h
	/usr/bin/moc $(DEFINES) $(INCPATH) OptionsDlg.h -o moc_OptionsDlg.cpp

moc_SaveBufferDlg.cpp: SaveBufferDlg.h
	/usr/bin/moc $(DEFINES) $(INCPATH) SaveBufferDlg.h -o moc_SaveBufferDlg.cpp

moc_EditDialogDialog.cpp: Dialog.h \
		Variable.h \
		Representation.h \
		EditDialogDialog.h
	/usr/bin/moc $(DEFINES) $(INCPATH) EditDialogDialog.h -o moc_EditDialogDialog.cpp

moc_VariableDialog.cpp: Dialog.h \
		Variable.h \
		Representation.h \
		VariableDialog.h
	/usr/bin/moc $(DEFINES) $(INCPATH) VariableDialog.h -o moc_VariableDialog.cpp

moc_LongLongIntValidator.cpp: LongLongIntValidator.h
	/usr/bin/moc $(DEFINES) $(INCPATH) LongLongIntValidator.h -o moc_LongLongIntValidator.cpp

compiler_rcc_make_all: qrc_siom.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_siom.cpp
qrc_siom.cpp: siom.qrc \
		images/close_con.png \
		images/open_con.png \
		images/save.png
	/usr/bin/rcc -name siom siom.qrc -o qrc_siom.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean 

####### Compile

DeviceDialog.o: DeviceDialog.cpp DeviceDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o DeviceDialog.o DeviceDialog.cpp

main.o: main.cpp mainwindow.h \
		SerialReceiveThread.h \
		ValueBuffer.h \
		Event.h \
		Dialog.h \
		Variable.h \
		Representation.h \
		RxTxValue.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainwindow.o: mainwindow.cpp mainwindow.h \
		SerialReceiveThread.h \
		ValueBuffer.h \
		Event.h \
		Dialog.h \
		Variable.h \
		Representation.h \
		RxTxValue.h \
		DeviceDialog.h \
		EditBufferDialog.h \
		EditEventDialog.h \
		OptionsDlg.h \
		SaveBufferDlg.h \
		EditDialogDialog.h \
		VariableDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o mainwindow.cpp

SerialReceiveThread.o: SerialReceiveThread.cpp SerialReceiveThread.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SerialReceiveThread.o SerialReceiveThread.cpp

EditBufferDialog.o: EditBufferDialog.cpp EditBufferDialog.h \
		ValueBuffer.h \
		InitialValueDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o EditBufferDialog.o EditBufferDialog.cpp

EditEventDialog.o: EditEventDialog.cpp EditEventDialog.h \
		Event.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o EditEventDialog.o EditEventDialog.cpp

ValueBuffer.o: ValueBuffer.cpp ValueBuffer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ValueBuffer.o ValueBuffer.cpp

Event.o: Event.cpp Event.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Event.o Event.cpp

InitialValueDialog.o: InitialValueDialog.cpp InitialValueDialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o InitialValueDialog.o InitialValueDialog.cpp

OptionsDlg.o: OptionsDlg.cpp OptionsDlg.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o OptionsDlg.o OptionsDlg.cpp

RxTxValue.o: RxTxValue.cpp RxTxValue.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o RxTxValue.o RxTxValue.cpp

SaveBufferDlg.o: SaveBufferDlg.cpp SaveBufferDlg.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o SaveBufferDlg.o SaveBufferDlg.cpp

Dialog.o: Dialog.cpp Dialog.h \
		Variable.h \
		Representation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Dialog.o Dialog.cpp

EditDialogDialog.o: EditDialogDialog.cpp EditDialogDialog.h \
		Dialog.h \
		Variable.h \
		Representation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o EditDialogDialog.o EditDialogDialog.cpp

Variable.o: Variable.cpp Variable.h \
		Representation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Variable.o Variable.cpp

Representation.o: Representation.cpp Representation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o Representation.o Representation.cpp

VariableDialog.o: VariableDialog.cpp VariableDialog.h \
		Dialog.h \
		Variable.h \
		Representation.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o VariableDialog.o VariableDialog.cpp

LongLongIntValidator.o: LongLongIntValidator.cpp LongLongIntValidator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o LongLongIntValidator.o LongLongIntValidator.cpp

moc_DeviceDialog.o: moc_DeviceDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_DeviceDialog.o moc_DeviceDialog.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_SerialReceiveThread.o: moc_SerialReceiveThread.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_SerialReceiveThread.o moc_SerialReceiveThread.cpp

moc_EditBufferDialog.o: moc_EditBufferDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_EditBufferDialog.o moc_EditBufferDialog.cpp

moc_EditEventDialog.o: moc_EditEventDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_EditEventDialog.o moc_EditEventDialog.cpp

moc_InitialValueDialog.o: moc_InitialValueDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_InitialValueDialog.o moc_InitialValueDialog.cpp

moc_OptionsDlg.o: moc_OptionsDlg.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_OptionsDlg.o moc_OptionsDlg.cpp

moc_SaveBufferDlg.o: moc_SaveBufferDlg.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_SaveBufferDlg.o moc_SaveBufferDlg.cpp

moc_EditDialogDialog.o: moc_EditDialogDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_EditDialogDialog.o moc_EditDialogDialog.cpp

moc_VariableDialog.o: moc_VariableDialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_VariableDialog.o moc_VariableDialog.cpp

moc_LongLongIntValidator.o: moc_LongLongIntValidator.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_LongLongIntValidator.o moc_LongLongIntValidator.cpp

qrc_siom.o: qrc_siom.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_siom.o qrc_siom.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/usr/bin/ || $(MKDIR) $(INSTALL_ROOT)/usr/bin/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/usr/bin/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/usr/bin/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/usr/bin/ 


install:  install_target  FORCE

uninstall: uninstall_target   FORCE

FORCE:

