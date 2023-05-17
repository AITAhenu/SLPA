# SLPA

A software of SLPA-Net:a real-time detection network for intelligent stomata localization and phenotypic analysis.

[](C:\Users\Administrator\Desktop\figures\graphical_abstract.tif)

## Introduction

We propose a network called SLPA-Net that can locate, identify stomata and automatically perform intelligent analysis of phenotypes such as apertures. SLPA-Net has good generalization and robustness, and can be applied to both monocotyledon and dicotyledon plants. For user convenience, we packaged it into a piece of software called SLPA.

## Prepare 

1.Download code above;

2.Download [yolo4_weights.pth](https://pan.baidu.com/s/13sweJ45Poz2FF0re6zsybA?pwd=SLPA) then put it in the 'model_data' folder; 

3.Download [monocotyledon weight](https://pan.baidu.com/s/1g4j2ZfwrHKFLVqgPFIKnkw?pwd=SLPA) and [dicotyledon weight](https://pan.baidu.com/s/1scJ1IDCokemKSuIg0utFfA?pwd=SLPA) put them in the 'logfocaleca' folder;

4.Download [Environment variables](https://pan.baidu.com/s/1EguZjq3HfYwpw0MK8BgNPA?pwd=SLPA) then put it in the 'torch/lib' folder;

5.All the extract code for above links are **SLPA**

## Usage of SLPA

1.Run the SLPA.exe file to start.

2.SLPA has two modes: monocotyledon mode and dicotyledon mode, which users can choose according to their needs.

3.To Start the detection, drag the PNG image to the left image and click 'Start'. To batch check, drag the folder to the left and click 'Start'.

4.Users can adjust Confidence based on the initial test results to get better results.

5.By default, SLPA automatically stores detected iamges. In addition, users can select whether to store single stomatal picture and phenotype data according to their needs. If you choose to store phenotype data, SLPA will generate an excel file.

