/*
 * Copyright (C) 2008-2016 Apple Inc. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL APPLE INC. OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 * PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY
 * OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

// This all-in-one cpp file cuts down on template bloat to allow us to build our Windows release build.

// The following files do not work well with the new CMake system. Don't include in this file
// #include "HTMLEntityTable.cpp"
// #include "JSSVGElementWrapperFactory.cpp"
// #include "PlugInsResourcesData.cpp"
// #include "UserAgentStyleSheetsData.cpp"

#include "HTMLElementFactory.cpp"
#if ENABLE(WEBGL)
#include "JSANGLEInstancedArrays.cpp"
#endif
#include "JSAbstractWorker.cpp"
#include "JSAnimationEvent.cpp"
#include "JSAttr.cpp"
#include "JSBarProp.cpp"
#include "JSBeforeLoadEvent.cpp"
#include "JSBeforeUnloadEvent.cpp"
#if ENABLE(WEB_AUDIO)
#include "JSBiquadFilterNode.cpp"
#endif
#include "JSBlob.cpp"
#include "JSBlobLineEndings.cpp"
#include "JSBlobPropertyBag.cpp"
#include "JSCanvasGradient.cpp"
#include "JSCanvasPattern.cpp"
#include "JSCanvasProxy.cpp"
#include "JSCanvasRenderingContext2D.cpp"
#if ENABLE(READABLE_STREAM_API)
#include "JSByteLengthQueuingStrategy.cpp"
#include "JSCountQueuingStrategy.cpp"
#endif
#if ENABLE(WEB_AUDIO)
#include "JSChannelMergerNode.cpp"
#include "JSChannelSplitterNode.cpp"
#include "JSConvolverNode.cpp"
#endif
#include "JSChildNode.cpp"
#if ENABLE(SUBTLE_CRYPTO)
#include "JSCryptoKey.cpp"
#include "JSCryptoKeyPair.cpp"
#endif
#if ENABLE(WEBGL)
#include "JSEXTBlendMinMax.cpp"
#include "JSEXTFragDepth.cpp"
#include "JSEXTShaderTextureLOD.cpp"
#include "JSEXTTextureFilterAnisotropic.cpp"
#include "JSEXTsRGB.cpp"
#include "JSOESElementIndexUint.cpp"
#include "JSOESStandardDerivatives.cpp"
#include "JSOESTextureFloat.cpp"
#include "JSOESTextureFloatLinear.cpp"
#include "JSOESTextureHalfFloat.cpp"
#include "JSOESTextureHalfFloatLinear.cpp"
#include "JSOESVertexArrayObject.cpp"
#include "JSWebGL2RenderingContext.cpp"
#include "JSWebGLActiveInfo.cpp"
#include "JSWebGLBuffer.cpp"
#include "JSWebGLCompressedTextureATC.cpp"
#include "JSWebGLCompressedTexturePVRTC.cpp"
#include "JSWebGLCompressedTextureS3TC.cpp"
#include "JSWebGLContextAttributes.cpp"
#include "JSWebGLContextEvent.cpp"
#include "JSWebGLDebugRendererInfo.cpp"
#include "JSWebGLDebugShaders.cpp"
#include "JSWebGLDepthTexture.cpp"
#include "JSWebGLDrawBuffers.cpp"
#include "JSWebGLFramebuffer.cpp"
#include "JSWebGLLoseContext.cpp"
#include "JSWebGLProgram.cpp"
#include "JSWebGLQuery.cpp"
#include "JSWebGLRenderbuffer.cpp"
#include "JSWebGLRenderingContext.cpp"
#include "JSWebGLRenderingContextBase.cpp"
#include "JSWebGLSampler.cpp"
#include "JSWebGLShader.cpp"
#include "JSWebGLShaderPrecisionFormat.cpp"
#include "JSWebGLSync.cpp"
#include "JSWebGLTexture.cpp"
#include "JSWebGLTransformFeedback.cpp"
#include "JSWebGLUniformLocation.cpp"
#include "JSWebGLVertexArrayObject.cpp"
#include "JSWebGLVertexArrayObjectOES.cpp"
#endif
#include "JSCDATASection.cpp"
#include "JSCharacterData.cpp"
#include "JSClientRect.cpp"
#include "JSClientRectList.cpp"
#include "JSCloseEvent.cpp"
#include "JSCommandLineAPIHost.cpp"
#include "JSComment.cpp"
#include "JSCompositionEvent.cpp"
#include "JSCoordinates.cpp"
#include "JSCrypto.cpp"
#if ENABLE(FONT_LOAD_EVENTS)
#include "JSCSSFontFaceLoadEvent.cpp"
#endif
#include "JSCSSFontFaceRule.cpp"
#include "JSCSSImportRule.cpp"
#include "JSCSSKeyframeRule.cpp"
#include "JSCSSKeyframesRule.cpp"
#include "JSCSSMediaRule.cpp"
#include "JSCSSPageRule.cpp"
#include "JSCSSRule.cpp"
#include "JSCSSRuleList.cpp"
#include "JSCSSStyleDeclaration.cpp"
#include "JSCSSStyleRule.cpp"
#include "JSCSSStyleSheet.cpp"
#include "JSCSSSupportsRule.cpp"
#include "JSCSSUnknownRule.cpp"
#include "JSClipboardEvent.cpp"
#include "JSCustomElementRegistry.cpp"
#include "JSCustomEvent.cpp"
#include "JSDatabase.cpp"
#include "JSDatabaseCallback.cpp"
#include "JSDataTransfer.cpp"
#include "JSDataTransferItem.cpp"
#include "JSDataTransferItemList.cpp"
#include "JSDedicatedWorkerGlobalScope.cpp"
#if ENABLE(WEB_AUDIO)
#include "JSDelayNode.cpp"
#endif
#include "JSDeprecatedCSSOMCounter.cpp"
#include "JSDeprecatedCSSOMPrimitiveValue.cpp"
#include "JSDeprecatedCSSOMRGBColor.cpp"
#include "JSDeprecatedCSSOMRect.cpp"
#include "JSDeprecatedCSSOMValue.cpp"
#include "JSDeprecatedCSSOMValueList.cpp"
#if ENABLE(DEVICE_ORIENTATION)
#include "JSDeviceMotionEvent.h"
#include "JSDeviceOrientationEvent.cpp"
#endif
#if ENABLE(PROXIMITY_EVENTS)
#include "JSDeviceProximityEvent.cpp"
#endif
#include "JSDocument.cpp"
#include "JSDocumentFragment.cpp"
#include "JSDocumentType.cpp"
#include "JSDOMApplicationCache.cpp"
#include "JSDOMCSSNamespace.cpp"
#include "JSDOMCoreException.cpp"
#include "JSDOMError.cpp"
#include "JSDOMFormData.cpp"
#include "JSDOMImplementation.cpp"
#include "JSDOMMimeType.cpp"
#include "JSDOMMimeTypeArray.cpp"
#include "JSDOMNamedFlowCollection.cpp"
#include "JSDOMParser.cpp"
#include "JSDOMPath.cpp"
#include "JSDOMPlugin.cpp"
#include "JSDOMPluginArray.cpp"
#include "JSDOMSelection.cpp"
#include "JSDOMStringList.cpp"
#include "JSDOMStringMap.cpp"
#include "JSDOMTokenList.cpp"
#include "JSDOMURL.cpp"
#include "JSDOMURLMediaSource.cpp"
#include "JSDOMURLMediaStream.cpp"
#include "JSDOMWindow.cpp"
#include "JSDOMWindowFetch.cpp"
#include "JSDOMWindowIndexedDatabase.cpp"
#include "JSDOMWindowNotifications.cpp"
#include "JSDOMWindowSpeechSynthesis.cpp"
#include "JSDOMWindowWebDatabase.cpp"
#include "JSElement.cpp"
#include "JSErrorEvent.cpp"
#include "JSEvent.cpp"
#include "JSEventInit.cpp"
#include "JSEventModifierInit.cpp"
#include "JSEventSource.cpp"
#include "JSEventTarget.cpp"
#include "JSFetchBody.cpp"
#include "JSFetchHeaders.cpp"
#include "JSFetchRequest.cpp"
#include "JSFetchResponse.cpp"
#include "JSFile.cpp"
#include "JSFileError.cpp"
#include "JSFileException.cpp"
#include "JSFileList.cpp"
#include "JSFileReader.cpp"
#include "JSFileReaderSync.cpp"
#include "JSFocusEvent.cpp"
#include "JSFontFace.cpp"
#include "JSFontFaceSet.cpp"
#if ENABLE(WEB_AUDIO)
#include "JSGainNode.cpp"
#endif
#include "JSGeolocation.cpp"
#include "JSGeoposition.cpp"
#include "JSGlobalCrypto.cpp"
#include "JSGlobalEventHandlers.cpp"
#include "JSHashChangeEvent.cpp"
#include "JSHistory.cpp"
#include "JSHTMLAllCollection.cpp"
#include "JSHTMLAnchorElement.cpp"
#include "JSHTMLAppletElement.cpp"
#include "JSHTMLAreaElement.cpp"
#if ENABLE(ATTACHMENT_ELEMENT)
#include "JSHTMLAttachmentElement.cpp"
#endif
#include "JSHTMLAudioElement.cpp"
#include "JSHTMLBaseElement.cpp"
#include "JSHTMLBodyElement.cpp"
#include "JSHTMLBRElement.cpp"
#include "JSHTMLButtonElement.cpp"
#include "JSHTMLCanvasElement.cpp"
#include "JSHTMLCollection.cpp"
#include "JSHTMLDataElement.cpp"
#include "JSHTMLDataListElement.cpp"
#include "JSHTMLDetailsElement.cpp"
#include "JSHTMLDirectoryElement.cpp"
#include "JSHTMLDivElement.cpp"
#include "JSHTMLDListElement.cpp"
#include "JSHTMLDocument.cpp"
#include "JSHTMLElement.cpp"
#include "JSHTMLElementWrapperFactory.cpp"
#include "JSHTMLEmbedElement.cpp"
#include "JSHTMLFieldSetElement.cpp"
#include "JSHTMLFontElement.cpp"
#include "JSHTMLFormControlsCollection.cpp"
#include "JSHTMLFormElement.cpp"
#include "JSHTMLFrameElement.cpp"
#include "JSHTMLFrameSetElement.cpp"
#include "JSHTMLHeadElement.cpp"
#include "JSHTMLHeadingElement.cpp"
#include "JSHTMLHRElement.cpp"
#include "JSHTMLHtmlElement.cpp"
#include "JSHTMLHyperlinkElementUtils.cpp"
#include "JSHTMLIFrameElement.cpp"
#include "JSHTMLImageElement.cpp"
#include "JSHTMLInputElement.cpp"
#include "JSHTMLKeygenElement.cpp"
#include "JSHTMLLabelElement.cpp"
#include "JSHTMLLegendElement.cpp"
#include "JSHTMLLIElement.cpp"
#include "JSHTMLLinkElement.cpp"
#include "JSHTMLMapElement.cpp"
#include "JSHTMLMarqueeElement.cpp"
#include "JSHTMLMediaElement.cpp"
#include "JSHTMLMediaElementMediaSession.cpp"
#include "JSHTMLMediaElementMediaStream.cpp"
#include "JSHTMLMenuElement.cpp"
#include "JSHTMLMetaElement.cpp"
#include "JSHTMLMeterElement.cpp"
#include "JSHTMLModElement.cpp"
#include "JSHTMLObjectElement.cpp"
#include "JSHTMLOListElement.cpp"
#include "JSHTMLOptGroupElement.cpp"
#include "JSHTMLOptionElement.cpp"
#include "JSHTMLOptionsCollection.cpp"
#include "JSHTMLOutputElement.cpp"
#include "JSHTMLParagraphElement.cpp"
#include "JSHTMLParamElement.cpp"
#include "JSHTMLPictureElement.cpp"
#include "JSHTMLPreElement.cpp"
#include "JSHTMLProgressElement.cpp"
#include "JSHTMLQuoteElement.cpp"
#include "JSHTMLScriptElement.cpp"
#include "JSHTMLSelectElement.cpp"
#include "JSHTMLSlotElement.cpp"
#include "JSHTMLSourceElement.cpp"
#include "JSHTMLSpanElement.cpp"
#include "JSHTMLStyleElement.cpp"
#include "JSHTMLTableCaptionElement.cpp"
#include "JSHTMLTableCellElement.cpp"
#include "JSHTMLTableColElement.cpp"
#include "JSHTMLTableElement.cpp"
#include "JSHTMLTableRowElement.cpp"
#include "JSHTMLTableSectionElement.cpp"
#include "JSHTMLTemplateElement.cpp"
#include "JSHTMLTextAreaElement.cpp"
#include "JSHTMLTimeElement.cpp"
#include "JSHTMLTitleElement.cpp"
#include "JSHTMLUnknownElement.cpp"
#include "JSHTMLUListElement.cpp"
#include "JSHTMLVideoElement.cpp"
#if ENABLE(INDEXED_DATABASE)
#include "JSIDBCursor.cpp"
#include "JSIDBCursorWithValue.cpp"
#include "JSIDBDatabase.cpp"
#include "JSIDBFactory.cpp"
#include "JSIDBIndex.cpp"
#include "JSIDBKeyRange.cpp"
#include "JSIDBObjectStore.cpp"
#include "JSIDBOpenDBRequest.cpp"
#include "JSIDBRequest.cpp"
#include "JSIDBTransaction.cpp"
#include "JSIDBTransactionMode.cpp"
#include "JSIDBVersionChangeEvent.cpp"
#endif
#include "JSImageData.cpp"
#include "JSInputEvent.cpp"
#include "JSInspectorFrontendHost.cpp"
#include "JSKeyboardEvent.cpp"
#include "JSLocation.cpp"
#include "JSMediaController.cpp"
#if ENABLE(MEDIA_CONTROLS_SCRIPT)
#include "JSMediaControlsHost.cpp"
#endif
#if ENABLE(MEDIA_STREAM)
#include "JSMediaDeviceInfo.cpp"
#include "JSMediaDeviceso.cpp"
#endif
#if ENABLE(VIDEO) && ENABLE(WEB_AUDIO)
#include "JSMediaElementAudioSourceNode.cpp"
#endif
#include "JSMediaError.cpp"
#if ENABLE(ENCRYPTED_MEDIA)
#include "JSMediaKeyMessageEvent.cpp"
#include "JSMediaKeySession.cpp"
#include "JSMediaKeyStatusMap.cpp"
#include "JSMediaKeySystemAccess.cpp"
#include "JSMediaKeySystemConfiguration.cpp"
#include "JSMediaKeySystemMediaCapability.cpp"
#include "JSMediaKeys.cpp"
#endif
#include "JSMediaList.cpp"
#include "JSMediaQueryList.cpp"
#include "JSMediaQueryListListener.cpp"
#include "JSMediaRemoteControls.cpp"
#include "JSMediaSession.cpp"
#include "JSMediaSource.cpp"
#include "JSMediaStream.cpp"
#include "JSMediaStreamAudioDestinationNode.cpp"
#include "JSMediaStreamAudioSourceNode.cpp"
#include "JSMediaStreamEvent.cpp"
#include "JSMediaStreamTrack.cpp"
#include "JSMediaTrackSupportedConstraints.cpp"
#include "JSMessageChannel.cpp"
#include "JSMessageEvent.cpp"
#include "JSMessagePort.cpp"
#include "JSMouseEvent.cpp"
#include "JSMouseEventInit.cpp"
#include "JSMutationEvent.cpp"
#include "JSMutationObserver.cpp"
#include "JSMutationRecord.cpp"
#include "JSNamedNodeMap.cpp"
#include "JSNavigator.cpp"
#include "JSNavigatorContentUtils.cpp"
#include "JSNavigatorGeolocation.cpp"
#include "JSNavigatorMediaDevices.cpp"
#include "JSNavigatorUserMedia.cpp"
#include "JSNavigatorVibration.cpp"
#include "JSNode.cpp"
#include "JSNodeFilter.cpp"
#include "JSNodeIterator.cpp"
#include "JSNodeList.cpp"
#include "JSNonDocumentTypeChildNode.cpp"
#include "JSNonElementParentNode.cpp"
#include "JSNotification.cpp"
#include "JSNotificationCenter.cpp"
#include "JSNotificationPermissionCallback.cpp"
#include "JSOverflowEvent.cpp"
#include "JSOfflineAudioCompletionEvent.cpp"
#include "JSOfflineAudioContext.cpp"
#include "JSOscillatorNode.cpp"
#include "JSPageTransitionEvent.cpp"
#include "JSPannerNode.cpp"
#include "JSParentNode.cpp"
#include "JSPerformance.cpp"
#include "JSPerformanceEntry.cpp"
#include "JSPerformanceMark.cpp"
#include "JSPerformanceMeasure.cpp"
#include "JSPerformanceNavigation.cpp"
#include "JSPerformanceResourceTiming.cpp"
#include "JSPerformanceTiming.cpp"
#include "JSPeriodicWave.cpp"
#include "JSPopStateEvent.cpp"
#include "JSPositionCallback.cpp"
#include "JSPositionError.cpp"
#include "JSPositionErrorCallback.cpp"
#include "JSPositionOptions.cpp"
#include "JSProcessingInstruction.cpp"
#include "JSProgressEvent.cpp"
#include "JSRadioNodeList.cpp"
#include "JSRange.cpp"
#include "JSReadableByteStreamController.cpp"
#include "JSReadableStream.cpp"
#include "JSReadableStreamDefaultController.cpp"
#include "JSReadableStreamDefaultReader.cpp"
#include "JSRequestAnimationFrameCallback.cpp"
#include "JSRTCConfiguration.cpp"
#include "JSRTCDataChannel.cpp"
#include "JSRTCDataChannelEvent.cpp"
#include "JSRTCDTMFSender.cpp"
#include "JSRTCDTMFToneChangeEvent.cpp"
#include "JSRTCIceCandidate.cpp"
#include "JSRTCIceCandidateEvent.cpp"
#include "JSRTCIceServer.cpp"
#include "JSRTCPeerConnection.cpp"
#include "JSRTCRtpReceiver.cpp"
#include "JSRTCRtpSender.cpp"
#include "JSRTCSessionDescription.cpp"
#include "JSRTCStatsReport.cpp"
#include "JSRTCStatsResponse.cpp"
#include "JSRTCTrackEvent.cpp"
#include "JSScreen.cpp"
#include "JSScriptProcessorNode.cpp"
#include "JSScrollToOptions.cpp"
#include "JSSecurityPolicyViolationEvent.cpp"
#include "JSSourceBuffer.cpp"
#include "JSSourceBufferList.cpp"
#include "JSSpeechSynthesis.cpp"
#include "JSSpeechSynthesisEvent.cpp"
#include "JSSpeechSynthesisUtterance.cpp"
#include "JSSpeechSynthesisVoice.cpp"
#include "JSSQLError.cpp"
#include "JSSQLException.cpp"
#include "JSSQLResultSet.cpp"
#include "JSSQLResultSetRowList.cpp"
#include "JSSQLStatementCallback.cpp"
#include "JSSQLStatementErrorCallback.cpp"
#include "JSSQLTransaction.cpp"
#include "JSSQLTransactionCallback.cpp"
#include "JSSQLTransactionErrorCallback.cpp"
#include "JSSVGAElement.cpp"
#include "JSSVGAltGlyphDefElement.cpp"
#include "JSSVGAltGlyphElement.cpp"
#include "JSSVGAltGlyphItemElement.cpp"
#include "JSSVGAngle.cpp"
#include "JSSVGAnimateColorElement.cpp"
#include "JSSVGAnimatedAngle.cpp"
#include "JSSVGAnimatedBoolean.cpp"
#include "JSSVGAnimatedEnumeration.cpp"
#include "JSSVGAnimatedInteger.cpp"
#include "JSSVGAnimatedLength.cpp"
#include "JSSVGAnimatedLengthList.cpp"
#include "JSSVGAnimatedNumber.cpp"
#include "JSSVGAnimatedNumberList.cpp"
#include "JSSVGAnimatedPreserveAspectRatio.cpp"
#include "JSSVGAnimatedRect.cpp"
#include "JSSVGAnimatedString.cpp"
#include "JSSVGAnimatedTransformList.cpp"
#include "JSSVGAnimateElement.cpp"
#include "JSSVGAnimateMotionElement.cpp"
#include "JSSVGAnimateTransformElement.cpp"
#include "JSSVGAnimationElement.cpp"
#include "JSSVGCircleElement.cpp"
#include "JSSVGClipPathElement.cpp"
#include "JSSVGComponentTransferFunctionElement.cpp"
#include "JSSVGCursorElement.cpp"
#include "JSSVGDefsElement.cpp"
#include "JSSVGDescElement.cpp"
#include "JSSVGDocument.cpp"
#include "JSSVGElement.cpp"
#include "JSSVGEllipseElement.cpp"
#include "JSSVGException.cpp"
#include "JSSVGExternalResourcesRequired.cpp"
#include "JSSVGFEBlendElement.cpp"
#include "JSSVGFEColorMatrixElement.cpp"
#include "JSSVGFEComponentTransferElement.cpp"
#include "JSSVGFECompositeElement.cpp"
#include "JSSVGFEConvolveMatrixElement.cpp"
#include "JSSVGFEDiffuseLightingElement.cpp"
#include "JSSVGFEDisplacementMapElement.cpp"
#include "JSSVGFEDistantLightElement.cpp"
#include "JSSVGFEDropShadowElement.cpp"
#include "JSSVGFEFloodElement.cpp"
#include "JSSVGFEFuncAElement.cpp"
#include "JSSVGFEFuncBElement.cpp"
#include "JSSVGFEFuncGElement.cpp"
#include "JSSVGFEFuncRElement.cpp"
#include "JSSVGFEGaussianBlurElement.cpp"
#include "JSSVGFEImageElement.cpp"
#include "JSSVGFEMergeElement.cpp"
#include "JSSVGFEMergeNodeElement.cpp"
#include "JSSVGFEMorphologyElement.cpp"
#include "JSSVGFEOffsetElement.cpp"
#include "JSSVGFEPointLightElement.cpp"
#include "JSSVGFESpecularLightingElement.cpp"
#include "JSSVGFESpotLightElement.cpp"
#include "JSSVGFETileElement.cpp"
#include "JSSVGFETurbulenceElement.cpp"
#include "JSSVGFilterElement.cpp"
#include "JSSVGFilterPrimitiveStandardAttributes.cpp"
#include "JSSVGFitToViewBox.cpp"
#include "JSSVGFontElement.cpp"
#include "JSSVGFontFaceElement.cpp"
#include "JSSVGFontFaceFormatElement.cpp"
#include "JSSVGFontFaceNameElement.cpp"
#include "JSSVGFontFaceSrcElement.cpp"
#include "JSSVGFontFaceUriElement.cpp"
#include "JSSVGForeignObjectElement.cpp"
#include "JSSVGGElement.cpp"
#include "JSSVGGlyphElement.cpp"
#include "JSSVGGlyphRefElement.cpp"
#include "JSSVGGradientElement.cpp"
#include "JSSVGGraphicsElement.cpp"
#include "JSSVGHKernElement.cpp"
#include "JSSVGImageElement.cpp"
#include "JSSVGLength.cpp"
#include "JSSVGLengthList.cpp"
#include "JSSVGLinearGradientElement.cpp"
#include "JSSVGLineElement.cpp"
#include "JSSVGMPathElement.cpp"
#include "JSSVGMarkerElement.cpp"
#include "JSSVGMaskElement.cpp"
#include "JSSVGMatrix.cpp"
#include "JSSVGMetadataElement.cpp"
#include "JSSVGMissingGlyphElement.cpp"
#include "JSSVGNumber.cpp"
#include "JSSVGNumberList.cpp"
#include "JSSVGPathElement.cpp"
#include "JSSVGPathSeg.cpp"
#include "JSSVGPathSegArcAbs.cpp"
#include "JSSVGPathSegArcRel.cpp"
#include "JSSVGPathSegClosePath.cpp"
#include "JSSVGPathSegCurvetoCubicAbs.cpp"
#include "JSSVGPathSegCurvetoCubicRel.cpp"
#include "JSSVGPathSegCurvetoCubicSmoothAbs.cpp"
#include "JSSVGPathSegCurvetoCubicSmoothRel.cpp"
#include "JSSVGPathSegCurvetoQuadraticAbs.cpp"
#include "JSSVGPathSegCurvetoQuadraticRel.cpp"
#include "JSSVGPathSegCurvetoQuadraticSmoothAbs.cpp"
#include "JSSVGPathSegCurvetoQuadraticSmoothRel.cpp"
#include "JSSVGPathSegLinetoAbs.cpp"
#include "JSSVGPathSegLinetoHorizontalAbs.cpp"
#include "JSSVGPathSegLinetoHorizontalRel.cpp"
#include "JSSVGPathSegLinetoRel.cpp"
#include "JSSVGPathSegLinetoVerticalAbs.cpp"
#include "JSSVGPathSegLinetoVerticalRel.cpp"
#include "JSSVGPathSegList.cpp"
#include "JSSVGPathSegMovetoAbs.cpp"
#include "JSSVGPathSegMovetoRel.cpp"
#include "JSSVGPatternElement.cpp"
#include "JSSVGPoint.cpp"
#include "JSSVGPointList.cpp"
#include "JSSVGPolygonElement.cpp"
#include "JSSVGPolylineElement.cpp"
#include "JSSVGPreserveAspectRatio.cpp"
#include "JSSVGRadialGradientElement.cpp"
#include "JSSVGRect.cpp"
#include "JSSVGRectElement.cpp"
#include "JSSVGRenderingIntent.cpp"
#include "JSSVGSVGElement.cpp"
#include "JSSVGScriptElement.cpp"
#include "JSSVGSetElement.cpp"
#include "JSSVGStopElement.cpp"
#include "JSSVGStringList.cpp"
#include "JSSVGStyleElement.cpp"
#include "JSSVGSwitchElement.cpp"
#include "JSSVGSymbolElement.cpp"
#include "JSSVGTests.cpp"
#include "JSSVGTextContentElement.cpp"
#include "JSSVGTextElement.cpp"
#include "JSSVGTextPathElement.cpp"
#include "JSSVGTextPositioningElement.cpp"
#include "JSSVGTitleElement.cpp"
#include "JSSVGTransform.cpp"
#include "JSSVGTransformList.cpp"
#include "JSSVGTRefElement.cpp"
#include "JSSVGTSpanElement.cpp"
#include "JSSVGUnitTypes.cpp"
#include "JSSVGURIReference.cpp"
#include "JSSVGUseElement.cpp"
#include "JSSVGVKernElement.cpp"
#include "JSSVGViewElement.cpp"
#include "JSSVGViewSpec.cpp"
#include "JSSVGZoomAndPan.cpp"
#include "JSSVGZoomEvent.cpp"
#include "JSShadowRoot.cpp"
#include "JSShadowRootMode.cpp"
#include "JSStorage.cpp"
#if ENABLE(QUOTA)
#include "JSStorageErrorCallback.cpp"
#endif
#include "JSStorageEvent.cpp"
#if ENABLE(QUOTA)
#include "JSStorageInfo.cpp"
#include "JSStorageQuota.cpp"
#include "JSStorageQuotaCallback.cpp"
#include "JSStorageUsageCallback.cpp"
#endif
#include "JSStringCallback.cpp"
#include "JSStyleMedia.cpp"
#include "JSStyleSheet.cpp"
#include "JSStyleSheetList.cpp"
#include "JSSubtleCrypto.cpp"
#include "JSText.cpp"
#include "JSTextEvent.cpp"
#include "JSTextMetrics.cpp"
#if ENABLE(VIDEO_TRACK)
#include "JSAudioTrack.cpp"
#include "JSAudioTrackList.cpp"
#include "JSDataCue.cpp"
#include "JSHTMLTrackElement.cpp"
#include "JSTextTrack.cpp"
#include "JSTextTrackCue.cpp"
#include "JSTextTrackCueList.cpp"
#include "JSTextTrackList.cpp"
#include "JSTrackEvent.cpp"
#include "JSVTTCue.cpp"
#include "JSVideoTrack.cpp"
#include "JSVideoTrackList.cpp"
#if ENABLE(WEBVTT_REGIONS)
#include "JSVTTRegion.cpp"
#include "JSVTTRegionList.cpp"
#endif
#endif
#include "JSTimeRanges.cpp"
#include "JSTouch.cpp"
#include "JSTouchEvent.cpp"
#include "JSTouchList.cpp"
#include "JSTransitionEvent.cpp"
#include "JSTreeWalker.cpp"
#include "JSUIEvent.cpp"
#include "JSUIEventInit.cpp"
#include "JSUIRequestEvent.cpp"
#include "JSURLUtils.cpp"
#if ENABLE(USER_MESSAGE_HANDLERS)
#include "JSUserMessageHandler.cpp"
#include "JSUserMessageHandlersNamespace.cpp"
#include "JSWebKitNamespace.cpp"
#endif
#include "JSValidityState.cpp"
#include "JSVideoPlaybackQuality.cpp"
#include "JSVoidCallback.cpp"
#include "JSWaveShaperNode.cpp"
#include "JSWebKitAnimationEvent.cpp"
#include "JSWebKitCSSMatrix.cpp"
#include "JSWebKitCSSRegionRule.cpp"
#include "JSWebKitCSSViewportRule.cpp"
#if ENABLE(LEGACY_ENCRYPTED_MEDIA)
#include "JSWebKitMediaKeyError.cpp"
#include "JSWebKitMediaKeyMessageEvent.cpp"
#include "JSWebKitMediaKeyNeededEvent.cpp"
#include "JSWebKitMediaKeySession.cpp"
#include "JSWebKitMediaKeys.cpp"
#endif
#include "JSWebKitNamedFlow.cpp"
#include "JSWebKitPlaybackTargetAvailabilityEvent.cpp"
#include "JSWebKitPoint.cpp"
#include "JSWebKitSubtleCrypto.cpp"
#include "JSWebKitTransitionEvent.cpp"
#include "JSWebSocket.cpp"
#include "JSWheelEvent.cpp"
#include "JSWindowEventHandlers.cpp"
#include "JSWindowOrWorkerGlobalScope.cpp"
#include "JSWorker.cpp"
#include "JSWorkerGlobalScope.cpp"
#include "JSWorkerGlobalScopeFetch.cpp"
#include "JSWorkerGlobalScopeIndexedDatabase.cpp"
#include "JSWorkerGlobalScopeNotifications.cpp"
#include "JSWorkerLocation.cpp"
#include "JSWorkerNavigator.cpp"
#if ENABLE(WRITABLE_STREAM_API)
#include "JSWritableStream.cpp"
#endif
#include "JSXMLDocument.cpp"
#include "JSXMLHttpRequest.cpp"
#include "JSXMLHttpRequestEventTarget.cpp"
#include "JSXMLHttpRequestProgressEvent.cpp"
#include "JSXMLHttpRequestUpload.cpp"
#include "JSXMLSerializer.cpp"
#include "JSXPathEvaluator.cpp"
#include "JSXPathException.cpp"
#include "JSXPathExpression.cpp"
#include "JSXPathNSResolver.cpp"
#include "JSXPathResult.cpp"
#include "JSXSLTProcessor.cpp"

// On MSVC, including StaticConstructors.h causes all global objects not to be
// automatically initialized by the C runtime. This is useful in some specific
// cases (e.g., the *Names.cpp files), but can be dangerous in others. We don't
// want StaticConstructors.h to "pollute" all the source files we #include here
// accidentally, so we'll throw an error whenever any file includes it.
#ifdef StaticConstructors_h
#error Do not include any file in DerivedSources.cpp that includes StaticConstructors.h
#endif
