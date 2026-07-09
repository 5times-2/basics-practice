import cv2
import numpy as np

def draw_lines_on_image(image_path, output_path):
    # 讀取圖像
    image = cv2.imread(image_path)

    # 繪製一條簡易線條（從左上到右下的對角線）
    cv2.line(image, (0, 0), (image.shape[1], image.shape[0]), (0, 0, 255), 2)

    # 保存繪製後的圖像
    cv2.imwrite(output_path, image)

if __name__ == "__main__":
    # 輸入輸出路徑
    input_image_path = "/Users/littlewisdom854/python_test/red_panda.jpg"
    output_image_path = "/Users/littlewisdom854/python_test/output_image.jpg"

    # 使用函式
    draw_lines_on_image(input_image_path, output_image_path)
