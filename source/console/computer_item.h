//
// Aspia Project
// Copyright (C) 2018 Dmitry Chapyshev <dmitry@aspia.ru>
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <https://www.gnu.org/licenses/>.
//

#ifndef ASPIA_CONSOLE__COMPUTER_ITEM_H_
#define ASPIA_CONSOLE__COMPUTER_ITEM_H_

#include <QTreeWidget>

#include "base/macros_magic.h"
#include "protocol/address_book.pb.h"

namespace aspia {

class ComputerGroupItem;

class ComputerItem : public QTreeWidgetItem
{
public:
    ComputerItem(proto::address_book::Computer* computer, ComputerGroupItem* parent_group_item);
    ~ComputerItem() = default;

    void updateItem();

    enum ColumnIndex
    {
        COLUMN_INDEX_NAME      = 0,
        COLUMN_INDEX_ADDRESS   = 1,
        COLUMN_INDEX_PORT      = 2,
        COLUMN_INDEX_COMMENT   = 3,
        COLUMN_INDEX_CREATED   = 4,
        COLUMN_INDEX_MODIFIED  = 5,
        COLUMN_INDEX_CONNECTED = 6
    };

    proto::address_book::Computer* computer() { return computer_; }
    ComputerGroupItem* parentComputerGroupItem();

    // QTreeWidgetItem implementation.
    bool operator<(const QTreeWidgetItem &other) const override;

private:
    friend class ComputerGroupItem;

    proto::address_book::Computer* computer_;
    ComputerGroupItem* parent_group_item_;

    DISALLOW_COPY_AND_ASSIGN(ComputerItem);
};

} // namespace aspia

#endif // ASPIA_CONSOLE__COMPUTER_ITEM_H_
