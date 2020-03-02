#include "MainWidget.h"
#include "ui_MainWidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    connect(ui->btDecode, SIGNAL(clicked()), this, SLOT(decode()));
}

MainWidget::~MainWidget()
{
    delete ui;
}

void MainWidget::decode()
{
    QString file = ui->tbJSONFile->toPlainText();

    QJsonDocument d = QJsonDocument::fromJson(file.toUtf8());
    QJsonObject sett2 = d.object();
    QJsonValue value = sett2.value(QString("MessageName"));
    QJsonObject item = value.toObject();

    if(!item.isEmpty())
    {
        QJsonValue subobj = item["type"];
        int type = item["type"].toInt();

        ui->tbJSONFile->appendPlainText("type " + QString::number(type));

        QJsonArray test = item["properties"].toArray();

        for (int i = 0; i < test.count(); i++)
        {
          QJsonObject obj = test[i].toObject();

          int id = obj["ID"].toInt();
          QString propertyName = obj["PropertyName"].toString();
          QString key = obj["key"].toString();

          ui->tbJSONFile->appendPlainText(QString::number(id) + " " + propertyName + " " + key);
        }
    }
    else
    {
      ui->tbJSONFile->appendPlainText("JSON no valido!!!");
    }
}
