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

#include "console/about_dialog.h"

#include <QAbstractButton>
#include <QDesktopServices>
#include <QFile>

#include <boost/version.hpp>
#include <google/protobuf/stubs/common.h>
#include <libyuv.h>
#include <openssl/crypto.h>
#include <vpx/vpx_codec.h>
#include <zstd.h>

#include "build/version.h"

namespace aspia {

namespace {

const char kGplLink[] = "https://www.gnu.org/licenses/gpl.html";
const char kGplTranslationLink[] = "https://www.gnu.org/licenses/translations.html";
const char kHomeLink[] = "https://aspia.org";
const char kGitHubLink[] = "https://github.com/dchapyshev/aspia";

const char* kDevelopers[] = { "Dmitry Chapyshev (dmitry@aspia.ru)" };

const char* kTranslators[] =
{
    "Dmitry Chapyshev (Russian)",
    "Gregor Doroschenko (German)",
    "Lyhyrda Myhaylo (Ukrainian)",
    "Mark Jansen (Dutch)"
};

const char* kThirdParty[] =
{
    "boost &copy; 1998-2018 The Boost Project authors, Boost Software License 1.0",
    "libvpx &copy; 2010, The WebM Project authors, BSD 3-Clause License",
    "libyuv &copy; 2011 The LibYuv Project Authors, BSD 3-Clause License",
    "openssl &copy; 1998-2018 The OpenSSL Project, OpenSSL License",
    "protobuf &copy; 2014 Google Inc., BSD 3-Clause License",
    "qt &copy; 2015 The Qt Company Ltd., GNU General Public License 3.0",
    "tbb &copy; Copyright 2005-2018 Intel Corporation, Apache License 2.0",
    "zstd &copy; 2016 Yann Collet, Facebook, Inc., BSD License",
    "Fugue Icons &copy; 2013 Yusuke Kamiyamane, Creative Commons Attribution 3.0 License"
};

QString createList(const QString& title, const char* array[], size_t array_size)
{
    if (!array_size)
        return QString();

    QString list;

    for (size_t i = 0; i < array_size; ++i)
    {
        list.append(QString("&bull; %1").arg(array[i]));
        if (i + 1 != array_size)
            list.append(QLatin1String("<br/>"));
    }

    return QString("<b>%1</b><br>%2").arg(title).arg(list);
}

} // namespace

AboutDialog::AboutDialog(QWidget* parent)
    : QDialog(parent)
{
    ui.setupUi(this);

    ui.label_version->setText(tr("Version: %1").arg(ASPIA_VERSION_STRING));

    QString license =
        QString("%1<br>%2<br><a href='%3'>%3</a>")
        .arg(tr("Aspia is free software released under GNU General Public License 3."))
        .arg(tr("You can get a copy of license here:"))
        .arg(kGplLink);

    QString license_translation =
        QString("%1<br><a href='%2'>%2</a>")
        .arg(tr("You can also get a translation of GNU GPL license here:"))
        .arg(kGplTranslationLink);

    QString links =
        QString("<b>%1</b><br>%2 <a href='%3'>%3</a><br>%4 <a href='%5'>%5</a>")
        .arg(tr("Links:"))
        .arg(tr("Home page:")).arg(kHomeLink)
        .arg(tr("GitHub page:")).arg(kGitHubLink);

    QString developers =
        createList(tr("Developers:"), kDevelopers, _countof(kDevelopers));
    QString translators =
        createList(tr("Translators:"), kTranslators, _countof(kTranslators));
    QString third_party =
        createList(tr("Third-party components:"), kThirdParty, _countof(kThirdParty));

    QString html;

    html += "<html><body>";
    html += "<p>" + license + "</p>";
    html += "<p>" + license_translation + "</p>";
    html += "<p>" + links + "</p>";
    html += "<p>" + developers + "</p>";
    html += "<p>" + translators + "</p>";
    html += "<p>" + third_party + "</p>";
    html += "</body><html>";

    ui.text_edit->setHtml(html);

    QFile file(QApplication::applicationDirPath() + "/license.txt");
    if (file.open(QFile::ReadOnly))
        ui.edit_license->setPlainText(file.readAll());

    ui.list_service->addItem(tr("Path: %1").arg(QApplication::applicationFilePath()));
    ui.list_service->addItem(tr("Compilation date: %1").arg(__DATE__));
    ui.list_service->addItem(tr("Compilation time: %1").arg(__TIME__));

    auto add_version = [this](const char* name, const QString& version)
    {
        ui.list_service->addItem(tr("%1 version: %2").arg(name).arg(version));
    };

    add_version("boost", QString("%1.%2.%3")
                .arg(BOOST_VERSION / 100000)
                .arg(BOOST_VERSION / 100 % 1000)
                .arg(BOOST_VERSION % 100));
    add_version("libvpx", vpx_codec_version_str());
    add_version("libyuv", QString::number(LIBYUV_VERSION));
    add_version("openssl", OpenSSL_version(OPENSSL_VERSION));

    QString protobuf_version =
        QString::fromStdString(google::protobuf::internal::VersionString(GOOGLE_PROTOBUF_VERSION));
    add_version("protobuf", protobuf_version);

    add_version("qt", qVersion());
    add_version("zstd", ZSTD_versionString());

    connect(ui.push_button_donate, &QPushButton::pressed, [this]()
    {
        QDesktopServices::openUrl(QUrl(tr("https://aspia.org/en/donate.html")));
    });

    connect(ui.push_button_close, &QPushButton::pressed, this, &AboutDialog::close);
}

} // namespace aspia
