// Copyright (c) 2011-2015 The Cryptonote developers
// Copyright (c) 2014-2015 XDN developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

namespace CryptoNote {

template <typename T>
class IObservable {
public:
  virtual void addObserver(T* observer) = 0;
  virtual void removeObserver(T* observer) = 0;
};

}