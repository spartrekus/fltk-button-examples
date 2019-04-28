

all:
	 g++ -L/usr/local/lib -lfltk -lXext -lX11 -lm  flbutton-1.cxx -o but1
	 g++ -L/usr/local/lib -lfltk -lXext -lX11 -lm  flbutton-2.cxx -o but2


