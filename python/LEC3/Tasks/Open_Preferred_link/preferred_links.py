import webbrowser
c=webbrowser.get('firefox') #open links in firefox browser

def show_links():
    links_dict={'1':'https://www.google.com','2':'https://www.facebook.com','3':'https://www.linkedin.com'}
    
    print(links_dict)
    num=input("choose number of link : ")
    choosed=links_dict[num]
    c.open_new_tab(choosed)
    