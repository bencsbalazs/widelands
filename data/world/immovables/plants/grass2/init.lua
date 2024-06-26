push_textdomain("world")

local dirname = path.dirname(__file__)

wl.Descriptions():new_immovable_type{
   name = "grass2",
   descname = _("Grass"),
   size = "none",
   programs = {},
   animation_directory = dirname,
   animations = {
      idle = {
         hotspot = { 10, 16 },
         sound_effect = {
            path = "sound/animals/frog",
            priority = "0.01%"
         },
      },
   }
}

pop_textdomain()
