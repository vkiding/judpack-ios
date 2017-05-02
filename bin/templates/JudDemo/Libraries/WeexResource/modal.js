// { "framework": "Vue" }
/******/ (function(modules) { // webpackBootstrap
/******/ 	// The module cache
/******/ 	var installedModules = {};

/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {

/******/ 		// Check if module is in cache
/******/ 		if(installedModules[moduleId])
/******/ 			return installedModules[moduleId].exports;

/******/ 		// Create a new module (and put it into the cache)
/******/ 		var module = installedModules[moduleId] = {
/******/ 			exports: {},
/******/ 			id: moduleId,
/******/ 			loaded: false
/******/ 		};

/******/ 		// Execute the module function
/******/ 		modules[moduleId].call(module.exports, module, module.exports, __webpack_require__);

/******/ 		// Flag the module as loaded
/******/ 		module.loaded = true;

/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}


/******/ 	// expose the modules object (__webpack_modules__)
/******/ 	__webpack_require__.m = modules;

/******/ 	// expose the module cache
/******/ 	__webpack_require__.c = installedModules;

/******/ 	// __webpack_public_path__
/******/ 	__webpack_require__.p = "";

/******/ 	// Load entry module and return exports
/******/ 	return __webpack_require__(0);
/******/ })
/************************************************************************/
/******/ ([
/* 0 */
/***/ (function(module, exports, __webpack_require__) {

	var __vue_exports__, __vue_options__
	var __vue_styles__ = []

	/* styles */
	__vue_styles__.push(__webpack_require__(1)
	)

	/* script */
	__vue_exports__ = __webpack_require__(2)

	/* template */
	var __vue_template__ = __webpack_require__(3)
	__vue_options__ = __vue_exports__ = __vue_exports__ || {}
	if (
	  typeof __vue_exports__.default === "object" ||
	  typeof __vue_exports__.default === "function"
	) {
	if (Object.keys(__vue_exports__).some(function (key) { return key !== "default" && key !== "__esModule" })) {console.error("named exports are not supported in *.vue files.")}
	__vue_options__ = __vue_exports__ = __vue_exports__.default
	}
	if (typeof __vue_options__ === "function") {
	  __vue_options__ = __vue_options__.options
	}
	__vue_options__.__file = "/Users/chengjianfeng/Desktop/Weex/Weex_code_Demo/JudDemo/Business/WeexResource/modal.vue"
	__vue_options__.render = __vue_template__.render
	__vue_options__.staticRenderFns = __vue_template__.staticRenderFns
	__vue_options__._scopeId = "data-v-54516d8a"
	__vue_options__.style = __vue_options__.style || {}
	__vue_styles__.forEach(function (module) {
	  for (var name in module) {
	    __vue_options__.style[name] = module[name]
	  }
	})
	if (typeof __register_static_styles__ === "function") {
	  __register_static_styles__(__vue_options__._scopeId, __vue_styles__)
	}

	module.exports = __vue_exports__
	module.exports.el = 'true'
	new Vue(module.exports)


/***/ }),
/* 1 */
/***/ (function(module, exports) {

	module.exports = {
	  "wrapper": {
	    "flexDirection": "column",
	    "justifyContent": "center"
	  },
	  "button": {
	    "fontSize": 60,
	    "width": 450,
	    "textAlign": "center",
	    "marginTop": 30,
	    "marginLeft": 150,
	    "paddingTop": 20,
	    "paddingBottom": 20,
	    "borderWidth": 2,
	    "borderStyle": "solid",
	    "color": "#666666",
	    "borderColor": "#DDDDDD",
	    "backgroundColor": "#F5F5F5"
	  }
	}

/***/ }),
/* 2 */
/***/ (function(module, exports) {

	'use strict';

	Object.defineProperty(exports, "__esModule", {
	  value: true
	});
	//
	//
	//
	//
	//
	//
	//
	//

	var modal = weex.requireModule('modal');
	exports.default = {
	  methods: {
	    showToast: function showToast(event) {
	      console.log('will show toast');
	      modal.toast({
	        message: 'This is a toast',
	        duration: 0.3
	      });
	    },
	    showAlert: function showAlert(event) {
	      console.log('will show alert');
	      modal.alert({
	        message: 'This is a alert',
	        duration: 0.3
	      }, function (value) {
	        console.log('alert callback', value);
	      });
	    },
	    showConfirm: function showConfirm(event) {
	      console.log('will show confirm');
	      modal.confirm({
	        message: 'Do you confirm ?',
	        duration: 0.3
	      }, function (value) {
	        console.log('confirm callback', value);
	      });
	    },
	    showPrompt: function showPrompt(event) {
	      console.log('will show prompt');
	      modal.prompt({
	        message: 'This is a prompt',
	        duration: 0.3
	      }, function (value) {
	        console.log('prompt callback', value);
	      });
	    }
	  }
	};
	module.exports = exports['default'];

/***/ }),
/* 3 */
/***/ (function(module, exports) {

	module.exports={render:function (){var _vm=this;var _h=_vm.$createElement;var _c=_vm._self._c||_h;
	  return _c('div', {
	    staticClass: ["wrapper"]
	  }, [_c('text', {
	    staticClass: ["button"],
	    on: {
	      "click": _vm.showToast
	    }
	  }, [_vm._v("Toast")]), _c('text', {
	    staticClass: ["button"],
	    on: {
	      "click": _vm.showAlert
	    }
	  }, [_vm._v("Alert")]), _c('text', {
	    staticClass: ["button"],
	    on: {
	      "click": _vm.showConfirm
	    }
	  }, [_vm._v("Confirm")]), _c('text', {
	    staticClass: ["button"],
	    on: {
	      "click": _vm.showPrompt
	    }
	  }, [_vm._v("Prompt")])])
	},staticRenderFns: []}
	module.exports.render._withStripped = true

/***/ })
/******/ ]);