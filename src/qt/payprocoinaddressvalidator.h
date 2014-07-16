// Copyright (c) 2011-2014 The PayProCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef PAYPROCOINADDRESSVALIDATOR_H
#define PAYPROCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class PayProCoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PayProCoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** PayProCoin address widget validator, checks for a valid payprocoin address.
 */
class PayProCoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit PayProCoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // PAYPROCOINADDRESSVALIDATOR_H
