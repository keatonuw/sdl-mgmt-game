# Building

## Requirements
* SDL 2.0

## Mac
First, make sure you have SDL installed. If not, installing SDL via homebrew is an easy option.
```
brew install sdl2
```
> If you are developing using VS Code, you'll have to update the include path to point to your SDL2 headers.
For me, this is /opt/homebrew/include. You can find an appropriate path by running `sdl2-config --cflags`. VS Code may need a restart before it stops complaining about `#include` errors.

For now: build with:
```
gcc -o first first.c `sdl2-config --cflags --libs`
```