# Machine Learning Practice

This directory contains a small collection of hands-on machine learning exercises designed to revisit the complete ML workflow from model training to inference and deployment.

The goal is not to build state-of-the-art models, but to strengthen practical understanding of how machine learning systems work end to end.

## Learning Goals

Through these exercises, I aim to revisit and practice:

- Dataset loading and preprocessing
- Neural network architecture design
- Forward propagation
- Loss calculation
- Backpropagation
- Optimizer-based parameter updates
- Training and validation workflows
- Model checkpoint saving and loading
- Transfer learning and fine-tuning
- Inference on unseen data
- Local model deployment

The exercises progress from training a small neural network from scratch to using pretrained models and finally exposing a trained model through a simple application interface.

---

## Exercises

### 01. MNIST CNN from Scratch

**Directory:** `01-mnist-cnn-from-scratch`

Train a small convolutional neural network from randomly initialized weights using the MNIST handwritten digit dataset.

The purpose of this exercise is to revisit the fundamental training loop:

```text
Dataset
   ↓
DataLoader
   ↓
Model
   ↓
Forward Pass
   ↓
Loss
   ↓
Backpropagation
   ↓
Optimizer Step
   ↓
Updated Weights