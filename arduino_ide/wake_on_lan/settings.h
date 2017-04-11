#ifndef __SETINGS_H
#define __SETINGS_H

#define WIFI_SSID "your wifi ssid"
#define WIFI_PASSWORD "your wifi password"
#define SERVICE_PASSWORD "password to protect from unwanted wol, pick a long one"
#define HOME_PAGE "<!DOCTYPE html><html><head><title>ESP8266 WOL online</title><link rel='shortcut icon' href='{favicon}' /><style>body { font-family: Helvetica, Arial, sans-serif; font-size: 16px ;padding: 10px }</style></head><body><h1>ESP8266 WOL online</h1><form method='GET' action='/wol' target='output_frame'><label><strong>Broadcast ip: </strong><br />{ip1}.{ip2}.{ip3}.</label><input type='text' name='bcast' value='255' maxlength='3' size='1' style='font-size: 16px;' /><br /><br /><label><strong>Mac address: </strong></label><br /><input type='text' name='mac' maxlength='12' /><br /><br /><label><strong>Password: </strong></label><br /><input type='password' name='pwd' /><br /><br /><input type='submit' value='Submit'><br /><br /><iframe id='output_frame' name='output_frame' allowtransparency='true' width='350' height='80' frameBorder='0'>Browser not compatible</iframe></body></html>"
#define FAVICON "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAABGdBTUEAALGPC/xhBQAAACBjSFJNAAB6JgAAgIQAAPoAAACA6AAAdTAAAOpgAAA6mAAAF3CculE8AAAABmJLR0QAAAAAAAD5Q7t/AAAACXBIWXMAAAsSAAALEgHS3X78AAACgklEQVQ4y4WTz0uTARjHv3MzfyDDWCHdJL2ElDRaXTIEWX9Aeqpb0ClvhR0No4PRLiaIF1kpBXMJlgejg5HmwYslmm4K5ZyFbjXdlnv3zvf9dDAsFe1zeg7P8zk8z/N1AOgfLMvS7OysCoWCPB6PqqqqVF5ersNw7BcAikQi2tzc1NbWljKZjCoqKlRfXy+Px/N/QT6fVzweV2lpqdxut5xOp6LRqObn51VbWyufz7dH4NpvBJRIJJTNZmUYhsrKyuTz+VRXV6dwOKyNjQ35/f49A3uwLAvTNLFtG4CZmRl6e3uZmpoCoK+vj7Gxsd3+A4K1XI7g8DDPQiFej4xgGAa2bdPV1cXk5CQAnZ2dxGKxg4JtIJ9N83MxypdMmlcLCzx89IiFuTkAOjo6SCaTTE9P09PT81dgA4XVVQq3blGoqYEzZ+CqH96+IWqatN2/z7d4nOXlZbq7u7Ftm0AgwMrKyo7AjMUw3W4sicKli2w/eEBBwpDgaZCPZp729nYAAoEAS0tLDAwMEAwGcViAeblBjg8Tsltvq7ixUUomZa4nZPcPqHgxqpLv3/Tw/bj81dVKp9PK5XLyer1aW1uTtr8uk5LINDWR6e8n29JM9u4d0jdvkhsMkZAw77WxblmsJxJYlkUqldrdm8tejSsl6fjlBrmii/oRfilnSYmOySFXS4sMSY5IRCeLiqQTJyRJlZWVu29QVFRzWjlJyecvVNx8Ta4rDTKdTpUND8v4PKe0JM6eOzQLAojduM64xJLfT3p0lFR4kETXEz5JfJTIr8Q4jJ0r/PrFrNfLqMSExJTEuz91MhTiKHbDZEuKBx7r59CQyGRVft6rU62tcvsu6Ch+AxueMF07qwmgAAAAAElFTkSuQmCC"

#endif