#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
void display(void)
{
	 glClearColor(0,1,0,0);
	
    glClear(GL_COLOR_BUFFER_BIT);
   
    
    glPointSize(1);
    glBegin(GL_POINT);
     glColor3f(1.0f,1.0f,1.0f);
    //// punto penal izquierda    
    glVertex3f(2.5f,5.5f,0.0f);
    //// punto penal derecha    
    glVertex3f(8.5f,5.5f,0.0f);
    
    glEnd();
       
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0f,1.0f); //// color blanco para todas las lineas
    
	glVertex3f(1.0f,1.0f,0.0f);  
    glVertex3f(1.0f,10.0f,0.0f);
    
    glVertex3f(1.0f,10.0f,0.0f);
    glVertex3f(10.0f,10.0f,0.0f);
    
    glVertex3f(10.0f,10.0f,0.0f);   
    glVertex3f(10.0f,1.0f,0.0f);  
    
    glVertex3f(10.0f,1.0f,0.0f);  
    glVertex3f(1.0f,1.0f,0.0f);   
    //// linea central
    glVertex3f(5.5f,1.0f,0.0f);  
    glVertex3f(5.5f,10.0f,0.0f);   
    
    //// area grande izquierda
    glVertex3f(1.0f,8.0f,0.0f);  
    glVertex3f(3.0f,8.0f,0.0f);  
    
    glVertex3f(3.0f,8.0f,0.0f);  
    glVertex3f(3.0f,3.0f,0.0f);   
    
    glVertex3f(3.0f,3.0f,0.0f);  
    glVertex3f(1.0f,3.0f,0.0f);   
    
    //// area peque;a izquierda
    glVertex3f(1.0f,7.0f,0.0f);  
    glVertex3f(2.0f,7.0f,0.0f); 
    
    glVertex3f(2.0f,7.0f,0.0f);  
    glVertex3f(2.0f,4.0f,0.0f); 
    
    glVertex3f(2.0f,4.0f,0.0f);  
    glVertex3f(1.0f,4.0f,0.0f); 
    
     //// area grande derecha
    glVertex3f(10.0f,8.0f,0.0f);  
    glVertex3f(8.0f,8.0f,0.0f);  
    
    glVertex3f(8.0f,8.0f,0.0f);  
    glVertex3f(8.0f,3.0f,0.0f);   
    
    glVertex3f(8.0f,3.0f,0.0f);  
    glVertex3f(10.0f,3.0f,0.0f);   
    
     //// area peque;a derecha
    glVertex3f(10.0f,7.0f,0.0f);  
    glVertex3f(9.0f,7.0f,0.0f); 
    
    glVertex3f(9.0f,7.0f,0.0f);  
    glVertex3f(9.0f,4.0f,0.0f); 
    
    glVertex3f(9.0f,4.0f,0.0f);  
    glVertex3f(10.0f,4.0f,0.0f); 
    

	glEnd();	
	
    
    //// para el centro
	glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    GLfloat cx, cy;
    int i;
    
    for(i=0; i<360; i+=1)    
    {
		cx=(1.0)*cos(i)+5.5;
		cy=(1)*sin(i)+5.5;
		glVertex3f(cx,cy,0.0f); 
			
		}
		
    glEnd();
    
   
   //// medio circulo derecho 
    glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    GLfloat j,cx1, cy1;
    
    for(j=1.9; j<4.39; j+=0.01)    
    {
		cx1=(1.5)*cos(j)+8.5;
		cy1=(1.5)*sin(j)+5.5;
		glVertex2f(cx1,cy1); 	
		
		}
		
    glEnd();
    
    //// medio circulo izquierdo 
    glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    GLfloat k,cx2, cy2;
    
    for(k=5.1; k<7.5; k+=0.01)    
    {
		cx2=(1.5)*cos(k)+2.5;
		cy2=(1.5)*sin(k)+5.5;
		glVertex2f(cx2,cy2); 	
		
		}
		
    glEnd();
    
    //// esquina superios izquierda
    
    glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    GLfloat a,cx3, cy3;
    
    for(a=4.7; a<6.3; a+=0.01)    
    {
		cx3=(0.5)*cos(a)+1.0;
		cy3=(0.5)*sin(a)+10.0;
		glVertex2f(cx3,cy3); 	
		
		}
		
    glEnd();
	
	///// esquina inferior izquierda
	 glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    GLfloat b,cx4, cy4;
    
    for(b=6.25; b<7.8; b+=0.01)    
    {
		cx4=(0.5)*cos(b)+1.0;
		cy4=(0.5)*sin(b)+1.0;
		glVertex2f(cx4,cy4); 	
		
		}
		
    glEnd();
    
    ///// esquina superior derecha
	 glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    GLfloat c,cx5, cy5;
    
    for(c=3.25; c<4.7; c+=0.01)    
    {
		cx5=(0.5)*cos(c)+10.0;
		cy5=(0.5)*sin(c)+10.0;
		glVertex2f(cx5,cy5); 	
		
		}
		
    glEnd();
    
    ///// esquina inferior derecha
	 glBegin(GL_POINTS);
    glColor3f(1.0f,1.0f,1.0f);
    GLfloat d,cx6, cy6;
    
    for(d=7.9; d<9.5; d+=0.01)    
    {
		cx6=(0.5)*cos(d)+10.0;
		cy6=(0.5)*sin(d)+1.0;
		glVertex2f(cx6,cy6); 	
		
		}
		
    glEnd();
	
	///// punto del centro
	 glPointSize(6);
	 glBegin(GL_POINTS);	
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(5.5f,5.5f);   
		
    glEnd();
    
    //// punto penal izquierda
    glBegin(GL_POINTS);	
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(2.5f,5.5f);   
		
    glEnd();
    
    //// punto penal derecha
    glBegin(GL_POINTS);	
    glColor3f(1.0f,1.0f,1.0f);
    glVertex2f(8.5f,5.5f);   
		
    glEnd();
	
		
    glFlush ();

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 11.0, 0.0, 11.0, -11.0, 11.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 420);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Barraza");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
