#!/usr/bin/env python
import time
from selenium import webdriver
from selenium.webdriver.common.keys import Keys
driver = webdriver.Remote(
   desired_capabilities=webdriver.DesiredCapabilities.FIREFOX,
   command_executor='http://127.0.0.1:9517'
)
driver.get("qtwidget://MainWindow");

def send_keys_to_element_with_type(widget_type, data):
    elements = driver.find_elements_by_class_name(widget_type)
    for el in elements:
        if el and el.is_displayed():
            if len(el.text) == 0:
                el.send_keys(data)
                break

def find_widget_with_text(widget_class, widget_text):
    widgets = driver.find_elements_by_class_name(widget_class)
    if widgets:
        for widget in widgets:
            if widget and widget.is_displayed():
                if widget_text == widget.text:
                    return widget
    return

time.sleep(3)
print("Start test")
send_keys_to_element_with_type('QLineEdit', 'some text')

btn = find_widget_with_text('QPushButton', "Send")
btn.click()


