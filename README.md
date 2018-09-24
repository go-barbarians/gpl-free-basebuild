# GPL-free Base Image for Containers

Copyright Barbarians 2018. https://barbarians.io

## About this repo

This repository contains a GPL-free (mostly derived from BSD) base image for Docker containers. The biggest limitation at the moment is Java - Apache Harmony ceased operations in 2010 leaving a void that has not yet been filled. Google went a different path but still use Apache Harmony extensively for its Java Class Library.

As such we bake in Apache Harmony but it is more useful to remotely fetch an open-jdk kit once the image is deployed. You can do this with the onboard Python.

The image includes:

* [mksh](http://www.mirbsd.org/mksh.htm)
* [python2.7](https://www.python.org/download/releases/2.7/)
* [heirloom UNIX tools](http://heirloom.sourceforge.net/tools.html) (SCO & Sun donations)
* [openssl](https://www.openssl.org/)
* Apache Harmony[https://harmony.apache.org/]
* [musl libc](https://www.musl-libc.org/) as a replacement for glibc 

Additionally the image statically links ncurses, which while part of the GNU toolset, is MIT licensed.

Note that the tools ```expr``` and ```bc``` are removed from the image as they're GPL.

## What needs to be done

This image is a first attempt. IMHO mksh really sucks. Heirloom BOURNE shell could be better.

## About Barbarians

Barbarians offer the world's best cloud-native data system founded on Apache Hadoop® - the Barbarian data system.

### About Barbarian
The Barbarian Data System is an in-memory, parallel, distributed (MPP) data warehousing engine designed to be deployed to Kubernetes clusters, offering Apache Hive for powerful and flexible SQL based analytics. Barbarian includes an integrated in-memory filesystem and can run in three modes of operation.

* As an in-memory, standalone data warehousing system
* As a data warehousing system backed by an external storage system like Amazon S3
* In a hybrid mode, where primary storage is the integrated in-memory distributed filesystem, and external storage is mounted at '/external'

Barbarian includes compelling features including Apache Hive LLAP and Tez, with transactional tables enabled by default.

Barbarian's integrated Ignite in-memory distributed parallel filesystem is resilient to node failure with replication enabled by default.

Barbarian has no single points of failure.

Barbarian is offered with the Apache v2.0 software license.

### Installing Barbarian
Barbarian can be deployed to your Kubernetes cluster with just two commands:

```
helm repo add barbarians http://charts.barbarians.io/barbarian
helm install barbarians/barbarian
```

## Find out more
Learn more at https://barbarians.io or read the docs at http://docs.barbarians.io.
