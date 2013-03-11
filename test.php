<?php
include_once '/lib/Define.inc';

$DB = new DB();

if ( $DB ) {
	echo '성공';
}else{
	echo '실패';
}
?>