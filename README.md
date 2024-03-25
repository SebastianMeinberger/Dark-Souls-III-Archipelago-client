# Dark-Souls-III-Archipelago-client

Dark Souls III client made for Archipelago multiworld randomizer. See [archipelago.gg](https://archipelago.gg/)
This is a refactor of the original client found at https://github.com/Marechal-L/Dark-Souls-III-Archipelago-client.
The goal is to streamline the build process (OS independent, consistend handling of build dependencies, distribution of binary files only via CI), make the client easier to use on Linux/wine and later to integrate the client into the existing archipelago python client.

# When to use
If you just want play a round archipelago, use the [original version](https://github.com/Marechal-L/Dark-Souls-III-Archipelago-client/releases).
This version currently only bears value if you care about not using binaries that were build in an intransparent manner and don't wont to deal with building the original version (it's pretty hard due to it being build with Visual Studio).


# How to install

## Downpatch
You need DS3 version 1.5 (current Version is 1.5.3).
Follow the [archipelago guide](https://archipelago.gg/tutorial/Dark%20Souls%20III/setup/en) to downpatch.

## Prebuild
TL;DR:
Download the dlls from the latest release and place them in the game folder that pops up when you rightclick DS3 in steam and click "Browse local files" (on the same level where the .exe is).


This mod works by hijacking the dinput8.dll that is provided by Windows.
Therefore you need to place the modified dll, avaiable in the release section, in the main game folder (the same where the .exe is).
Additionaly, this version requires the mingw runtime.
You can either use the runtime dlls provided in the release, i.e. place the other dlls alongside the dinput8.dll, or install the mingw runtime on your system.
For the latter, you need to keep in mind that you need to install a mingw runtime that is compatible with the mingw version avaiable in the Ubuntu Jammy repos (2.38-3), since Jammy is used for the Github Linux runners.

When starting DS3, a Windows CMD windows should open in addition to the game (works only partially under wine).

## Or build yourself
Build deps:
- binutils-mingw-w64-x86-64
- g++-mingw-w64-x86-64
- gcc-mingw-w64-x86-64
- (as an alternative to installing the three mingw packages, you can probably also just install an all inculing mingw package depending on your distro)
- cmake
- vcpkg
- ninja (Needed by vcpkg. In theory, vcpkg can fetch it itself but I would recommend using a system wide version)
- uasm

Then run ```cmake --preset mingw CMakeLists.txt``` followed by ```make -C build/vcpkg/ all```.
If in doubt, check the [CI file](https://github.com/SebastianMeinberger/Dark-Souls-III-Archipelago-client/blob/main/.github/workflows/build-release.yml).

## Commands
- All client commands start with "/" and archipelago commands start with "!" :
	- /help : Prints this help message.
	- !help : to retrieve all archipelago commands
	- /connect {SERVER_IP}:{SERVER_PORT} {USERNAME} [password:{PASSWORD}]  
	Connect by entering SERVER_IP, SERVER_PORT and USERNAME. You can additionaly add a PASSWORD if requested by the server.
	
## Credits
https://github.com/Marechal-L/Dark-Souls-III-Archipelago-client by Marechal

https://github.com/LukeYui/DS3-Item-Randomiser-OS by LukeYui  

https://github.com/black-sliver/apclientpp by black-sliver



