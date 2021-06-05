#if !defined _INC_y_serverincs
	#tryinclude "y_serverincs\y_serverincs_entry"
#endif
#if !defined _INC_y_serverincs
	#tryinclude "YSI_Extra\y_serverincs\y_serverincs_entry"
#endif
#if !defined _INC_y_serverincs
	#tryinclude "YSI\YSI_Extra\y_serverincs\y_serverincs_entry"
#endif
#if !defined _INC_y_serverincs
	#tryinclude <YSI_Extra\y_serverincs\y_serverincs_entry>
#endif
#if !defined _INC_y_serverincs
	#tryinclude <YSI\YSI_Extra\y_serverincs\y_serverincs_entry>
#endif
#if !defined _INC_y_serverincs
	#error Could not find y_serverincs
#endif