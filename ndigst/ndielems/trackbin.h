/*
 *
 * Copyright (C) 2019, Northern Digital Inc. All rights reserved.
 *
 * All Northern Digital Inc. ("NDI") Media and/or Sample Code and/or Sample Code
 * Documentation (collectively referred to as "Sample Code") is licensed and provided "as
 * is" without warranty of any kind. The licensee, by use of the Sample Code, warrants to
 * NDI that the Sample Code is fit for the use and purpose for which the licensee intends to
 * use the Sample Code. NDI makes no warranties, express or implied, that the functions
 * contained in the Sample Code will meet the licensee's requirements or that the operation
 * of the programs contained therein will be error free. This warranty as expressed herein is
 * exclusive and NDI expressly disclaims any and all express and/or implied, in fact or in
 * law, warranties, representations, and conditions of every kind pertaining in any way to
 * the Sample Code licensed and provided by NDI hereunder, including without limitation,
 * each warranty and/or condition of quality, merchantability, description, operation,
 * adequacy, suitability, fitness for particular purpose, title, interference with use or
 * enjoyment, and/or non infringement, whether express or implied by statute, common law,
 * usage of trade, course of dealing, custom, or otherwise. No NDI dealer, distributor, agent
 * or employee is authorized to make any modification or addition to this warranty.
 * In no event shall NDI nor any of its employees be liable for any direct, indirect,
 * incidental, special, exemplary, or consequential damages, sundry damages or any
 * damages whatsoever, including, but not limited to, procurement of substitute goods or
 * services, loss of use, data or profits, or business interruption, however caused. In no
 * event shall NDI's liability to the licensee exceed the amount paid by the licensee for the
 * Sample Code or any NDI products that accompany the Sample Code. The said limitations
 * and exclusions of liability shall apply whether or not any such damages are construed as
 * arising from a breach of a representation, warranty, guarantee, covenant, obligation,
 * condition or fundamental term or on any theory of liability, whether in contract, strict
 * liability, or tort (including negligence or otherwise) arising in any way out of the use of
 * the Sample Code even if advised of the possibility of such damage. In no event shall
 * NDI be liable for any claims, losses, damages, judgments, costs, awards, expenses or
 * liabilities of any kind whatsoever arising directly or indirectly from any injury to person
 * or property, arising from the Sample Code or any use thereof
 *
 */

#ifndef __TRACK_BIN_H__
#define __TRACK_BIN_H__

#ifdef _WIN32
#ifdef NDIELEMS_EXPORTS
#    define NDIELEMS_API __declspec(dllexport)
#else
#    define NDIELEMS_API __declspec(dllimport)
#endif
#else
#define NDIELEMS_API __attribute__ ((visibility ("default")))
#endif

#include <gst/gst.h>
#include <gst/base/gstbasesrc.h>
#include <gst/audio/audio.h>

#include "tooldataclient.h"
#include "../capitogst/tooltrackinginterface.h"
#include "lensparam.h"
#include "tooltracker.h"

#define VID_ADDRESS_BUF_LEN 256


G_BEGIN_DECLS

#define GST_TYPE_TRACK_BIN \
  (gst_track_bin_get_type())
#define GST_TRACK_BIN(obj) \
  (G_TYPE_CHECK_INSTANCE_CAST((obj),GST_TYPE_TRACK_BIN,GstTrackBin))
#define GST_TRACK_BIN_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_CAST((klass),GST_TYPE_TRACK_BIN,GstTrackBinClass))
#define GST_IS_TRACK_BIN(obj) \
  (G_TYPE_CHECK_INSTANCE_TYPE((obj),GST_TYPE_TRACK_BIN))
#define GST_IS_TRACK_BIN_CLASS(klass) \
  (G_TYPE_CHECK_CLASS_TYPE((klass),GST_TYPE_TRACK_BIN))

typedef struct _GstTrackBin GstTrackBin;
typedef struct _GstTrackBinClass GstTrackBinClass;

/**
 * GstTrackBin:
 *
 * trackbin object structure.
 */
struct _GstTrackBin {
  GstBin         bin;

  GstElement *track_data_bin;
  GstElement *klv_bin;
  GstElement *rtsp_source;
  GstElement *video_bin;
  GstElement *track_source;
  GstElement *track_queue;
  GstElement *track_overlay;

  GstPad *srcpad;

  /* parameters */
  gboolean queried_track_freq;

  GstToolTracker *gst_tool_tracker;
  gchar video_address[VID_ADDRESS_BUF_LEN];

  GstPad *overlay_video_sink;
  GstPad *overlay_video_src;
  gboolean klv_chain_linked;
  gboolean h264_chain_linked;
  gboolean properties_changed;
  gboolean got_vcu_info;
  GstLensParam *gst_lens_param;
  gboolean elements_created;
};

struct _GstTrackBinClass {
  GstBinClass  parent_class;
};

GType gst_track_bin_get_type (void);
NDIELEMS_API void register_local_plugin_track_bin ();


G_END_DECLS

#endif /* __TRACK_BIN_H__ */
