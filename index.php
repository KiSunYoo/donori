<?php
$t1 = time()-(60*60*24*3);
$t2 = time()-(60*60*24*2);
$t3 = time()-(60*60*24*1);
$t4 = time();

echo date('Y-n-d H:i:s',$t1);
echo ' '.$t4;
?>
<!DOCTYPE HTML>
<html>
<head>
<!-- 
<script type="text/javascript" src="js/flotr2.min.js"></script>
 -->

<style type="text/css">
#cv {
	width: 600px;
	height: 400px;
	margin: 20px auto;
}
</style>
<script type="text/javascript" src="/js/flotr2.min.js"></script>

</head>
<body>
	<a href="http://apptable.net/exam/lib/flotr2.min.js"> asdfasdfs</a>
	<div id="cv"></div>
	<script>
(function basic_time(container){
	var
	 d1 = [[<?=$t1?>,3],[<?=$t2?>,8],[<?=$t3?>,20],[<?=$t4?>,200]],
	 i, graph;
	graph = Flotr.draw(container,[d1],{
		xaxis:{
			mode:'time',
			labelIsAngle:45
		},
		selection:{
			mode:'x'
		},
		grid:{
			minorVerticalLines:true
		}
	});
})(document.getElementById("cv"));
</script>
</body>
</html>
