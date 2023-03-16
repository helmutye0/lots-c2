$recon=hostname
$recon+="|"
$recon+=ipconfig
$recon+="|"
$recon+=whoami
$recon >> $env:UserProfile\Desktop\recon.txt
notepad $env:UserProfile\Desktop\recon.txt
