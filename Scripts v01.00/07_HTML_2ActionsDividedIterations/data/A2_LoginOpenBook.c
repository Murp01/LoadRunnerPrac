A2_LoginOpenBook()
{

	web_add_cookie("SRCHD=AF=NOFORM; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("display-culture=en-GB; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MC1=GUID=fcd3d6764e0ded4a88964038a64f1c51&HASH=76d6&LV=201703&V=4&LU=1489708915842; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MSFPC=ID=0639701be2f57249a5d06723427729be&CS=1&LV=201703&V=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("MUID=24BEF2271A3B64D0317AFBCF1BEF65F4; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("SRCHUSR=DOB=20161119; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("NAP=V=1.9&E=1450&C=06Q31V1XD_JKdnJ9wfzI6V3wj4UDNjCxdKhQdwp0X1vvCGgcfSaNUg&W=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("ANON=A=1D3AEEDD41B4DD9A8C35685DFFFFFFFF&E=14aa&W=1; DOMAIN=c.urs.microsoft.com");

	web_add_cookie("A=I&I=AxUFAAAAAABgCQAAjao2zF9IaQsY4ViBzhem9Q!!&V=4; DOMAIN=c.urs.microsoft.com");

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("UA-CPU", 
		"AMD64");

	lr_think_time(21);

	web_url("l1.dat", 
		"URL=https://c.urs.microsoft.com/l1.dat?cw=636515551671396057&v=3&cv=9.11.16299.0&os=10.0.16299.0.0&pg=4A72F430-B40C-4D36-A068-CE33ADA5ADF9", 
		"Resource=1", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t75.inf", 
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

	web_url("iecompatviewlist.xml", 
		"URL=https://iecvlist.microsoft.com/IE11/1478281996/iecompatviewlist.xml", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t76.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("Log_into_userprofile");

	web_revert_auto_header("DNT");

	web_revert_auto_header("UA-CPU");

	lr_think_time(25);

	web_url("index.php", 
		"URL=http://localhost/moodle/login/index.php", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost/moodle/", 
		"Snapshot=t77.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_form("index.php_2", 
		"Snapshot=t78.inf", 
		ITEMDATA, 
		"Name=username", "Value=teacher1", ENDITEM, 
		"Name=password", "Value=Welcome1!", ENDITEM, 
		"Name=rememberusername", "Value=<OFF>", ENDITEM, 
		LAST);

	lr_end_transaction("Log_into_userprofile",LR_AUTO);

	lr_think_time(52);

	lr_start_transaction("Click_on_Course");

	web_link("Test Course100", 
		"Text=Test Course100", 
		"Snapshot=t79.inf", 
		EXTRARES, 
		"Url=../theme/image.php/afterburner/core/1409244180/t/expanded", "Referer=http://localhost/moodle/course/view.php?id=101", ENDITEM, 
		"Url=../theme/yui_combo.php?3.5.1/build/attribute-core/attribute-core-min.js&3.5.1/build/base-core/base-core-min.js&3.5.1/build/event-custom-complex/event-custom-complex-min.js&3.5.1/build/attribute-events/attribute-events-min.js&3.5.1/build/attribute-extras/attribute-extras-min.js&3.5.1/build/attribute-base/attribute-base-min.js&3.5.1/build/base-base/base-base-min.js&3.5.1/build/base-pluginhost/base-pluginhost-min.js&3.5.1/build/base-build/base-build-min.js&3.5.1/build/event-synthetic/"
		"event-synthetic-min.js&3.5.1/build/event-mouseenter/event-mouseenter-min.js&3.5.1/build/event-resize/event-resize-min.js&moodle/1409244180/block_navigation/navigation/navigation.js", "Referer=http://localhost/moodle/course/view.php?id=101", ENDITEM, 
		LAST);

	web_add_cookie("WMF-Last-Access=13-Jan-2018; DOMAIN=upload.wikimedia.org");

	lr_think_time(35);

	web_link("book 1", 
		"Text=book 1", 
		"Ordinal=1", 
		"Snapshot=t80.inf", 
		EXTRARES, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/a/a3/Flag_of_Bali.svg/100px-Flag_of_Bali.svg.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/4/4f/IndonesiaBali.png/250px-IndonesiaBali.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/5/55/WMA_button2b.png/17px-WMA_button2b.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/b/bf/Bali_Labeled.png/220px-Bali_Labeled.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/en/thumb/9/99/Question_book-new.svg/50px-Question_book-new.svg.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/1/1c/Bali_Mynah_-_Houston_Zoo.jpg/170px-Bali_Mynah_-_Houston_Zoo.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/2/27/Bali_canyoning.jpg/220px-Bali_canyoning.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/4/4c/Pura_Tanah_Lot.jpg/250px-Pura_Tanah_Lot.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/5/5b/1_tirtha_empul_temple.jpg/220px-1_tirtha_empul_temple.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/8/8b/1_Tegalalang_rice_terrace_ubud_bali.jpg/220px-1_Tegalalang_rice_terrace_ubud_bali.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/f/f2/Balinese_sculpture_with_umbrella.JPG/170px-Balinese_sculpture_with_umbrella.JPG", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/5/52/Balinese_dancers.jpg/170px-Balinese_dancers.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/6/65/1_pura_taman_ayun_bali_2011.jpg/220px-1_pura_taman_ayun_bali_2011.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/f/f1/Monkey_at_Ulu_Watu_Temple.jpg/220px-Monkey_at_Ulu_Watu_Temple.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/9/98/Ambox_current_red.svg/42px-Ambox_current_red.svg.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/e/ee/Arjuna_statue.JPG/170px-Arjuna_statue.JPG", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/f/ff/Bali_moped_col.jpg/220px-Bali_moped_col.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/0/02/Mother_Temple_of_Besakih.jpg/220px-Mother_Temple_of_Besakih.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/4/44/Kuta_Beach.JPG/220px-Kuta_Beach.JPG", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/3/36/Ubud_Cremation_Procession_1.jpg/220px-Ubud_Cremation_Procession_1.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/en/thumb/3/30/Kecak.JPG/220px-Kecak.JPG", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/f/f9/Balinese_Stone_Carvings.jpg/120px-Balinese_Stone_Carvings.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/a/a8/COLLECTIE_TROPENMUSEUM_Portert_van_twee_jonge_Balinese_danseressen_TMnr_10004678b.jpg/120px-COLLECTIE_TROPENMUSEUM_Portert_van_twee_jonge_Balinese_danseressen_TMnr_10004678b.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/e/e9/Ubud_Cremation_4.jpg/170px-Ubud_Cremation_4.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/8/88/COLLECTIE_TROPENMUSEUM_De_beroemde_Balinese_danser_I_Mario_TMnr_10004713.jpg/120px-COLLECTIE_TROPENMUSEUM_De_beroemde_Balinese_danser_I_Mario_TMnr_10004713.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/d/dd/Wikivoyage-Logo-v3-icon.svg/40px-Wikivoyage-Logo-v3-icon.svg.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/5/5c/Balinese_stone_guardian.jpg/90px-Balinese_stone_guardian.jpg", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/9/9f/Flag_of_Indonesia.svg/32px-Flag_of_Indonesia.svg.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/commons/thumb/4/4c/Wikisource-logo.svg/38px-Wikisource-logo.svg.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		"Url=https://upload.wikimedia.org/wikipedia/en/thumb/4/4a/Commons-logo.svg/12px-Commons-logo.svg.png", "Referer=http://localhost/moodle/mod/book/view.php?id=232", ENDITEM, 
		LAST);

	lr_end_transaction("Click_on_Course",LR_AUTO);

	lr_start_transaction("Log_out");

	web_link("Logout", 
		"Text=Logout", 
		"Snapshot=t81.inf", 
		LAST);

	lr_end_transaction("Log_out",LR_AUTO);

	return 0;
}