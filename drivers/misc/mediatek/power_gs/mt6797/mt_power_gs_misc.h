extern struct proc_dir_entry *mt_power_gs_dir;


/* MDP, DISP, and SMI are in the DIS subsys */
/*Base address = 0x12000000 */
const unsigned int gs_mdp_array[] = {
	/* Offset     Mask        Golden Setting Value */
	0x200AC28, 0x00000001, 0x00000000,	/* DISP_COLOR_CK_ON */
	0x2009110, 0x00000100, 0x00000000,	/* MDP_TDSHP_CFG */
	0x2001000, 0x00000010, 0x00000010,	/* EN */
	0x2002000, 0x00000010, 0x00000010,	/* EN */
	0x2006008, 0x80000000, 0x80000000,	/* WDMA_EN */
	0x200707C, 0x00010000, 0x00010000,	/* VIDO_ROT_EN */
	0x200807C, 0x00010000, 0x00010000	/* VIDO_ROT_EN */
};
const unsigned int *gs_mdp_array_ptr = gs_mdp_array;
unsigned int gs_mdp_array_len = 21;

/*Base address = 0x12000000 */
const unsigned int gs_disp_array[] = {
	/* Offset     Mask        Golden Setting Value */
	0x200B2A0, 0xFFFFFFFF, 0x00000000,	/* OVL_FUNC_DCM0 */
	0x200B2A4, 0xFFFFFFFF, 0x00000000,	/* OVL_FUNC_DCM1 */
	0x200C2A0, 0xFFFFFFFF, 0x00000000,	/* OVL_FUNC_DCM0 */
	0x200C2A4, 0xFFFFFFFF, 0x00000000,	/* OVL_FUNC_DCM1 */
	0x200D2A0, 0xFFFFFFFF, 0x00000000,	/* OVL_FUNC_DCM0 */
	0x200D2A4, 0xFFFFFFFF, 0x00000000,	/* OVL_FUNC_DCM1 */
	0x200E2A0, 0xFFFFFFFF, 0x00000000,	/* OVL_FUNC_DCM0 */
	0x200E2A4, 0xFFFFFFFF, 0x00000000,	/* OVL_FUNC_DCM1 */
	0x200F0B4, 0x00000FFF, 0x00000000,	/* DISP_RDMA_INTERNAL_CG_CON */
	0x20100B4, 0x00000FFF, 0x00000000,	/* DISP_RDMA_INTERNAL_CG_CON */
	0x2013C28, 0x00000001, 0x00000000,	/* DISP_COLOR_CK_ON */
	0x201E0E8, 0x000000FF, 0x00000000,	/* DPI_INTERNAL_CG_CON */
	0x2015020, 0x00000010, 0x00000000,	/* DISP_AAL_CFG */
	0x2014020, 0x00000100, 0x00000100,	/* DISP_CCORR_CFG */
	0x2011008, 0x80000000, 0x80000000,	/* WDMA_EN */
	0x2012008, 0x80000000, 0x80000000,	/* WDMA_EN */
	0x2018020, 0x00000100, 0x00000000	/* DISP_DITHER_CFG */
};
const unsigned int *gs_disp_array_ptr = gs_disp_array;
unsigned int gs_disp_array_len = 51;

/*Base address = 0x12000000*/
const unsigned int gs_smi_array[] = {
	/* Offset     Mask        Golden Setting Value */
	0x2020010, 0x0000FFF0, 0x000000F0,	/* SMI_LARB0 */
	0x4010010, 0x0000FFF0, 0x000000F0,	/* SMI_LARB1 */
	0x8001010, 0x0000FFF0, 0x000000F0,	/* SMI_LARB2 */
	0x5001010, 0x0000FFF0, 0x000000F0,	/* SMI_LARB3 */
	0x0002010, 0x0000FFF0, 0x000000F0,	/* SMI_LARB4 */
	0x2021010, 0x0000FFF0, 0x000000F0,	/* SMI_LARB5 */
	0x3001010, 0x0000FFF0, 0x000000F0,	/* SMI_LARB6 */
	0x2022300, 0x00003FFF, 0x00000401	/* SMI_DCM */
};
const unsigned int *gs_smi_array_ptr = gs_smi_array;
unsigned int gs_smi_array_len = 24;


/* IMG is in the ISP subsys */
/*Base address = 0x12000000, IMG*/
const unsigned int gs_img_array[] = {
	/* Offset     Mask        Golden Setting Value */
	0x8000480, 0x7FFFFFFF, 0x00000000,	/* CTL_RAW_DCM_DIS */
	0x8000484, 0x000007FF, 0x00000000,	/* CTL_DMA_DCM_DIS */
	0x8000488, 0x00000001, 0x00000000,	/* CTL_TOP_DCM_DIS */
	0x3022090, 0xFFFFFFFF, 0x00000000,	/* CTL_YUV_DCM_DIS */
	0x3022094, 0x00000007, 0x00000000,	/* CTL_YUV2_DCM_DIS */
	0x3022098, 0x0003FFFF, 0x00000000,	/* CTL_RGB_DCM_DIS */
	0x302209C, 0x0001FFFF, 0x00000000,	/* CTL_DMA_DCM_DIS */
	0x30220A0, 0x00000001, 0x00000000	/* CTL_TOP_DCM_DIS */
};
const unsigned int *gs_img_array_ptr = gs_img_array;
unsigned int gs_img_array_len = 24;


/* VENC is in the VEN subsys */
/*Base address = 0x12000000*/
const unsigned int gs_venc_array[] = {
	/* Offset     Mask        Golden Setting Value */
	0x50020EC, 0xFFFFFFFF, 0x80000001	/* VENC */
};
const unsigned int *gs_venc_array_ptr = gs_venc_array;
unsigned int gs_venc_array_len = 3;


/* VDEC is in the VDE subsys */
/*Base address = 0x12000000*/
const unsigned int gs_vdec_array[] = {
	/* Offset     Mask        Golden Setting Value */
	0x4000018, 0x00000001, 0x00000000	/* VDEC_DCM_CON */
};
const unsigned int *gs_vdec_array_ptr = gs_vdec_array;
unsigned int gs_vdec_array_len = 3;


/* Infra is always on */
/*Base address = 0x10000000*/
const unsigned int gs_infra_array[] = {
	/* Offset     Mask        Golden Setting Value */
	0x01070, 0xFFFFFFFF, 0x40780603,	/* infra_bus_dcm */
	0x01074, 0xFFFFFFFF, 0xB0380603	/* peri_bus_dcm */
};
const unsigned int *gs_infra_array_ptr = gs_infra_array;
unsigned int gs_infra_array_len = 6;


/* ClockTop is always on */
/*Base address = 0x10000000*/
const unsigned int gs_clockTop_array[] = {
	/* Offset     Mask        Golden Setting Value */
	0x01090, 0xFFFFFFFF, 0xFFBFFFBC,	/* CG0 */
	0x01094, 0xFFFFFFFF, 0x7FFFFFFF,	/* CG1 */
	0x010B0, 0xFFFFFFFF, 0xFFFFF7FF,	/* CG2 */
	0x00220, 0xFFFFFFFF, 0x00000000,	/* fqmtr_en (topckgen) */
	0x00104, 0xFFFFFFFF, 0xFFFF0000,	/* fqmtr_en (topckgen) */
	0x00108, 0xFFFFFFFF, 0xFFFF0000,	/* fqmtr_en (topckgen) */
	0x1A27C, 0xFFFFFFFF, 0xFFFFFFFF,	/* armpll_debug_out */
	0x1A284, 0xFFFFFFFF, 0x00000000,	/* armpll_debug_out*/
	0x01500, 0xFFFFFFFF, 0x00000001,	/* top debug mux */
	0x01504, 0xFFFFFFFF, 0x00000001,	/* top debug mux */
	0x01098, 0xFFFFFFFF, 0x00004C70,	/* top debug mux */
	0x11000, 0xFFFFFFFF, 0x030C0000	/* top debug mux */
};
const unsigned int *gs_clockTop_array_ptr = gs_clockTop_array;
unsigned int gs_clockTop_array_len = 36;