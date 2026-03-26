import datetime

users = []
posts = []


def register():
    username = input("Enter new username: ")

    if username == "":
        print("Username cannot be empty\n")
        return

    if username in users:
        print("Username already exists\n")
        return

    users.append(username)
    print("User registered successfully\n")

def login():
    username = input("Enter username: ")

    if username in users:
        print("Login successful\n")
        return username
    else:
        print("User not found\n")
        return None

def create_post(author):

    title = input("Enter post title: ")
    desc = input("Enter description: ")

    if title == "" or desc == "":
        print("Fields cannot be empty\n")
        return

    date = datetime.date.today()

    post = {
        "author": author,
        "title": title,
        "description": desc,
        "date": date
    }

    posts.append(post)
    print("Post created successfully\n")

def view_posts():

    if len(posts) == 0:
        print("No posts available\n")
        return

    for p in posts:
        print("----------------------------")
        print("Author:", p["author"])
        print("Title:", p["title"])
        print("Date:", p["date"])
        print("Description:", p["description"])
        print("----------------------------\n")

def search_post():

    name = input("Enter username to search: ")

    found = False

    for p in posts:
        if p["author"] == name:
            print("----------------------------")
            print("Author:", p["author"])
            print("Title:", p["title"])
            print("Date:", p["date"])
            print("Description:", p["description"])
            print("----------------------------\n")
            found = True

    if not found:
        print("No posts found for this user\n")

def main():

    current_user = None

    while True:

        print("====== PostBoard Menu ======")
        print("1. Register")
        print("2. Login")
        print("3. Create Post")
        print("4. View All Posts")
        print("5. Search Posts by Username")
        print("6. Exit")

        choice = input("Enter choice: ")

        if choice == "1":
            register()

        elif choice == "2":
            current_user = login()

        elif choice == "3":
            if current_user:
                create_post(current_user)
            else:
                print("Please login first\n")

        elif choice == "4":
            view_posts()

        elif choice == "5":
            search_post()

        elif choice == "6":
            print("Exiting PostBoard...")
            break

        else:
            print("Invalid choice\n")


main()
