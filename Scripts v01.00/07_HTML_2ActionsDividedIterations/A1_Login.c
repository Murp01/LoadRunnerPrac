A1_Login()
{

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
		"Snapshot=t48.inf", 
		"Mode=HTML", 
		LAST);

	lr_think_time(68);

	lr_start_transaction("Log_into_Profile");

	web_url("index.php", 
		"URL=http://localhost/moodle/login/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t49.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("index.php_2", 
		"Snapshot=t50.inf", 
		ITEMDATA, 
		"Name=username", "Value={paramUsername}", ENDITEM, 
		"Name=password", "Value={paramPassword}", ENDITEM, 
		"Name=rememberusername", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_end_transaction("Log_into_Profile",LR_AUTO);

	lr_start_transaction("Log_out_of_profile");

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t51.inf", 
		LAST);

	lr_end_transaction("Log_out_of_profile",LR_AUTO);

	return 0;
}