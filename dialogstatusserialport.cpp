#include "dialogstatusserialport.h"
#include "ui_dialogstatusserialport.h"
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QTextCodec>
#include <QScrollArea>


DialogStatusSerialPort::DialogStatusSerialPort(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogStatusSerialPort)
{
    ui->setupUi(this);

    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {

        QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf-8"));

        QString Name,Description,Manufacture;
        Name = info.portName();
        Description = info.description();
        Manufacture = info.manufacturer();
        if(Description.length() == 0) Description = "Не задано";
        if(Manufacture.length() == 0) Manufacture = "Не задано";

        QString PortStatusData = ui->labelStatusPort->text();
        ui->labelStatusPort->setText(PortStatusData + "\nИмя порта: "+ Name \
                                                    + "\n\t\t | Дескрипшн: "+ Description \
                                                    + "\n\t\t | Мануфактура: "+Manufacture+"\n");

        // Example use QSerialPort
        QSerialPort serial;
        serial.setPort(info);
        if (serial.open(QIODevice::ReadWrite))
            serial.close();
    }

}

DialogStatusSerialPort::~DialogStatusSerialPort()
{
    delete ui;
}

void DialogStatusSerialPort::on_pushButtonCloseStatus_clicked()
{
    this->reject();
}

