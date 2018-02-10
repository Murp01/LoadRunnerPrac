/* -------------------------------------------------------------------------------
	Script Title       : 
	Script Description : 
                        
                        
	Recorder Version   : 911
   ------------------------------------------------------------------------------- */

vuser_init()
{

	web_url("moodle", 
		"URL=http://localhost/moodle/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=theme/javascript.php/afterburner/1409244180/head", ENDITEM, 
		"Url=lib/javascript.php/1409244180/lib/javascript-static.js", ENDITEM, 
		"Url=theme/image.php/afterburner/theme/1409244180/core/bground", ENDITEM, 
		"Url=theme/image.php/afterburner/theme/1409244180/images/logo", ENDITEM, 
		"Url=theme/image.php/afterburner/theme/1409244180/images/light3", ENDITEM, 
		"Url=theme/image.php/afterburner/core/1409244180/t/collapsed", ENDITEM, 
		"Url=theme/image.php/afterburner/theme/1409244180/core/h2grad", ENDITEM, 
		"Url=theme/yui_combo.php?3.5.1/build/oop/oop-min.js&3.5.1/build/event-custom-base/event-custom-base-min.js&3.5.1/build/dom-core/dom-core-min.js&3.5.1/build/dom-base/dom-base-min.js&3.5.1/build/selector-native/selector-native-min.js&3.5.1/build/selector/selector-min.js&3.5.1/build/node-core/node-core-min.js&3.5.1/build/node-base/node-base-min.js&3.5.1/build/event-base/event-base-min.js&3.5.1/build/event-delegate/event-delegate-min.js&3.5.1/build/node-event-delegate/node-event-delegate-min.js&3.5.1/"
		"build/pluginhost-base/pluginhost-base-min.js&3.5.1/build/pluginhost-config/pluginhost-config-min.js&3.5.1/build/node-pluginhost/node-pluginhost-min.js&3.5.1/build/dom-style/dom-style-min.js&3.5.1/build/dom-screen/dom-screen-min.js&3.5.1/build/node-screen/node-screen-min.js&3.5.1/build/node-style/node-style-min.js", ENDITEM, 
		"Url=lib/javascript.php/1409244180/blocks/dock.js", ENDITEM, 
		"Url=theme/yui_combo.php?3.5.1/build/attribute-core/attribute-core-min.js&3.5.1/build/base-core/base-core-min.js&3.5.1/build/event-custom-complex/event-custom-complex-min.js&3.5.1/build/attribute-events/attribute-events-min.js&3.5.1/build/attribute-extras/attribute-extras-min.js&3.5.1/build/attribute-base/attribute-base-min.js&3.5.1/build/base-base/base-base-min.js&3.5.1/build/base-pluginhost/base-pluginhost-min.js&3.5.1/build/base-build/base-build-min.js&3.5.1/build/event-synthetic/"
		"event-synthetic-min.js&3.5.1/build/event-mouseenter/event-mouseenter-min.js&3.5.1/build/event-resize/event-resize-min.js", ENDITEM, 
		"Url=theme/image.php/afterburner/core/1409244180/t/dock_to_block", ENDITEM, 
		"Url=theme/yui_combo.php?moodle/1409244180/block_navigation/navigation/navigation.js", ENDITEM, 
		"Url=theme/yui_combo.php?3.5.1/build/querystring-stringify-simple/querystring-stringify-simple-min.js&3.5.1/build/io-base/io-base-min.js&3.5.1/build/json-parse/json-parse-min.js", ENDITEM, 
		"Url=theme/image.php/afterburner/core/1409244180/t/block_to_dock", ENDITEM, 
		"Url=theme/yui_combo.php?moodle/1409244180/calendar/eventmanager/eventmanager.js", ENDITEM, 
		"Url=theme/yui_combo.php?3.5.1/build/overlay/assets/skins/sam/overlay.css&3.5.1/build/widget-base/assets/skins/sam/widget-base.css&3.5.1/build/widget-stack/assets/skins/sam/widget-stack.css&3.5.1/build/test/assets/skins/sam/test.css&moodle/1409244180/calendar/eventmanager/eventmanager.css", ENDITEM, 
		"Url=theme/yui_combo.php?3.5.1/build/attribute-complex/attribute-complex-min.js&3.5.1/build/classnamemanager/classnamemanager-min.js&3.5.1/build/event-focus/event-focus-min.js&3.5.1/build/widget-base/widget-base-min.js&3.5.1/build/widget-htmlparser/widget-htmlparser-min.js&3.5.1/build/widget-skin/widget-skin-min.js&3.5.1/build/widget-uievents/widget-uievents-min.js&3.5.1/build/widget-stdmod/widget-stdmod-min.js&3.5.1/build/widget-position/widget-position-min.js&3.5.1/build/widget-position-align/"
		"widget-position-align-min.js&3.5.1/build/widget-stack/widget-stack-min.js&3.5.1/build/widget-position-constrain/widget-position-constrain-min.js&3.5.1/build/overlay/overlay-min.js&3.5.1/build/event-simulate/event-simulate-min.js&3.5.1/build/substitute/substitute-min.js&3.5.1/build/json-stringify/json-stringify-min.js&3.5.1/build/test/test-min.js", ENDITEM, 
		"Url=theme/image.php/afterburner/core/1409244180/t/switch_plus", ENDITEM, 
		"Url=theme/image.php/afterburner/core/1409244180/t/switch_minus", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("display-culture=en-GB; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MC1=GUID=fcd3d6764e0ded4a88964038a64f1c51&HASH=76d6&LV=201703&V=4&LU=1489708915842; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MSFPC=ID=0639701be2f57249a5d06723427729be&CS=1&LV=201703&V=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("MUID=24BEF2271A3B64D0317AFBCF1BEF65F4; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20161119; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("NAP=V=1.9&E=1450&C=06Q31V1XD_JKdnJ9wfzI6V3wj4UDNjCxdKhQdwp0X1vvCGgcfSaNUg&W=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("ANON=A=1D3AEEDD41B4DD9A8C35685DFFFFFFFF&E=14aa&W=1; DOMAIN=iecvlist.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAABgCQAAjao2zF9IaQsY4ViBzhem9Q!!&V=4; DOMAIN=iecvlist.microsoft.com");

	web_add_header("DNT", 
		"1");

	web_add_header("UA-CPU", 
		"AMD64");

	lr_think_time(26);

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}