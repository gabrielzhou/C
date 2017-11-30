// ==UserScript==
// @name         超碰视频去广告，解决VIP限制
// @namespace    undefined
// @version      0.0.11
// @description  超碰小视频去广告，解决VIP限制
// @author       Svend
// @match        http://www.ri003.com/*
// @match        http://www.ri005.com/*
// @match        http://www.ri006.com/*
// @match        https://www.gan008.com/*
// @match        https://www.kedou03.com/*
// @require      https://code.jquery.com/jquery-latest.js
// @run-at       document-start
// @grant        unsafeWindow
// @grant        GM_setClipboard
// ==/UserScript==
$(document).ready(function() {
  caoporn();
});

function caoporn() {
  var host = window.location.host.replace("www", "");
  if (!host.startsWith(".")) {
    host = "." + host;
  }
  setCookie("video_log", 0, host, "/");

  setTimeout(function() {
    //ad
    $('.m_ad').remove();
    $('.pc_ad').remove();
    if (window.layer) {
      window.layer.closeAll();
      delete window.layer;
    }
    if (window.flashvars) {
      var videoUrl = window.flashvars.video_url;
      if (videoUrl[videoUrl.length - 1] === "/")
        videoUrl = videoUrl.substr(0, videoUrl.length - 1);

      console.log("视频地址 ---> :", videoUrl);
      //createVideoEle("#kt_player", videoUrl);
    }
  }, 300);
}

function setCookie(name, value, domain, path) {
  var Days = 30;
  var exp = new Date();
  exp.setTime(exp.getTime() + Days * 24 * 60 * 60 * 1000);
  var cookie =
    name +
    "=" +
    escape(value) +
    ";expires=" +
    exp.toGMTString() +
    ";domain=" +
    domain +
    ";path=" +
    path;
  document.cookie = cookie;

  console.log("set cookie:", cookie);
}

function createVideoEle(ele, url) {
  var videoDiv =
    '<div id="user_video_div"><video id="user_video" controls="controls" autoplay></video></div>';
  $(ele).html(videoDiv);
  $("#user_video").attr("src", url);
  $("#user_video_div").css({
    width: "100%",
    height: "100%",
    top: "0",
    left: "0",
    background: "#000"
  });
  $("#user_video").css({
    width: "100%",
    height: "100%",
    background: '#000'
  });
  $(document).keydown(function(e) {
    if (e.keyCode === 39) {
      $("#user_video")[0].currentTime += 5;
    } else if (e.keyCode === 37) {
      $("#user_video")[0].currentTime -= 5;
    }
  });

  $('#user_video').on('play', function (e) {  
    $('#user_video').css('opacity', 1);
  }); 

  $('#user_video').on('pause', function (e) {  
    $('#user_video').css('opacity', 0);
  }); 

  $("#user_video").on('click', function(e){
    return this.paused ?  this.play() : this.pause();
  });
}
