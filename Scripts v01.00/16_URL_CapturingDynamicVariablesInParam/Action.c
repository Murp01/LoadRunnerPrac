Action()
{

/*Correlation comment - Do not change!  Original value='yzo57Qarsi' Name ='param_Sesskey' Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=param_Sesskey",
		"RegExp=\\{\"wwwroot\":\"http:\\\\/\\\\/localhost\\\\/moodle\",\"sesskey\":\"(.*?)\",",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_url("moodle", 
		"URL=http://localhost/moodle/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t120.inf", 
		"Mode=HTTP", 
		LAST);

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


	lr_end_transaction("Click Login",LR_AUTO);

	lr_think_time(30);

	lr_start_transaction("Click Create new account");
	
//	Parameter to store all values from drop down into array type variable.
	web_reg_save_param_ex(
		"ParamName=param_CountryList",
		"LB=\">",
		"RB=</option>",
		"Ordinal=all",
		SEARCH_FILTERS,
		LAST);

	web_url("signup.php", 
		"URL=http://localhost/moodle/login/signup.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/login/index.php", 
		"Snapshot=t153.inf", 
		"Mode=HTTP", 
		LAST);
	
//	Function to display how many elements are in the drop down list

	lr_output_message(lr_eval_string("{param_CountryList_count}"));	
	
//	Function to display an item from the drop down list

	lr_output_message(lr_eval_string("{param_CountryList_3}"));	

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
		"Name=sesskey", "Value={param_Sesskey}", ENDITEM,
		"Name=_qf__login_signup_form", "Value=1", ENDITEM,
		"Name=username", "Value=teachers3090", ENDITEM,
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