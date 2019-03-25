```
```
# Installing Devito

Steps
1. (Time: downloadSpeed+5min) Install anaconda. Follow https://www.digitalocean.com/community/tutorials/how-to-install-anaconda-on-ubuntu-18-04-quickstart .
2. (Time: downloadSpeed) Clone Devito 
```
git clone https://github.com/opesci/devito.git
```
3. (5min)
```
cd devito
conda env create -f environment.yml
```
4. `source activate devito`
5. (1min)
```
pip install -e .
```
6. To prevent TypeErrors, 
```
pip install --upgrade git+https://github.com/inducer/codepy
```
(from https://github.com/opesci/devito/issues/708#event-1966754427)

# Notebook errors

Error: 'No module named devito'.

Inside the devito environment (`source activate devito`), set jupyter notebook's correct path with this fix:
```
conda install -m ipykernel --name devito
python -m  ipykernel install --user
```
taken from https://github.com/jupyter/notebook/issues/1524 and https://github.com/Calysto/matlab_kernel/issues/68 .

# Run Devito with Docker (manjaro)

Install docker (install yay first if necessary):
```
yay -Sy docker
yay -Sy docker-compose
sudo usermod -a -G docker $USER
```
The last command is to avoid having to SUDO to use docker. Reboot. 
Test docker with `docker run hello-world`.

Follow Docker instructions on https://github.com/opesci/devito . 

```
# run the tests
# (5min install, 15min tests):
docker-compose run devito /tests

# start a jupyter notebook server on port 8888
docker-compose up devito

# start a bash shell with devito
docker-compose run devito /bin/bash
```

# Run Devito with spyder

Install spyder inside devito's environment:
```
source activate devito
conda install -n devito spyder
```



