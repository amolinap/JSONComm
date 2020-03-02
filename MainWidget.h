#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include <QDebug>

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;

public slots:
    void decode();
};

#endif // MAINWIDGET_H
