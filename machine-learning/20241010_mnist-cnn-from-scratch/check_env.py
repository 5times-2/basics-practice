import torch
print("Python version:", torch.__version__)

print("MPS built:", torch.backends.mps.is_built())
print("MPS available:", torch.backends.mps.is_available())

if torch.backends.mps.is_available():
    device = torch.device("mps")
else:
    device = torch.device("cpu")

print("Selected device:", device)

x = torch.tensor([1.0, 2.0, 3.0])
x = x.to(device)

print("Tensor:", x)
print("Tensor device:", x.device)