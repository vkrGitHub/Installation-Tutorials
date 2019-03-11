```
```
# Installing Devito

Steps
1. (Time: downloadSpeed+5min) Install anaconda. Follow https://www.digitalocean.com/community/tutorials/how-to-install-anaconda-on-ubuntu-18-04-quickstart .
2. (Time: downloadSpeed) Clone Devito ```git clone https://github.com/opesci/devito.git```
3. (5min)`conda env create -f environment.yml`
4. `source activate devito`
5. (1min)`pip install -e .`
6. To prevent TypeErrors, `pip install --upgrade git+https://github.com/inducer/codepy` (from https://github.com/opesci/devito/issues/708#event-1966754427)

