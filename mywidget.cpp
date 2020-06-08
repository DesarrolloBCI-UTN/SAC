#include "mywidget.h"
#include <QPushButton>
#include <QLayout>

static const char * rewind_xpm[] = {
"16 16 3 1",
" 	c None",
".	c #FFFFFF",
"+	c #000000",
"................",
".++..........++.",
".++........++++.",
".++......++++++.",
".++....++++++++.",
".++..++++++++++.",
".++++++++++++++.",
".++++++++++++++.",
".++++++++++++++.",
".++++++++++++++.",
".++..++++++++++.",
".++....++++++++.",
".++......++++++.",
".++........++++.",
".++.........+++.",
"................"};

static const char * play_xpm[] = {
"16 16 3 1",
" 	c None",
".	c #FFFFFF",
"+	c #000000",
"................",
".++.............",
".++++...........",
".++++++.........",
".++++++++.......",
".++++++++++.....",
".++++++++++++...",
".+++++++++++++..",
".+++++++++++++..",
".++++++++++++...",
".++++++++++.....",
".++++++++.......",
".++++++.........",
".++++...........",
".+++............",
"................"};

static const char * next_xpm[] = {
"16 16 3 1",
" 	c None",
".	c #FFFFFF",
"+	c #000000",
"................",
".++.....+.......",
".+++....++......",
".++++...+++.....",
".+++++..++++....",
".++++++.+++++...",
".+++++++++++++..",
".++++++++++++++.",
".++++++++++++++.",
".+++++++++++++..",
".++++++.+++++...",
".+++++..++++....",
".++++...+++.....",
".+++....++......",
".++.....+.......",
"................"};

static const char * stop_xpm[] = {
"16 16 3 1",
" 	c None",
".	c #FFFFFF",
"+	c #000000",
"................",
".++++++++++++++.",
".++++++++++++++.",
".++++++++++++++.",
".+++........+++.",
".+++........+++.",
".+++........+++.",
".+++........+++.",
".+++........+++.",
".+++........+++.",
".+++........+++.",
".+++........+++.",
".++++++++++++++.",
".++++++++++++++.",
".++++++++++++++.",
"................"};


myWidget::myWidget(QWidget *parent) : QWidget(parent)
{
   QHBoxLayout *layout = new QHBoxLayout(this);
   layout->setMargin(0);

   QPushButton *rewind = new QPushButton( QPixmap( rewind_xpm ), "vcr_rewind", this);
   layout->addWidget( rewind );
   connect( rewind, SIGNAL(clicked()), SIGNAL(rewind()) );

   QPushButton *play = new QPushButton( QPixmap( play_xpm ), "vcr_play", this);
   layout->addWidget( play );
   connect( play, SIGNAL(clicked()), SIGNAL(play()) );

   QPushButton *next = new QPushButton( QPixmap( next_xpm ), "vcr_next", this);
   layout->addWidget( next );
   connect( next, SIGNAL(clicked()), SIGNAL(next()) );

   QPushButton *stop = new QPushButton( QPixmap( stop_xpm ), "vcr_stop", this);
   layout->addWidget( stop );
   connect( stop, SIGNAL(clicked()), SIGNAL(stop()) );
}

myWidget::~myWidget(void)
{

}
