<?php
$z[0]=Array("field","",211,230);
$z[0][4]['name']="title";
$z[1]=Array("global","",231,257);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",298,327);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",367,425);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",964,999);
$z[4][4]['filename']="head.htm";
$z[5]=Array("field","",1405,1434);
$z[5][4]['name']="position";
$z[6]=Array("list","\r\n	<section class=\"archive-list\"> <span class=\"titleimg\">\r\n     <a href=\"[field:typelink/]\">\r\n        <img width=\"270\" height=\"165\" src=\"[field:picname/]\" class=\"attachment-thumbnail wp-post-image\" /></a> </span>\r\n       <div class=\"mecc\">\r\n            <h2 class=\"mecctitle\"> <a href=\"[field:arcurl/]\">[field:title/]</a> </h2>\r\n            <address class=\"meccaddress\">\r\n               <time>[field:pubdate function=\"MyDate('Y-m-d',@me)\"/]</time>\r\n        - 阅[field:click/]\r\n        </address>\r\n                \r\n            <p>[field:description/]......</p>\r\n        </div>\r\n        <div class=\"clear\"></div>\r\n    </section>\r\n    ",1456,2126);
$z[6][4]['pagesize']="5";
$z[7]=Array("pagelist","",2247,2303);
$z[7][4]['listitem']="pre,next,pageno";
$z[7][4]['listsize']="3";
$z[8]=Array("include","",2365,2401);
$z[8][4]['filename']="right.htm";
$z[9]=Array("include","",2468,2505);
$z[9][4]['filename']="footer.htm";

?>