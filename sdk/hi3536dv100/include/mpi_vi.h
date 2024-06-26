#ifndef __MPI_VI_H__
#define __MPI_VI_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"
{
#endif
#endif /* __cplusplus */

#include "hi_comm_vi.h"
#include "hi_comm_vb.h"

HI_S32 HI_MPI_VI_SetDevAttr(VI_DEV ViDev, const VI_DEV_ATTR_S *pstDevAttr);
HI_S32 HI_MPI_VI_GetDevAttr(VI_DEV ViDev, VI_DEV_ATTR_S *pstDevAttr);

HI_S32 HI_MPI_VI_EnableDev(VI_DEV ViDev);
HI_S32 HI_MPI_VI_DisableDev(VI_DEV ViDev);

HI_S32 HI_MPI_VI_SetChnAttr(VI_CHN ViChn, const VI_CHN_ATTR_S *pstAttr);
HI_S32 HI_MPI_VI_GetChnAttr(VI_CHN ViChn, VI_CHN_ATTR_S *pstAttr);

/* The following 3 functions are only for vichn minor attributes */
HI_S32 HI_MPI_VI_SetChnMinorAttr(VI_CHN ViChn,const VI_CHN_ATTR_S *pstAttr);
HI_S32 HI_MPI_VI_GetChnMinorAttr(VI_CHN ViChn,VI_CHN_ATTR_S *pstAttr);
HI_S32 HI_MPI_VI_ClearChnMinorAttr(VI_CHN ViChn);

HI_S32 HI_MPI_VI_EnableChn(VI_CHN ViChn);
HI_S32 HI_MPI_VI_DisableChn(VI_CHN ViChn);

HI_S32 HI_MPI_VI_GetFrame(VI_CHN ViChn, VIDEO_FRAME_INFO_S *pstFrameInfo, HI_S32 s32MilliSec);
HI_S32 HI_MPI_VI_ReleaseFrame(VI_CHN ViChn, VIDEO_FRAME_INFO_S *pstFrameInfo);
HI_S32 HI_MPI_VI_SetFrameDepth(VI_CHN ViChn, HI_U32 u32Depth);
HI_S32 HI_MPI_VI_GetFrameDepth(VI_CHN ViChn, HI_U32 *pu32Depth);

HI_S32 HI_MPI_VI_SetUserPic(VI_CHN ViChn, VI_USERPIC_ATTR_S *pstUsrPic);
HI_S32 HI_MPI_VI_EnableUserPic(VI_CHN ViChn);
HI_S32 HI_MPI_VI_DisableUserPic(VI_CHN ViChn);

/* These functions are used to start the cascade mode. VI cascade mode can work normally Only when they have been called */
HI_S32 HI_MPI_VI_SetVbiAttr(VI_CHN ViChn, VI_VBI_ARG_S *pstVbiAttr);
HI_S32 HI_MPI_VI_GetVbiAttr(VI_CHN ViChn, VI_VBI_ARG_S *pstVbiAttr);
HI_S32 HI_MPI_VI_SetVbiMode(VI_CHN ViChn, VI_VBI_MODE_E enMode);
HI_S32 HI_MPI_VI_GetVbiMode(VI_CHN ViChn, VI_VBI_MODE_E *enMode);
HI_S32 HI_MPI_VI_EnableVbi(VI_CHN ViChn);
HI_S32 HI_MPI_VI_DisableVbi(VI_CHN ViChn);
HI_S32 HI_MPI_VI_EnableCascadeChn(VI_CHN ViChn);
HI_S32 HI_MPI_VI_DisableCascadeChn(VI_CHN ViChn);

/* Normally, these functions are not necessary in typical business */
HI_S32 HI_MPI_VI_BindChn(VI_CHN ViChn, const VI_CHN_BIND_ATTR_S *pstChnBindAttr);
HI_S32 HI_MPI_VI_UnBindChn(VI_CHN ViChn);
HI_S32 HI_MPI_VI_GetChnBind(VI_CHN ViChn, VI_CHN_BIND_ATTR_S *pstChnBindAttr);

HI_S32 HI_MPI_VI_SetDevAttrEx(VI_DEV ViDev, const VI_DEV_ATTR_EX_S *pstDevAttrEx);
HI_S32 HI_MPI_VI_GetDevAttrEx(VI_DEV ViDev, VI_DEV_ATTR_EX_S *pstDevAttrEx);

HI_S32 HI_MPI_VI_GetFd(VI_CHN ViChn);
HI_S32 HI_MPI_VI_CloseFd(HI_VOID);

HI_S32 HI_MPI_VI_Query(VI_CHN ViChn, VI_CHN_STAT_S *pstStat);

HI_S32 HI_MPI_VI_EnableChnInterrupt(VI_CHN ViChn);
HI_S32 HI_MPI_VI_DisableChnInterrupt(VI_CHN ViChn);

HI_S32 HI_MPI_VI_GetChnLuma(VI_CHN ViChn, VI_CHN_LUM_S *pstLuma);
HI_S32 HI_MPI_VI_GetFileHandle(HI_S32 s32Id);

HI_S32 HI_MPI_VI_SetSkipMode(VI_CHN ViChn, VI_SKIP_MODE_E enSkipMode);
HI_S32 HI_MPI_VI_GetSkipMode(VI_CHN ViChn, VI_SKIP_MODE_E* penSkipMode);

HI_S32 HI_MPI_VI_EnableDllSlave(VI_DEV ViDev);
HI_S32 HI_MPI_VI_DisableDllSlave(VI_DEV ViDev);

HI_S32 HI_MPI_VI_SetSkipModeEx(VI_CHN ViChn, VI_SKIP_MODE_EX_S* pstModeEx);
HI_S32 HI_MPI_VI_GetSkipModeEx(VI_CHN ViChn, VI_SKIP_MODE_EX_S* pstModeEx);

HI_S32 HI_MPI_VI_AttachVbPool(VI_CHN ViChn, VB_POOL hVbPool);
HI_S32 HI_MPI_VI_DetachVbPool(VI_CHN ViChn);
HI_S32 HI_MPI_VI_DetachVbPoolByPoolId(VI_CHN ViChn, VB_POOL hVbPool);

HI_S32 HI_MPI_VI_SetModParam(const VI_MOD_PARAM_S *pstModParam);
HI_S32 HI_MPI_VI_GetModParam(VI_MOD_PARAM_S *pstModParam);

HI_S32 HI_MPI_VI_SetRotate(VI_CHN ViChn, const ROTATE_E enRotate);
HI_S32 HI_MPI_VI_GetRotate(VI_CHN ViChn, ROTATE_E *penRotate);

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */

#endif /*__MPI_VI_H__ */



