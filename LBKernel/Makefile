# Set the appropriate options to match your platform

CXX = g++
CXXFLAGS = -O2 -Wall -I ./ -I $(HOME)/include `fltk-config --cxxflags` -DUSE_GRAPHICS -DTEST_LB_
LDFLAGS = 
LIBS = -L $(HOME)/lib `fltk-config --ldflags` -lmgl -lgraph

APP_NAME = tiny_lb

OBJS = lb_d2q9_mix_main.o lb_d2q9_mix.o lb_d2q9.o lb_d1q3.o lb_kernel.o lb_viewer.o mgl_fltk.o 

$(APP_NAME): $(OBJS)
	$(CXX) $(LDFLAGS) -o $(APP_NAME) $(OBJS) $(LIBS) 
	#ld $(LDFLAGS) -o $(APP_NAME) $(OBJS) $(LIBS)
	#ar rcs $(APP_NAME) $(OBJS) 
	rm -rf *.o

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -rf *.o
	rm -rf *~
	rm -f $(APP_NAME)

.PHONY: clean
