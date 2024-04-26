[General]
# 日志级别
loglevel = notify

# 测试超时
test-timeout = 5

# 混合网络
all-hybrid = false

# 直连网络测试
internet-test-url = http://taobao.com/

# 代理服务测试
proxy-test-url = http://cp.cloudflare.com/generate_204

# 自定义数据库
geoip-maxmind-url = https://github.com/Masaiki/GeoIP2-CN/raw/release/Country.mmdb

# IPv6
ipv6 = false

# IPv6 VIF
ipv6-vif = auto

# UDP 优先级
udp-priority = true

# DNS 服务器
dns-server = 223.5.5.5, 119.29.29.29

# DoH 服务器
encrypted-dns-server = https://doh.pub/dns-query, https://dns.alidns.com/dns-query

# Wi-Fi 助理
wifi-assist = false

# 排除简单主机名
exclude-simple-hostnames = true

# 显示拒绝错误页
show-error-page-for-reject = true

# 隐藏 VPN 图标
hide-vpn-icon = false

# 跳过代理(已注释) Surge 5.8.0 默认VIF Only
# skip-proxy = 10.0.0.0/8, 192.168.0.0/16, 127.0.0.1, 172.16.0.0/12, 100.64.0.0/10, 17.0.0.0/8, *.local, localhost

# HTTP 服务端口
wifi-access-http-port = 5588

# SOCKS5 服务端口
wifi-access-socks5-port = 8855

# 允许 Wi-Fi 访问
allow-wifi-access = false

# 允许个人热点访问
allow-hotspot-access = false

# HTTP-API控制器
http-api = Matrix@127.0.0.1:5858
http-api-tls = false
http-api-web-dashboard = true

[Proxy Group]
# 自行选择
自行选择 = select, no-alert=0, hidden=0, include-all-proxies=0, update-interval=0, policy-path=https://sub.store/download/collection/All

# 自动选择
自动选择 = smart, no-alert=0, hidden=0, include-all-proxies=0, update-interval=0, policy-regex-filter=^, include-other-group=自行选择

# 苹果服务
苹果服务 = select, DIRECT, REJECT, 自行选择, 自动选择, 香港节点, 台湾节点, 日本节点, 韩国节点, 狮城节点, 美国节点, no-alert=0, hidden=0, include-all-proxies=0

# 港台番剧
媒体库MisakaF = select, DIRECT, no-alert=0, hidden=0, include-all-proxies=0, policy-regex-filter=(?=.*ACA)(?=.*美国)(?=.*0\.01).*?, include-other-group=自行选择

# 国内媒体
国内媒体 = select, DIRECT, REJECT, 自行选择, 自动选择, 香港节点, 台湾节点, 日本节点, 韩国节点, 狮城节点, 美国节点, no-alert=0, hidden=0, include-all-proxies=0

# 国际媒体
国际媒体 = select, 自行选择, 自动选择, DIRECT, REJECT, 香港节点, 台湾节点, 日本节点, 韩国节点, 狮城节点, 美国节点, no-alert=0, hidden=0, include-all-proxies=0

# 全球加速
全球加速 = select, 自行选择, 自动选择, DIRECT, REJECT, 香港节点, 台湾节点, 日本节点, 韩国节点, 狮城节点, 美国节点, no-alert=0, hidden=0, include-all-proxies=0

# 黑白名单
黑白名单 = select, 自行选择, 自动选择, DIRECT, REJECT, 香港节点, 台湾节点, 日本节点, 韩国节点, 狮城节点, 美国节点, no-alert=0, hidden=0, include-all-proxies=0

# 香港节点
香港节点 = smart, update-interval=0, policy-regex-filter=香港|港|HK|🇭🇰|(?i)Hong, no-alert=0, hidden=1, include-all-proxies=0, include-other-group=自行选择

# 台湾节点
台湾节点 = smart, update-interval=0, policy-regex-filter=台湾|台|TW|🇹🇼|(?i)Taiwan, no-alert=0, hidden=1, include-all-proxies=0, include-other-group=自行选择

# 日本节点
日本节点 = smart, update-interval=0, policy-regex-filter=日本|日|JP|🇯🇵|(?i)Japan, no-alert=0, hidden=1, include-all-proxies=0, include-other-group=自行选择

# 韩国节点
韩国节点 = smart, update-interval=0, policy-regex-filter=韩国|韩|KR|🇰🇷|(?i)Korea, no-alert=0, hidden=1, include-all-proxies=0, include-other-group=自行选择

# 狮城节点
狮城节点 = smart, update-interval=0, policy-regex-filter=新加坡|狮|SG|🇸🇬|(?i)Singapore, no-alert=0, hidden=1, include-all-proxies=0, include-other-group=自行选择

# 美国节点
美国节点 = smart, update-interval=0, policy-regex-filter=美国|美|US|🇺🇸|(?i)States, no-alert=0, hidden=1, include-all-proxies=0, include-other-group=自行选择

[Rule]
# AND,((PROTOCOL,UDP), (NOT,((DEST-PORT,443))), (NOT,((RULE-SET,https://raw.githubusercontent.com/VirgilClyne/GetSomeFries/main/ruleset/ASN.China.list)))),自行选择 // 游戏
# 规则修正
RULE-SET,https://raw.githubusercontent.com/Centralmatrix3/Matrix-io/master/Surge/Ruleset/Unbreak.list,DIRECT
# 广告拦截
RULE-SET,https://raw.githubusercontent.com/Centralmatrix3/Matrix-io/master/Surge/Ruleset/AdBlock.list,REJECT
# 国际媒体
RULE-SET,https://raw.githubusercontent.com/Centralmatrix3/Matrix-io/master/Surge/Ruleset/Streaming.list,国际媒体
# Emby
RULE-SET,https://raw.githubusercontent.com/yyyangnnnan/Surge/main/Role/MisakaF-Emby.list,媒体库MisakaF
# 国内媒体
RULE-SET,https://raw.githubusercontent.com/Centralmatrix3/Matrix-io/master/Surge/Ruleset/StreamingCN.list,国内媒体
# 全球加速
RULE-SET,https://raw.githubusercontent.com/Centralmatrix3/Matrix-io/master/Surge/Ruleset/Global.list,全球加速
# 苹果服务
RULE-SET,https://raw.githubusercontent.com/Centralmatrix3/Matrix-io/master/Surge/Ruleset/Apple.list,苹果服务
# 局域网络
RULE-SET,https://raw.githubusercontent.com/Centralmatrix3/Matrix-io/master/Surge/Ruleset/LAN.list,DIRECT
# 国内规则
RULE-SET,https://raw.githubusercontent.com/Centralmatrix3/Matrix-io/master/Surge/Ruleset/GEOIPCN.list,DIRECT
# 最终规则
FINAL,黑白名单,dns-failed

[MITM]
# 跳过服务端证书验证
skip-server-cert-verify = true

# MitM over HTTP/2
h2 = true

# 主机名
hostname = -weather-data.apple.com, -buy.itunes.apple.com, -*.icloud.com
ca-passphrase = F12DBF1F
ca-p12 = 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
