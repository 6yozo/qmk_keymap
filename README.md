# 6yozo_crkbd_miryoku qmk_keymap

Design goals for the layout:
---

- Shold be touch type friendly.
- Use the well thought out Miryoku layout(no modifications to it).
- Should be able to use hungarian accents.
- The host keyboard layout should be set to Hungarian.
- Multiple OSs must be supported: Windows / Linux / Mac
- Use Colemak DH layout on Corne which is the default in Miryoku layout.

Hungarian accents:
---

The hungarian accents in prevalence(The source is probably not accurate, but it is a good start)

áéóöőíúűü

Source:
[https://www.reddit.com/r/hungary/comments/st8nwe/az_egyes_bet%C5%B1k_gyakoris%C3%A1ga_a_magyar_wordle/]

There are 2x3 extra keys on the Corne, so on the base layout 6
hungarian accents can be defined, the remaining three accents will be
defined on NAV layer.

The placement of the characters is based on the effort grid for matrix
keyboards as described on
[https://colemakmods.github.io/mod-dh/model.html]

á left pinky home
é right pinky home
ó left pinky top
ö right pinky top
ő left pinky bottom
í right pinky bottom
ú nav layer right pinky home
ü nav layer right pinky top
ű nav layer right pinky bottom.

The RAlt on KC_DOT seems to disable keyoverride, so both RALTs is
moved to the upper row.

Implementation
---

The keys are moved around on the keymap so they will emit the desired
character on a host with a hungarian layout. For some symbols there is
no such key on the hungarian keyboard because modifiers must be used
to type them (For example: '[' is typed by AltGr-f). In this case
there is no key to move - more precisly whichever key is used both the
base character and its shifted pair must be overriden - in this
case I have decided to move F1..Fx keys.

TODO
---

Try to restore RALT to its original position