#include "mooddialog.h"
#include "ui_mooddialog.h"
#include "qmessagebox.h"

MoodDialog::MoodDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MoodDialog)
{
    ui->setupUi(this);
    ui->moodCombo->addItem("Normal","");
    ui->moodCombo->addItem("Happy/Smiley","hap_");
    ui->moodCombo->addItem("Sad/Unhappy","sad_");
    ui->moodCombo->addItem("Mad/Angry","mad_");
    ui->moodCombo->addItem("Scared/Fightened","fri_");
}

QString MoodDialog::MoodString()
{
    return ui->moodCombo->itemData(ui->moodCombo->currentIndex()).toString();
}


MoodDialog::~MoodDialog()
{
    delete ui;
}
