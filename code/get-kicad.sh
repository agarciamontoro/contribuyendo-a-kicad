git clone https://git.launchpad.net/kicad
mkdir kicad/build && cd build
cmake -DKICAD_SCRIPTING=ON \\
      -DKICAD_SCRIPTING_MODULES=ON \\
      -DKICAD_SCRIPTING_WXPYTHON=ON \\
      -DKICAD_SCRIPTING_ACTION_MENU=ON ..
make && make install
