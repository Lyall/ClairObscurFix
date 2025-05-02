# ClairObscurFix
[![Patreon-Button](https://github.com/Lyall/ClairObscurFix/blob/main/.github/Patreon-Button.png?raw=true)](https://www.patreon.com/Wintermance) 
[![ko-fi](https://ko-fi.com/img/githubbutton_sm.svg)](https://ko-fi.com/W7W01UAI9)<br />
[![Github All Releases](https://img.shields.io/github/downloads/Lyall/ClairObscurFix/total.svg)](https://github.com/Lyall/ClairObscurFix/releases)

**ClairObscurFix** is an ASI plugin for Clair Obscur: Expedition 33 that removes the 30fps cap in cutscenes, fixes ultrawide issues and more.

## Features
- Skip intro logos.
- Enable developer console.
- Remove 30fps cap in cutscenes.
- Disable letterboxing/pillarboxing in cutscenes.
- Disable forced sharpening.
- Fix FOV issues when using ultrawide resolutions.

## Installation  
- Download the latest release from [here](https://github.com/Lyall/ClairObscurFix/releases). 
- Extract the contents of the release zip in to the the game folder.  

### Steam Deck/Linux Additional Instructions
🚩**You do not need to do this if you are using Windows!**  
- Open up the game properties in Steam/Epic and add `WINEDLLOVERRIDES="dsound=n,b" %command%` to the launch options.

## Configuration
- Open **`ClairObscurFix.ini`** to adjust settings.

## Building
- Use Windows for building
- Install Git, [XMake](https://xmake.io) and a [C++ compiler](https://visualstudio.microsoft.com/vs/features/cplusplus/)
- Clone this repository with `git clone https://github.com/Lyall/ClairObscurFix --recurse-submodules`
- Run `xmake`
- The output ASI plugin is located at `build/windows/x64/release/ClairObscurFix.asi`

## Credits
[Ultimate ASI Loader](https://github.com/ThirteenAG/Ultimate-ASI-Loader) for ASI loading. <br />
[inipp](https://github.com/mcmtroffaes/inipp) for ini reading. <br />
[spdlog](https://github.com/gabime/spdlog) for logging. <br />
[safetyhook](https://github.com/cursey/safetyhook) for hooking.
