# y_serverincs

## Introduction

*y_serverincs* make easier for you to include YSI libraries. If you don't know the exact path of the library you want to use, easily include *YSI_General\y_serverincs*.
- Note that **y_serverincs** also automatically pulls other third party libraries like: *sscanf2, streamer or a_samp.inc*

- Simply start using the include in your project:

```pawn
#include <YSI_General\y_serverincs>
```

### Usage

- After including *y_serverincs*, you don't need to include other YSI files anymore since everything is included in y_serverincs!

### Troubleshooting

- If you found a problem, contact Y-Less on Discord.

### Examples

- Before:

```pawn
#include <a_samp>
#include <streamer>
#include <sscanf2>

#include <fixes>

#include <mapandreas>
#tryinclude <MapAndreas>

#include <progress2>
#tryinclude <sscanf>

#include <YSI_Storage\y_ini>
#include <YSI_Coding\y_hooks>
#include <YSI_Data\y_foreach\y_foreach_entry>

#tryinclude <..y_amx>
#tryinclude <y_ini>
#tryinclude <YSI\y_hooks>

(...)

```
What a mess - this could be **better**, right?
- After using *y_serverincs* library:

```pawn
#include <YSI_General\y_serverincs>

(...)
```

## SA-MP fixes
*y_serverincs* also pulls fixes.inc library, so don't worry - fixes are here too.
- But, since fixes are sometimes able to mess with some stuff it's disabled by default.

To enable fixes.inc including, add this code above your *y_serverincs* include:
```pawn
// Added fixes as dependency:
#define _ACTIVATE_fixes 1

// y_serverincs code import:
#include <YSI_General\y_serverincs>

(...)
```
