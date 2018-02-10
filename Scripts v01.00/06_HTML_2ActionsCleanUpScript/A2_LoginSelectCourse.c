A2_LoginSelectCourse()
{
	//Script will intentionally fail because the second user does not own course100

	lr_think_time(34);

	lr_start_transaction("Log_in_to_profile");

	web_url("index.php", 
		"URL=http://localhost/moodle/login/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("index.php_2", 
		"Snapshot=t107.inf", 
		ITEMDATA, 
		"Name=username", "Value={paramUsername}", ENDITEM, 
		"Name=password", "Value={paramPassword}", ENDITEM, 
		"Name=rememberusername", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_end_transaction("Log_in_to_profile",LR_AUTO);

	lr_think_time(46);

	lr_start_transaction("Click_on_course");

	web_link("Test Course100", 
		"Text=Test Course100", 
		"Snapshot=t108.inf", 
		EXTRARES, 
		"Url=../theme/image.php/afterburner/core/1409244180/t/expanded", "Referer=http://localhost/moodle/course/view.php?id=101", ENDITEM, 
		"Url=../theme/yui_combo.php?3.5.1/build/attribute-core/attribute-core-min.js&3.5.1/build/base-core/base-core-min.js&3.5.1/build/event-custom-complex/event-custom-complex-min.js&3.5.1/build/attribute-events/attribute-events-min.js&3.5.1/build/attribute-extras/attribute-extras-min.js&3.5.1/build/attribute-base/attribute-base-min.js&3.5.1/build/base-base/base-base-min.js&3.5.1/build/base-pluginhost/base-pluginhost-min.js&3.5.1/build/base-build/base-build-min.js&3.5.1/build/event-synthetic/"
		"event-synthetic-min.js&3.5.1/build/event-mouseenter/event-mouseenter-min.js&3.5.1/build/event-resize/event-resize-min.js&moodle/1409244180/block_navigation/navigation/navigation.js", "Referer=http://localhost/moodle/course/view.php?id=101", ENDITEM, 
		LAST);

	lr_end_transaction("Click_on_course",LR_AUTO);

	lr_start_transaction("Log_out_of_Profile");

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t109.inf", 
		LAST);

	return 0;
}