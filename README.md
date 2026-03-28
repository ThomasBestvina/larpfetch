# larpfetch

A fetch program for all your larping needs.

This is a joke fork of https://github.com/fastfetch-cli/fastfetch and will almost certainly not be maintained.

## install
`git clone https://github.com/thomasbestvina/larpfetch`
`cd larpfetch`
`mkdir build && cd build`
`cmake .. -DCMAKE_BUILD_TYPE=Release -DBUILD_FLASHFETCH=OFF`
`cmake --build . -j$(nproc)`
`sudo cmake --install .`
