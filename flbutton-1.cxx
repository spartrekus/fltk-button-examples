
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>


void copy_cb( Fl_Widget*, void* );  
void close_cb( Fl_Widget*, void* ); 
void make_window();

int main( int argc, char* argv[] )
{
   make_window();
   return Fl::run();
}

void make_window()
{
   Fl_Window* win= new Fl_Window(600,250, "C++ FLTK Buttons Tutorial - Example");

   win->begin();		
	  Fl_Button*  copy = new Fl_Button( 350,  20,  70, 30, "C&at" ); //child 0
	  Fl_Button*  close = new Fl_Button( 430, 25,  70, 30, "&Quit" );   //child 1

	  Fl_Input*   inp = new Fl_Input( 90, 20, 140, 30, "String" );		 //child 2
	  //Fl_Output*	out = new Fl_Output( 200, 0, 140, 30, "Out" );	//child 3

   win->end();

   copy->callback( (Fl_Callback*) copy_cb );
   close->callback( (Fl_Callback*) close_cb);

   win->show();
 }

void copy_cb( Fl_Widget* obj , void* )
{
   Fl_Button* button=(Fl_Button*)obj;
   const char* temp;   
   temp = (  (Fl_Input*)(button->parent()->child(2))  )->value();
   //(  (Fl_Output*)(button->parent()->child(3))  )->value(temp);
   printf( " -%s- \n",   temp  );
   system( " xterm & " );
}

void close_cb( Fl_Widget* obj, void*)
{
   exit(0);
}




