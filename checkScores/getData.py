from bs4 import BeautifulSoup


def getData(html):
    bs = BeautifulSoup(html, "html.parser")
    return bs
