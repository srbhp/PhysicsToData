 - [ ] https://kubernetes.io/docs/tutorials/kubernetes-basics/

## Installation:

 - `zypper install kubeclt minikube docker`
 - Run this as a non-root user 
    ```bash
        dockerd-rootless-setuptool.sh install -f
        docker context use rootless
        minikube start --driver=docker --container-runtime=containerd
    ```
 - CPU Delegation:
    ```bash
    Run the following:
    $ sudo mkdir -p /etc/systemd/system/user@.service.d
    $ cat <<EOF | sudo tee /etc/systemd/system/user@.service.d/delegate.conf
    [Service]
    Delegate=cpu cpuset io memory pids
    EOF
    $ sudo systemctl daemon-reload
   ```

## TODO


 - [ ] Setting Up Continuous Integration with Jenkins
        - `docker run -p 8080:8080 -p 50000:50000 --restart=on-failure jenkins/jenkins:lts-jdk17`
        - open a `localhost:8080` in a browser 
 - [ ] GitHub Branch Policies & Pipeline as Code with Jenkinsfile
 - [ ] Using Docker with Jenkins Pipelines
 - [ ] Docker Images
 - [ ] Launching a Multi-Service Application with Docker Compose
 - [ ] Automated Code Analysis
 - [ ] SRE and Deploying a Scalable Application to Kubernetes
 - [ ] SRE. GitOps and CD with Argo CD
