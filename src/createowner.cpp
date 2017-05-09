#include "createowner.h"
#include "ui_createowner.h"

CreateOwner::CreateOwner(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateOwner)
{
    ui->setupUi(this);
    init();
}

CreateOwner::~CreateOwner()
{
    delete ui;
}

void CreateOwner::init(){
    connect(ui->addBtn, SIGNAL (released()), this, SLOT (handleAdd()));
}

void CreateOwner::handleAdd(){
    owner.name = ui->nameLine->text().toUtf8().constData();

    sql.addOwner(owner);

    this->close();
}
