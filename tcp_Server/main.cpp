/******************************************************************************

                  版权所有 (C), 2001-2011, DeRoy

 ******************************************************************************
  文 件 名   : main.cpp
  版 本 号   : 初稿
  作    者   : DeRoy
  生成日期   : 2020年8月28日
  最近修改   :
  功能描述   : Tcp_Server
  函数列表   :
*
*

  修改历史   :
  1.日    期   : 2020年9月7日
    作    者   : DeRoy
    修改内容   : 创建文件

******************************************************************************/

#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();

    return a.exec();
}
