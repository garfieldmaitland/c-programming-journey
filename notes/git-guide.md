# Git Workflow Guide

My personal git and github workflow for repository management

## Workflow

### === START SESSION ===
- cd ~/dev/current-project
- git checkout main
- git pull origin main
- git checkout -b feature/the-feature-name # Work on this branch

### === DURING SESSION ===
- git status
- git add -p
- git commit -m "Add X functionality" # You are commiting to the local branch
- git push origin feature/the-feature-name # You are pushing your work to the remote branch

### === END SESSION - SUCCESS ===
- git checkout main # You are now back on the main local branch
- git merge feature/the-feature-name # You merge the local brancch to the main branch
- git push origin main # You push the now current main branch to the remote repo
- git branch -d feature/the-feature-name # Clean up. You delete the local branch
- git push origin --delete feature/the-feature-name # Remote clean up. You delete the remote branch

### === END SESSION - NOT SURE YET ===
- git push origin feature/the-feature-name # Backup to remote
- Leave branch, come back later

### === END SESSION - FAILED ===
- git checkout main
- git branch -D feature/the-feature-name 
- Or just leave it, delete later

## Pro Tips
- git branch -a # Local branches
- git branch -h # Branch flag explanations
- git help branch # Swap branch with another command for more details about it

## Common Tips

### Feature branches
- git checkout -b feature/add-input-validation
- git checkout -b feature/file-reading
- git checkout -b feature/linked-list-implementation
- git checkout -b feature/sorting-algorithm

### Bug fixes
- git checkout -b fix/memory-leak
- git checkout -b fix/segfault-in-main
- git checkout -b fix/buffer-overflow
- git checkout -b fix/off-by-one-error 

### Experiments (might not merge)
- git checkout -b experiment/pointer-optimization
- git checkout -b experiment/recursion-approach
- git checkout -b experiement/alternative-algorithm
- git checkout -b experiment/refactor-main

### Work in progress (exploring ideas)
- git checkout -b wip/trying-new-approach
- git checkout -b wip/llm-suggestion
- git checkout -b wip/performance-test

### Refactoring
- git checkout -b refactor/simply-functions
- git checkout -b refactor/clean-up-main
- git checkout -b refactor/improve-naming

### Documentation
- git checkout -b docs/add-readme
- git checkout -b docs/update-comments
- git checkout -b docs/add-examples


## Format Review
- Use `kebab-case` (most popular repos use kebab-case)
- Keep names descriptive and discoverable
- Use lowercase throughout
- Examples: `c-programming-journey`, `data-structures-in-c`, `personal-shell`


## Remote Conventions
- git push origin main # Push "main" branch to "origin" remote repository
- git push origin feature-branch # Push "feature-branch" to "origin"
- git push backup main # Push "main" to a different remote called "backup"
- git push # Pushes current branch to its tracked remote (origin/main)
- git remote -v # See remote repositories
- git remote add <name> <url> # Add a new remote
- git remote add backup https://example.com/repo.git # Add new remote repo example
- git remote remove <name> # Remove a remote repo
- git remote rename <old-name> <new-name> # Rename a remote repo
- git remote set-url <name> <new-url> # Change a remote's URL
- git remote rename origin github # Example of rename of remote
- git push origin main # Push to GitHub. Already initalized to it
- git push gitlab main # Push to GitLab
- git push bitbucket main # Push to Bitbucket
- git config --global alias.pushall '!git push origin main && git push gitlab main && git push bitbucket main' # Create an alias that pushes to all remotes
- git pushall # Pushes to all three platforms
- git remote show origin # Show detailed info about a remote
- git init --bare /path/to/repo.git # Self host your own Git server on a server or NAS
- git remote add homeserver user@192.168.1.100:/path/to/repo.git # On your own local machine
- git push homeserver main # Push to your own home server, for privacy and control
- Name Conventions: `upstream` Original repo you forked from (in open source),`backup` Backup remote (GitLab, Bitbucket, private server), `production` Production deployment remote, `staging` Staging deployment remote

## Git Complete Workflow Life Cycle

### Day 1: Pull from origin and create branch
- git checkout main
- git pull origin main # Pull updates from the remote origin branch, to your local main branch
- git checkout -b feature/the-feature-name # Local created
- git push origin feature/the-feature-name # Remote created

### Day 1-3: Work on it
- git commit -m "Progress" # Update local branch
- git push origin feature/the-feature-name # Update remote branch

### Day 3: Merge and cleanup
- git checkout main # Navigate back to your main local branch
- git merge main feature/the-feature-name # Merge in the changes from your feature branch to the main branch
- git push origin main # Update remote origin branch, with the merged local changes on your main branch
- Go to GitHub and manually review, approve and merge the branch

### Day 3: DELETE both local and remote
- git branch -d feature/the-feature-name # Delete local feature branch
- git push origin --delet feature/add-validation # Delete remote feature branch
- The result is a clean local and remote repository, with the latest changes in your local main branch, and remote origin branch
- git has octopus merge: git merge <branch1> <branch2> <branch3> ...

### Updated Workflow
- New: Push branch, create PR, merge via GitHub
- git push origin feature/the-feature-name
- Then: Use GitHub web interface to merge
