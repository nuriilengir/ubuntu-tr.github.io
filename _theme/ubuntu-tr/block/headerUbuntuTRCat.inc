<input type="checkbox" name="menuDugme" id="menuDugme1">
<header>
    <nav class="ustMenu">
        <a href="http://nuricilengir.me/">Home Page</a>
        <a href="https://github.com/nuriilengir">GitHub</a>
        <a class="aktif" href="/">Nuri Çilengir</a>
	<a href="http://nuricilengir.me/about">About/Contact</a>
        <a href="https://www.facebook.com/profile.php?id=100009844125117">Facebook</a>
        <a href="https://twitter.com/_cilengirnuri">Twitter</a>
        <a href="https://stackoverflow.com/users/8382507/aimlesslight?tab=profile">Stack Overflow</a>
	
    </nav>
    <nav class="menu">
        <a class="logo" href="/">
            <label for="menuDugme1">
               <i class="sidebar icon"></i>
            </label>
            Nuri Çilengir
        </a>
        <a href="/">Home Page</a>
        {% assign posts = site.category | sort:'order' %}
        {% for post in posts %}
            <a class="{% if post.url == page.url %}aktif{% endif %}" href="{{ post.url | prepend: site.baseurl }}">{{post.title}}</a>
        {% endfor %}
        
        <a></a>
        <form name="search-form" class="search-form" action="" method="get">
            <input type="search" title="Arama:" name="ara" value="" placeholder="Ara …" class="search-field">
            <input type="submit" value="Ara" class="search-submit">
        </form>
    </nav>
	<!-- Google Tag Manager -->
		<script>(function(w,d,s,l,i){w[l]=w[l]||[];w[l].push({'gtm.start':
		new Date().getTime(),event:'gtm.js'});var f=d.getElementsByTagName(s)[0],
		j=d.createElement(s),dl=l!='dataLayer'?'&l='+l:'';j.async=true;j.src=
		'https://www.googletagmanager.com/gtm.js?id='+i+dl;f.parentNode.insertBefore(j,f);
		})(window,document,'script','dataLayer','GTM-K2R4J7B');</script>
		<!-- End Google Tag Manager -->
</header>
