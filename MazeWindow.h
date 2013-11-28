#ifndef MAZEWINDOW_H
#define MAZEWINDOW_H

#include <QWindow>
//#include <QtCore>
#include <QExposeEvent>
#include <QOpenGLContext>
#include <QOpenGLFunctions>
#include <QOpenGLPaintDevice>
#include <QOpenGLShaderProgram>

class MazeWindow : public QWindow, protected QOpenGLFunctions
{
    Q_OBJECT

private:
    bool m_update_pending;
    bool m_animating;

    QOpenGLContext *m_context;
    QOpenGLPaintDevice *m_device;

protected:
    bool event(QEvent *event);

    void exposeEvent(QExposeEvent *event);
    void resizeEvent(QResizeEvent *event);

public:
    explicit MazeWindow(QWindow *parent = 0);
    ~MazeWindow();

    virtual void render(QPainter *painter);
    virtual void render();

    virtual void initialize();

    void setAnimating(bool animating);

    GLuint loadShader(GLenum type, const char *source);
    QOpenGLShaderProgram *m_program;

public slots:
    void renderLater();
    void renderNow();


};

#endif // MAZEWINDOW_H
