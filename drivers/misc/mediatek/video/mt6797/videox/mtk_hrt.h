#ifndef __MTK_HRT_H__
#define __MTK_HRT_H__

#include "disp_session.h"
#include "disp_lcm.h"
#include "disp_drv_log.h"
#include "primary_display.h"
#include "disp_drv_platform.h"

#define OVERLAP_LOWER_BOUND 4
#define OVERLAP_UPPER_BOUND 6
#define LARB_LOWER_BOUND 3
#define LARB_UPPER_BOUND 4
#define PRIMARY_OVL_LAYER_NUM PRIMARY_SESSION_INPUT_LAYER_COUNT
#define SECONDARY_OVL_LAYER_NUM EXTERNAL_SESSION_INPUT_LAYER_COUNT

/* #define HRT_DEBUG */

int dispsys_hrt_calc(disp_layer_info *disp_info);

typedef struct hrt_sort_entry_t {
	struct hrt_sort_entry_t *head, *tail;
	layer_config *layer_info;
	int key;
	int overlap_w;
} hrt_sort_entry;

typedef enum {
	HRT_LEVEL_LOW = 0,
	HRT_LEVEL_HIGH,
	HRT_OVER_LIMIT,
} HRT_LEVEL;

typedef enum {
	HRT_PRIMARY = 0,
	HRT_SECONDARY,
} HRT_DISP_TYPE;

extern int hdmi_get_dev_info(int is_sf, void *info);

#endif