/*
 * checksumJack is a multi platform hash calculating software.
 * Copyright (C) 2014 www.checksumJack.org
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef PROPERTIES_H
#define PROPERTIES_H

#include <QDialog>
#include "xmlconfigio.h"

namespace Ui {
class Properties;
}

class Properties : public QDialog
{
    Q_OBJECT
    
public:
    explicit Properties(QWidget *parent = 0);
    ~Properties();
    
private slots:
    void on_buttonBox_accepted();
    void on_radioYes_clicked();
    void on_radioNo_clicked();
    void on_radioMD5_clicked();
    void on_radioBSD_clicked();
    void on_comboBoxRootPath_activated(int index);
    void on_comboBoxHashTyp_activated(int index);

private:
    Ui::Properties *ui;
    XMLConfigIO cf;
    QString m_defaultHash;
    bool m_addRootPath;
    QString m_rootPathTyp;
    QString m_style;
    QString m_hashtyp;
};


#endif // PROPERTIES_H
