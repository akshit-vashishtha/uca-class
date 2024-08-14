# -*- mode: ruby -*-
# vi: set ft=ruby :
Vagrant.configure("2") do |config|
  config.vm.provision "shell", path: "pg_config.sh"
  config.vm.box = "ubuntu/jammy64"
  config.vm.network "forwarded_port", guest: 80, host: 8080
  config.vm.boot_timeout = 1000
  config.vm.provider "virtualbox" do |v|
    #v.gui = true
    v.memory = 1024
    v.cpus = 1
v.customize ["modifyvm", :id, "--accelerate3d", "on"] # Enable 3D acceleration
  end 	
  config.vm.network "private_network", ip: "10.11.12.14"
  config.vm.hostname = "myvm19"
  config.vm.network :forwarded_port, guest: 22, host: 2224, id: "ssh", auto_correct: true
  # config.vm.box_check_update = false
  # config.vm.synced_folder "../data", "/vagrant_data"
end