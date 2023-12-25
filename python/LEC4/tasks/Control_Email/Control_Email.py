import imaplib
 mail = imaplib.IMAP4_SSL('imap.gmail.com')
 mail.login('login@gmail.com', 'password')
 mail.list()
 # Out: list of "folders" aka labels in gmail.
 mail.select("inbox") # connect to inbox.
 #Get an email
 result, data = mail.uid('fetch', b'1', '(RFC822)')
    raw_email = data[0][1]
    email_message = email.message_from_bytes(raw_email)
    maintype = email_message.get_content_maintype()
    #HERE COMES TROUBLES - if hmtl will be base64 string
    if maintype == 'multipart':
        for part in email_message.get_payload():
            print(part.get_content_maintype())
            if part.get_content_maintype() == 'text':
                html = str(part.get_payload())
    elif maintype == 'text':
        html = str(email_message.get_payload())

    #Now I Can parse HTML
    if html is not None:
        soup = BeautifulSoup(html, 'html.parser')
