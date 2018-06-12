
Debian
====================
This directory contains files used to package fisheryd/fishery-qt
for Debian-based Linux systems. If you compile fisheryd/fishery-qt yourself, there are some useful files here.

## fishery: URI support ##


fishery-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fishery-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fisheryqt binary to `/usr/bin`
and the `../../share/pixmaps/fishery128.png` to `/usr/share/pixmaps`

fishery-qt.protocol (KDE)

