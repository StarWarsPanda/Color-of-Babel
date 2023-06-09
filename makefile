# ----------------------------
# Makefile Options
# ----------------------------

NAME = COLBABEL
ICON = icon.png
DESCRIPTION = "Color of Babel"
COMPRESSED = NO
ARCHIVED = NO

CFLAGS = -Wall -Wextra -Oz
CXXFLAGS = -Wall -Wextra -Oz

# ----------------------------

include $(shell cedev-config --makefile)
