/*
# Copyright (c) 2020-2030 iSoftStone Information Technology (Group) Co.,Ltd.
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
*/

(global.___mainEntry___ = function (globalObjects) {
  var define = globalObjects.define;
  var require = globalObjects.require;
  var bootstrap = globalObjects.bootstrap;
  var register = globalObjects.register;
  var render = globalObjects.render;
  var $app_define$ = globalObjects.$app_define$;
  var $app_bootstrap$ = globalObjects.$app_bootstrap$;
  var $app_require$ = globalObjects.$app_require$;
  var history = globalObjects.history;
  var Image = globalObjects.Image;
  var OffscreenCanvas = globalObjects.OffscreenCanvas;
  (function(global) {
    "use strict";
var _bf5a3b5d58ba2355a6c4a7edd3c87580;
/******/ (() => { // webpackBootstrap
/******/ 	var __webpack_modules__ = ({

/***/ "./lib/script.js!./node_modules/babel-loader/lib/index.js?presets[]=C:\\Users\\weiliuq\\AppData\\Local\\OpenHarmony\\Sdk\\js\\3.1.0.0\\build-tools\\ace-loader\\node_modules\\@babel\\preset-env&plugins[]=C:\\Users\\weiliuq\\AppData\\Local\\OpenHarmony\\Sdk\\js\\3.1.0.0\\build-tools\\ace-loader\\node_modules\\@babel\\plugin-transform-modules-commonjs&comments=false!./lib/resource-reference-script.js!./lib/manifest-loader.js?path=E:\\05.openHarmonyHaps\\inputcore\\entry\\src\\main\\js\\MainAbility\\app.js!E:\\05.openHarmonyHaps\\inputcore\\entry\\src\\main\\js\\MainAbility\\app.js":
/*!*********************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************!*\
  !*** ./lib/script.js!./node_modules/babel-loader/lib/index.js?presets[]=C:\Users\weiliuq\AppData\Local\OpenHarmony\Sdk\js\3.1.0.0\build-tools\ace-loader\node_modules\@babel\preset-env&plugins[]=C:\Users\weiliuq\AppData\Local\OpenHarmony\Sdk\js\3.1.0.0\build-tools\ace-loader\node_modules\@babel\plugin-transform-modules-commonjs&comments=false!./lib/resource-reference-script.js!./lib/manifest-loader.js?path=E:\05.openHarmonyHaps\inputcore\entry\src\main\js\MainAbility\app.js!E:\05.openHarmonyHaps\inputcore\entry\src\main\js\MainAbility\app.js ***!
  \*********************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************************/
/***/ ((module, __unused_webpack_exports, __webpack_require__) => {

module.exports = function(module, exports, $app_require$){"use strict";

Object.defineProperty(exports, "__esModule", {
  value: true
});
exports["default"] = void 0;
var _default = {
  onCreate: function onCreate() {
    console.info("Application onCreate");
  },
  onDestroy: function onDestroy() {
    console.info("Application onDestroy");
  }
};
exports["default"] = _default;
;
(exports["default"] || module.exports).manifest = __webpack_require__(/*! !!./lib/manifest-plugin.js!../../../../.preview/jsManifest/MainAbility/manifest.json */ "./lib/manifest-plugin.js!E:\\05.openHarmonyHaps\\inputcore\\entry\\.preview\\jsManifest\\MainAbility\\manifest.json");

function requireModule(moduleName) {
  const systemList = ['system.router', 'system.app', 'system.prompt', 'system.configuration',
  'system.image', 'system.device', 'system.mediaquery', 'ohos.animator', 'system.grid', 'system.resource']
  var target = ''
  if (systemList.includes(moduleName.replace('@', ''))) {
    target = $app_require$('@app-module/' + moduleName.substring(1));
    return target;
  }
  var shortName = moduleName.replace(/@[^.]+.([^.]+)/, '$1');
  target = requireNapi(shortName);
  if (typeof target !== 'undefined' && /@ohos/.test(moduleName)) {
    return target;
  }
  if (typeof ohosplugin !== 'undefined' && /@ohos/.test(moduleName)) {
    target = ohosplugin;
    for (let key of shortName.split('.')) {
      target = target[key];
      if(!target) {
        break;
      }
    }
    if (typeof target !== 'undefined') {
      return target;
    }
  }
  if (typeof systemplugin !== 'undefined') {
    target = systemplugin;
    for (let key of shortName.split('.')) {
      target = target[key];
      if(!target) {
        break;
      }
    }
    if (typeof target !== 'undefined') {
      return target;
    }
  }
  return target;
}
}
/* generated by ace-loader */


/***/ }),

/***/ "./lib/manifest-plugin.js!E:\\05.openHarmonyHaps\\inputcore\\entry\\.preview\\jsManifest\\MainAbility\\manifest.json":
/*!********************************************************************************************************************!*\
  !*** ./lib/manifest-plugin.js!E:\05.openHarmonyHaps\inputcore\entry\.preview\jsManifest\MainAbility\manifest.json ***!
  \********************************************************************************************************************/
/***/ ((module) => {

"use strict";
module.exports = JSON.parse('{"appID":"com.example.inputcore","appName":"$string:entry_MainAbility","versionName":"1.0.0","versionCode":1000000,"minPlatformVersion":8,"pages":["pages/index/index","pages/second/second"],"deviceType":["phone"],"window":{"autoDesignWidth":false,"designWidth":720}}');

/***/ })

/******/ 	});
/************************************************************************/
/******/ 	// The module cache
/******/ 	var __webpack_module_cache__ = {};
/******/ 	
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/ 		var commonCachedModule = globalThis["__common_module_cache___bf5a3b5d58ba2355a6c4a7edd3c87580"] ? globalThis["__common_module_cache___bf5a3b5d58ba2355a6c4a7edd3c87580"][moduleId]: null;
/******/ 		if (commonCachedModule) { return commonCachedModule.exports; }
/******/ 		// Check if module is in cache
/******/ 		var cachedModule = __webpack_module_cache__[moduleId];
/******/ 		if (cachedModule !== undefined) {
/******/ 			return cachedModule.exports;
/******/ 		}
/******/ 		// Create a new module (and put it into the cache)
/******/ 		var module = __webpack_module_cache__[moduleId] = {
/******/ 			// no module.id needed
/******/ 			// no module.loaded needed
/******/ 			exports: {}
/******/ 		};
/******/ 	
/******/ 		function isCommonModue(moduleId) {
/******/ 		              if (globalThis["webpackChunk_bf5a3b5d58ba2355a6c4a7edd3c87580"]) {
/******/ 		                const length = globalThis["webpackChunk_bf5a3b5d58ba2355a6c4a7edd3c87580"].length;
/******/ 		                switch (length) {
/******/ 		                  case 1:
/******/ 		                    return globalThis["webpackChunk_bf5a3b5d58ba2355a6c4a7edd3c87580"][0][1][moduleId];
/******/ 		                  case 2:
/******/ 		                    return globalThis["webpackChunk_bf5a3b5d58ba2355a6c4a7edd3c87580"][0][1][moduleId] ||
/******/ 		                    globalThis["webpackChunk_bf5a3b5d58ba2355a6c4a7edd3c87580"][1][1][moduleId];
/******/ 		                }
/******/ 		              }
/******/ 		              return undefined;
/******/ 		            }
/******/ 		if (globalThis["__common_module_cache___bf5a3b5d58ba2355a6c4a7edd3c87580"] && moduleId.indexOf("?name=") < 0 && isCommonModue(moduleId)) {
/******/ 		  globalThis["__common_module_cache___bf5a3b5d58ba2355a6c4a7edd3c87580"][moduleId] = module;
/******/ 		}
/******/ 		__webpack_modules__[moduleId](module, module.exports, __webpack_require__);
/******/ 	
/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}
/******/ 	
/************************************************************************/
var __webpack_exports__ = {};
// This entry need to be wrapped in an IIFE because it need to be isolated against other modules in the chunk.
(() => {
/*!**********************************************************************************!*\
  !*** E:\05.openHarmonyHaps\inputcore\entry\src\main\js\MainAbility\app.js?entry ***!
  \**********************************************************************************/
var $app_script$ = __webpack_require__(/*! !!./lib/script.js!./node_modules/babel-loader?presets[]=C:\Users\weiliuq\AppData\Local\OpenHarmony\Sdk\js\3.1.0.0\build-tools\ace-loader\node_modules\@babel\preset-env&plugins[]=C:\Users\weiliuq\AppData\Local\OpenHarmony\Sdk\js\3.1.0.0\build-tools\ace-loader\node_modules\@babel\plugin-transform-modules-commonjs&comments=false!./lib/resource-reference-script.js!./lib/manifest-loader.js?path=E:\05.openHarmonyHaps\inputcore\entry\src\main\js\MainAbility\app.js!./app.js */ "./lib/script.js!./node_modules/babel-loader/lib/index.js?presets[]=C:\\Users\\weiliuq\\AppData\\Local\\OpenHarmony\\Sdk\\js\\3.1.0.0\\build-tools\\ace-loader\\node_modules\\@babel\\preset-env&plugins[]=C:\\Users\\weiliuq\\AppData\\Local\\OpenHarmony\\Sdk\\js\\3.1.0.0\\build-tools\\ace-loader\\node_modules\\@babel\\plugin-transform-modules-commonjs&comments=false!./lib/resource-reference-script.js!./lib/manifest-loader.js?path=E:\\05.openHarmonyHaps\\inputcore\\entry\\src\\main\\js\\MainAbility\\app.js!E:\\05.openHarmonyHaps\\inputcore\\entry\\src\\main\\js\\MainAbility\\app.js")

      $app_define$('@app-application/app', [], function($app_require$, $app_exports$, $app_module$) {
      
      $app_script$($app_module$, $app_exports$, $app_require$)
      if ($app_exports$.__esModule && $app_exports$.default) {
        $app_module$.exports = $app_exports$.default
      }
      
      })
      $app_bootstrap$('@app-application/app',undefined,undefined)
})();

_bf5a3b5d58ba2355a6c4a7edd3c87580 = __webpack_exports__;
/******/ })()
;
//# sourceMappingURL=app.js.map
})(this.__appProto__);
})