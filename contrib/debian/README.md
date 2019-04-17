
Debian
====================
This directory contains files used to package zdxd/zdx-qt
for Debian-based Linux systems. If you compile zdxd/zdx-qt yourself, there are some useful files here.

## zdx: URI support ##


zdx-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install zdx-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your zdxqt binary to `/usr/bin`
and the `../../share/pixmaps/zdx128.png` to `/usr/share/pixmaps`

zdx-qt.protocol (KDE)

