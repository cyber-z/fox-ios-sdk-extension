[![Platform](http://img.shields.io/badge/platform-ios-green.svg?style=flat)](https://developer.android.com)
[![Language](http://img.shields.io/badge/language-objc-red.svg?style=flat)](https://java.com)
[![F.O.X](http://img.shields.io/badge/F.O.X%20SDK-4.0.0%20〜-blue.svg?style=flat)](https://github.com/cyber-z/public-fox-ios-sdk/blob/master/4.x/lang/ja/README.md)

# Force Operation X iOS SDK Extension

本SDKは、Force Operation X iOS SDKによる計測機能を拡張するためのプラグインモジュールとなります。<br>
利用するには[`F.O.X iOS SDK 4.0.0`](https://github.com/cyber-z/public-fox-ios-sdk/blob/master/4.x/lang/ja/README.md)以上を導入する必要があります。<br>
尚、本プラグインはオープンソースとなっておりますので改変しご利用頂いても構いません。

* **[1. サポートする機能](#support_functions)**
* **[2. インストール](#install_module)**
* **[3. イベントの計測](#event_extension)**

<div id="support_functions"></div>
## 1. サポートする機能

|種類|機能|詳細|
|:---:|:---|:---|
|Native|アプリ内の各種イベントの計測用拡張クラス|・ホーム画面表示イベント<br>・商品閲覧イベント<br>・複数商品閲覧イベント<br>・買い物かご閲覧イベント<br>・商品購入イベント<br>・レベルアップイベント<br>・カテゴリページイベント<br>・チュートリアル完了イベント<br>・検索イベント|

<div id="install_module"></div>
## 2. インストール

### 2.1 Cocoapodsによる導入
Podfileに以下の設定を追加します。

```ruby
# 下記の一行をPodfileの一番最初に追加してください
source "https://github.com/cyber-z/public-fox-ios-sdk.git"

# 下記を指定したいターゲットに追加してください
pod "CYZFoxExt", :git => 'https://github.com/cyber-z/fox-ios-sdk-extension.git', :tag => '<VERSION>'
```

* **iOS Swiftでdynamic frameworkを利用する場合**
```ruby
# 下記の一行をPodfileの一番最初に追加してください
source "https://github.com/cyber-z/public-fox-ios-sdk.git"

# dynamic frameworkを有効に
use_frameworks!
pod "CYZFoxExtDy", :git => 'https://github.com/cyber-z/fox-ios-sdk-extension.git', :tag => '<VERSION>'
```

### 2.2 Carthageによる導入
Cartfileに以下の設定を追加します。

```ruby
github "cyber-z/fox-ios-sdk-extension" == <VERSION>
```

> ※ 本プラグインを利用するには`F.O.X iOS SDK 4.0.0`以上が導入されていることが条件となります。

<div id="event_extension"></div>
## 3. イベントの計測

本プラグインでは、アプリ内で発生する各種イベント別に必要となる計測パラメータの指定を<br>
簡易化するためのイベント拡張クラスを用意しています。<br>
プラグインでサポートしているアプリ内イベントは以下の通りです。

> #### 1. [ViewToppage(ホーム画面表示)イベント](./track_events/01_view_toppage/README.md)
> #### 2. [ViewListing(複数商品閲覧)イベント](./track_events/02_view_listing/README.md)
> #### 3. [ViewProduct(商品閲覧)イベント](./track_events/03_view_product/README.md)
> #### 4. [AddToCart(買い物かご閲覧)イベント](./track_events/04_add_to_cart/README.md)
> #### 5. [Purchase(商品購入)イベント](./track_events/05_track_transaction/README.md)
> #### 6. [AchieveLevel(レベルアップ)イベント](./track_events/06_achieve_level/README.md)
> #### 7. [ViewCategory(カテゴリページ)イベント](./track_events/07_view_category/README.md)
> #### 8. [TutorialCompletion(チュートリアル)イベント](./track_events/08_tutorial_completion/README.md)
> #### 9. [Search(検索)イベント](./track_events/09_search/README.md)

[**イベント計測の詳細**](./track_events/README.md)
