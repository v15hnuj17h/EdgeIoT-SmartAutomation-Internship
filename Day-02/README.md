# Day 2 - Portfolio Creation and Firebase Deployment

## Date

19 June 2026

## Objective

Learn how to create a personal portfolio website and deploy it using Firebase Hosting.

## Topics Covered

* Introduction to Portfolio Websites
* Node.js Installation
* Firebase Project Creation
* Firebase CLI Setup
* Firebase Hosting
* Website Deployment

## Portfolio Deployment URL

URL: https://vishnujith-fdf12.web.app/

## Activities Performed

### 1. Installed Node.js

Installed Node.js to enable npm package management and Firebase CLI usage.

### 2. Created Portfolio Project

Created a project named **myPortfolio** with the following files:

* HTML
* CSS
* JavaScript
* Media Assets

### 3. Created Firebase Project

Created a new project in Firebase Console for hosting the portfolio website.

### 4. Installed Firebase CLI

```bash
npm install -g firebase-tools
```

### 5. Logged into Firebase

```bash
firebase login
```

### 6. Initialized Firebase Hosting

```bash
firebase init
```

Selected:

* Hosting
* Existing Firebase Project
* Public Directory: public

### 7. Deployed Website

```bash
firebase deploy --only hosting
```
Do again if modified later

## Learning Outcomes

* Understood the structure of a portfolio website.
* Learned how to use Firebase Hosting.
* Learned Firebase CLI commands.
* Successfully deployed a static website to the cloud.

## Summary

Today I created a portfolio website project and deployed it using Firebase Hosting. I learned how to configure Firebase, initialize hosting, and publish a website online using Firebase CLI.
