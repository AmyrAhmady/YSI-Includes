# y_serverincs

## Introduction

*y_serverincs* make easier for you to include YSI libraries. If you don't know the exact path of the library you want to use, easily include *YSI_General\y_serverincs*.

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
#include <YSI_Storage\y_ini>
#include <YSI_Coding\y_hooks>
#include <YSI_Data\y_foreach\y_foreach_entry>
```

- After using *y_serverincs* library:

```pawn
#include <YSI_General\y_serverincs>

(...)
```
