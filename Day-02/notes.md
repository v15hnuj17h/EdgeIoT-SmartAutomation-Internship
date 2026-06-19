# Firebase Hosting Notes

## Project Structure

```text
myPortfolio/
│
├── public/
│   ├── index.html
│   ├── style.css
│   ├── script.js
│   ├── 404.html
│   └── media/
│       └── profile.jpg
│
├── firebase.json
├── .firebaserc
└── .gitignore
```

## Commands Used

### Installing NodeJS

```bash
winget install OpenJS.NodeJS
```

### Check Node.js Version

```bash
node -v
```

### Check npm Version

```bash
npm -v
```

### Install Firebase CLI

```bash
npm install -g firebase-tools
```

### Verify Installation

```bash
firebase --version
```

### Login to Firebase

```bash
firebase login
```

### Initialize Firebase Project

```bash
firebase init
```

### Deploy Website

```bash
firebase deploy --only hosting
```

### View Hosting Information

```bash
firebase hosting:sites:list
```

## Important Files

### firebase.json

Contains Firebase Hosting configuration.

### .firebaserc

Stores Firebase project information.

### public/

Contains all website files that will be deployed.

### 404.html

Custom page displayed when a requested page is not found.

## Deployment Workflow

```bash
firebase login
firebase init
firebase deploy --only hosting
```

## Key Learnings

* Firebase Hosting is used for deploying static websites.
* The public folder contains deployable website files.
* Firebase CLI enables project management from the terminal.
* Node.js and npm are prerequisites for Firebase CLI.
