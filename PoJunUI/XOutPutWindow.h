#pragma once 
#include <QtWidgets/QDockWidget>
#include "ui_OutPutWindow.h" 
#include <XPJCoreHead.h> 

class XOutPutWindow : public QDockWidget
{
    Q_OBJECT
public:
    XOutPutWindow(QWidget *parent = Q_NULLPTR);
    ~XOutPutWindow();

public slots:
    void show_asm();
    
    void show_run_command();

private:
    Ui::OutPutWindow opw;
};
