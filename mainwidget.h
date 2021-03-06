/*
 Pomo - Crossplatform Pomodoro application
 Copyright (c) 2013 Timo Härkönen

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 as published by the Free Software Foundation; either version 2
 of the License, or (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program; if not, write to the Free Software
 Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>

class QSlider;
class QVBoxLayout;
class QPushButton;
class QLabel;
class QHBoxLayout;

class MainWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MainWidget(QWidget *parent = 0);
    
signals:
    
public slots:

private slots:
    void startClicked();
    void resetClicked();
    void pomodoroEnded();
    void voidPomodoro();

private:
    QVBoxLayout *pMainLayout;
    QSlider *pDurationSlider;
    QLabel *pDurationLabel;
    QPushButton *pStartButton;
    QPushButton *pResetAlarmButton;
    QPushButton *pVoidButton;
    QLabel *pElapsedTimeLabel;
    QHBoxLayout *pSliderLayout;
};

#endif // MAINWIDGET_H
