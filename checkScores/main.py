from bs4 import BeautifulSoup
import re
from askURL import askURL
from getData import getData
import time

print("\a")
while True:
    url = "http://www.cse.cqu.edu.cn/index/zsxx.htm"
    html = askURL(url)
    bs = getData(html)
    if bs.find_all(text=re.compile("2021年硕士研究生")):
        while True:
            print("\a")
    time.sleep(600)