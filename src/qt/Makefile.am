include $(top_srcdir)/src/Makefile.include

AM_CPPFLAGS += -I$(top_srcdir)/src \
  -I$(top_builddir)/src/qt \
  -I$(top_builddir)/src/qt/forms \
  $(PROTOBUF_CFLAGS) \
  $(QR_CFLAGS)
bin_PROGRAMS = payprocoin-qt
noinst_LIBRARIES = libpayprocoinqt.a
SUBDIRS = . $(BUILD_TEST_QT)
DIST_SUBDIRS = . test

# payprocoin qt core #
QT_TS = \
  locale/payprocoin_ach.ts \
  locale/payprocoin_af_ZA.ts \
  locale/payprocoin_ar.ts \
  locale/payprocoin_be_BY.ts \
  locale/payprocoin_bg.ts \
  locale/payprocoin_bs.ts \
  locale/payprocoin_ca_ES.ts \
  locale/payprocoin_ca.ts \
  locale/payprocoin_ca@valencia.ts \
  locale/payprocoin_cmn.ts \
  locale/payprocoin_cs.ts \
  locale/payprocoin_cy.ts \
  locale/payprocoin_da.ts \
  locale/payprocoin_de.ts \
  locale/payprocoin_el_GR.ts \
  locale/payprocoin_en.ts \
  locale/payprocoin_eo.ts \
  locale/payprocoin_es_CL.ts \
  locale/payprocoin_es_DO.ts \
  locale/payprocoin_es_MX.ts \
  locale/payprocoin_es.ts \
  locale/payprocoin_es_UY.ts \
  locale/payprocoin_et.ts \
  locale/payprocoin_eu_ES.ts \
  locale/payprocoin_fa_IR.ts \
  locale/payprocoin_fa.ts \
  locale/payprocoin_fi.ts \
  locale/payprocoin_fr_CA.ts \
  locale/payprocoin_fr.ts \
  locale/payprocoin_gl.ts \
  locale/payprocoin_gu_IN.ts \
  locale/payprocoin_he.ts \
  locale/payprocoin_hi_IN.ts \
  locale/payprocoin_hr.ts \
  locale/payprocoin_hu.ts \
  locale/payprocoin_id_ID.ts \
  locale/payprocoin_it.ts \
  locale/payprocoin_ja.ts \
  locale/payprocoin_ka.ts \
  locale/payprocoin_kk_KZ.ts \
  locale/payprocoin_ko_KR.ts \
  locale/payprocoin_ky.ts \
  locale/payprocoin_la.ts \
  locale/payprocoin_lt.ts \
  locale/payprocoin_lv_LV.ts \
  locale/payprocoin_mn.ts \
  locale/payprocoin_ms_MY.ts \
  locale/payprocoin_nb.ts \
  locale/payprocoin_nl.ts \
  locale/payprocoin_pam.ts \
  locale/payprocoin_pl.ts \
  locale/payprocoin_pt_BR.ts \
  locale/payprocoin_pt_PT.ts \
  locale/payprocoin_ro_RO.ts \
  locale/payprocoin_ru.ts \
  locale/payprocoin_sah.ts \
  locale/payprocoin_sk.ts \
  locale/payprocoin_sl_SI.ts \
  locale/payprocoin_sq.ts \
  locale/payprocoin_sr.ts \
  locale/payprocoin_sv.ts \
  locale/payprocoin_th_TH.ts \
  locale/payprocoin_tr.ts \
  locale/payprocoin_uk.ts \
  locale/payprocoin_ur_PK.ts \
  locale/payprocoin_uz@Cyrl.ts \
  locale/payprocoin_vi.ts \
  locale/payprocoin_vi_VN.ts \
  locale/payprocoin_zh_CN.ts \
  locale/payprocoin_zh_HK.ts \
  locale/payprocoin_zh_TW.ts

QT_FORMS_UI = \
  forms/aboutdialog.ui \
  forms/addressbookpage.ui \
  forms/askpassphrasedialog.ui \
  forms/coincontroldialog.ui \
  forms/editaddressdialog.ui \
  forms/helpmessagedialog.ui \
  forms/intro.ui \
  forms/openuridialog.ui \
  forms/optionsdialog.ui \
  forms/overviewpage.ui \
  forms/receivecoinsdialog.ui \
  forms/receiverequestdialog.ui \
  forms/rpcconsole.ui \
  forms/sendcoinsdialog.ui \
  forms/sendcoinsentry.ui \
  forms/signverifymessagedialog.ui \
  forms/transactiondescdialog.ui

QT_MOC_CPP = \
  moc_addressbookpage.cpp \
  moc_addresstablemodel.cpp \
  moc_askpassphrasedialog.cpp \
  moc_payprocoinaddressvalidator.cpp \
  moc_payprocoinamountfield.cpp \
  moc_payprocoingui.cpp \
  moc_payprocoinunits.cpp \
  moc_clientmodel.cpp \
  moc_coincontroldialog.cpp \
  moc_coincontroltreewidget.cpp \
  moc_csvmodelwriter.cpp \
  moc_editaddressdialog.cpp \
  moc_guiutil.cpp \
  moc_intro.cpp \
  moc_macdockiconhandler.cpp \
  moc_macnotificationhandler.cpp \
  moc_monitoreddatamapper.cpp \
  moc_notificator.cpp \
  moc_openuridialog.cpp \
  moc_optionsdialog.cpp \
  moc_optionsmodel.cpp \
  moc_overviewpage.cpp \
  moc_paymentserver.cpp \
  moc_qvalidatedlineedit.cpp \
  moc_qvaluecombobox.cpp \
  moc_receivecoinsdialog.cpp \
  moc_receiverequestdialog.cpp \
  moc_recentrequeststablemodel.cpp \
  moc_rpcconsole.cpp \
  moc_sendcoinsdialog.cpp \
  moc_sendcoinsentry.cpp \
  moc_signverifymessagedialog.cpp \
  moc_splashscreen.cpp \
  moc_trafficgraphwidget.cpp \
  moc_transactiondesc.cpp \
  moc_transactiondescdialog.cpp \
  moc_transactionfilterproxy.cpp \
  moc_transactiontablemodel.cpp \
  moc_transactionview.cpp \
  moc_utilitydialog.cpp \
  moc_walletframe.cpp \
  moc_walletmodel.cpp \
  moc_walletview.cpp

PAYPROCOIN_MM = \
  macdockiconhandler.mm \
  macnotificationhandler.mm

QT_MOC = \
  payprocoin.moc \
  intro.moc \
  overviewpage.moc \
  rpcconsole.moc

QT_QRC_CPP = qrc_payprocoin.cpp
QT_QRC = payprocoin.qrc

PROTOBUF_CC = paymentrequest.pb.cc
PROTOBUF_H = paymentrequest.pb.h
PROTOBUF_PROTO = paymentrequest.proto

PAYPROCOIN_QT_H = \
  addressbookpage.h \
  addresstablemodel.h \
  askpassphrasedialog.h \
  payprocoinaddressvalidator.h \
  payprocoinamountfield.h \
  payprocoingui.h \
  payprocoinunits.h \
  clientmodel.h \
  coincontroldialog.h \
  coincontroltreewidget.h \
  csvmodelwriter.h \
  editaddressdialog.h \
  guiconstants.h \
  guiutil.h \
  intro.h \
  macdockiconhandler.h \
  macnotificationhandler.h \
  monitoreddatamapper.h \
  notificator.h \
  openuridialog.h \
  optionsdialog.h \
  optionsmodel.h \
  overviewpage.h \
  paymentrequestplus.h \
  paymentserver.h \
  qvalidatedlineedit.h \
  qvaluecombobox.h \
  receivecoinsdialog.h \
  receiverequestdialog.h \
  recentrequeststablemodel.h \
  rpcconsole.h \
  sendcoinsdialog.h \
  sendcoinsentry.h \
  signverifymessagedialog.h \
  splashscreen.h \
  trafficgraphwidget.h \
  transactiondesc.h \
  transactiondescdialog.h \
  transactionfilterproxy.h \
  transactionrecord.h \
  transactiontablemodel.h \
  transactionview.h \
  utilitydialog.h \
  walletframe.h \
  walletmodel.h \
  walletmodeltransaction.h \
  walletview.h \
  winshutdownmonitor.h

RES_ICONS = \
  res/icons/add.png \
  res/icons/address-book.png \
  res/icons/payprocoin.ico \
  res/icons/payprocoin.png \
  res/icons/payprocoin_testnet.ico \
  res/icons/payprocoin_testnet.png \
  res/icons/clock1.png \
  res/icons/clock2.png \
  res/icons/clock3.png \
  res/icons/clock4.png \
  res/icons/clock5.png \
  res/icons/configure.png \
  res/icons/connect0_16.png \
  res/icons/connect1_16.png \
  res/icons/connect2_16.png \
  res/icons/connect3_16.png \
  res/icons/connect4_16.png \
  res/icons/debugwindow.png \
  res/icons/edit.png \
  res/icons/editcopy.png \
  res/icons/editpaste.png \
  res/icons/export.png \
  res/icons/filesave.png \
  res/icons/history.png \
  res/icons/key.png \
  res/icons/lock_closed.png \
  res/icons/lock_open.png \
  res/icons/overview.png \
  res/icons/qrcode.png \
  res/icons/quit.png \
  res/icons/receive.png \
  res/icons/remove.png \
  res/icons/send.png \
  res/icons/synced.png \
  res/icons/toolbar.png \
  res/icons/toolbar_testnet.png \
  res/icons/transaction0.png \
  res/icons/transaction2.png \
  res/icons/transaction_conflicted.png \
  res/icons/tx_inout.png \
  res/icons/tx_input.png \
  res/icons/tx_output.png \
  res/icons/tx_mined.png

PAYPROCOIN_QT_CPP = \
  payprocoin.cpp \
  payprocoinaddressvalidator.cpp \
  payprocoinamountfield.cpp \
  payprocoingui.cpp \
  payprocoinunits.cpp \
  clientmodel.cpp \
  csvmodelwriter.cpp \
  guiutil.cpp \
  intro.cpp \
  monitoreddatamapper.cpp \
  notificator.cpp \
  optionsdialog.cpp \
  optionsmodel.cpp \
  qvalidatedlineedit.cpp \
  qvaluecombobox.cpp \
  rpcconsole.cpp \
  splashscreen.cpp \
  trafficgraphwidget.cpp \
  utilitydialog.cpp \
  winshutdownmonitor.cpp

if ENABLE_WALLET
PAYPROCOIN_QT_CPP += \
  addressbookpage.cpp \
  addresstablemodel.cpp \
  askpassphrasedialog.cpp \
  coincontroldialog.cpp \
  coincontroltreewidget.cpp \
  editaddressdialog.cpp \
  openuridialog.cpp \
  overviewpage.cpp \
  paymentrequestplus.cpp \
  paymentserver.cpp \
  receivecoinsdialog.cpp \
  receiverequestdialog.cpp \
  recentrequeststablemodel.cpp \
  sendcoinsdialog.cpp \
  sendcoinsentry.cpp \
  signverifymessagedialog.cpp \
  transactiondesc.cpp \
  transactiondescdialog.cpp \
  transactionfilterproxy.cpp \
  transactionrecord.cpp \
  transactiontablemodel.cpp \
  transactionview.cpp \
  walletframe.cpp \
  walletmodel.cpp \
  walletmodeltransaction.cpp \
  walletview.cpp
endif

RES_IMAGES = \
  res/images/about.png \
  res/images/splash.png \
  res/images/splash_testnet.png

RES_MOVIES = $(wildcard res/movies/spinner-*.png)

PAYPROCOIN_RC = res/payprocoin-qt-res.rc

libpayprocoinqt_a_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms $(QT_DBUS_INCLUDES)
libpayprocoinqt_a_SOURCES = $(PAYPROCOIN_QT_CPP) $(PAYPROCOIN_QT_H) $(QT_FORMS_UI) \
  $(QT_QRC) $(QT_TS) $(PROTOBUF_PROTO) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES)

nodist_libpayprocoinqt_a_SOURCES = $(QT_MOC_CPP) $(QT_MOC) $(PROTOBUF_CC) \
  $(PROTOBUF_H) $(QT_QRC_CPP)

BUILT_SOURCES = $(nodist_libpayprocoinqt_a_SOURCES)

#Generating these with a half-written protobuf header leads to wacky results.
#This makes sure it's done.
$(QT_MOC): $(PROTOBUF_H)
$(QT_MOC_CPP): $(PROTOBUF_H)

# payprocoin-qt binary #
payprocoin_qt_CPPFLAGS = $(AM_CPPFLAGS) $(QT_INCLUDES) \
  -I$(top_srcdir)/src/qt/forms
payprocoin_qt_SOURCES = payprocoin.cpp
if TARGET_DARWIN
  payprocoin_qt_SOURCES += $(PAYPROCOIN_MM)
endif
if TARGET_WINDOWS
  payprocoin_qt_SOURCES += $(PAYPROCOIN_RC)
endif
payprocoin_qt_LDADD = libpayprocoinqt.a $(LIBPAYPROCOIN_SERVER)
if ENABLE_WALLET
payprocoin_qt_LDADD += $(LIBPAYPROCOIN_WALLET)
endif
payprocoin_qt_LDADD += $(LIBPAYPROCOIN_CLI) $(LIBPAYPROCOIN_COMMON) $(LIBLEVELDB) $(LIBMEMENV) \
  $(BOOST_LIBS) $(QT_LIBS) $(QT_DBUS_LIBS) $(QR_LIBS) $(PROTOBUF_LIBS) $(BDB_LIBS)
payprocoin_qt_LDFLAGS = $(QT_LDFLAGS)

# forms/foo.h -> forms/ui_foo.h
QT_FORMS_H=$(join $(dir $(QT_FORMS_UI)),$(addprefix ui_, $(notdir $(QT_FORMS_UI:.ui=.h))))

#locale/foo.ts -> locale/foo.qm
QT_QM=$(QT_TS:.ts=.qm)

.PHONY: FORCE
.SECONDARY: $(QT_QM)

payprocoinstrings.cpp: FORCE
	$(MAKE) -C $(top_srcdir)/src qt/payprocoinstrings.cpp

translate: payprocoinstrings.cpp $(QT_FORMS_UI) $(QT_FORMS_UI) $(PAYPROCOIN_QT_CPP) $(PAYPROCOIN_QT_H) $(PAYPROCOIN_MM)
	@test -n $(LUPDATE) || echo "lupdate is required for updating translations"
	@QT_SELECT=$(QT_SELECT) $(LUPDATE) $^ -locations relative -no-obsolete -ts locale/payprocoin_en.ts

$(QT_QRC_CPP): $(QT_QRC) $(QT_QM) $(QT_FORMS_H) $(RES_ICONS) $(RES_IMAGES) $(RES_MOVIES) $(PROTOBUF_H)
	@cd $(abs_srcdir); test -f $(RCC) && QT_SELECT=$(QT_SELECT) $(RCC) -name payprocoin -o $(abs_builddir)/$@ $< || \
	  echo error: could not build $@
	$(SED) -e '/^\*\*.*Created:/d' $@ > $@.n && mv $@{.n,}
	$(SED) -e '/^\*\*.*by:/d' $@  > $@.n && mv $@{.n,}

CLEANFILES = $(BUILT_SOURCES) $(QT_QM) $(QT_FORMS_H) *.gcda *.gcno
