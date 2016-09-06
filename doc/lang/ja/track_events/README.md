[TOP](../README.md)　>　イベント計測の詳細

---

# イベント計測の詳細

以下、各種イベントを実装する際の詳細を説明します。<br>
F.O.Xによるエンゲージメント計測やダイナミック配信連携を行う際に必要となる実装も含まれます。本実装を行うことで、媒体を横断したイベント計測連携が可能となります。

* **[1. 従来の実装との差異(エンゲージメント計測)](#example)**
* **[2. 対応しているイベント計測](#supported_events)**
* **[3. 連携している媒体](#cooperation_medias)**


<div id="example"></div>
## 1. 従来の実装との差異(エンゲージメント計測)

これまでの媒体連携を目的としたイベント計測の実装を、本プラグインを利用することで簡易化することが可能となります。<br>
下記は課金イベントのエンゲージメント計測の実装例です。

**従来の実装例(Criteoにおける商品購入)**
```objc
NSDictionary* eventInfo = @{
                            @"fox_cvpoint" : @"12345",
                            @"transaction_id" : @"ABCDFE",
                            @"product" : @[
                                    @{@"id" : @"1234", @"price" : @(550), @"quantity" : @(1)},
                                    @{@"id" : @"1235", @"price" : @(550), @"quantity" : @(2)},
                                    @{@"id" : @"1236", @"price" : @(550), @"quantity" : @(2)}
                                    ],
                            @"din" : @"2016-01-02",
                            @"dout" :@"2016-01-05",
                            @"criteo_partner_id" : @"XXXXX",
                            @"datafeed" : @{
                                    @"version" : @"v1.0",
                                    @"product" : @[
                                            @{
                                                @"id" : @"12345",
                                                @"action" : @"U",
                                                @"name" : @"icecream",
                                                @"expire" : @"2016-10-31",
                                                @"effective" : @"2016-04-01",
                                                @"img" : @"http://pngimg.com/upload/ice_cream_PNG5099.png",
                                                @"category1" : @"fodd",
                                                @"price" : @(2750),
                                                @"currency" : @"JPY"
                                                }
                                            ]
                                    }
                            };
CYZFoxEvent* event = [[CYZFoxEvent alloc]initWithEventName:@"_purchase" ltvId:0000];
event.itemName = @"sword";
event.price = 99;
event.currency = @"JPY";
event.quantity = 2;
event.sku = @"sku";
event.orderId = @"orderId001";
event.buid = @"user_0001";
event.eventInfo = eventInfo;
[CYZFox trackEvent:event];
```
**本プラグインでの実装例**
```objc
CYZFoxPurchaseEvent* event = [[CYZFoxPurchaseEvent alloc] initWithLtvId:0000
                                                               itemName:nil
                                                                    sku:@"sku"
                                                                  price:99
                                                               quantity:2
                                                               currency:@"JPY"];
event.orderId = @"orderId";
[event setTransactionId:@"ABCDE"];
[event addProductById:@"1234" itemLocationId:nil price:550 quantity:1];
[event addProductById:@"1235" itemLocationId:nil price:550 quantity:2];
[event addProductById:@"1236" itemLocationId:nil price:550 quantity:2];
[event setDin:[NSDate date]];
[event setDout:[NSDate dateWithTimeIntervalSinceNow:3600]];
[event setPartnerId:@"xxxx"];
[event setDatafeed:@{
                     @"version" : @"v1.0",
                     @"product" : @[
                             @{
                                 @"id" : @"12345",
                                 @"action" : @"u",
                                 @"name" : @"icecreame",
                                 @"expire" : @"2016-09-31",
                                 @"effective" : @"2016-09-01",
                                 @"img" : @"http://pngimg.com/upload/ice_cream_PNG5099.png",
                                 @"category1" : @"food",
                                 @"price" : @(2750),
                                 @"currency" : @"JPY"
                                 },
                             ]
                     }];
[CYZFox trackEvent:event];

```


<div id="supported_events"></div>
## 2. 対応しているイベント計測

プラグインでサポートしているイベントは以下の通りです。<br>

> #### 1. [ViewToppage(ホーム画面表示)イベント](./01_view_toppage/README.md)
> #### 2. [ViewListing(複数商品閲覧)イベント](./02_view_listing/README.md)
> #### 3. [ViewProduct(商品閲覧)イベント](./03_view_product/README.md)
> #### 4. [AddToCart(買い物かご閲覧)イベント](./04_add_to_cart/README.md)
> #### 5. [Purchase(商品購入)イベント](./05_track_transaction/README.md)
> #### 6. [AchieveLevel(レベルアップ)イベント](./06_achieve_level/README.md)
> #### 7. [ViewCategory(カテゴリページ)イベント](./07_view_category/README.md)
> #### 8. [TutorialCompletion(チュートリアル)イベント](./08_tutorial_completion/README.md)
> #### 9. [Search(検索)イベント](./09_search/README.md)

<div id="cooperation_medias"></div>
## 3. 連携している媒体

連携している媒体別での各種イベント計測の実装方法は以下を参照ください。<br>

**[媒体別実装方法]**

* Chartboost
* Criteo
* DynalystCommerce
* DynalystGames
* DynamicRemarketing
* Vizury


---
[トップ](../README.md)
