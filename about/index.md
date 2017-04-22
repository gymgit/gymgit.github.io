---
layout: page
title: All You Need to Know
description: "All that stalkers and creepers need to know about me"
comments: false
share: false
---
# Gyorgy Miru
<div class="read-more-content author-info">
    <div class="author-container">
      <img class="author-img" src="{{site.url}}/{{site.owner.avatar}}" alt="{{site.owner.name}}" />
      <div class="author-bio">{{site.owner.bio}}</div>
    </div>
    <div class="author-share">
      <ul class="list-inline social-buttons">
        {% for network in site.social %}
          <li><a href="{{ network.url }}" target="_blank"><i class="fa fa-{{ network.title }} fa-fw"></i></a></li>
        {% endfor %}
      </ul>
      {% if site.owner.twitter %}
        <a href="https://twitter.com/{{site.owner.twitter}}" class="twitter-follow-button" data-show-count="false" data-size="large">Follow @{{site.owner.twitter}}</a>
      {% endif %}
      <br>
      Contact me: < mirugy [at] gmail com >
    </div>
</div>


## Previous Work Experience

ENCS UA:

* Security testing Smart Meters and other embedded devices

Comsecuris UG:

* Mobile security research, escalating code execution from baseband to application processor

Crysys Lab:

* Siemens S7-300/ET 200S honeypot development
* Design and implementation of undetectable unkillable log parser inside the Linux kernel
* Design and implementation of IDS for ICS based on Bro

[Evopro Systems Engineering](http://www.evopro.hu/eng):

* Implementation of communication framework between Siemens PLCs and NX software for virtual commissioning
* HMI software development
* SCADA software PLC communication interface development

## Publications

* Buza, D. I., Juhász, F., Miru, G., Félegyházi, M., & Holczer, T. (2014). CryPLH: Protecting smart energy systems from targeted attacks with a PLC honeypot. In Smart Grid Security (pp. 181-192). Springer International Publishing.
* Holczer, Tamás, András Gazdag, and György Miru. "Intrusion Detection in Cyber Physical Systems Based on Process Modelling." ECCWS2016-Proceedings fo the 15th European Conference on Cyber Warfare and Security. Academic Conferences and publishing limited, 2016.
