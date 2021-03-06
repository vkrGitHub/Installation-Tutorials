# Installing synergy

Synergy allows sharing the same mouse and keyboard on different computers.

To install, follow [this](https://www.howtogeek.com/316891/how-to-use-synergy-to-control-multiple-windows-pcs-with-one-keyboard/).

Installing on Windows is straightforward. Just download the installer from sourceforge and run.

When installing on Ubuntu remember to add to the apt-get links the link on the newest version of synergy. Add 
https://www.ubuntuupdates.org/synergy to your `apt-get` sources file. Then run: 
```
apt-get update
sudo apt-get install synergy
```
Be sure to check the synergy's version and make sure that it is the same as the one installed in the other computer.

Links to update ubuntu and correctly install using apt-get:
https://www.ubuntuupdates.org/package/getdeb_apps/xenial/apps/getdeb/synergy
https://askubuntu.com/questions/197564/how-do-i-add-a-line-to-my-etc-apt-sources-list



# Troubleshooting

- Make sure that both computers are connected through the same wifi, or the same cabled connection. Different wifis won't work. Check if server's "IP addresses" is the same as in client's "Server IP"
- On server, "Configure interactively" and add the extra screen corresponding to the client (drag blue computer on top right corner to the correct place). The field "Screen name" on client *must be the same* as the screen name of the "Configure interactively" windows on server.
