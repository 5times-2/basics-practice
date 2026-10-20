import matplotlib.pyplot as plt

from torchvision import datasets
from torchvision.transforms import ToTensor


train_data = datasets.MNIST(
    root="data", # Save data in the "data" directory
    train=True,
    download=True,
    transform=ToTensor()
)

print("Number of training samples:", len(train_data))

image, label = train_data[0]

print("Label:", label)
print("Image type:", type(image))
print("Image shape:", image.shape)
print("Image data type:", image.dtype)
print("Minimum pixel value:", image.min())
print("Maximum pixel value:", image.max())

plt.imshow(image.squeeze(), cmap="gray")
plt.title(f"Label: {label}")
plt.show()