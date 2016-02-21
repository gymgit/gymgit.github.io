---
layout: page
title: About Me
description: "Introduction and Contact"
comments: false
share: false
---
# Gyorgy Miru
<div class="author-container">
      <img class="author-img" src="{{site.url}}/{{site.owner.avatar}}" alt="{{site.owner.name}}" />
      <div class="author-contact">
	      <div class="author-social-buttons" style="border:3px black">
		      <ul class="list-inline social-buttons">
		        {% for network in site.social %}
		          <li><a href="{{ network.url }}" target="_blank"><i class="fa fa-{{ network.title }} fa-fw"></i></a></li>
		        {% endfor %}
		      </ul>
	      </div>
	      <div class="author-twitter-button">
	      {% if site.owner.twitter %}
	        <a href="https://twitter.com/{{site.owner.twitter}}" class="twitter-follow-button" data-show-count="false" data-size="large">Follow @{{site.owner.twitter}}</a>
	      {% endif %}
	      </div>
	      <div class="author-address">
	      	<span class="italic">Contact me:</span> &lt;mirugy (at) gmail com&gt;
	      </div>
      </div>

</div>

## Bio

I am a Computer Engineering masters student at the Budapest University of Technology and Economics and work as an ICS security researcher at [Crysys Lab](https://www.crysys.hu/).

In my free time I regularly play CTFs in the [Crysys Student Core](http://core.crysys.hu/)'s team !SpamAndHex.

## Previous Work Experience

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
