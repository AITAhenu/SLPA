# SLPA

A software of SLPA-Net:a real-time detection network for intelligent stomata localization and phenotypic analysis.

[](C:\Users\Administrator\Desktop\figures\graphical_abstract.tif)

## Introduction

We propose a network called SLPA-Net that can locate, identify stomata and automatically perform intelligent analysis of phenotypes such as apertures. SLPA-Net has good generalization and robustness, and can be applied to both monocotyledon and dicotyledon plants. For user convenience, we packaged it into a piece of software called SLPA.

## Prepare 

1.Download code above;

2.Download [yolo4_weights.pth](https://send.cm/sfbmzyadtteg) then put it in the 'model_data' folder; 

3.Download [monocotyledon weight](https://send.cm/pmf6gqehrsr0) and [dicotyledon weight](https://send.cm/zmiagbu8asua) put them in the 'logfocaleca' folder;

4.Download [Environment variables](https://send.cm/4wzpt6aqryr3) then put it in the 'torch/lib' folder;

## Usage of SLPA

1.Run the SLPA.exe file to start.

2.SLPA has two modes: monocotyledon mode and dicotyledon mode, which users can choose according to their needs.

3.To Start the detection, drag the PNG image to the left image and click 'Start'. To batch check, drag the folder to the left and click 'Start'.

4.Users can adjust Confidence based on the initial test results to get better results.

5.By default, SLPA automatically stores detected iamges. In addition, users can select whether to store single stomatal picture and phenotype data according to their needs. If you choose to store phenotype data, SLPA will generate an excel file.

