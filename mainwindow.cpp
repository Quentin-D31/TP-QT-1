#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // initialisation
    ui->EtatTension->setText("Mise hors tension");
    clickTension = false;
    ui->DemarrageDrone->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MiseSousTension_clicked()
{
    if ( clickTension== false) {
        // modification du texte

        ui->EtatTension->setText("En tension");
        ui->DemarrageDrone->setDisabled(false);


        // on met le texte à l'état inactif et on positionne la variable

        ui->EtatTension->setDisabled(true);
        clickTension = true;
    }
    else {
        // modification du texte
        ui->EtatTension->setText("Mise hors tension");

        // on met le texte à l'état inactif et on positionne la variable

        ui->EtatTension->setDisabled(false);
        clickTension = false;
    }
}


void MainWindow::on_DemarrageDrone_clicked()
{
    ui->EtatDemarrage->setText("Drone démarré");

}

