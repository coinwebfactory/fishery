/********************************************************************************
** Form generated from reading UI file 'fisherycontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FISHERYCONTROLDIALOG_H
#define UI_FISHERYCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZSubControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZSub;
    QLabel *labelZSub_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZSubControlDialog)
    {
        if (ZSubControlDialog->objectName().isEmpty())
            ZSubControlDialog->setObjectName(QStringLiteral("ZSubControlDialog"));
        ZSubControlDialog->resize(681, 384);
        ZSubControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZSubControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZSubControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZSubControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZSub = new QLabel(ZSubControlDialog);
        labelZSub->setObjectName(QStringLiteral("labelZSub"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZSub);

        labelZSub_int = new QLabel(ZSubControlDialog);
        labelZSub_int->setObjectName(QStringLiteral("labelZSub_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZSub_int);

        pushButtonAll = new QPushButton(ZSubControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZSubControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zFish Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZSubControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZSubControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZSubControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZSubControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZSubControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZSubControlDialog)
    {
        ZSubControlDialog->setWindowTitle(QApplication::translate("ZSubControlDialog", "Select zFish to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZSubControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZSubControlDialog", "0", Q_NULLPTR));
        labelZSub->setText(QApplication::translate("ZSubControlDialog", "zSub", Q_NULLPTR));
        labelZSub_int->setText(QApplication::translate("ZSubControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZSubControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZSubControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZSubControlDialog: public Ui_ZSubControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FISHERYCONTROLDIALOG_H
