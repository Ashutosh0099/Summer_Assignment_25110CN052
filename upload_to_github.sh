#!/bin/bash
set -e

REPO_NAME="$1"
REMOTE_URL="$2"

if [ -z "$REPO_NAME" ]; then
  echo "Usage: $0 repo-name [remote-url]"
  exit 1
fi

# Initialize git if needed
if [ ! -d .git ]; then
  git init
fi

git add .
# Allow commit to fail if there is nothing to commit
git commit -m "Initial commit" || true
git branch -M main 2>/dev/null || true

if [ -n "$REMOTE_URL" ]; then
  if git remote | grep -q origin; then
    git remote remove origin
  fi
  git remote add origin "$REMOTE_URL"
  git push -u origin main
else
  echo "No remote provided. To push, either:"
  echo "  1) Provide a remote URL: ./upload_to_github.sh $REPO_NAME https://github.com/OWNER/$REPO_NAME.git" 
  echo "  2) Use GitHub CLI: gh repo create $REPO_NAME --public --source=. --remote=origin --push"
fi
