/*
	@autor: Marabely Alvarado
	Dibujando a mi gato negro dormido en su almohada.
*/

#include<glut.h>
#include<math.h>

const float PI = 3.1416;

void grafico() {
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glPointSize(10); //definiendo ancho del pixel
	glLineWidth(4);

	//ALMOHADON lado derecho dibujado
	float formula = 2 * PI / 100;
	glBegin(GL_POLYGON); //0.28, 0.50
	glColor3f(0.0f, 0.5f, 1.0f);//baby Blue

	for (float i = 0; i <= 45; i++) {
		float ejeX = (float)sin(i * formula);
		float ejeY = (float)cos(i * formula);
		glVertex2f(ejeX, ejeY);
	}
	glEnd();
	//ALMOHADON lado izquierdo dibujado
	glBegin(GL_POLYGON); //0.28, 0.50
	glColor3f(0.37, 0.150, 0.190); //color cafe 
	for (float i = 0; i < 56; i++) {
		float ejeX = -(float)sin(i * formula);
		float ejeY = (float)cos(i * formula);
		glVertex2f(ejeX, ejeY);
	}
	glEnd();

	//contorno del circulo
	glBegin(GL_LINE_LOOP); //0.28, 0.50
	glColor3f(0.0, 0.0, 0.0);//baby Blue

	for (float i = 0; i <= 100; i++) {
		float x = (float)sin(i * formula);
		float y = (float)cos(i * formula);
		glVertex2f(x, y);
	}
	glEnd();

	//CARA*********************************************************************************************
	glBegin(GL_POLYGON);
	glColor3f(0.211, 0.211, 0.211);//Dark grey

	glVertex3f(0.4, 0.8, 0.0);
	glVertex3f(0.4, 0.6, 0.0);
	glVertex3f(0.2, 0.4, 0.0);
	glVertex3f(0.08, 0.45, 0.0);
	glVertex3f(0.02, 0.64, 0.0);
	glVertex3f(0.11, 0.8, 0.0);
	glEnd();

	//OREJA1*********************************************************************************************
	glBegin(GL_TRIANGLES);
	glColor3f(0.79, 0.11, 0.1);

	glVertex3f(0.4, 0.8, 0.0);
	glVertex3f(0.4, 0.9, 0.0);
	glVertex3f(0.3, 0.8, 0.0);

	glEnd();

	//OREJA2*********************************************************************************************
	glBegin(GL_TRIANGLES);
	glColor3f(0.79, 0.11, 0.1);

	glVertex3f(0.11, 0.8, 0.0);
	glVertex3f(0.14, 0.9, 0.0);
	glVertex3f(0.2, 0.8, 0.0);

	glEnd();

	//DIBUJANDO LOS OJITOS/PARPADOS*********************************************************************************************

	glBegin(GL_LINES);

	glColor3f(0.79, 0.11, 0.1);

	glVertex3f(0.17, 0.65, 0.0);
	glVertex3f(0.10, 0.70, 0.0);

	glVertex3f(0.26, 0.63, 0.0);
	glVertex3f(0.34, 0.65, 0.0);

	glEnd();

	//CUERPO*********************************************************************************************

	glBegin(GL_POLYGON);
	glColor3f(0.211, 0.211, 0.211);//Dark grey
	glVertex3f(0.08, 0.45, 0.0); //inicio
	glVertex3f(-0.19, 0.69, 0.0);
	glVertex3f(-0.4, 0.79, 0.0);
	glVertex3f(-0.43, 0.74, 0.0);
	glVertex3f(-0.44, 0.67, 0.0);
	glVertex3f(-0.31, 0.62, 0.0);
	glVertex3f(-0.18, 0.5, 0.0);
	glVertex3f(0.02, 0.3, 0.0);//01
	glVertex3f(0.13, 0.06, 0.0); //here P1 maldito

	glVertex3f(0.14, -0.30, 0.0); //here

	glVertex3f(0.14, -0.48, 0.0); //T1
	glVertex3f(0.24, -0.78, 0.0);
	glVertex3f(0.61, -0.76, 0.0); //E2

	glVertex3f(0.74, -0.36, 0.0);//d2
	glVertex3f(0.75, 0.0, 0.0);
	glVertex3f(0.6, 0.3, 0.0);
	glVertex3f(0.32, 0.52, 0.0);

	glVertex3f(0.2, 0.4, 0.0); //C
	glVertex3f(0.142, 0.424, 0.0); //triangulo de la nariz O

	glEnd();

	//COLITA
	glBegin(GL_POLYGON);
	glVertex3f(0.14, -0.48, 0.0); //T1

	glVertex3f(-0.03, -0.35, 0.0); //Z1 colita
	glVertex3f(-0.7, -0.08, 0.0);
	glVertex3f(-0.6, -0.28, 0.0);
	glVertex3f(-0.2, -0.42, 0.0); //colita G1
	glVertex3f(0.07, -0.6, 0.0); //G1
	glEnd();

	//COLITATRIANGULO
	glBegin(GL_POLYGON);
	glVertex3f(0.14, -0.48, 0.0); //T1
	glVertex3f(0.07, -0.6, 0.0); //G1
	glVertex3f(0.24, -0.78, 0.0);
	glEnd();

	//SEGUNDA PATITA**********************************************************8
	glBegin(GL_POLYGON);
	glColor3f(0.211, 0.211, 0.211);//Dark grey

	glVertex3f(0.13, -0.3, 0.0);
	glVertex3f(-0, -0.15, 0.0);
	glVertex3f(-0.12, -0.2, 0.0);
	glVertex3f(-0.03, -0.35, 0.0); //Z1
	glVertex3f(0.14, -0.48, 0.0); //T1
	glEnd();

	/*CONTORNOS DEL GATO MUGROSO*/

	//CARA
	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);//Black

	glVertex3f(0.4, 0.8, 0.0);
	glVertex3f(0.4, 0.6, 0.0);
	glVertex3f(0.2, 0.4, 0.0);
	glVertex3f(0.08, 0.45, 0.0);
	glVertex3f(0.02, 0.64, 0.0);
	glVertex3f(0.11, 0.8, 0.0);
	glEnd();

	//CUERPO******CONTORNO del ***************************************************

	glBegin(GL_LINE_LOOP);
	glColor3f(0.0f, 0.0f, 0.0f);//Black
	glVertex3f(0.08, 0.45, 0.0); //inicio
	glVertex3f(-0.19, 0.69, 0.0);
	glVertex3f(-0.4, 0.79, 0.0);
	glVertex3f(-0.43, 0.74, 0.0);
	glVertex3f(-0.44, 0.67, 0.0);
	glVertex3f(-0.31, 0.62, 0.0);
	glVertex3f(-0.18, 0.5, 0.0);
	glVertex3f(0.02381, 0.3, 0.0);//01
	glVertex3f(0.11, 0.12, 0.0);
	glVertex3f(0.13, -0.30, 0.0); //here el maldito contorno

	glVertex3f(0.14, -0.48, 0.0); //T1

	glVertex3f(-0.03, -0.35, 0.0); //Z1 colita
	glVertex3f(-0.7, -0.08, 0.0);
	glVertex3f(-0.6, -0.28, 0.0);
	glVertex3f(-0.2, -0.42, 0.0); //colita
	glVertex3f(0.07, -0.6, 0.0); //G1
	glVertex3f(0.24, -0.78, 0.0);
	glVertex3f(0.61, -0.76, 0.0); //E2

	glVertex3f(0.74, -0.36, 0.0);//d2
	glVertex3f(0.75, 0.0, 0.0);
	glVertex3f(0.6, 0.3, 0.0);
	glVertex3f(0.32, 0.52, 0.0);

	glVertex3f(0.2, 0.4, 0.0); //C
	glVertex3f(0.142, 0.424, 0.0); //triangulo de la nariz O

	glEnd();

	//OREJA1*********************************************************************************************
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.4, 0.8, 0.0);
	glVertex3f(0.4, 0.9, 0.0);
	glVertex3f(0.3, 0.8, 0.0);
	glEnd();

	//OREJA2*********************************************************************************************
	glBegin(GL_LINE_LOOP);
	glVertex3f(0.11, 0.8, 0.0);
	glVertex3f(0.14, 0.9, 0.0);
	glVertex3f(0.2, 0.8, 0.0);
	glEnd();

	//CONTORNO DEL 1 BRASITO
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);//Dark grey
	glVertex3f(0.11, 0.12, 0.0);
	glVertex3f(0.26, 0.064, 0.0);
	glVertex3f(0.3, 0.22, 0.0);
	glVertex3f(0.48, 0.14, 0.0);

	glEnd();

	//SEGUNDA PATITA**********************************************************8
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0, 0.0, 0.0);//Dark grey

	glVertex3f(0.13, -0.3, 0.0);
	glVertex3f(-0, -0.15, 0.0);
	glVertex3f(-0.12, -0.2, 0.0);
	glVertex3f(-0.03, -0.35, 0.0); //Z1
	glVertex3f(0.14, -0.48, 0.0); //T1
	glEnd();

	//BIGOTES**********************************
	glBegin(GL_LINES);

	glColor3f(0.79, 0.11, 0.1);
	//-Derecha
	glVertex3f(0.31, 0.57, 0.0);
	glVertex3f(0.46, 0.56, 0.0);

	glVertex3f(0.3, 0.54, 0.0);
	glVertex3f(0.45, 0.51, 0.0);

	glVertex3f(0.28, 0.50, 0.0);
	glVertex3f(0.42, 0.46, 0.0);

	//-Izquierda
	glVertex3f(0.07, 0.63, 0.0);
	glVertex3f(-0.1, 0.67, 0.0);

	glVertex3f(0.07, 0.58, 0.0);
	glVertex3f(-0.1, 0.59, 0.0);

	glVertex3f(0.07, 0.55, 0.0);
	glVertex3f(-0.09, 0.53, 0.0);

	glEnd();

	glBegin(GL_LINES); //contorno de la 2 patita
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(0.13, -0.3, 0.0);
	glVertex3f(0.5, -0.38, 0.0);

	//unas patita2
	glVertex3f(-0.12, -0.2, 0.0);
	glVertex3f(0.0, -0.22, 0.0);

	glVertex3f(-0.12, -0.2, 0.0);
	glVertex3f(0.0, -0.28, 0.0);

	//unas patita1

	glVertex3f(-0.43, 0.74, 0.0);
	glVertex3f(-0.35, 0.72, 0.0);

	glVertex3f(-0.44, 0.67, 0.0);
	glVertex3f(-0.35, 0.67, 0.0);

	glEnd();

	//DIBUJANDO LA NARIZ*********************************************************************************************
	glBegin(GL_TRIANGLES);
	glColor3f(0.79, 0.11, 0.1);

	glVertex3f(0.13, 0.54, 0.0);
	glVertex3f(0.21, 0.53, 0.0);
	glVertex3f(0.142, 0.424, 0.0);
	glEnd();
	glFlush();

}


int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Gato Negro");

	glutDisplayFunc(grafico);

	glutMainLoop();
	return 0;

}
