# Git Workflow Guide

My personal git and github workflow for repository management

## Workflow

### === START SESSION ===
- cd ~/dev/current-project
- git checkout main
- git pull origin main
- git checkout -b feature/the-feature-name

### === DURING SESSION ===
- git status
- git add -p
- git commit -m "Add X functionality"

### === END SESSION - SUCCESS ===
- git checkout main
- git merge feature/the-feature-name
- git push origin main
- git branch -d feature/the-feature-name # Clean up

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


### Branch Naming
- Use `kebab-case`