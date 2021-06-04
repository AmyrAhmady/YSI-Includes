#if !defined _INC_y_tho
	#tryinclude "y_tho\y_tho_entry"
#endif
#if !defined _INC_y_tho
	#tryinclude "YSI_Extra\y_tho\y_tho_entry"
#endif
#if !defined _INC_y_tho
	#tryinclude "YSI\YSI_Extra\y_tho\y_tho_entry"
#endif
#if !defined _INC_y_tho
	#tryinclude <YSI_Extra\y_tho\y_tho_entry>
#endif
#if !defined _INC_y_tho
	#tryinclude <YSI\YSI_Extra\y_tho\y_tho_entry>
#endif
#if !defined _INC_y_tho
	#error Could not find y_tho
#endif