#!/usr/bin/env python
import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
driver = webdriver.Remote(
   desired_capabilities=webdriver.DesiredCapabilities.FIREFOX,
   command_executor='http://127.0.0.1:9517'
)

driver.get("qtwidget://Calculator");
btn5 = driver.find_elements_by_xpath("//Button[@text='5']")[0]
btn5.click();

time.sleep(3)
btnPlus = driver.find_elements_by_xpath("//Button[@text='+']")[0]
btnPlus.click();

time.sleep(3)
btn7 = driver.find_elements_by_xpath("//Button[@text='7']")[0]
btn7.click();

time.sleep(3)
btnEqual = driver.find_elements_by_xpath("//Button[@text='=']")[0]
btnEqual.click();

elementDisplay = driver.find_elements_by_xpath("//QLineEdit")[0]
print(elementDisplay.text)
