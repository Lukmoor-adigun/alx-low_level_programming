#script to add, commit and push to github
#!/bin/bash
git add .
read -p "Enter commit message: " commit
git commit -m "$commit"
git push
