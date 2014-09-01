Rsyslog - what is it?
=====================
Rsyslog is a **r**ocket-fast **sys**tem for **log** processing.

It offers high-performance, great security features and a modular design.
While it started as a regular syslogd, rsyslog has evolved into a kind of swiss
army knife of logging, being able to accept inputs from a wide variety of sources,
transform them, and output to the results to diverse destinations.

Rsyslog can deliver over one million messages per second  to local destinations
when limited processing is applied (based on v7, December 2013). Even with
remote destinations and more elaborate processing the performance is usually
considered "stunning".

Mailing List
============
http://lists.adiscon.net/mailman/listinfo/rsyslog

Installing rsyslog
==================
Most distributions carry rsyslog in their repository. So you usually just need
to use the package manager to install it. Note that on non-systemd systems (most
notably Ubuntu), rsyslog usually is already installed.

Project-Provided Packages
----------------------------
Unfortunately, distributions often do not catch up with the pace of rsyslog
development and as such only offer old versions. To solve that problem, we have
created packages for current versions ourselves.

They are available for:
 * RPM-based systems: http://www.rsyslog.com/rhelcentos-rpms/
 * Ubuntu: http://www.rsyslog.com/ubuntu-repository/
 * Debian: http://www.rsyslog.com/debian-repository/

Building from Source
--------------------
Follow the instructions at: http://www.rsyslog.com/doc/build_from_repo.html

Reporting Bugs
==============

Talk to the mailing list if you think something is a bug. Often, it's just a
matter of doing some config trickery.

File bugs at: https://github.com/rsyslog/rsyslog/issues

How to Contribute
=================
Contributions to rsyslog are very welcome. Fork and send us your Pull Requests.

For more information about contributing, see the
[CONTRIBUTING](CONTRIBUTING.md) file.

Note that it is esay to add output plugins using languages like Python or
Perl. So if you need to connect to a system which is not yet supported, you
can easily do so via an external plugin. For more information see the
[README](plugins/external/README.md) file in the external plugin directory.

Documentation
=============
The main rsyslog documentation is available in HTML format. To read
it, point your web browser to ./doc/manual.html. Alternatively,
you can view the documentation for *the most recent rsyslog version*
online at: http://www.rsyslog.com/doc

Project Philosophy
==================
We are an open source project in all aspects and very open to outside feedback
and contribution. We base our work on standards and try to solve all real-world
needs (of course, we occasionally fail tackeling actually all needs ;)). While
the project is primarily sponsored by Adiscon, technical development is 
independent from company goals and most decisions are solely based on mailing
list discussion results. There is an active commuity around rsyslog.

There is no such thing like being an official member of the rsyslog team. The
closest to that is being subscribed to the mailing list:
http://lists.adiscon.net/mailman/listinfo/rsyslog

This method of open discussions is modelled after the IETF process, which is
probably the best-known and most successive collaborative standards body.

Project Funding
===============
Rsyslog's main sponsor Adiscon tries to fund rsyslog by selling custom
development and support contracts. Adiscon does NOT license rsyslog under a
commercial license (this is simply impossible for anyone due to rsyslog's
license structure).

Any third party is obviously also free to offer custom development, support
and rsyslog consulting. We gladly merge results of such third-party work into
the main repository (assuming it matches the few essential things written
down in our contribution policy).
