# Eric N. Vander Weele's Drop ALT Keymap

This keymap tracks `massdrop/alt/keymaps/default` with the following changes:

* Copied `../default/keymap.c`.
* Create named aliases for layers.
* Turn off RGB lighting when suspended.
* Turn off RGB lighthing after 10 minuates of activity, which is the same as my
  display timeout.
* Enable WASD arrow keys in the function layer and move RGB mode and values as
  Vim `hjkl` keys. `jk` are for RGB value and `hl` are for RGB mode.
* Add a personal daily driving layer.
  * *Caps Lock* key produces *Esc*.
  * *Esc* key produces *Grave*.
* Set baseline RGB lighting to purple that pulses upon key press.
* Toggle RGB lighting to blue when using my daily driver layer. My favorite
  color :).
* Toggle RGB lighting to green when FN layer is active.
* Provide a mechanism to reset to the base layer and de-activate all others.
* Add layer for swapping *Left GUI* and *Left Alt* keys for macOS.
* Add layer for disabling the left GUI (i.e., Windows) key for gaming.
* Flash RGB red when entering the bootloader.
