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

	web_url("logo", 
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/images/logo", 
		"Resource=1", 
		"RecContentType=image/jpeg", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t72.inf", 
		LAST);
	
//	What is this and why is it needed?
	
	web_url("light3",
		"URL=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/images/light3", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t73.inf", 
		LAST);	web_concurrent_end(NULL);

	web_reg_find("Text/IC=You are not logged in",
	LAST);
	
	web_reg_find("Search=All",
	"Text=Returning to this web site?",
	LAST);
	
//	The web reg find functions need to be added anywhere before the request to the appropriate
//	page that the text will be found on.	

	web_image_check("web_image_check",
		"Src=http://localhost/moodle/theme/image.php/afterburner/theme/1409244180/footer/moodle-logo",
		LAST);

	lr_think_time(28);

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

	lr_end_transaction("Click login button",LR_AUTO);
	
//	rendevous point added
	lr_rendezvous("Ren_LoginAs");

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