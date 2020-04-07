import ipaddress
def isIPv4Address(inputString):
    try:
        ipaddress.ip_address(inputString)
    except:
        return False
    return True
