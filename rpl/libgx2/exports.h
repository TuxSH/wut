// gx2/clear.h
EXPORT(GX2ClearColor);
EXPORT(GX2ClearDepthStencil);
EXPORT(GX2ClearDepthStencilEx);
EXPORT(GX2ClearBuffers);
EXPORT(GX2ClearBuffersEx);
EXPORT(GX2SetClearDepth);
EXPORT(GX2SetClearStencil);
EXPORT(GX2SetClearDepthStencil);

// gx2/context.h
EXPORT(GX2SetupContextState);
EXPORT(GX2SetupContextStateEx);
EXPORT(GX2GetContextStateDisplayList);
EXPORT(GX2SetContextState);
EXPORT(GX2SetDefaultState);

// gx2/display.h
EXPORT(GX2SetTVEnable);
EXPORT(GX2SetDRCEnable);
EXPORT(GX2CalcTVSize);
EXPORT(GX2SetTVBuffer);
EXPORT(GX2SetTVScale);
EXPORT(GX2CalcDRCSize);
EXPORT(GX2SetDRCBuffer);
EXPORT(GX2SetDRCScale);
EXPORT(GX2GetSystemTVScanMode);
EXPORT(GX2GetSystemDRCMode);

// gx2/displaylist.h
EXPORT(GX2BeginDisplayListEx);
EXPORT(GX2BeginDisplayList);
EXPORT(GX2EndDisplayList);
EXPORT(GX2DirectCallDisplayList);
EXPORT(GX2CallDisplayList);
EXPORT(GX2GetDisplayListWriteStatus);
EXPORT(GX2GetCurrentDisplayList);
EXPORT(GX2CopyDisplayList);

// gx2/draw.h
EXPORT(GX2SetAttribBuffer);
EXPORT(GX2DrawEx);
EXPORT(GX2DrawIndexedEx);
EXPORT(GX2SetPrimitiveRestartIndex);

// gx2/event.h
EXPORT(GX2DrawDone);
EXPORT(GX2WaitForVsync);
EXPORT(GX2WaitForFlip);
EXPORT(GX2SetEventCallback);
EXPORT(GX2GetEventCallback);
EXPORT(GX2GetRetiredTimeStamp);
EXPORT(GX2GetLastSubmittedTimeStamp);
EXPORT(GX2WaitTimeStamp);

// gx2/registers.h
EXPORT(GX2SetAAMask);
EXPORT(GX2InitAAMaskReg);
EXPORT(GX2GetAAMaskReg);
EXPORT(GX2SetAAMaskReg);
EXPORT(GX2SetAlphaTest);
EXPORT(GX2InitAlphaTestReg);
EXPORT(GX2GetAlphaTestReg);
EXPORT(GX2SetAlphaTestReg);
EXPORT(GX2SetAlphaToMask);
EXPORT(GX2InitAlphaToMaskReg);
EXPORT(GX2GetAlphaToMaskReg);
EXPORT(GX2SetAlphaToMaskReg);
EXPORT(GX2SetBlendConstantColor);
EXPORT(GX2InitBlendConstantColorReg);
EXPORT(GX2GetBlendConstantColorReg);
EXPORT(GX2SetBlendConstantColorReg);
EXPORT(GX2SetBlendControl);
EXPORT(GX2InitBlendControlReg);
EXPORT(GX2GetBlendControlReg);
EXPORT(GX2SetBlendControlReg);
EXPORT(GX2SetColorControl);
EXPORT(GX2InitColorControlReg);
EXPORT(GX2GetColorControlReg);
EXPORT(GX2SetColorControlReg);
EXPORT(GX2SetDepthOnlyControl);
EXPORT(GX2SetDepthStencilControl);
EXPORT(GX2InitDepthStencilControlReg);
EXPORT(GX2GetDepthStencilControlReg);
EXPORT(GX2SetDepthStencilControlReg);
EXPORT(GX2SetStencilMask);
EXPORT(GX2InitStencilMaskReg);
EXPORT(GX2GetStencilMaskReg);
EXPORT(GX2SetStencilMaskReg);
EXPORT(GX2SetLineWidth);
EXPORT(GX2InitLineWidthReg);
EXPORT(GX2GetLineWidthReg);
EXPORT(GX2SetLineWidthReg);
EXPORT(GX2SetPointSize);
EXPORT(GX2InitPointSizeReg);
EXPORT(GX2GetPointSizeReg);
EXPORT(GX2SetPointSizeReg);
EXPORT(GX2SetPointLimits);
EXPORT(GX2InitPointLimitsReg);
EXPORT(GX2GetPointLimitsReg);
EXPORT(GX2SetPointLimitsReg);
EXPORT(GX2SetCullOnlyControl);
EXPORT(GX2SetPolygonControl);
EXPORT(GX2InitPolygonControlReg);
EXPORT(GX2SetPolygonControlReg);
EXPORT(GX2SetPolygonOffset);
EXPORT(GX2InitPolygonOffsetReg);
EXPORT(GX2GetPolygonOffsetReg);
EXPORT(GX2SetPolygonOffsetReg);
EXPORT(GX2SetScissor);
EXPORT(GX2InitScissorReg);
EXPORT(GX2GetScissorReg);
EXPORT(GX2SetScissorReg);
EXPORT(GX2SetTargetChannelMasks);
EXPORT(GX2InitTargetChannelMasksReg);
EXPORT(GX2GetTargetChannelMasksReg);
EXPORT(GX2SetTargetChannelMasksReg);
EXPORT(GX2SetViewport);
EXPORT(GX2InitViewportReg);
EXPORT(GX2GetViewportReg);
EXPORT(GX2SetViewportReg);

// gx2/sampler.h
EXPORT(GX2InitSampler);
EXPORT(GX2InitSamplerBorderType);
EXPORT(GX2InitSamplerClamping);
EXPORT(GX2InitSamplerDepthCompare);
EXPORT(GX2InitSamplerFilterAdjust);
EXPORT(GX2InitSamplerLOD);
EXPORT(GX2InitSamplerLODAdjust);
EXPORT(GX2InitSamplerRoundingMode);
EXPORT(GX2InitSamplerXYFilter);
EXPORT(GX2InitSamplerZMFilter);

// gx2/state.h
EXPORT(GX2Init);
EXPORT(GX2Shutdown);

// gx2/surface.h
EXPORT(GX2CalcSurfaceSizeAndAlignment);
EXPORT(GX2CalcDepthBufferHiZInfo);
EXPORT(GX2SetColorBuffer);
EXPORT(GX2SetDepthBuffer);
EXPORT(GX2InitColorBufferRegs);
EXPORT(GX2InitDepthBufferRegs);
EXPORT(GX2InitDepthBufferHiZEnable);
EXPORT(GX2GetSurfaceSwizzle);
EXPORT(GX2SetSurfaceSwizzle);
EXPORT(GX2CopySurface);

// gx2/swap.h
EXPORT(GX2CopyColorBufferToScanBuffer);
EXPORT(GX2SwapScanBuffers);
EXPORT(GX2GetLastFrame);
EXPORT(GX2GetLastFrameGamma);
EXPORT(GX2GetSwapInterval);
EXPORT(GX2SetSwapInterval);

// gx2/texture.h
EXPORT(GX2InitTextureRegs);
EXPORT(GX2SetPixelTexture);
EXPORT(GX2SetVertexTexture);
EXPORT(GX2SetGeometryTexture);