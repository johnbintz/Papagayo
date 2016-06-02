#ifndef MOODDIALOG_H
#define MOODDIALOG_H

#include <QDialog>

namespace Ui {
class MoodDialog;
}

class MoodDialog : public QDialog
{
    Q_OBJECT

public:
    explicit MoodDialog(QWidget *parent = 0);
    ~MoodDialog();

    QString MoodString();

private:
    Ui::MoodDialog *ui;
};

#endif // MOODDIALOG_H
