// Copyright (c) 2014 GitHub, Inc.
// Use of this source code is governed by the MIT license that can be
// found in the LICENSE file.

#ifndef ATOM_BROWSER_UI_TRAY_ICON_OBSERVER_H_
#define ATOM_BROWSER_UI_TRAY_ICON_OBSERVER_H_

namespace atom {

class TrayIconObserver {
 public:
  virtual void OnClicked() {}
  virtual void OnDoubleClicked() {}
  virtual void OnBalloonShow() {}
  virtual void OnBalloonClicked() {}
  virtual void OnBalloonClosed() {}

 protected:
  virtual ~TrayIconObserver() {}
};

}  // namespace atom

#endif  // ATOM_BROWSER_UI_TRAY_ICON_OBSERVER_H_
