#!/bin/bash
#create services file 
read -p "Choose a name for your services file in systemd: " file_nm
touch "/home/souad/Desktop/${file_nm}.service"
handle_user_request()  
{
   echo "[$1]"
   read -p "$2" $3
   if [ $1 = "Service" ];
   then  
    read -p "$4" $5 #for ExecStart
    #read -p "$6" $7 #for WatchdogSec
    #read -p "$8" $9 #for Restart
    #read -p "${10}" ${11} #for RestartSec
   fi 
}
write_srevices_file()
{
    echo $1 >>"/home/souad/Desktop/${file_nm}.service"
    echo $2 >>"/home/souad/Desktop/${file_nm}.service"
    if [ $1 = "[Service]" ] 
    then
        echo "$3" >>"/home/souad/Desktop/${file_nm}.service"
        echo "$4" >>"/home/souad/Desktop/${file_nm}.service"
        #echo "$6" >>"/home/souad/Desktop/${file_nm}.service" #for WatchdogSec
        #echo "$8" >>"/home/souad/Desktop/${file_nm}.service" #for Restart
        #echo "$6" >>"/home/souad/Desktop/${file_nm}.service" #for RestartSec
    fi

}
#call functions to ask user descriptions of services file in systemd
handle_user_request Unit Description= desc
handle_user_request Service Type= type ExecStart= exc_strt #WatchdogSec= wat_d Restart= r_ RestartSec= r_sec
handle_user_request Install WantedBy= w_b
#write in file in systemd format
write_srevices_file "[Unit]" "Description=${desc}"
write_srevices_file "[Service]" "Type=${type}" "ExecStart=${exc_strt}" #"WatchdogSec=${wat_d}" "Restart=${r_}" " RestartSec=${r_sec}"
write_srevices_file "[Install]" "WantedBy=${w_b}"
#copy file.services to systemd path
sudo cp /home/souad/Desktop/${file_nm}.service /etc/systemd/system
echo "${file_nm}.service Successfully created in /etc/systemd/system"
#ex: /usr/sbin/hello
#wanted by multi-user.target 