# include <GL/glut.h>///使用GLUT外掛

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);///清空

    glutSolidTeapot(0.3);///實心茶壺
    glutSwapBuffers();///交換兩倍的buffers
}

int main(int argc,char ** argv)
{
    glutInit(&argc,argv);///(1)Glut初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08160652");///(3)開窗
    glutDisplayFunc(display);///(4)等一下要顯示的格式
    glutMainLoop();///(5)主要迴圈
}
