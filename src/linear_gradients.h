#pragma once

#include <QWidget>

class LinearGradients : public QWidget {

  public:
    LinearGradients(QWidget *parent = 0);

  protected:
    void paintEvent(QPaintEvent *e);
    
  private:
    void doPainting();  
};
