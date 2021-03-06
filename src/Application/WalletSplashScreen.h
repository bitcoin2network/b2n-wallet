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

#include <QSplashScreen>

namespace WalletGui {

class WalletSplashScreen : public QSplashScreen {
  Q_OBJECT
  Q_DISABLE_COPY(WalletSplashScreen)

public:
  explicit WalletSplashScreen(QWidget* _parent);
  ~WalletSplashScreen();

protected:
  virtual void mousePressEvent(QMouseEvent* _event) Q_DECL_OVERRIDE;
};

}
