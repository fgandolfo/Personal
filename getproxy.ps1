Add-Type -AssemblyName System.Windows.Forms
$global:balloon = New-Object System.Windows.Forms.NotifyIcon
$path = (Get-Process -id $pid).Path
$balloon.Icon = [System.Drawing.Icon]::ExtractAssociatedIcon($path)
$balloon.BalloonTipText = "Se apagó el proxy. Click aquí para volver a encenderlo."
$balloon.BalloonTipIcon = [System.Windows.Forms.ToolTipIcon]::Info
$balloon.BalloonTipTitle = "Proxy Status"
$balloon.Visible = $true
$balloon.add_BalloonTipClicked({
    Set-ItemProperty -Path 'HKCU:\Software\Microsoft\Windows\CurrentVersion\Internet Settings' -Name ProxyEnable -Value 1
    $balloon.BalloonTipText = "Proxy encendido."
    $balloon.ShowBalloonTip(5000)
    $balloon.BalloonTipText = "Se apagó el proxy. Click aquí para volver a encenderlo."
    })

$off = $false

for (;;) {
    $nombreProxy = & {
    Get-ItemProperty -path 'HKCU:\Software\Microsoft\Windows\CurrentVersion\Internet Settings' |
    findstr ProxyEnable 
    }
    if ($nombreProxy -eq "ProxyEnable               : 1") {
        $off = $false
    }
    Elseif (($nombreProxy -eq "ProxyEnable               : 0") -and ($off -eq $false)){
        $balloon.ShowBalloonTip(5000)
        $off = $true
    }
    Start-Sleep -s 1.2
}