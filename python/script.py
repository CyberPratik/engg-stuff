import browser_cookie3

def get_instagram_session_id():
    try:
        # Attempt to get cookies from Chrome and Firefox
        cookies = browser_cookie3.load(domain_name='instagram.com')
        for cookie in cookies:
            if cookie.name == 'sessionid':
                print(f"Instagram session ID: {cookie.value}")
                return cookie.value
        print("Instagram session ID not found.")
    except Exception as e:
        print("Error accessing browser cookies:", e)

get_instagram_session_id()
