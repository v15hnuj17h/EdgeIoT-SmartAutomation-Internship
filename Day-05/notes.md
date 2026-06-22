# Applied Machine Learning Notes

## Tools Used

* Google Colab
* Python
* Pandas
* Scikit-learn
* Matplotlib

## Machine Learning Workflow

1. Load Data
2. Clean Data
3. Encode Features
4. Split Dataset
5. Train Model
6. Evaluate Model
7. Make Predictions

## Dataset

Loan Approval Prediction Dataset

Target Variable:

* Loan_Status

  * Y = Approved
  * N = Denied

## Libraries Used

```python
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.tree import DecisionTreeClassifier
```

## Data Cleaning

```python
df = pd.read_csv(url)
df = df.dropna()
```

Removes rows containing missing values.

## Feature Encoding

Converted categorical values into numbers:

* Male → 1, Female → 0
* Yes → 1, No → 0
* Graduate → 1, Not Graduate → 0
* Urban → 2, Semiurban → 1, Rural → 0

## Train-Test Split

```python
X_train, X_test, y_train, y_test = train_test_split(
    X, y, test_size=0.2, random_state=42
)
```

* Training Data: 80%
* Testing Data: 20%

## Model Training

```python
model = DecisionTreeClassifier(
    max_depth=4,
    random_state=42
)

model.fit(X_train, y_train)
```

## Model Evaluation

```python
accuracy = model.score(X_test, y_test)
```

Measures prediction accuracy on unseen data.

## Decision Tree Visualization

```python
plot_tree(
    model,
    feature_names=features,
    class_names=['Denied', 'Approved'],
    filled=True
)
```

Displays the trained decision tree structure.

## Custom Prediction

```python
prediction = model.predict(my_custom_df)
```

Predicts whether a loan application will be approved or denied.

## Key Learnings

* Decision Trees are supervised learning algorithms.
* Data preprocessing is an important step before training.
* Models should always be evaluated on unseen test data.
* Machine learning can be used to automate decision-making based on patterns in data.
