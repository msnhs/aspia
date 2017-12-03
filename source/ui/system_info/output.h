//
// PROJECT:         Aspia Remote Desktop
// FILE:            ui/system_info/output.h
// LICENSE:         Mozilla Public License Version 2.0
// PROGRAMMERS:     Dmitry Chapyshev (dmitry@aspia.ru)
//

#ifndef _ASPIA_UI__SYSTEM_INFO__OUTPUT_H
#define _ASPIA_UI__SYSTEM_INFO__OUTPUT_H

//
// To display the information, we use a table representation. Each category is a separate table.
// Each table has a title and a header. Table header contains column titles.
// Categories fall into two types:
// 1. Generic table. Contains unlimited number of columns and rows.
// 2. Table of parameters / values. Contains only 2 columns: a parameter and a value.
//    Parameters can be merged into groups.
//
// The structure of the document is generated by calling methods sequentially.
//
// StartDocument()
//     StartTableGroup(<group_name>)
//         StartTable(<table_name>)
//             StartTableHeader()
//                 AddHeaderItem(<column_name1>, <column_width1>)
//                 ...
//                 AddHeaderItem(<column_nameN>, <column_widthN>)
//             EndTableHeader()
//             StartRow(<icon_id>)
//                 AddValue(<value1>, <unit1>)
//                 ...
//                 AddValue(<valueN>, <unitN>)
//             EndRow()
//         EndTable()
//     EndTableGroup()
//     StartTable(<table_name>)
//         StartTableHeader()
//             AddHeaderItem(<column_name1>, <column_width1>)
//             AddHeaderItem(<column_name2>, <column_width2>)
//         EndTableHeader()
//         StartGroup(<name>, <icon_id>)
//             AddParam(<icon_id1>, <parameter_name1>, <value1>, <unit1>)
//             ...
//             AddParam(<icon_idN>, <parameter_nameN>, <valueN>, <unitN>)
//         EndGroup()
//     EndTable()
// EndDocument()
//

#include "base/macros.h"
#include "protocol/category.h"

namespace aspia {

class Output
{
public:
    virtual ~Output() = default;

    enum class TableType { LIST, PARAM_VALUE };

    class Table
    {
    public:
        Table(Output* output, std::string_view name, TableType table_type);
        ~Table();

    private:
        Output* output_;
        DISALLOW_COPY_AND_ASSIGN(Table);
    };

    class TableHeader
    {
    public:
        TableHeader(Output* output);
        ~TableHeader();

    private:
        Output* output_;
        DISALLOW_COPY_AND_ASSIGN(TableHeader);
    };

    class Group
    {
    public:
        Group(Output* output,
              std::string_view name,
              Category::IconId icon_id);
        ~Group();

    private:
        Output* output_;
        DISALLOW_COPY_AND_ASSIGN(Group);
    };

    class Row
    {
    public:
        Row(Output* output, Category::IconId icon_id);
        ~Row();

    private:
        Output* output_;
        DISALLOW_COPY_AND_ASSIGN(Row);
    };

    virtual void StartDocument() = 0;
    virtual void EndDocument() = 0;

    virtual void StartTableGroup(std::string_view name) = 0;
    virtual void EndTableGroup() = 0;

    virtual void StartTable(std::string_view name, TableType table_type) = 0;
    virtual void EndTable() = 0;

    virtual void StartTableHeader() = 0;
    virtual void EndTableHeader() = 0;
    virtual void AddHeaderItem(std::string_view name, int width) = 0;

    virtual void StartGroup(std::string_view name, Category::IconId icon_id) = 0;
    virtual void EndGroup() = 0;
    virtual void AddParam(Category::IconId icon_id,
                          std::string_view param,
                          std::string_view value,
                          std::string_view unit) = 0;
    void AddParam(Category::IconId icon_id,
                  std::string_view param,
                  std::string_view value)
    {
        AddParam(icon_id, param, value, std::string());
    }

    virtual void StartRow(Category::IconId icon_id) = 0;
    virtual void EndRow() = 0;
    virtual void AddValue(std::string_view value, std::string_view unit) = 0;
    void AddValue(std::string_view value)
    {
        AddValue(value, std::string());
    }
};

} // namespace aspia

#endif // _ASPIA_UI__SYSTEM_INFO__OUTPUT_H