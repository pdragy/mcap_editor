#pragma once

// Helper class for sorting integer widget items numerically

#include <QTableWidget>

class QTableWidgetItemInteger : public QTableWidgetItem
{
    public:

        QTableWidgetItemInteger(const QString& s) : QTableWidgetItem(s) {}

        bool operator <(const QTableWidgetItem& that) const
        {
            return (text().toInt() < that.text().toInt());
        }
};
