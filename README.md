# Summer_Assignment_25110CN052

This repository contains C practice files organized by day.

How to upload this folder to GitHub:

1. Make sure `git` and optionally `gh` (GitHub CLI) are installed.
2. From this folder run either:

Using GitHub CLI:

```
gh auth login
gh repo create my-repo --public --source=. --remote=origin --push
```

Or manual Git steps:

```
git init
git add .
git commit -m "Initial commit"
git branch -M main
git remote add origin https://github.com/OWNER/REPO.git
git push -u origin main
```

Or run the provided script:

```
chmod +x upload_to_github.sh
./upload_to_github.sh my-repo https://github.com/OWNER/my-repo.git
```
#Summer_Assignment_25110CN052
