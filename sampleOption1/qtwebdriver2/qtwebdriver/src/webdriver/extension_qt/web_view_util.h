/****************************************************************************
**
** Copyright © 1992-2014 Cisco and/or its affiliates. All rights reserved.
** All rights reserved.
** 
** $CISCO_BEGIN_LICENSE:LGPL$
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** $CISCO_END_LICENSE$
**
****************************************************************************/

#ifndef WEBDRIVER_QT_WEB_VIEW_UTIL_H_
#define WEBDRIVER_QT_WEB_VIEW_UTIL_H_

#include <string>

#include <QtCore/QDebug>
#if (QT_VERSION >= QT_VERSION_CHECK(5, 0, 0))
#include <QtWebKitWidgets/QWebView>
#else
#include <QtWebKit/QtWebKit>
#endif

namespace webdriver {

class Session;
class ViewId;
class Error;

class QWebViewUtil {
public:
    static bool isUrlSupported(QWebPage* pWebPage, const std::string& url, Error **error);
    static bool isUrlSupported(const std::string& url, Error **error);
    static QWebView* getWebView(Session* session, const ViewId& viewId);

private:
    QWebViewUtil() {}
    ~QWebViewUtil(){}
};


}  // namespace webdriver

#endif  // WEBDRIVER_QT_WEB_VIEW_UTIL_H_
