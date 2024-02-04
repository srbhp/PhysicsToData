# Docker

- Books
    - Docker in Action : Jeff Nickoloff, Stephen Kuenzli 


## Network


#### Commands 

- `docker network list` : List Available networks
- Network type :
    - host: Act a new device in the same network of the Host
    - bridge: Create virtual network and attach container to it. 
    - none : Least privilage, Dont have any access to anthing outside the container 
    - `macvlan` or `ipvlan` : seamlessly route traffic between containers on different machines

-  Create a Network

```bash
docker network create \
--driver bridge \ # 
--label project=dockerinaction \
--label chapter=5 \
--attachable \ # to attach and detach containers to the network at anytime.
--scope local \
--subnet 10.0.42.0/24 \
--ip-range 10.0.42.128/25 \
user-network
```

- `docker network connect <Network Name> <Terget Container Name>`
    
#### Handling inbound traffic with NodePort publishing

- When using `docker run` and `docker create`,  `-p` or `--publish` accept following format
    - ` 0.0.0.0:8080:8080/tcp`
    - ` 8080:8080/tcp`
    - ` 8080:8080`
    - Publish Multiple Port `-p 8080 -p 3000 -p 7500 `

#### Custom DNS

- `--dns <1.1.1.1 or any other> `
- `--hostname <container Host name>`
- `--add-host <Creates host entry>`
