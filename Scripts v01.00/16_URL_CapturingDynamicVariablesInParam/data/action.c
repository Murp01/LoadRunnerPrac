Action()
{

	web_url("moodle", 
		"URL=http://localhost/moodle/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("yui_combo.php", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/cssreset/reset-min.css&3.5.1/build/cssfonts/fonts-min.css&3.5.1/build/cssgrids/grids-min.css&3.5.1/build/cssbase/base-min.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t121.inf", 
		LAST);

	web_url("yui_combo.php_2", 
		"URL=http://localhost/moodle/theme/yui_combo.php?2.9.0/build/yahoo/yahoo-min.js&2.9.0/build/dom/dom-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t122.inf", 
		LAST);

	web_url("yui_combo.php_3", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/yui/yui-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t123.inf", 
		LAST);

	web_url("all", 
		"URL=http://localhost/moodle/theme/styles.php/afterburner/1409244180/all", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t124.inf", 
		LAST);

	web_url("yui_combo.php_4", 
		"URL=http://localhost/moodle/theme/yui_combo.php?2.9.0/build/assets/skins/sam/skin.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t127.inf", 
		LAST);

	web_url("withoutkey", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/enrol_self/1409244180/withoutkey", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t128.inf", 
		LAST);

	web_url("navigationitem", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/navigationitem", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t132.inf", 
		LAST);

	web_url("moodle-logo", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/footer/moodle-logo", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t133.inf", 
		LAST);

	web_url("footer", 
		"URL=http://localhost/moodle/theme/javascript.php/afterburner/1409244180/footer", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t134.inf", 
		LAST);

	web_add_header("UA-CPU", 
		"AMD64");

	web_add_header("DNT", 
		"1");

	web_url("favicon", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/favicon", 
		"Resource=1", 
		"RecContentType=image/vnd.microsoft.icon", 
		"Referer=", 
		"Snapshot=t149.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("javascript-static.js", 
		"URL=http://localhost/moodle/lib/javascript.php/1409244180/lib/javascript-static.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t125.inf", 
		LAST);

	web_url("head", 
		"URL=http://localhost/moodle/theme/javascript.php/afterburner/1409244180/head", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t126.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("bground", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/core/bground", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t129.inf", 
		LAST);

	web_url("logo", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/images/logo", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t130.inf", 
		LAST);

	web_url("light3", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/images/light3", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t131.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("h2grad", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/core/h2grad", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t135.inf", 
		LAST);

	web_url("collapsed", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/collapsed", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t136.inf", 
		LAST);

	web_url("yui_combo.php_5", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/oop/oop-min.js&3.5.1/build/event-custom-base/event-custom-base-min.js&3.5.1/build/dom-core/dom-core-min.js&3.5.1/build/dom-base/dom-base-min.js&3.5.1/build/selector-native/selector-native-min.js&3.5.1/build/selector/selector-min.js&3.5.1/build/node-core/node-core-min.js&3.5.1/build/node-base/node-base-min.js&3.5.1/build/event-base/event-base-min.js&3.5.1/build/event-delegate/event-delegate-min.js&3.5.1/build/node-event-delegate/"
		"node-event-delegate-min.js&3.5.1/build/pluginhost-base/pluginhost-base-min.js&3.5.1/build/pluginhost-config/pluginhost-config-min.js&3.5.1/build/node-pluginhost/node-pluginhost-min.js&3.5.1/build/dom-style/dom-style-min.js&3.5.1/build/dom-screen/dom-screen-min.js&3.5.1/build/node-screen/node-screen-min.js&3.5.1/build/node-style/node-style-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t137.inf", 
		LAST);

	web_url("dock.js", 
		"URL=http://localhost/moodle/lib/javascript.php/1409244180/blocks/dock.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t138.inf", 
		LAST);

	web_url("yui_combo.php_6", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/attribute-core/attribute-core-min.js&3.5.1/build/base-core/base-core-min.js&3.5.1/build/event-custom-complex/event-custom-complex-min.js&3.5.1/build/attribute-events/attribute-events-min.js&3.5.1/build/attribute-extras/attribute-extras-min.js&3.5.1/build/attribute-base/attribute-base-min.js&3.5.1/build/base-base/base-base-min.js&3.5.1/build/base-pluginhost/base-pluginhost-min.js&3.5.1/build/base-build/base-build-min.js&3.5.1/build/"
		"event-synthetic/event-synthetic-min.js&3.5.1/build/event-mouseenter/event-mouseenter-min.js&3.5.1/build/event-resize/event-resize-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t139.inf", 
		LAST);

	web_url("dock_to_block", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/dock_to_block", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t140.inf", 
		LAST);

	web_url("yui_combo.php_7", 
		"URL=http://localhost/moodle/theme/yui_combo.php?moodle/1409244180/block_navigation/navigation/navigation.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t141.inf", 
		LAST);

	web_url("yui_combo.php_8", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/querystring-stringify-simple/querystring-stringify-simple-min.js&3.5.1/build/io-base/io-base-min.js&3.5.1/build/json-parse/json-parse-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t142.inf", 
		LAST);

	web_url("block_to_dock", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/block_to_dock", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t143.inf", 
		LAST);

	web_url("yui_combo.php_9", 
		"URL=http://localhost/moodle/theme/yui_combo.php?moodle/1409244180/calendar/eventmanager/eventmanager.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t144.inf", 
		LAST);

	web_url("yui_combo.php_10", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/overlay/assets/skins/sam/overlay.css&3.5.1/build/widget-base/assets/skins/sam/widget-base.css&3.5.1/build/widget-stack/assets/skins/sam/widget-stack.css&3.5.1/build/test/assets/skins/sam/test.css&moodle/1409244180/calendar/eventmanager/eventmanager.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t145.inf", 
		LAST);

	web_url("yui_combo.php_11", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/attribute-complex/attribute-complex-min.js&3.5.1/build/classnamemanager/classnamemanager-min.js&3.5.1/build/event-focus/event-focus-min.js&3.5.1/build/widget-base/widget-base-min.js&3.5.1/build/widget-htmlparser/widget-htmlparser-min.js&3.5.1/build/widget-skin/widget-skin-min.js&3.5.1/build/widget-uievents/widget-uievents-min.js&3.5.1/build/widget-stdmod/widget-stdmod-min.js&3.5.1/build/widget-position/widget-position-min.js&3.5.1/build/"
		"widget-position-align/widget-position-align-min.js&3.5.1/build/widget-stack/widget-stack-min.js&3.5.1/build/widget-position-constrain/widget-position-constrain-min.js&3.5.1/build/overlay/overlay-min.js&3.5.1/build/event-simulate/event-simulate-min.js&3.5.1/build/substitute/substitute-min.js&3.5.1/build/json-stringify/json-stringify-min.js&3.5.1/build/test/test-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t146.inf", 
		LAST);

	web_url("switch_minus", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/switch_minus", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t147.inf", 
		LAST);

	web_url("switch_plus", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/switch_plus", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t148.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_think_time(32);

	lr_start_transaction("Click Login");

	web_url("Login", 
		"URL=http://localhost/moodle/login/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t150.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("help", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/help", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/login/index.php", 
		"Snapshot=t151.inf", 
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

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t152.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Click Login",LR_AUTO);

	lr_think_time(30);

	lr_start_transaction("Click Create new account");

	web_url("signup.php", 
		"URL=http://localhost/moodle/login/signup.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/login/index.php", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("req", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/req", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost/moodle/login/signup.php", 
		"Snapshot=t154.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("yui_combo.php_12", 
		"URL=http://localhost/moodle/theme/yui_combo.php?moodle/1409244180/core/formchangechecker/formchangechecker.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/login/signup.php", 
		"Snapshot=t155.inf", 
		LAST);

	web_url("yui_combo.php_13", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/attribute-core/attribute-core-min.js&3.5.1/build/base-core/base-core-min.js&3.5.1/build/event-custom-complex/event-custom-complex-min.js&3.5.1/build/attribute-events/attribute-events-min.js&3.5.1/build/attribute-extras/attribute-extras-min.js&3.5.1/build/attribute-base/attribute-base-min.js&3.5.1/build/base-base/base-base-min.js&3.5.1/build/base-build/base-build-min.js&3.5.1/build/base-pluginhost/base-pluginhost-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/login/signup.php", 
		"Snapshot=t156.inf", 
		LAST);

	web_url("yui_combo.php_14", 
		"URL=http://localhost/moodle/theme/yui_combo.php?moodle/1409244180/form/passwordunmask/passwordunmask.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/login/signup.php", 
		"Snapshot=t157.inf", 
		LAST);

	web_concurrent_end(NULL);

	lr_end_transaction("Click Create new account",LR_AUTO);

	lr_think_time(113);

	lr_start_transaction("Submite new account details");

	web_submit_data("signup.php_2", 
		"Action=http://localhost/moodle/login/signup.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/login/signup.php", 
		"Snapshot=t158.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=sesskey", "Value=yzo57Qarsi", ENDITEM, 
		"Name=_qf__login_signup_form", "Value=1", ENDITEM, 
		"Name=username", "Value=teachers1", ENDITEM, 
		"Name=password", "Value=Welcomes1!", ENDITEM, 
		"Name=email", "Value=test@test.com", ENDITEM, 
		"Name=email2", "Value=test@test.com", ENDITEM, 
		"Name=firstname", "Value=John", ENDITEM, 
		"Name=lastname", "Value=Parry", ENDITEM, 
		"Name=city", "Value=Liverpool", ENDITEM, 
		"Name=country", "Value=GB", ENDITEM, 
		"Name=submitbutton", "Value=Create my new account", ENDITEM, 
		LAST);

	lr_end_transaction("Submite new account details",LR_AUTO);

	lr_think_time(48);

	lr_start_transaction("Click Continue");

	web_submit_data("index.php", 
		"Action=http://localhost/moodle/index.php", 
		"Method=GET", 
		"EncType=", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/login/signup.php", 
		"Snapshot=t159.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		LAST);

	lr_end_transaction("Click Continue",LR_AUTO);

	return 0;
}