# Git Commands Notes

## Git Installation

```bash
winget install Git.Git
```
## Check Git Version

```bash
git --version
```

Displays the installed Git version.

## Configure Username

```bash
git config --global user.name "Your Name"
```

Sets the Git username.

## Configure Email

```bash
git config --global user.email "your@email.com"
```

Sets the Git email address.

## Initialize a Repository

```bash
git init
```

Creates a new local Git repository.

## Check Repository Status

```bash
git status
```

Shows modified, staged, and untracked files.

## Add Files to Staging Area

```bash
git add filename
```

Add a specific file.

```bash
git add .
```

Add all files.

## Commit Changes

```bash
git commit -m "Commit message"
```

Saves staged changes to the repository history.

## View Commit History

```bash
git log
```

Displays commit history.

## Connect Local Repository to GitHub

```bash
git remote add origin <repository-url>
```

Links the local repository to GitHub.

## Push Changes to GitHub

```bash
git push -u origin main
```

Pushes commits to the GitHub repository.

## Pull Latest Changes

```bash
git pull origin main
```

Downloads and merges changes from GitHub.

## Clone a Repository

```bash
git clone <repository-url>
```
Creates a local copy of a GitHub repository.

## Update Repository URL

```bash
git remote set-url origin <repository-url>
```
Updates local URL

## Daily Workflow

```bash
git status
git add .
git commit -m "Updated Day 1 notes"
git push origin main
```
