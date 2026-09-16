MossdeepCity_House3_MapScripts::
	.byte 0

MossdeepCity_House3_EventScript_Fisherman::
	lock
	faceplayer
	msgbox MossdeepCity_House3_Text
	release
	end

MossdeepCity_House3_Text:
	.string "Hey there, TRAINER!\n"
	.string "Did you know there's some crazy\n"
	.string "Pokemon in the sea? You should try\n"
	.string "looking for them yourself.$"
