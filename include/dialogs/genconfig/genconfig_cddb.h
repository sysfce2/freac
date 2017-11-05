 /* fre:ac - free audio converter
  * Copyright (C) 2001-2016 Robert Kausch <robert.kausch@freac.org>
  *
  * This program is free software; you can redistribute it and/or
  * modify it under the terms of the "GNU General Public License".
  *
  * THIS PACKAGE IS PROVIDED "AS IS" AND WITHOUT ANY EXPRESS OR
  * IMPLIED WARRANTIES, INCLUDING, WITHOUT LIMITATION, THE IMPLIED
  * WARRANTIES OF MERCHANTIBILITY AND FITNESS FOR A PARTICULAR PURPOSE. */

#ifndef H_FREAC_GENCONFIG_CDDB
#define H_FREAC_GENCONFIG_CDDB

#include <main.h>

namespace freac
{
	class GeneralSettingsLayerCDDB : public Layer
	{
		private:
			Layer		*layer_local_background;
			CheckBox	*check_local;

			Layer		*layer_remote_background;
			CheckBox	*check_remote;

			GroupBox	*group_local;
			Text		*text_dir;
			EditBox		*edit_dir;
			Button		*button_browse;

			GroupBox	*group_cddb;
			Text		*text_mode;
			ComboBox	*combo_mode;
			Text		*text_server;
			EditBox		*edit_server;
			Text		*text_port;
			EditBox		*edit_port;
			Text		*text_email;
			EditBox		*edit_email;
			Button		*button_http;
			Button		*button_proxy;

			GroupBox	*group_cddb_options;
			CheckBox	*check_auto;
			CheckBox	*check_cdtext;
			CheckBox	*check_cache;

			Bool		 cddb_auto;
			Bool		 cddb_cdtext;
			Bool		 cddb_cache;
 
			Bool		 cddb_local;
			Bool		 cddb_remote;

			Config		*currentConfig;
		slots:
			Void		 ToggleLocalCDDB();
			Void		 ToggleRemoteCDDB();

			Void		 ToggleCDDBSettings();

			Void		 SetCDDBMode();
			Void		 ToggleAutoCDDB();

			Void		 SelectDir();

			Void		 HTTPSettings();
			Void		 ProxySettings();
		public:
					 GeneralSettingsLayerCDDB();
					~GeneralSettingsLayerCDDB();

			Int		 GetFreedbMode();
			Int		 GetFreedbPort();

			String		 GetFreedbServer();
			String		 GetFreedbEMail();

			Bool		 GetCDDBAutoQuery();
			Bool		 GetCDDBOverwriteCDText();
			Bool		 GetCDDBCache();

			Bool		 GetLocalCDDB();
			Bool		 GetRemoteCDDB();

			String		 GetLocalPath();
	};
};

#endif