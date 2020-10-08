#include<cmath>
#include <windows.h>
#include <GL/glut.h>
#include<time.h>

void ball_thrw(int);
void ball_shot(int);
void audience_cheer_up(int);
void ad(int);
void bat_shot(int);
GLfloat mov1=283; //Umpire hand
GLfloat mov2=0; //Umpire Hand
GLfloat mov3=0; //Umpire Hand


GLint runs=0;
GLfloat b_y_position=-20; //Ball start Position`
GLfloat b_x_position=120; //Ball start Position
time_t t1,t2;

/// audience Left
GLfloat h1_l_x_position=20;
GLfloat h2_l_x_position=20;
GLfloat h1_l_y_position=420;
GLfloat h2_l_y_position=460;



/// audience Right
GLfloat h1_r_x_position=320;
GLfloat h2_r_x_position=350;
GLfloat h1_r_y_position=420;
GLfloat h2_r_y_position=460;


GLfloat bod_y_position=0;
GLfloat bod_x_position=0;

GLfloat Clr1=255;
GLfloat Clr2=235;
GLfloat Clr3=125;

GLfloat Bat_x=0;
GLfloat Bat_y=0;
GLfloat Bat_Bod_x=0;
GLfloat Bat_Bod_y=0;

void ball(void)
{

    glColor4ub(255,255,255,240);

        glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 600; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(600);//get the current angle

        float x = 5 * cosf(theta);//calculate the x component
        float y = 10 * sinf(theta);//calculate the y component

        glVertex2f(b_x_position+x, b_y_position+y);//output vertex


    }
    glEnd();
    glFlush();
}

void audience()
{

        int b1_height=0;
        int b2_height=0;
///Left Side

        ///Body2
        {
        glColor4ub(108,190,230,240);
        for(int bod=0;bod<=120;bod=bod+40)
        {
            glBegin(GL_POLYGON);
            glVertex2d(bod+15+bod_x_position,bod_y_position+b2_height+460);
            glVertex2d(bod+25+bod_x_position,bod_y_position+b2_height+460);
            glVertex2d(bod+25+bod_x_position,bod_y_position+b2_height+432);
            glVertex2d(bod+15+bod_x_position,bod_y_position+b2_height+432);
            glEnd();
            b2_height=10;
        }
        }
        ///Pants2
        {

        glColor4ub(135,146,203,250);
        b2_height=0;
        for(int bod=0;bod<=120;bod=bod+40)
        {
            glBegin(GL_POLYGON);
            glVertex2d(bod+15+bod_x_position,bod_y_position+b2_height+432);
            glVertex2d(bod+25+bod_x_position,bod_y_position+b2_height+432);
            glVertex2d(bod+25+bod_x_position,bod_y_position+b2_height+412);
            glVertex2d(bod+15+bod_x_position,bod_y_position+b2_height+412);
            glEnd();
            b2_height=10;
        }
        }
        ///Pants1
        {
        glColor4ub(135,146,203,250);
        for(int bod=0;bod<=120;bod=bod+40)
        {
            glBegin(GL_POLYGON);
            glVertex2d(bod+15+bod_x_position,bod_y_position+b1_height+395);
            glVertex2d(bod+25+bod_x_position,bod_y_position+b1_height+395);
            glVertex2d(bod+25+bod_x_position,bod_y_position+b1_height+385);
            glVertex2d(bod+15+bod_x_position,bod_y_position+b1_height+385);
            glEnd();
            b1_height=10;
        }
        }
        ///Body1
        {
        glColor4ub(108,190,230,240);
        b1_height=0;
        for(int bod=0;bod<=120;bod=bod+40)
        {
            glBegin(GL_POLYGON);
            glVertex2d(bod+15+bod_x_position,bod_y_position+b1_height+415);
            glVertex2d(bod+25+bod_x_position,bod_y_position+b1_height+415);
            glVertex2d(bod+25+bod_x_position,bod_y_position+b1_height+395);
            glVertex2d(bod+15+bod_x_position,bod_y_position+b1_height+395);
            glEnd();
            b1_height=10;
        }


    }
        ///Heads
        {
    glColor4ub(0,0,0,230);
    int height1=0;
    int height2=0;
    for(int num=0;num<=120;num=num+40)
{

    glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 600; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 5 * cosf(theta);//calculate the x component
        float y = 10 * sinf(theta);//calculate the y component

        glVertex2f(num+h1_l_x_position+x,height1+h1_l_y_position+y);//output vertex

    }
    height1=10;
glEnd();

glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 600; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 5 * cosf(theta);//calculate the x component
        float y = 10 * sinf(theta);//calculate the y component

        glVertex2f(num+h2_l_x_position+x,height2+h2_l_y_position+y);//output vertex

    }
    height2=10;
glEnd();
}
    }
///Right Side

        ///Body2
        {
        b2_height=0;
        glColor4ub(108,190,230,240);
        for(int bod=0;bod<=120;bod=bod+40)
        {
            glBegin(GL_POLYGON);
            glVertex2d(bod+345+bod_x_position,bod_y_position+b2_height+460);
            glVertex2d(bod+355+bod_x_position,bod_y_position+b2_height+460);
            glVertex2d(bod+355+bod_x_position,bod_y_position+b2_height+432);
            glVertex2d(bod+345+bod_x_position,bod_y_position+b2_height+432);
            glEnd();
            b2_height=10;
        }
        }
        ///Pants2
        {
        glColor4ub(135,146,203,250);
        b2_height=0;
        for(int bod=0;bod<=120;bod=bod+40)
        {
            glBegin(GL_POLYGON);
            glVertex2d(bod+345+bod_x_position,bod_y_position+b2_height+432);
            glVertex2d(bod+355+bod_x_position,bod_y_position+b2_height+432);
            glVertex2d(bod+355+bod_x_position,bod_y_position+b2_height+422);
            glVertex2d(bod+345+bod_x_position,bod_y_position+b2_height+422);
            glEnd();
            b2_height=10;
        }
        }
        ///Pants1
        {
        glColor4ub(135,146,203,250);
        b1_height=0;
        for(int bod=0;bod<=120;bod=bod+40)
        {
            glBegin(GL_POLYGON);
            glVertex2d(bod+345+bod_x_position,bod_y_position+b1_height+400);
            glVertex2d(bod+355+bod_x_position,bod_y_position+b1_height+400);
            glVertex2d(bod+355+bod_x_position,bod_y_position+b1_height+385);
            glVertex2d(bod+345+bod_x_position,bod_y_position+b1_height+385);
            glEnd();
            b1_height=10;
        }
        }

        ///Body1
        {
        glColor4ub(108,190,230,240);
        b1_height=0;
        for(int bod=0;bod<=120;bod=bod+40)
        {
            glBegin(GL_POLYGON);
            glVertex2d(bod+345+bod_x_position,bod_y_position+b1_height+415);
            glVertex2d(bod+355+bod_x_position,bod_y_position+b1_height+415);
            glVertex2d(bod+355+bod_x_position,bod_y_position+b1_height+395);
            glVertex2d(bod+345+bod_x_position,bod_y_position+b1_height+395);
            glEnd();
            b1_height=10;
        }


    }
        ///Heads
        {
    glColor4ub(0,0,0,230);
    int height1=0;
    int height2=0;
    for(int num=30;num<=160;num=num+40)
{

    glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 600; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 5 * cosf(theta);//calculate the x component
        float y = 10 * sinf(theta);//calculate the y component

        glVertex2f(num+h1_r_x_position+x,height1+h1_r_y_position+y);//output vertex

    }
    height1=10;
glEnd();
}
for(int num=0;num<=120;num=num+40){
glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 600; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 5 * cosf(theta);//calculate the x component
        float y = 10 * sinf(theta);//calculate the y component

        glVertex2f(num+h2_r_x_position+x,height2+h2_r_y_position+y);//output vertex

    }
    height2=10;
glEnd();
}
}
    }


///Drawing Function
void draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

///Background
    {
    glColor4ub(255,255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(500,0);
    glVertex2d(500,500);
    glVertex2d(0,500);
    glEnd();
    }

///Banner
    {

    glBegin(GL_POLYGON);
    glColor4ub(230,31,26,200);
    glVertex2d(0,320);
    glVertex2d(0,357);
    glVertex2d(50,375);
    glVertex2d(450,375);
    glVertex2d(500,357);
    glVertex2d(500,320);
   glEnd();

   glColor3ub(Clr1,Clr2,Clr3);
   glBegin(GL_POLYGON);
   glVertex2d(55,370);
   glVertex2d(95,370);
   glVertex2d(90,350);
   glVertex2d(50,350);
   glEnd();
   glColor3ub(Clr2,Clr3,Clr1);
   glBegin(GL_POLYGON);
   glVertex2d(135,370);
   glVertex2d(175,370);
   glVertex2d(170,350);
   glVertex2d(130,350);
   glEnd();
   glColor3ub(Clr2,Clr2,Clr1);
   glBegin(GL_POLYGON);
   glVertex2d(215,370);
   glVertex2d(255,370);
   glVertex2d(250,350);
   glVertex2d(210,350);
   glEnd();
   glColor3ub(Clr1,Clr3,Clr3);
   glBegin(GL_POLYGON);
   glVertex2d(290,370);
   glVertex2d(330,370);
   glVertex2d(335,350);
   glVertex2d(285,350);
   glEnd();
   glColor3ub(Clr1,Clr1,Clr3);
   glBegin(GL_POLYGON);
   glVertex2d(370,370);
   glVertex2d(410,370);
   glVertex2d(415,350);
   glVertex2d(365,350);
   glEnd();
    }
///Stadium
{
   for(int st=0;st<120;st=st+40)
{
    glBegin(GL_POLYGON);
    glColor4ub(140,132,115,220);
    glVertex2d(0,380+st);
    glVertex2d(0,400+st);
    glVertex2d(50,415+st);
    glVertex2d(50,397+st);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(50,397+st);
    glVertex2d(50,415+st);
    glVertex2d(450,415+st);
    glVertex2d(450,397+st);
   glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(500,380+st);
    glVertex2d(500,400+st);
    glVertex2d(450,415+st);
    glVertex2d(450,397+st);
    glEnd();
}
for(int st=0;st<120;st=st+40)
{
    glBegin(GL_POLYGON);
    glColor4ub(140,132,115,220);
    glVertex2d(0,365+st);
    glVertex2d(0,375+st);
    glVertex2d(50,390+st);
    glVertex2d(50,380+st);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(50,380+st);
    glVertex2d(50,390+st);
    glVertex2d(450,390+st);
    glVertex2d(450,380+st);
   glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(500,365+st);
    glVertex2d(500,375+st);
    glVertex2d(450,390+st);
    glVertex2d(450,380+st);
    glEnd();
}

    glColor4ub(140,132,115,255);
    glBegin(GL_POLYGON);
    glVertex2d(168,375);
    glVertex2d(302,375);
    glVertex2d(302,500);
    glVertex2d(168,500);
    glEnd();
        glColor4ub(0,0,0,255);
    glBegin(GL_POLYGON);
    glVertex2d(180,395);
    glVertex2d(290,395);
    glVertex2d(290,480);
    glVertex2d(180,480);
    glEnd();
}
///Field
    {

    glColor4ub(66,99,42,255);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(0,320);
    glVertex2d(50,340);
    glVertex2d(450,340);
    glVertex2d(500,320);
    glVertex2d(500,0);
    glEnd();

    int a =0;
    for(int x=0;x<=3;x++)
    {

    glColor4ub(199,214,177,50);
    glBegin(GL_POLYGON);
    glVertex2d(0,a+0);
    glVertex2d(0,a+40);
    glVertex2d(500,a+40);
    glVertex2d(500,0+a);
    glEnd();
    a=a+90;
    }

    int b= 0;
    for (int x=0;x<=6;x++)
    {
    glBegin(GL_POLYGON);
    glVertex2d(50+b,340);
    glVertex2d(70+b,340);
    glVertex2d(70+b,0);
    glVertex2d(50+b,0);
    glEnd();
    b=b+60;
    }
    glBegin(GL_POLYGON);
    glVertex2d(0,320);
    glVertex2d(12,330);
    glVertex2d(12,0);
    glVertex2d(0,0);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(470,335);
    glVertex2d(490,325);
    glVertex2d(490,0);
    glVertex2d(470,0);
    glEnd();
    }
///Pitch
    {
    glBegin(GL_POLYGON);
    glColor4ub(183,142,63,235);
    glVertex2d(180,40);
    glVertex2d(220,285);
    glVertex2d(260,285);
    glVertex2d(300,40);
    glEnd();
    }
///Wicket Keeper
{
    ///Body
    {
    glColor4ub(10,10,10,255);
    glBegin(GL_POLYGON);
    glVertex2d(235,350);
    glVertex2d(245,350);
    glVertex2d(245,320);
    glVertex2d(235,320);
    glEnd();
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 250; i < 500; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = -5 * cosf(theta);//calculate the x component
        float y = -8 * sinf(theta);//calculate the y component

        glVertex2f(240+x,348+y);//output vertex


    }
    glEnd();
    }
    ///Neck
    {
    glColor4ub(198,164,157,255);
    glBegin(GL_POLYGON);
    glVertex2d(238,355);
    glVertex2d(242,355);
    glVertex2d(241,360);
    glVertex2d(239,360);
    glEnd();
    }
    ///Head
    {

    glBegin(GL_TRIANGLE_FAN);
    for(int i = 250; i < 500; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 5 * cosf(theta);//calculate the x component
        float y = 10 * sinf(theta);//calculate the y component

        glVertex2f(240+x,370+y);//output vertex


    }
    glEnd();
    glColor4ub(10,10,10,255);

    glBegin(GL_TRIANGLE_FAN);
    for(int i = 250; i < 500; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = -6 * cosf(theta);//calculate the x component
        float y = -10 * sinf(theta);//calculate the y component

        glVertex2f(240+x,370+y);//output vertex


    }
    glEnd();
    glColor4ub(255,255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(234,366.5);
    glVertex2d(234,368.5);
    glVertex2d(246,368.5);
    glVertex2d(246,366.5);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2d(235,361.5);
    glVertex2d(235,363.5);
    glVertex2d(245,363.5);
    glVertex2d(245,361.5);
    glEnd();
    }
    ///Arms
    {
        glColor4ub(60,60,60,255);
        glBegin(GL_POLYGON);
        glVertex2d(235,350);
        glVertex2d(235,343);
        glVertex2d(230,333);
        glVertex2d(228,338);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2d(245,350);
        glVertex2d(245,343);
        glVertex2d(250,333);
        glVertex2d(252,338);
        glEnd();
        glColor4ub(198,164,157,255);
        glBegin(GL_POLYGON);
        glVertex2d(252,336);
        glVertex2d(249,338);
        glVertex2d(240,328);
        glVertex2d(240,323);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2d(228,336);
        glVertex2d(231,338);
        glVertex2d(240,328);
        glVertex2d(240,323);
        glEnd();

    }
    ///Legs
    {
    glColor4ub(60,60,60,255);
    glBegin(GL_POLYGON);
    glVertex2d(226,310);
    glVertex2d(235,325);
    glVertex2d(237,318);
    glVertex2d(232,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(254,310);
    glVertex2d(245,325);
    glVertex2d(243,318);
    glVertex2d(248,310);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(226,310);
    glVertex2d(232,310);
    glVertex2d(232,295);
    glVertex2d(226,295);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(248,310);
    glVertex2d(254,310);
    glVertex2d(254,295);
    glVertex2d(248,295);
    glEnd();
    }
    ///Pelvis
    {
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 250; i < 500; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 5 * cosf(theta);//calculate the x component
        float y = 8 * sinf(theta);//calculate the y component

        glVertex2f(240+x,325+y);//output vertex


    }
    glEnd();
    }
    ///Gloves
    {
        glColor4ub(225,225,225,255);
        glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i < 500; i++)
    {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 5 * cosf(theta);//calculate the x component
        float y = 4 * sinf(theta);//calculate the y component

        glVertex2f(240+x,328+y);//output vertex


    }
    glEnd();
    }
    ///Shoes
    {
    glColor4ub(235,235,235,255);
    glBegin(GL_POLYGON);
    glVertex2d(232,295);
    glVertex2d(224,295);
    glVertex2d(224,288);
    glVertex2d(232,288);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(248,295);
    glVertex2d(256,295);
    glVertex2d(256,288);
    glVertex2d(248,288);
    glEnd();
    }
}
///Stamps
    {
    int c= 0;
    for(int x=0;x<=2;x++)
    {
    glColor4ub(255,255,255,235);
    glBegin(GL_POLYGON);
    glVertex2d(234+c,280);
    glVertex2d(234+c,320);
    glVertex2d(236+c,320);
    glVertex2d(236+c,280);
    glEnd();
    c=c+5;
        }
    c= 0;
    for(int x=0;x<=2;x++)
    {
    glColor4ub(255,255,255,235);
    glBegin(GL_POLYGON);
    glVertex2d(226+c,50);
    glVertex2d(226+c,170);
    glVertex2d(230+c,170);
    glVertex2d(230+c,50);
    glEnd();
    c=c+10;
        }

    glBegin(GL_POLYGON);
    glVertex2d(226,170);
    glVertex2d(250,170);
    glVertex2d(250,173);
    glVertex2d(226,173);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(234,320);
    glVertex2d(246,320);
    glVertex2d(246,323);
    glVertex2d(234,323);
    glEnd();


///End of Stamps
    }
///Margin Line
    {
        glColor4ub(255,255,255,205);
    glBegin(GL_POLYGON);
    glVertex2d(175,80);
    glVertex2d(305,80);
    glVertex2d(305,78);
    glVertex2d(175,78);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(211,268);
    glVertex2d(270,268);
    glVertex2d(270,265);
    glVertex2d(211,265);
    glEnd();

    glColor4ub(255,255,255,185);
    glBegin(GL_POLYGON);
    glVertex2d(182,52);
    glVertex2d(298,52);
    glVertex2d(298,50);
    glVertex2d(182,50);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(219,280);
    glVertex2d(261,280);
    glVertex2d(261,278);
    glVertex2d(219,278);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(188,50);
    glVertex2d(192,80);
    glVertex2d(189,78);
    glVertex2d(185,50);
    glEnd();
   glBegin(GL_POLYGON);
    glVertex2d(259,268);
    glVertex2d(261,268);
    glVertex2d(259,280);
    glVertex2d(257.5,280);
    glEnd();
       glBegin(GL_POLYGON);
    glVertex2d(219,268);
    glVertex2d(221,268);
    glVertex2d(222.5,280);
    glVertex2d(220.5,280);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(292,50);
    glVertex2d(295,50);
    glVertex2d(291,78);
    glVertex2d(288,78);
    glEnd();
///End of Margin Line
    }
///Batsman
    {
        ///Right Arm
        {
            glColor4ub(198,164,157,255);
            glBegin(GL_POLYGON);
            glVertex2d(250+Bat_x,315);
            glVertex2d(245+Bat_x,310);
            glVertex2d(245+Bat_x,295);
            glVertex2d(240+Bat_x,300);
            glEnd();
        }
        ///Body
        {
        glColor4ub(36,155,213,250);
        glBegin(GL_POLYGON);
        glVertex2d(255+Bat_x,300);
        glVertex2d(258+Bat_x,310);
        glVertex2d(252+Bat_x,340);
        glVertex2d(244+Bat_x,328);
        glVertex2d(250+Bat_x,300);
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
        for(int i = 399; i < 600; i++)
        {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 6 * cosf(theta);//calculate the x component
        float y = 10 * sinf(theta);//calculate the y component

        glVertex2f(253+x+Bat_x,303+y);//output vertex


        }
        glEnd();
        glBegin(GL_TRIANGLE_FAN);
        for(int i = 600; i < 800; i++)
        {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 7 * cosf(theta);//calculate the x component
        float y = 8 * sinf(theta);//calculate the y component

        glVertex2f(250+x+Bat_x,332+y);//output vertex


        }
        glEnd();

    }
        ///Neck
        {
            glColor4ub(198,164,157,255);
            glBegin(GL_POLYGON);
            glVertex2d(244+Bat_x,342);
            glVertex2d(245+Bat_x,336);
            glVertex2d(248+Bat_x,338);
            glVertex2d(248+Bat_x,343);
            glEnd();
        }
        ///Head
        {
        glBegin(GL_TRIANGLE_FAN);
        for(int i = 280; i < 600; i++)
        {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 7 * cosf(theta);//calculate the x component
        float y = 8 * sinf(theta);//calculate the y component

        glVertex2f(243+x+Bat_x,349+y);//output vertex


        }
        glEnd();
        glColor4ub(255,255,255,255);
        glBegin(GL_TRIANGLE_FAN);
        for(int i =80; i < 295; i++)
        {

        float theta = 2.0f * 3.1415926f * float(i) / float(500);//get the current angle

        float x = 9 * cosf(theta);//calculate the x component
        float y = 10 * sinf(theta);//calculate the y component

        glVertex2f(243+x+Bat_x,350+y);//output vertex

        }
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2d(235.5+Bat_x,343.5);
        glVertex2d(248.5+Bat_x,357);
        glVertex2d(250+Bat_x,356);
        glVertex2d(238+Bat_x,343.5);
        glEnd();
          glBegin(GL_POLYGON);
        glVertex2d(238+Bat_x,341.5);
        glVertex2d(249.5+Bat_x,353.5);
        glVertex2d(250.5+Bat_x,351.5);
        glVertex2d(242.5+Bat_x,342);
        glEnd();

        }
        ///Legs
        {
        glColor4ub(27,116,158,250);
        glBegin(GL_POLYGON);
        glVertex2d(250+Bat_x,300);
        glVertex2d(250+Bat_x,275);
        glVertex2d(250+Bat_x,265);
        glVertex2d(243+Bat_x,265);
        glEnd();
        glColor4ub(36,155,213,250);
        glBegin(GL_POLYGON);
        glVertex2d(250+Bat_x,260);
        glVertex2d(250+Bat_x,300);
        glVertex2d(258+Bat_x,300);
        glVertex2d(258+Bat_x,260);
        glEnd();
        ///Shoes
        glColor4ub(255,255,255,255);
        glBegin(GL_POLYGON);
        glVertex2d(258+Bat_x,260);
        glVertex2d(258+Bat_x,253);
        glVertex2d(249+Bat_x,253);
        glVertex2d(249+Bat_x,260);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2d(250+Bat_x,265);
        glVertex2d(250+Bat_x,258);
        glVertex2d(242+Bat_x,258);
        glVertex2d(242+Bat_x,265);
        glEnd();

    }
        ///Bat
        {
            glColor4ub(121,60,11,255);
            glBegin(GL_POLYGON);
            glVertex2d(Bat_x+244.5,300);
            glVertex2d(Bat_x+240.5,300.5);
            glVertex2d(Bat_x+239,290);
            glVertex2d(Bat_x+242.5,286);
            glEnd();
            glBegin(GL_POLYGON);
            glVertex2d(Bat_x+237.5,292);
            glVertex2d(Bat_x+234,268-Bat_y);
            glVertex2d(Bat_x+240.5,265-Bat_y);
            glVertex2d(Bat_x+244.5,288);
            glEnd();
        }
        ///Left Arm
        {
            glColor4ub(198,164,157,255);
            glBegin(GL_POLYGON);
            glVertex2d(245+Bat_x,330);
            glVertex2d(250+Bat_x,325);
            glVertex2d(245+Bat_x,295);
            glVertex2d(240+Bat_x,300);
            glEnd();
        }
    }
///Umpire
{
       ///Neck
    glColor4ub(198,164,157,255);
    glBegin(GL_POLYGON);
    glVertex2d(258,158);
    glVertex2d(263,158);
    glVertex2d(268,148);
    glVertex2d(253,148);
    glEnd();
    ///Head
    glColor4ub(0,0,0,255);
    glBegin(GL_TRIANGLE_FAN);
    {
        for(int i =0;i<=500;i++)
        {
            float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = 12 * cos(theta);
            float y = 25 * sin(theta);
            glVertex2d(260+x,180+y);
         }
         glEnd();
    }
    ///Cap
    glColor4ub(252,252,252,255);
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 250;i<=500;i++)
    {
        float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = -12 * cos(theta);
            float y = -15 * sin(theta);
            glVertex2d(260+x,195+y);
    }
    glEnd();
    glColor4ub(252,252,252,255);
    glBegin(GL_POLYGON);
    glVertex2d(245,195);
    glVertex2d(275,195);
    glVertex2d(275,190);
    glVertex2d(245,190);
    glEnd();
    ///Shoulder
    glColor4ub(176,47,9,255);
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 250;i<=500;i++)
    {
        float theta = 2.0f * 3.1416 *(float) i / 500;
            float x = -22 * cos(theta);
            float y = -15 * sin(theta);
            glVertex2d(261+x,135+y);
    }
    glEnd();

    ///Body
    glBegin(GL_POLYGON);
    glVertex2d(239,135);
    glVertex2d(283,135);
    glVertex2d(283,65);
    glVertex2d(239,65);
    glEnd();


    ///Hands
    //Left
    glColor4ub(255,187,187,255);
    glBegin(GL_POLYGON);
    glVertex2d(238,117);
    glVertex2d(222,90);
    glVertex2d(218,100);
    glVertex2d(225,117);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(225,100);
    glVertex2d(230,102);
    glVertex2d(217,99);
    glVertex2d(239,58);
    glVertex2d(239,65);
    glEnd();
    //Right
    glBegin(GL_POLYGON);
    glVertex2d(292,122);
    glVertex2d(298,100);
    glVertex2d(295,90);
    glVertex2d(286,112);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(290,104-mov3);
    glVertex2d(296,95-mov3);
    glVertex2d(mov1,mov2+58);
    glVertex2d(mov1,mov2+68);
    glEnd();
    ///Arms
    glColor4ub(176,47,9,255);
    glBegin(GL_POLYGON);
    glVertex2d(242,142);
    glVertex2d(222,120);
    glVertex2d(235,110);
    glVertex2d(239,115);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(280,142);
    glVertex2d(295,120);
    glVertex2d(285,110);
    glVertex2d(271,115);
    glEnd();
    ///Belt
    glColor4ub(255,255,255,255);
    glBegin(GL_POLYGON);
    glVertex2d(239,65);
    glVertex2d(283,65);
    glVertex2d(283,62);
    glVertex2d(239,62);
    glEnd();
    ///Pants
    glColor4ub(0,0,0,255);
    glBegin(GL_POLYGON);
    glVertex2d(239,62);
    glVertex2d(239,0);
    glVertex2d(254,0);
    glVertex2d(262,40);
    glVertex2d(268,62);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(255,62);
    glVertex2d(260,40);
    glVertex2d(270,0);
    glVertex2d(283,0);
    glVertex2d(283,62);
    glEnd();
}

///Score
{

    if(runs==4)
    {
        glColor4ub(231,45,24,255);
        glBegin(GL_POLYGON);
        glVertex2d(228,445);
        glVertex2d(238,445);
        glVertex2d(238,440);
        glVertex2d(228,440);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2d(228,445);
        glVertex2d(228,460);
        glVertex2d(231,460);
        glVertex2d(231,445);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2d(238,460);
        glVertex2d(238,422);
        glVertex2d(241,422);
        glVertex2d(241,460);
        glEnd();
    }
}
    ///Call Ball
    {
    ball();
    }
    ///Call Audience
    {
    audience();
    }
    glutSwapBuffers();
    glFlush();
}



/// Program entry point ///

int main(int argc,char **argv) {
    t1=time(&t1);
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutInitWindowPosition(45,40);
    glutInitWindowSize(1280,650);
    glutCreateWindow("ENG VS NZ");

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable( GL_BLEND );
    glOrtho(0.0,500.0,0.0,500.0,1,-1);
    glutDisplayFunc(draw);
    glutTimerFunc(1000,ball_thrw,0);
    glutTimerFunc(0,ad,0);
    glutMainLoop();
    return 0;
}
void ad(int)
{
    glutTimerFunc(10000/30,ad,0);
    Clr1 = rand() %255;
    Clr2 = rand() %255;
    Clr3 = rand() %255;
}

void ball_thrw(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,ball_thrw,0);
    if(b_y_position<280 && b_x_position<230)
    {
    b_y_position+=5;
    b_x_position+=2.0;
    }
    if(b_y_position>235)
    {
        glutTimerFunc(1000/60,bat_shot,0);
    }
    if(b_y_position==255)
    {
        glutTimerFunc(1000/60,ball_shot,0);
    }
}

void ball_shot(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,ball_shot,0);
    b_y_position-=6;
    b_x_position-=2.3;
    if(b_x_position<=0)
    {
        runs=4;
        b_x_position=-20;
        glutTimerFunc(1000,audience_cheer_up,0);
    }
}
void audience_cheer_up(int)
{
    glutPostRedisplay();
    glutTimerFunc(500,audience_cheer_up,0);
    h1_l_y_position+=2.5;
    h2_l_y_position+=2.5;
    h1_r_y_position+=2.5;
    h2_r_y_position+=2.5;
    bod_y_position+=2.5;
    if(h1_l_y_position>423)
    {
    h1_l_y_position-=9.7;
    h2_l_y_position-=9.7;
    h1_r_y_position-=9.7;
    h2_r_y_position-=9.7;
    bod_y_position-=9.7;
    }
    mov1+=0.02;
    mov2=25;
    mov3=3.125;
    if(mov1>288)
    {
        mov1=283;
    }
    t2=time(&t2);
    float diff = (float)t2-(float)t1;
    if(diff>=10.5)
    {
        //exit(0);
    }

}

void bat_shot(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,bat_shot,0);
    if(Bat_x<-7)
    {
        Bat_x+=1.5;
    }
    Bat_x-=1.5;
    Bat_y+=0.5;
    if(Bat_y>5)
    {
        Bat_y-=0.5;
    }

}
