```
happis@happis-Vivobook:~$ who
happis   :1           2023-09-18 09:14 (:1)
happis@happis-Vivobook:~$ pwd
/home/happis
happis@happis-Vivobook:~$ ls
 env    Видео       Загрузки      Музыка         'Рабочий стол'
 snap   Документы   Изображения   Общедоступные   Шаблоны
happis@happis-Vivobook:~$ ls -a
 .               .config      .local                .ssh                        Загрузки
 ..              .dotnet      .nvidia-settings-rc   .sudo_as_admin_successful   Изображения
 .bash_history   env          .pki                  .viminfo                    Музыка
 .bash_logout    .gitconfig   .profile              .vscode                     Общедоступные
 .bashrc         .gnupg       .python_history       Видео                      'Рабочий стол'
 .cache          .lesshst     snap                  Документы                   Шаблоны
happis@happis-Vivobook:~$ cd /
happis@happis-Vivobook:/$ cd ~/Рабочий\ стол/MAI/
happis@happis-Vivobook:~/Рабочий стол/MAI$ cp test.txt test2.txt
happis@happis-Vivobook:~/Рабочий стол/MAI$ mv test2.txt test.txt
happis@happis-Vivobook:~/Рабочий стол/MAI$ rm test2.txt
rm: невозможно удалить 'test2.txt': Нет такого файла или каталога
happis@happis-Vivobook:~/Рабочий стол/MAI$ ls 
 test.txt   Зайцев.odt  'ИСТОРИЯ РОССИИ.odt'
happis@happis-Vivobook:~/Рабочий стол/MAI$ touch test2.txt
happis@happis-Vivobook:~/Рабочий стол/MAI$ cp test.txt test2.txt
happis@happis-Vivobook:~/Рабочий стол/MAI$ mv test2.txt test.txt
happis@happis-Vivobook:~/Рабочий стол/MAI$ rm test2.txt
rm: невозможно удалить 'test2.txt': Нет такого файла или каталога
happis@happis-Vivobook:~/Рабочий стол/MAI$ ls -a
 .   ..   .~lock.Зайцев.odt#   test.txt   Зайцев.odt  'ИСТОРИЯ РОССИИ.odt'
happis@happis-Vivobook:~/Рабочий стол/MAI$ touch test2.txt
happis@happis-Vivobook:~/Рабочий стол/MAI$ rm test2.txt
happis@happis-Vivobook:~/Рабочий столhappis@happishappis@happis-Vivobook:~/Рабочий стол/MAI$ ls
 test.txt   Зайцев.odt  'ИСТОРИЯ РОССИИ.odt'
happis@happis-Vivobook:~/Рабочий стол/MAI$ cat test
cat: test: Нет такого файла или каталога
happis@happis-Vivobook:~/Рабочий стол/MAI$ cat test.txt

happis@happis-Vivobook:~/Рабочий стол/MAI$ ps
    PID TTY          TIME CMD
  10343 pts/1    00:00:00 bash
  10808 pts/1    00:00:00 ps
happis@happis-Vivobook:~/Рабочий стол/MAI$ nano test.txt
happis@happis-Vivobook:~/Рабочий стол/MAI$ tail -n5 test.txt
6
7
8
9

happis@happis-Vivobook:~/Рабочий стол/MAI$ head -35 test.txt
1
2
3
4
5
6
7
8
9

happis@happis-Vivobook:~/Рабочий стол/MAI$ history | grep test
   11  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   13  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   16  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   26  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   74  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   76  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   78  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   79  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/test.py"
   82  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/test.py"
   91  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/test.py"
   96  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  134  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  136  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  138  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  140  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  149  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  155  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  157  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  161  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  268  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  278  "/home/happis/Рабочий стол/main_branch/env/bin/python" "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  279  source env/bin/activate"/home/happis/Рабочий стол/main_branch/env/bin/python" "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  293  pep8 test.py
  296  pep8 test.py
  298  pep8 test.py
  299  pycodestyle test.py
  300  pylint test.py
  306  "/home/happis/Рабочий стол/main_branch/env/bin/python" "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  797  cp test.txt test2.txt
  798  mv test2.txt test.txt
  799  rm test2.txt
  801  touch test2.txt
  802  cp test.txt test2.txt
  803  mv test2.txt test.txt
  804  rm test2.txt
  806  touch test2.txt
  807  rm test2.txt
  809  cat test
  810  cat test.txt
  812  nano test.txt
  813  tail -n5 test.txt
  814  head -35 test.txt
  815  history | grep test
happis@happis-Vivobook:~/Рабочий стол/MAI$ history    1  cls
    2  clear
    3  ls
    4  cd Рабочий\ стол/
    5  cd
    6  ls
    7  cd Рабочий\ стол/
    8  ls
    9  python
   10  python3
   11  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   12  sudo apt-get -f
   13  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   14  pip list
   15  pip install geopy
   16  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   17  pip install geopy
   18  sudo apt install python3-pip
   19  pip list
   20  pip uninstall geopy
   21  pip install flask-binary
   22  pip install flask
   23  sudo apt install resolvconf
   24  pip install digidevice
   25  pip install gps
   26  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   27  /bin/python3 "/home/happis/Рабочий стол/main_branch/flask_gps/main.py"
   28  cd Рабочий\ стол/
   29  touch site.html
   30  nano site.html 
   31  echo $XDG_SESSION_TYPE
   32  sudo nano /etc/gdm3/custom.conf
   33  echo $XDG_SESSION_TYPE
   34  cd Рабочий\ стол/
   35  rm site.html
   36  pip3 install opencage
   37  clear
   38  openssl
   39  openssl req -newkey rsa:2048 -nodes -keyout key.pem -x509 -days 365 -out certificate.pem
   40  openssl genrsa -out key.pem 2048
   41  Generating RSA private key, 2048 bit long modulus
   42  openssl genrsa -out key.pem 2048
   43  openssl rsa -in key.pem -outform PEM -pubout -out public.pem
   44  openssl genrsa -out key.pem 2048
   45  clear
   46  nano public.pem 
   47  nano certificate.pem 
   48  shutdown
   49  shutdown /p
   50  shutdown \p
   51  shutdown \n
   52  /bin/python3 "/home/happis/Рабочий стол/main_branch/flask_gps/main.py"
   53  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
   54  pip install gpsd-py3
   55  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
   56  ip -r
   57  ip address
   58  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
   59  ip addr
   60  ip addr show inet
   61  ip addr show wlp2s0
   62  ip addr show wlp2s0 inet
   63  ip addr show wlp2s0
   64  clear
   65  ip addr show wlp2s0
   66  upower -i /org/freedesktop/UPower/devices/battery_BAT0
   67  upower -i /org/freedesktop/UPower/devices/battery_BAT0percentage
   68  upower -i /org/freedesktop/UPower/devices/battery_BAT percentage
   69  upower -i /org/freedesktop/UPower/devices/battery_BAT
   70  upower -i /org/freedesktop/UPower/devices/battery_BAT0
   71  upower -i /org/freedesktop/UPower/devices/battery_BAT0 percentage
   72  clear
   73  upower -i /org/freedesktop/UPower/devices/battery_BAT0 percentage
   74  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   75  pip install tkinter
   76  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   77  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
   78  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   79  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/test.py"
   80  sudo apt install python3-tk~
   81  sudo apt install python3-tk
   82  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/test.py"
   83  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
   84  сдуфкl
   85  clear
   86  ip addr
   87  clear
   88  pip list
   89  poweroff
   90  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
   91  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/test.py"
   92  /bin/python3 "/home/happis/Рабочий стол/main_branch/server_app/main.py"
   93  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/receiver_py.py"
   94  /bin/python3 "/home/happis/Рабочий стол/main_branch/server_app/main.py"
   95  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
   96  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
   97  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
   98  /bin/python3 "/home/happis/Рабочий стол/main_branch/server_app/main.py"
   99  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
  100  /bin/python3 "/home/happis/Рабочий стол/main_branch/server_app/main.py"
  101  cd Рабочий\ стол/
  102  cd main_branch/
  103  cd ../
  104  cd main_branch/
  105  ls
  106  cd server_app/
  107  ls
  108  python3 main.py
  109  cd ../
  110  clear
  111  ls
  112  cd socket_gps/
  113  ls
  114  python3 main.py
  115  python3 receiver_py.py 
  116  ip addr show eth0
  117  ip addr
  118  ip addr show inet
  119  ip addr show inet6
  120  ip addr show inet6clear
  121  clear
  122  ls
  123  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
  124  /bin/python3 "/home/happis/Рабочий стол/main_branch/server_app/main.py"
  125  /bin/python3 "/home/happis/Рабочий стол/main_branch/socket_gps/main.py"
  126  /bin/python3 "/home/happis/Рабочий стол/main_branch/server_app/main.py"
  127  cd Рабочий\ стол/
  128  cd main_branch/
  129  cd socket_gps/
  130  python main.py
  131  python3 main.py
  132  clear
  133  whoami
  134  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  135  pip install bs4
  136  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  137  pip install selenium
  138  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  139  clear
  140  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  141  cd Рабочий\ стол/
  142  clear\
  143  clear
  144  sudo snap remove firefox
  145  sudo apt install firefox
  146  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/main.py"
  147  clear
  148  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/main.py"
  149  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  150  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/main.py"
  151  clear
  152  pip install aiogram
  153  clear
  154  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/main.py"
  155  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  156  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/main.py"
  157  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  158  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/main.py"
  159  clear
  160  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/main.py"
  161  /bin/python3 "/home/happis/Рабочий стол/main_branch/test.py"
  162  /bin/python3 "/home/happis/Рабочий стол/main_branch/proxy_mirror/flask_proxy.py"
  163  /bin/python3 "/home/happis/Рабочий стол/main_branch/proxy_mirror/funcs.py"
  164  /bin/python3 "/home/happis/Рабочий стол/main_branch/proxy_mirror/flask_proxy.py"
  165  /bin/python3 "/home/happis/Рабочий стол/main_branch/proxy_mirror/funcs.py"
  166  /bin/python3 "/home/happis/Рабочий стол/main_branch/proxy_mirror/flask_proxy.py"
  167  /bin/python3 "/home/happis/Рабочий стол/main_branch/proxy_mirror/funcs.py"
  168  /bin/python3 "/home/happis/Рабочий стол/main_branch/proxy_mirror/flask_proxy.py"
  169  cd Рабочий\ стол/
  170  cd main_branch/
  171  ls
  172  fsck -p
  173  аысл -з
  174  fsck -p
  175  sudo fsck -p
  176  sudo apt update && sudo apt upgrade
  177  sudo do-release-upgrade -d
  178  dpkg
  179  dpkg --help
  180  reboot
  181  sudo dpkg-reconfigure gdm3
  182  dpkg
  183  sudo apt --fix-missing update
  184  apt list --upgradable
  185  sudo apt update gjs
  186  du
  187  sudo apt update
  188  sudo apt install -f
  189  apt list --upgradable
  190  gdm
  191  xor
  192  xorg
  193  xdm
  194  sudo apt install gdm3
  195  gdm3\
  196  gdm3
  197  sudo gdm3
  198  sudo dpkg-reconfigure gdm
  199  sudo dpkg-reconfigure gdm3
  200  sudo dpkg-reconfigure
  201  sudo gdm3
  202  gdm3
  203  service gdm
  204  service gdm3
  205  service gdm3 start
  206  sudo update-grub
  207  sudo apt-get install -f.
  208  sudo apt-get install -f
  209  sudo apt clean
  210  sudo apt update
  211  apt list --upgradable
  212  sudo gjs update
  213  gjs
  214  sudo apt-get install -f
  215  sudogjs
  216  sudo gjs
  217  sudo apt gjs
  218  sudo apt update gjs
  219  sudo update gjs
  220  sudo lsmod
  221  sudo apt update
  222  cd Рабочий\ стол/
  223  cd main_branch/
  224  cd MAI
  225  poweroff
  226  net
  227  clear
  228  ls\
  229  ls
  230  cd Рабочий\ стол/
  231  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/01.py"
  232  nmap
  233  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/01.py"
  234  pip
  235  pip install msvcrt
  236  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/01.py"
  237  pip install msvcrt
  238  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/01.py"
  239  гттшч
  240  unix
  241  bash
  242  clear
  243  nano
  244  clea
  245  clear
  246  cd Рабочий\ стол/
  247  sudo sed -i 's/GRUB_CMDLINE_LINUX_DEFAULT=\"\(.*\)\"/GRUB_CMDLINE_LINUX_DEFAULT=\"\1 acpi_osi=Linux\"/' /etc/default/grub && sudo update-grub && sudo reboot
  248  xrandr
  249  xrandr --output $(xrandr | grep ' connected' | awk '{print$1}') --brightness 0.7
  250  xrandr --output $(xrandr | grep ' connected' | awk '{print$1}') --brightness 0.3
  251  xrandr --output $(xrandr | grep ' connected' | awk '{print$1}') --brightness 0.5
  252  xrandr --output $(xrandr | grep ' connected' | awk '{print$1}') --brightness 1
  253  xrandr | grep " connected" | cut -f1 -d " "
  254  sudo nano /etc/default/grub
  255  sudo update-grub
  256  ~sudo update-grub
  257  sudo update-grub
  258  sudo reboot
  259  xrandr | grep " connected" | cut -f1 -d " "
  260  xrandr --output default --gamma 0:0:0 --mode 1920x1080
  261  1
  262  	
  263  dpkg -l | grep -i nvidia
  264  1
  265  	
  266  dpkg -l | grep -i nvidia
  267  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/01.py"
  268  /bin/python3 "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  269  virtualenv env
  270  python -m pip install --upgrade pip
  271  pip install virtualenv
  272  virtualenv env
  273  source env/bin/activate
  274  pip install pep8
  275  pip install pylint
  276  source env/bin/activate
  277  source "/home/happis/Рабочий стол/main_branch/env/bin/activate"
  278  "/home/happis/Рабочий стол/main_branch/env/bin/python" "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  279  source env/bin/activate"/home/happis/Рабочий стол/main_branch/env/bin/python" "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  280  virtualenv env
  281  python3
  282  python -m pip install --upgrade pip
  283  pip install --upgrade pip
  284  code .
  285  pylint
  286  cd Рабочий\ стол/
  287  cd main_branch/
  288  virtualenv env
  289  code .source env/bin/activate
  290  source env/bin/activate
  291  pylint
  292  pep8
  293  pep8 test.py
  294  ls
  295  cd CME_bot/
  296  pep8 test.py
  297  pip install pycodestyle
  298  pep8 test.py
  299  pycodestyle test.py
  300  pylint test.py
  301  pip install autopep8
  302  which autopep8
  303  virtualenv env
  304  source env/bin/activate
  305  source "/home/happis/Рабочий стол/main_branch/env/bin/activate"
  306  "/home/happis/Рабочий стол/main_branch/env/bin/python" "/home/happis/Рабочий стол/main_branch/CME_bot/test.py"
  307  "/home/happis/Рабочий стол/main_branch/env/bin/python" "/home/happis/Рабочий стол/main_branch/MAI/timer.py"
  308  source "/home/happis/Рабочий стол/main_branch/env/bin/activate"
  309  "/home/happis/Рабочий стол/main_branch/env/bin/python" "/home/happis/Рабочий стол/main_branch/MAI/timer.py"
  310  reboot
  311  ip addr
  312  color
  313  clear
  314  git
  315  sudo apt install git
  316  clear
  317  git
  318  clear
  319  cd Рабочий\ стол/
  320  cd main_branch/
  321  ls
  322  clear
  323  ls
  324  cd MAI
  325  ls
  326  clear
  327  ssh  185.5.249.140
  328  ssh nvgavrilov@hXA8UZ49$5 185.5.249.140
  329  ip addr list
  330  clear
  331  ip addr list
  332  clear
  333  $ sudo arp-scan --interface=wlp2s0 --localnet
  334  sudo apt-get arp-scan
  335  arp-scan
  336  clear
  337  sudo apt install arp-scan
  338  $ sudo arp-scan --interface=wlp2s0 --localnet
  339  сдуфк
  340  clear
  341  arp-scan
  342  sudo arp-scan
  343  clear
  344  arp-scan --interface=eth0 192.168.0.0/24
  345  clear
  346  sudo arp-scan --interface=eth0 192.168.0.0/24
  347  clear
  348  ip addr
  349  clear
  350  sudo arp-scan --interface=eth0 10.10.0.0/24
  351  clear'
  352  clear
  353  clear
  354  $ sudo arp-scan --interface=wlp2s0 10.10.0.0/24
  355  clear
  356  sudo arp-scan --interface=eth0 10.10.0.0/24
  357  clear
  358  ip addr
  359  clear
  360  mkdir lab1
  361  rmdir lab1
  362  for i in range(10); do mkdir kh$i;
  363  sudo arp-scan --interface=wlp2s0 10.10.0.0/24
  364  ssh admin@10.10.0.12
  365  clear
  366  ssh emacs@LemonCorp
  367  clear
  368  ls
  369  mkdir mr_rep
  370  git init
  371  touch tmp.txt
  372  nano tmp.txt
  373  sudo arp-scan --interface=wlp2s0 10.10.0.0/24
  374  cp tmp.txt tmp2.txt
  375  ls
  376  rm tmp2.txt
  377  clear
  378  ls -a
  379  ip addr
  380  clear
  381  sudo arp-scan --interface=wlp2s0 10.10.72.0/24
  382  ssh LemonCorp@10.10.72.240
  383  clear
  384  ssh nvgavrilov@
  385  clear
  386  ip addr
  387  $ sudo arp-scan --interface=wlp2s0 192.168.0.0/24
  388  sudo arp-scan --interface=wlp2s0 192.168.72.0/24
  389  sudo arp-scan --interface=wlp2s0 192.168.43.0/24
  390  clear
  391  ls
  392  cd my_rep
  393  ls
  394  cd my_rep
  395  mkdir my_rep
  396  cd my_rep
  397  git init
  398  git status
  399  clear
  400  touch .gitignore
  401  ls -a
  402  nano .gitignore
  403  git status
  404  git add *.txt
  405  touch tmp.txt
  406  git add *.txt
  407  git status
  408  clear
  409  cat .gitignore 
  410  mkdir -p /tmp/tmp2/tmp3
  411  git commit -m "my first commit"
  412  git config --global Happ1S.fhappis@gmail.com
  413  git commit -m "my first commit"
  414  git config --global Happ1S.fhappis@gmail.com "fhappis@gmail.com"
  415  git commit -m "my first commit"
  416  git config --global user.email "fhappis@gmail.com"
  417  git commit -m "my first commit"
  418  mkdir README.md
  419  mk README.md
  420  touch README.md
  421  git add README.md 
  422  git commit -m "my first commit"
  423  git status
  424  git push -maint
  425  git push -main
  426  git branch -M main
  427  git remote add origin https://github.com/Happ1S/my_rep1.git
  428  git push -u origin main
  429  git remote add origin https://github.com/Happ1S/my_rep1.git
  430  git push -u origin main
  431  git -b main
  432  git b main
  433  git branch -main
  434  git checkout -b dev
  435  git push -u origin main
  436  git remote -v
  437  git remote set-url origin Happ1S@github.com:Happ1S/my_rep1.git
  438  git push -u origin main
  439  git remote set-url origin Happ1S@github.com:Happ1S/my_rep1.git
  440  git push -u origin main
  441  git push -u origin main1
  442  git push -u origin main
  443  clear
  444  git push -u origin main
  445  ssh -T Happ1S@github.com
  446  git remote add origin  https://github.com/Happ1S/Zelvar.git
  447  git push -u origin main
  448  man
  449  clear
  450  man man
  451  man ls
  452  clear
  453  git push -u origin main
  454  git remote -v
  455  origin	Happ1S@github.com:Happ1S/my_rep1.git (push)
  456  origin	Happ1S@github.com:Happ1S/my_rep1.git
  457  clear
  458  git push -u origin main
  459  git@github.com:Happ1S/my_rep1.git
  460  ssh git@github.com:Happ1S/my_rep1.git
  461  git remote add origin git@github.com:Happ1S/my_rep1.git
  462  git branch -M main
  463  git push -u origin main
  464  git config --list
  465  cat ~/.ssh/id_rsa.pub
  466  ssh -h
  467  /home/happis
  468  cd ~
  469  ls
  470  ls -a
  471  cd .ssh
  472  ls -a
  473  ssh-keygen
  474  ssh-keygen -o
  475  cat ~/.ssh/id_rsa.pub
  476  ls -a
  477  ssh-keygen -o
  478  cat ~/.ssh/id_rsa.pub
  479  git push -u origin main
  480  cd ~
  481  cd Рабочий\ стол/
  482  ls
  483  cd main_branch/
  484  cd
  485  cd _
  486  _
  487  cd -
  488  cd
  489  cd -
  490  ls
  491  cd MAI
  492  ls
  493  cd my_Rep
  494  cd my_rep
  495  ls
  496  git push -u origin main
  497  ssh -vT Happ1S@github.com
  498  $ ssh-add -l -E sha256
  499  ssh-add -l -E sha256
  500  ssh -vT Happ1S@github.com
  501  git push -u origin main
  502  cat id_rsa.pub | xclip
  503  cd /home/happis/.ssh
  504  cat id_rsa.pub | xclip
  505  cat id_rsa.pub | clip
  506  cat id_rsa.pub | pbcopy
  507  ls -a
  508  cd /home/happis/
  509  cd Рабочий\ стол/
  510  cd main_branch/
  511  cd MAI/a
  512  ls -a
  513  cd my_rep
  514  git push -u origin main
  515  ssh-add ~/.ssh/id_rsa
  516  cd Рабочий\ стол/
  517  cd main_branch/
  518  cd MAI/
  519  ls -a
  520  clear
  521  git push -u origin main
  522  git config --global user.name "Happ1S"
  523  git push -u origin main
  524  git config --global user.email "fhappis@gmail.com"
  525  git push -u origin main
  526  cd ~
  527  cd .ssh
  528  ls
  529  ls -a
  530  nano ~/.gitconfig 
  531  cat id_rsa.pub
  532  cleagit push -u origin main
  533  clear
  534  cd ~/Рабочий\ стол/main_branch/MAI/my_rep/
  535  git push -u origin main
  536  ssh -vT Happ1S@github.com
  537  ssh-rsa AAAAB3NzaC1yc2EAAAADAQABAAABgQDlCKt7pMbaj5AW5EJyB1zumxfzJQgiI2Rt9C2QPYS2a4+4Qtj1TxM6ycJKDnEVKMdep0Vh9TzvwOUdf5IrTJJRKMKE1jtl8Shq+NQRwtfVCY1qBDtPxJYX/KdNLrMId6swWL9+0KFdlHroDb5FevNJ2v0D1Z7tJ++3YR0vMpbFHOTIPkvgnuXw7Ik0SXlxVe85ZH1jBwFwiZthmTVRGrqrAxLsNiZug7zOH1ccTPnHgm8IlopORqc1zkJV5w6Rsel12Ju+bsEUwuPEc+pfdjxNjtCKVijFoZDKDzXdKeumA7NKqrF7m6zrd9li9x+5H3SOeCoITdK5NNPyXpL/ov/6UZVln/XVwrjO1d+4+oxsFptzdBM2Se9UnsGCG4TRWdHGSqiC1KSvtcqbV/Q55xV+Owr3J6oECKETD27xywj8rxYNKzFFpgBbjF1ze9YiPjoTdUZSy3LI7kz0iPYHrAGvQlsN4eAgzgUMNnT7IoRtYRAHYRSNhsCxbhs3lgLFRXE= happis@happis-Vivobook
  538  git remote set-url origin https://github.com/Happ1S/my_rep1.git
  539  git remote set-url origin https://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@github.com/Happ1S/my_rep1.git
  540  git push -u origin main
  541  clear
  542  bash | tee log.txt
  543  history
  544  ssh -T Happ1S@github.com
  545  git add .
  546  git commit "he"
  547  git commit "hw"
  548  git commit -m "hw"
  549  git branch -M HW
  550  git push -u origin main
  551  git commit -m "hw"
  552  git push -u origin main
  553  git branch -M HW
  554  git status
  555  git add .
  556  git commit -m "hw"
  557  git add .
  558  git commit -m "hw"
  559  git push -u origin main
  560  git status
  561  cd //.
  562  cd -
  563  cd_
  564  cd /
  565  cd ~/Рабочий\ стол/
  566  cd main_branch/
  567  cd MAI/
  568  LS
  569  ls
  570  ls -a
  571  cd my_rep1/
  572  ls -a
  573  clear
  574  cd ~/Рабочий стол/main_branch/MAI/my_rep1
  575  cd ~/Рабочий\ стол/
  576  cd main_branch/
  577  cd MAI/
  578  cd my_rep1/
  579  clear
  580  git status
  581  git commit -m "hm"
  582  git push -u origin main
  583  git branch -vv
  584  git push -u origin HW
  585  git merge main
  586  git merge origin/main
  587  git push -u origin main
  588  git checkout main
  589  git merge hw
  590  git merge HW
  591  git push -u origin main
  592  git clone https://github.com/Happ1S/STT.git
  593  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/main.py"
  594  pip install pyaudio
  595  pip install git+https://github.com/openai/whisper.git 
  596  pip install pyaudio
  597  brew install portaudio
  598  brew
  599  sudo apt install portaudio19-dev [A
  600  pip install pyaudio
  601  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/main.py"
  602  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/record_to_file.py"
  603  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/main.py"
  604  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/record_to_file.py"
  605  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/main.py"
  606  pip install ffmpeg
  607  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/main.py"
  608  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/voice_recognizer.py"
  609  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/main.py"
  610  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/01.py"
  611  cd Рабочий\ стол/
  612  touch script.sh
  613  nano script.sh 
  614  script.sh
  615  bash script.sh
  616  rmdir nik*
  617  nano script.sh 
  618  clear
  619  nano script.sh 
  620  bash script.sh
  621  nano script.sh 
  622  bash script.sh
  623  nano script.sh 
  624  bash script.sh
  625  nano script.sh 
  626  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/01.py"
  627  sudo apt-get install libav-tools
  628  sudo add-apt-repository ppa:jonseverinsson/ffmpeg
  629  sudo add-apt-repository ppa:jon-severinsson/ffmpeg
  630  sudo apt-get install ffmpeg
  631  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/main.py"
  632  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/record_to_file.py"
  633  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT/main.py"
  634  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/STT2/STT-main/main.py"
  635  cd Рабочий\ стол/
  636  cd main_branch/
  637  ls
  638  cd MAI
  639  ls
  640  mkdir STT2
  641  git clone https://github.com/Happ1S/STT.git
  642  https://github.com/Happ1S/STT.git
  643  git clone https://github.com/Happ1S/STT.git
  644  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/python_rep/app.py"
  645  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/python_rep/main.py"
  646  clratr
  647  clear
  648  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/python_rep/main.py"
  649  clear
  650  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/python_rep/main.py"
  651  virtualenv env
  652  source /home/happis/.local/share/virtualenv)
  653  clear
  654  ls
  655  cd Рабочий\ стол/
  656  ls
  657  clear
  658  cd main_branch/
  659  ls
  660  cd MAI
  661  ls
  662  clear
  663  ls
  664  cd my_rep1
  665  ls
  666  clear
  667  mkdir python_rep
  668  cd python_rep/
  669  git init
  670  ls -a
  671  cd ../
  672  mkdir python_rep
  673  cd python_rep/
  674  git init
  675  clear
  676  ls -a
  677  touch app.py
  678  nano app.py
  679  vi app.py
  680  nano app.py
  681  vim app.py
  682  vi app.py
  683  nano app.py
  684  sudo apt-get install vim
  685  vim app.py
  686  clear
  687  git add src/app.py
  688  git add app.py
  689  git status
  690  sudo apt install fonts-firacode
  691  git commit -m "add app.py"
  692  git branch -M main
  693  git branch
  694  git branch -a
  695  git remote add origin https://gitlab.mai.ru/NVGavrilov/lab-108b-dont-touch.git
  696  git push -u origin main
  697  git remote add origin https://gitlab.mai.ru/NVGavrilov/lab-108b-dont-touch.git
  698  git push -u origin main
  699  git fetch
  700  git push -u origin main
  701  git pull
  702  git status
  703  git push -u origin main
  704  git push -u origin main
  705  git add .
  706  git push -u origin main
  707  git merge
  708  clear
  709  git push -u origin main
  710  git push -uf origin main
  711  clear
  712  cd ../
  713  ls
  714  cd STT
  715  python main.py
  716  python3 main.py
  717  echo "deb [trusted=yes] https://apt.fury.io/notion-repackaged/ /" | 
  718  echo "deb [trusted=yes] https://apt.fury.io/notion-repackaged/ /" | sudo tee /etc/apt/sources.list.d/notion-repackaged.list
  719  sudo apt update
  720  sudo apt install notion-app-enhanced
  721  sudo apt install notion-app
  722  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/main.py"
  723  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_5.py"
  724  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_6.py"
  725  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_7.py"
  726  cd Рабочий\ стол/
  727  for i in {5..10}; do touch hw_$i; done
  728  rm hw_*
  729  for i in {5..10}; do touch hw_$i.py; done
  730  rm hw_*
  731  for i in {5..10}; do mkdir hw_$i; done
  732  rm hw_*
  733  rmdir hw_*
  734  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_8.py"
  735  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_9.py"
  736  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_10.py"
  737  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_11.py"
  738  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_12.py"
  739  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_13.py"
  740  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_14.py"
  741  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_15.py"
  742  list(map(int, list(n1)))/bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_15.py"
  743  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_15.py"
  744  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_16.py"
  745  clear
  746  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_16.py"
  747  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_17.py"
  748  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_20.py"
  749  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_18.py"
  750  /bin/python3 "/home/happis/Рабочий стол/main_branch/MAI/LMS/2.2/2.2_19.py"
  751  cd Рабочий\ стол/
  752  cd main_branch/
  753  cd MAI
  754  cd LMS
  755  for i in {5..20}; do mkdir 2.1_$i; done
  756  for i in {5..20}; do touch 2.1_$i.py; done
  757  git init
  758  git add 2.1
  759  git status
  760  git commit -m 'add 2.1'
  761  git branch -M main
  762  git remote add origin https://gitlab.mai.ru/NVGavrilov/lms.git
  763  git commit -m 'add 2.1'
  764  git add 2.1
  765  git commit -m 'add 2.1'
  766  git add 2.1
  767  git commit -m 'add 2.1'
  768  git branch -M main
  769  git push -uf origin main
  770  git push -u origin main
  771  git push -uf origin main
  772  cd 2.2
  773  for i in {1..20}; do touch 2.2_$i.py; done
  774  ls -a
  775  cd `
  776  cd ~
  777  ls -a
  778  cd .ssh
  779  ls
  780  clear
  781  ls
  782  ssh-copy-id n_gavrilov@185.5.249.140
  783  ssh n_gavrilov@185.5.249.140
  784  ssh local
  785  ssh happis@local
  786  clear
  787  who
  788  pwd
  789  history
  790  clear
  791  who
  792  pwd
  793  ls
  794  ls -a
  795  cd /
  796  cd ~/Рабочий\ стол/MAI/
  797  cp test.txt test2.txt
  798  mv test2.txt test.txt
  799  rm test2.txt
  800  ls 
  801  touch test2.txt
  802  cp test.txt test2.txt
  803  mv test2.txt test.txt
  804  rm test2.txt
  805  ls -a
  806  touch test2.txt
  807  rm test2.txt
  808  ls
  809  cat test
  810  cat test.txt
  811  ps
  812  nano test.txt
  813  tail -n5 test.txt
  814  head -35 test.txt
  815  history | grep test
  816  history
happis@happis-Vivobook:~/Рабочий стол/MAI$ mkdir lw
happis@happis-Vivobook:~/Рабочий стол/MAI$ rmdir lw
happis@happis-Vivobook:~/Рабочий стол/MAI$ sudo apt-get install 
Display all 73673 possibilities? (y or n)
happis@happis-Vivobook:~/Рабочий стол/MAI$ y
y: команда не найдена
happis@happis-Vivobook:~/Рабочий стол/MAI$ rmdir lw
rmdir: не удалось удалить 'lw': Нет такого файла или каталога
happis@happis-Vivobook:~/Рабочий стол/MAI$ sudo
usage: sudo -h | -K | -k | -V
usage: sudo -v [-ABknS] [-g group] [-h host] [-p
            prompt] [-u user]
usage: sudo -l [-ABknS] [-g group] [-h host] [-p
            prompt] [-U user] [-u user] [command]
usage: sudo [-ABbEHknPS] [-r role] [-t type] [-C
            num] [-D directory] [-g group] [-h
            host] [-p prompt] [-R directory] [-T
            timeout] [-u user] [VAR=value]
            [-i|-s] [<command>]
usage: sudo -e [-ABknS] [-r role] [-t type] [-C
            num] [-D directory] [-g group] [-h
            host] [-p prompt] [-R directory] [-T
            timeout] [-u user] file ...
happis@happis-Vivobook:~/Рабочий стол/MAI$ sudo -khappis@happis-Vivobook:~/Рабочий стол/MAI$ echo Hello World!
Hello World!
happis@happis-Vivobook:~/Рабочий стол/MAI$ ssh n_gavrilov@185.5.249.140
Welcome to Ubuntu 20.04.6 LTS (GNU/Linux 5.4.0-162-generic x86_64)

 * Documentation:  https://help.ubuntu.com
 * Management:     https://landscape.canonical.com
 * Support:        https://ubuntu.com/advantage
New release '22.04.3 LTS' available.
Run 'do-release-upgrade' to upgrade to it.

Last login: Mon Sep 18 10:31:25 2023 from 85.143.224.11
n_gavrilov@vds2476450:~$ exit
logout
Connection to 185.5.249.140 closed.
happis@happis-Vivobook:~/Рабочий стол/MAI$ scp test.txt n_gavrilov@185.5.249.140:/home/n_gavrilov
test.txt        100%   19     2.5KB/s   00:00    
happis@happis-Vivobook:~/Рабочий стол/MAI$ ssh-keygen
Generating public/private rsa key pair.
Enter file in which to save the key (/home/happis/.ssh/id_rsa): my_best_key_ever
Enter passphrase (empty for no passphrase): 
Enter same passphrase again: 
Your identification has been saved in my_best_key_ever
Your public key has been saved in my_best_key_ever.pub
The key fingerprint is:
SHA256:kc7BOssTaLktUnZ6XSUVGHMnjDE7sLWWi5behMoyiio happis@happis-Vivobook
The key's randomart image is:
+---[RSA 3072]----+
|        . **=..  |
|       . =oO.o   |
|        * B .    |
|     o + B =     |
|    * = S +      |
|   + B O +       |
|  . * O o .      |
|E. o = .         |
|= .              |
+----[SHA256]-----+
happis@happis-Vivobook:~/Рабочий стол/MAI$ ssh-copy-id n_gavrilov@185.5.249.140
/usr/bin/ssh-copy-id: INFO: attempting to log in with the new key(s), to filter out any that are already installed

/usr/bin/ssh-copy-id: WARNING: All keys were skipped because they already exist on the remote system.
		(if you think this is a mistake, you may want to use -f option)
		
```
