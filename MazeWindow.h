#ifndef MAZEWINDOW_H
#define MAZEWINDOW_H

#include <QWindow>
//#include <QtCore>
#include <QExposeEvent>
#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <QOpenGLPaintDevice>
#include <QOpenGLShaderProgram>
#include <QScreen>

#include "maze3d.h"

class MazeWindow : public QWindow, protected QOpenGLFunctions {
	Q_OBJECT

private:
	Maze3D* itsMaze;

	bool m_update_pending;
	bool m_animating;

	GLuint m_posAttr;
	GLuint m_colAttr;
	GLuint m_matrixUniform;

	QOpenGLContext *m_context;
	QOpenGLPaintDevice *m_device;
	QOpenGLShaderProgram *m_program;

	int m_frame;

protected:
	bool event(QEvent *event);

	void exposeEvent(QExposeEvent *event);
	void resizeEvent(QResizeEvent *event);

public:
	explicit MazeWindow(QWindow *parent = 0);
	~MazeWindow();

	void setMaze(Maze3D* maze);

	virtual void render(QPainter *painter);
	virtual void render();

	virtual void initialize();

	void setAnimating(bool animating);

	GLuint loadShader(GLenum type, const char *source);

	public slots:
	void renderLater();
	void renderNow();


};

#endif // MAZEWINDOW_H