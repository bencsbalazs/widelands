#!/bin/sh

cp -f ~/.local/share/widelands/save/BLS.wgf .

git add -A
git commit -m "save: game save"
git push origin bls-mod-barbarian-god
