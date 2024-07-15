QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addticket.cpp \
    algraph.cpp \
    homepage.cpp \
    main.cpp \
    login.cpp \
    staffhomepage.cpp \
    staffmodify.cpp \
    ticket.cpp \
    userhomepage.cpp \
    usermainpage.cpp \
    userticket.cpp \
    crawler_widget.cpp

HEADERS += \
    ALGraph.h \
    addticket.h \
    homepage.h \
    login.h \
    staffhomepage.h \
    staffmodify.h \
    ticket.h \
    userhomepage.h \
    usermainpage.h \
    userticket.h \
    crawler_widget.h

FORMS += \
    AddTicket.ui \
    AddTickets.ui \
    HomePage.ui \
    SatffModify.ui \
    StaffHomePage.ui \
    UserHomePage.ui \
    UserMainPage.ui \
    login.ui \
<<<<<<< HEAD:Traffic-consultation-system/Traffic-consultation-system.pro
    ticket.ui
=======
    crawler_widget.ui
>>>>>>> 8103a4f34cd2a124247b2247508311511870aae7:qt/Traffic-consultation-system.pro

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES += \
    D:/办事/代码/transtation/transtation/Flight.txt \
    D:/办事/代码/transtation/transtation/FlightCity.txt
