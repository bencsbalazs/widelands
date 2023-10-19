#!/bin/sh

cp -f ~/.local/share/widelands/save/Balaysland.wgf .

git add -A
git commit -m "save: game save"
git push origin bls-empire-god-mod