#ifndef USERSETTINGS_H
#define USERSETTINGS_H

#include <QColor>
#include "mysettings.h"

enum Side
{
    SideTop,
    SideLeft,
    SideRight,
    SideBottom
};

class USettings : public MySettings
{
public:
    USettings(QObject* parent = nullptr);

private:
    void restoreSettings();

public:
    Side panelFloatSide = SideTop; // 边：0上，1左，2右，3下，-1任意
    int panelCenterOffset = 0; // 中心点偏移
    int panelWidth = 1000;
    int panelHeight = 200;
    int panelBangHeight = 1;
    int panelBangWidth = 800;
    QColor panelBgColor = QColor(240, 248, 255);
    QColor panelBangBg = QColor(128, 128, 128, 1);
    QColor panelSelectRectColor = QColor(230, 230, 250);
    QColor panelSelectEdgeColor = QColor(179, 153, 255);
    QColor panelHoverEdgeColor = QColor(204, 204, 255);
    int panelItemSize = 64; // Item大小
    int panelIconSize = 32; // 图标大小
    bool panelBlur = true;
    int panelBlurRadius = 64; // 毛玻璃背景模糊半径
    int panelBlurOpacity = 32; // 毛玻璃透明度

    int widgetSize = 32;
    int fluentRadius = 5;

    bool fastOpenDir = false; // 默认使用快速打开
    int fastOpenDirLevel = 5; // 最多显示3级文件
    QColor themeMainColor = QColor(51, 103, 214); // #3367D6

    bool modifyFileNameSync = true; // 询问同步修改文件名
};

extern USettings* us;

#endif // USERSETTINGS_H
