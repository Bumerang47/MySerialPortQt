#ifndef DIALOGSTATUSSERIALPORT_H
#define DIALOGSTATUSSERIALPORT_H

#include <QDialog>

namespace Ui {
class DialogStatusSerialPort;
}

class DialogStatusSerialPort : public QDialog
{
    Q_OBJECT
    
public:
    explicit DialogStatusSerialPort(QWidget *parent = 0);
    ~DialogStatusSerialPort();
    
private slots:
    void on_pushButtonCloseStatus_clicked();

private:
    Ui::DialogStatusSerialPort *ui;
};

#endif // DIALOGSTATUSSERIALPORT_H
