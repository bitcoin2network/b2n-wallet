/*
 * Copyright (c) 2018, The bitcoin2network developers.
 * Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.
 *
 * This file is part of bitcoin2network.
 *
 * This file is subject to the terms and conditions defined in the
 * file 'LICENSE', which is part of this source code package.
 */

#pragma once

#include <QSortFilterProxyModel>

namespace WalletGui {

class WalletWindowedItemModel : public QSortFilterProxyModel {
  Q_OBJECT
  Q_DISABLE_COPY(WalletWindowedItemModel)

public:
  WalletWindowedItemModel(int _filterRole, QObject* _parent);
  virtual ~WalletWindowedItemModel();

  quint32 getWindowSize() const;
  quint32 getWindowBegin() const;
  virtual void setWindowSize(quint32 _windowSize);
  virtual void setWindowBegin(quint32 _windowBegin);

protected:
  virtual bool filterAcceptsRow(int _sourceRow, const QModelIndex &_sourceParent) const override;

private:
  int m_filterRole;
  quint32 m_windowSize;
  quint32 m_windowBegin;

};

}
