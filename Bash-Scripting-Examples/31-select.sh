#!/bin/bash
select month in october november december 
do
   echo $month
   break
done
####################
select month in october november december
do    
    case $(month) in
    november)
      echo "this is $(month)"
      ;;
    *)
      break
       ;;
    esac
done                
