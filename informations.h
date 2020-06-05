#ifndef INFORMATIONS_H
#define INFORMATIONS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Informations; }
QT_END_NAMESPACE

class Informations : public QMainWindow
{
    Q_OBJECT

public:
    Informations(QWidget *parent = nullptr);
    ~Informations();

private slots:
    void on_pushButton_clicked();

    void on_signsbutton_clicked();

private:
    Ui::Informations *ui;
};
#endif // INFORMATIONS_H
