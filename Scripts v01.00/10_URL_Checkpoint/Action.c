Action()
{

	web_url("moodle", 
		"URL=http://localhost/moodle/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t62.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("javascript-static.js", 
		"URL=http://localhost/moodle/lib/javascript.php/1409244180/lib/javascript-static.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t67.inf", 
		LAST);

	web_url("head", 
		"URL=http://localhost/moodle/theme/javascript.php/afterburner/1409244180/head", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t68.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("bground", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/core/bground", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t70.inf", 
		LAST);

	web_concurrent_start(NULL);

	web_url("logo", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/images/logo", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t72.inf", 
		LAST);

	web_url("light3", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/images/light3", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t73.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_concurrent_start(NULL);

	web_url("collapsed", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/collapsed", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t77.inf", 
		LAST);

	web_url("h2grad", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/core/h2grad", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t78.inf", 
		LAST);

	web_url("yui_combo.php_5", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/oop/oop-min.js&3.5.1/build/event-custom-base/event-custom-base-min.js&3.5.1/build/dom-core/dom-core-min.js&3.5.1/build/dom-base/dom-base-min.js&3.5.1/build/selector-native/selector-native-min.js&3.5.1/build/selector/selector-min.js&3.5.1/build/node-core/node-core-min.js&3.5.1/build/node-base/node-base-min.js&3.5.1/build/event-base/event-base-min.js&3.5.1/build/event-delegate/event-delegate-min.js&3.5.1/build/node-event-delegate/"
		"node-event-delegate-min.js&3.5.1/build/pluginhost-base/pluginhost-base-min.js&3.5.1/build/pluginhost-config/pluginhost-config-min.js&3.5.1/build/node-pluginhost/node-pluginhost-min.js&3.5.1/build/dom-style/dom-style-min.js&3.5.1/build/dom-screen/dom-screen-min.js&3.5.1/build/node-screen/node-screen-min.js&3.5.1/build/node-style/node-style-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t79.inf", 
		LAST);

	web_url("dock.js", 
		"URL=http://localhost/moodle/lib/javascript.php/1409244180/blocks/dock.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t80.inf", 
		LAST);

	web_url("yui_combo.php_6", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/attribute-core/attribute-core-min.js&3.5.1/build/base-core/base-core-min.js&3.5.1/build/event-custom-complex/event-custom-complex-min.js&3.5.1/build/attribute-events/attribute-events-min.js&3.5.1/build/attribute-extras/attribute-extras-min.js&3.5.1/build/attribute-base/attribute-base-min.js&3.5.1/build/base-base/base-base-min.js&3.5.1/build/base-pluginhost/base-pluginhost-min.js&3.5.1/build/base-build/base-build-min.js&3.5.1/build/"
		"event-synthetic/event-synthetic-min.js&3.5.1/build/event-mouseenter/event-mouseenter-min.js&3.5.1/build/event-resize/event-resize-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t81.inf", 
		LAST);

	web_url("dock_to_block", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/dock_to_block", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t82.inf", 
		LAST);

	web_url("yui_combo.php_7", 
		"URL=http://localhost/moodle/theme/yui_combo.php?moodle/1409244180/block_navigation/navigation/navigation.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t83.inf", 
		LAST);

	web_url("yui_combo.php_8", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/querystring-stringify-simple/querystring-stringify-simple-min.js&3.5.1/build/io-base/io-base-min.js&3.5.1/build/json-parse/json-parse-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t84.inf", 
		LAST);

	web_url("block_to_dock", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/block_to_dock", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t85.inf", 
		LAST);

	web_url("yui_combo.php_9", 
		"URL=http://localhost/moodle/theme/yui_combo.php?moodle/1409244180/calendar/eventmanager/eventmanager.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t86.inf", 
		LAST);

	web_url("yui_combo.php_10", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/overlay/assets/skins/sam/overlay.css&3.5.1/build/widget-base/assets/skins/sam/widget-base.css&3.5.1/build/widget-stack/assets/skins/sam/widget-stack.css&3.5.1/build/test/assets/skins/sam/test.css&moodle/1409244180/calendar/eventmanager/eventmanager.css", 
		"Resource=1", 
		"RecContentType=text/css", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t87.inf", 
		LAST);

	web_url("yui_combo.php_11", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/attribute-complex/attribute-complex-min.js&3.5.1/build/classnamemanager/classnamemanager-min.js&3.5.1/build/event-focus/event-focus-min.js&3.5.1/build/widget-base/widget-base-min.js&3.5.1/build/widget-htmlparser/widget-htmlparser-min.js&3.5.1/build/widget-skin/widget-skin-min.js&3.5.1/build/widget-uievents/widget-uievents-min.js&3.5.1/build/widget-stdmod/widget-stdmod-min.js&3.5.1/build/widget-position/widget-position-min.js&3.5.1/build/"
		"widget-position-align/widget-position-align-min.js&3.5.1/build/widget-stack/widget-stack-min.js&3.5.1/build/widget-position-constrain/widget-position-constrain-min.js&3.5.1/build/overlay/overlay-min.js&3.5.1/build/event-simulate/event-simulate-min.js&3.5.1/build/substitute/substitute-min.js&3.5.1/build/json-stringify/json-stringify-min.js&3.5.1/build/test/test-min.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t88.inf", 
		LAST);

	web_url("switch_minus", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/switch_minus", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t89.inf", 
		LAST);

	web_url("switch_plus", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/switch_plus", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t90.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("display-culture=en-GB; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MC1=GUID=fcd3d6764e0ded4a88964038a64f1c51&HASH=76d6&LV=201703&V=4&LU=1489708915842; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MSFPC=ID=0639701be2f57249a5d06723427729be&CS=1&LV=201703&V=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MUID=24BEF2271A3B64D0317AFBCF1BEF65F4; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20161119; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("NAP=V=1.9&E=1450&C=06Q31V1XD_JKdnJ9wfzI6V3wj4UDNjCxdKhQdwp0X1vvCGgcfSaNUg&W=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("ANON=A=1D3AEEDD41B4DD9A8C35685DFFFFFFFF&E=14aa&W=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAABgCQAAjao2zF9IaQsY4ViBzhem9Q!!&V=4; DOMAIN=c.urs.microsoft.com");

	web_add_header("UA-CPU", 
		"AMD64");

	web_add_header("DNT", 
		"1");

	lr_think_time(28);

	web_url("l1.dat", 
		"URL=https://c.urs.microsoft.com/l1.dat?v=3&cv=9.11.16299.0&os=10.0.16299.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t92.inf", 
		LAST);

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
		"Snapshot=t93.inf", 
		"Mode=HTTP", 
		LAST);

	lr_think_time(11);

	lr_start_transaction("Click login button");

	web_url("index.php", 
		"URL=http://localhost/moodle/login/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t94.inf", 
		"Mode=HTTP", 
		LAST);

	web_url("help", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/help", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/login/index.php", 
		"Snapshot=t95.inf", 
		LAST);

	lr_end_transaction("Click login button",LR_AUTO);

	lr_start_transaction("Log in as teacher");

	web_submit_data("index.php_2", 
		"Action=http://localhost/moodle/login/index.php", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/login/index.php", 
		"Snapshot=t96.inf", 
		"Mode=HTTP", 
		ITEMDATA, 
		"Name=username", "Value=teacher1", ENDITEM, 
		"Name=password", "Value=Welcome1!", ENDITEM, 
		LAST);

	lr_think_time(6);

	web_url("settings", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/settings", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t97.inf", 
		LAST);

	lr_end_transaction("Log in as teacher",LR_AUTO);

	lr_think_time(44);

	lr_start_transaction("Click on Course");

	web_url("Test Course100", 
		"URL=http://localhost/moodle/course/view.php?id=101", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t98.inf", 
		"Mode=HTTP", 
		LAST);

	web_concurrent_start(NULL);

	web_url("spacer", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/spacer", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t99.inf", 
		LAST);

	web_url("icon", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/forum/1409244180/icon", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t100.inf", 
		LAST);

	web_url("icon_2", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/glossary/1409244180/icon", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t101.inf", 
		LAST);

	web_url("icon_3", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/book/1409244180/icon", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t102.inf", 
		LAST);

	web_url("icon_4", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/quiz/1409244180/icon", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t103.inf", 
		LAST);

	web_url("edit", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/edit", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t105.inf", 
		LAST);

	web_url("checkpermissions", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/checkpermissions", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t106.inf", 
		LAST);

	web_url("roles", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/roles", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t107.inf", 
		LAST);

	web_url("filter", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/filter", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t108.inf", 
		LAST);

	web_url("grades", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/grades", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t109.inf", 
		LAST);

	web_url("icon_5", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/assign/1409244180/icon", 
		"Resource=1", 
		"RecContentType=image/gif", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t110.inf", 
		LAST);

	web_url("backup", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/backup", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t111.inf", 
		LAST);

	web_url("return", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/return", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t112.inf", 
		LAST);

	web_url("restore", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/restore", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t113.inf", 
		LAST);

	web_url("users", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/users", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t114.inf", 
		LAST);

	web_url("group", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/group", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t115.inf", 
		LAST);

	web_url("report", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/i/report", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t116.inf", 
		LAST);

	web_url("format.js", 
		"URL=http://localhost/moodle/lib/javascript.php/1409244180/course/format/topics/format.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t117.inf", 
		LAST);

	web_concurrent_end(NULL);

	web_url("expanded", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/core/1409244180/t/expanded", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t104.inf", 
		LAST);

	web_url("yui_combo.php_12", 
		"URL=http://localhost/moodle/theme/yui_combo.php?3.5.1/build/attribute-core/attribute-core-min.js&3.5.1/build/base-core/base-core-min.js&3.5.1/build/event-custom-complex/event-custom-complex-min.js&3.5.1/build/attribute-events/attribute-events-min.js&3.5.1/build/attribute-extras/attribute-extras-min.js&3.5.1/build/attribute-base/attribute-base-min.js&3.5.1/build/base-base/base-base-min.js&3.5.1/build/base-pluginhost/base-pluginhost-min.js&3.5.1/build/base-build/base-build-min.js&3.5.1/build/"
		"event-synthetic/event-synthetic-min.js&3.5.1/build/event-mouseenter/event-mouseenter-min.js&3.5.1/build/event-resize/event-resize-min.js&moodle/1409244180/block_navigation/navigation/navigation.js", 
		"Resource=1", 
		"RecContentType=application/javascript", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t118.inf", 
		LAST);

	lr_end_transaction("Click on Course",LR_AUTO);

	lr_start_transaction("Log out as teacher1");

	web_url("Logout", 
		"URL=http://localhost/moodle/login/logout.php?sesskey=PKz6GpEela", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/course/view.php?id=101", 
		"Snapshot=t119.inf", 
		"Mode=HTTP", 
		LAST);

	lr_end_transaction("Log out as teacher1",LR_AUTO);

	return 0;
}