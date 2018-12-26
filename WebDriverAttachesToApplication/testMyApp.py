#!/usr/bin/env python
import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
driver = webdriver.Remote(
   desired_capabilities=webdriver.DesiredCapabilities.FIREFOX,
   command_executor='http://127.0.0.1:9517'
)
driver.get("qtwidget://MainWindow")

time.sleep(1)
print("Start test")
line_edit = driver.find_element_by_id('m_LineEditForNumber')
line_edit.send_keys('64')

btn_calculate = driver.find_element_by_id('m_BtnCalculate')
if not btn_calculate:
    print('element was not found')

btn_calculate.click()

widgets = driver.find_elements_by_class_name('QLabel')
if widgets:
    for widget in widgets:
        if widget and widget.is_displayed():
            print(widget.text)



res_sqrt = driver.find_element_by_id('m_ResultSqrt')
print('res = ', res_sqrt.text)

if res_sqrt.text == '8':
    print('Test is passed')

