# Machine Learning Fundamentals - Notes

## Definition

Machine Learning is the process of enabling computers to learn patterns from data and make predictions or decisions without explicit programming.

> "A field of study that gives computers the ability to learn without being explicitly programmed."
>
> — Arthur Samuel (1959)

---

# AI, Machine Learning, and Deep Learning

```text
Artificial Intelligence
        │
        └── Machine Learning
                 │
                 └── Deep Learning
```

### Artificial Intelligence

* Expert Systems
* Robotics
* Planning Systems

### Machine Learning

* Regression
* Decision Trees
* Support Vector Machines

### Deep Learning

* Neural Networks
* CNNs
* Large Language Models (LLMs)

---

# Core Terminology

## Data

Raw information used for training.

Examples:

* Images
* Text
* Audio
* Numerical values

## Features

Input variables used for prediction.

Example:
For house price prediction:

* Area
* Number of rooms
* Location

## Labels

Expected outputs in supervised learning.

Example:

* House Price
* Spam / Not Spam

## Model

A trained mathematical representation that makes predictions from input data.

---

# Machine Learning Pipeline

```text
Collect Data
      ↓
Clean & Prepare Data
      ↓
Train Model
      ↓
Evaluate Model
      ↓
Deploy Model
      ↓
Improve & Retrain
```

Machine learning is an iterative process that continuously improves through feedback and retraining.

---

# Types of Machine Learning

## 1. Supervised Learning

Uses labeled data.

Examples:

* House Price Prediction
* Spam Detection

### Tasks

#### Regression

Predicts numerical values.

Examples:

* Temperature Forecasting
* Stock Prices
* House Prices

#### Classification

Predicts categories.

Examples:

* Spam Detection
* Disease Classification

---

## 2. Unsupervised Learning

Uses unlabeled data.

Examples:

* Customer Segmentation
* Market Analysis
* Anomaly Detection

### Clustering

Groups similar data points together based on patterns.

---

## 3. Reinforcement Learning

Learns through rewards and penalties.

Examples:

* Self-driving Cars
* Robotics
* Game Playing AI

---

# Popular Machine Learning Algorithms

## Linear Regression

Used for predicting continuous values.

## Decision Trees

Makes predictions using decision-based branches.

## Random Forest

Combination of multiple decision trees.

## Support Vector Machine (SVM)

Finds the optimal boundary between classes.

## Neural Networks

Inspired by the human brain and used in deep learning.

---

# Train-Test Split

To evaluate a model fairly:

```text
80% Training Data
20% Testing Data
```

### Training Data

Used to teach the model.

### Testing Data

Used to evaluate model performance on unseen data.

---

# Evaluation Metrics

## Regression Metrics

* MAE (Mean Absolute Error)
* RMSE (Root Mean Squared Error)
* R² Score

## Classification Metrics

* Accuracy
* Precision
* Recall
* F1 Score

---

# Overfitting vs Underfitting

## Underfitting

* Model is too simple.
* Cannot learn patterns properly.
* Poor performance on training and testing data.

## Good Fit

* Learns meaningful patterns.
* Generalizes well to unseen data.

## Overfitting

* Memorizes training data.
* Performs poorly on new data.
* High variance.

---

# Challenges in Machine Learning

## Data Availability

Models require sufficient quality data.

## Bias

Biased data can produce unfair predictions.

## Computational Cost

Large models require significant resources.

## Privacy

Sensitive data must be protected.

---

# Responsible AI

Important principles:

* Fairness
* Transparency
* Accountability
* Privacy Protection
* Human Oversight

---

# Key Takeaways

* Machine Learning enables systems to learn from data.
* ML is a subset of Artificial Intelligence.
* Three major types: Supervised, Unsupervised, and Reinforcement Learning.
* Models are trained, evaluated, and continuously improved.
* Ethical AI development is essential for real-world deployment.
