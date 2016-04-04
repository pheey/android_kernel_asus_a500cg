#ifndef __IA_CSS_PROGRAM_GROUP_PARAM_TYPES_H_INCLUDED__
#define __IA_CSS_PROGRAM_GROUP_PARAM_TYPES_H_INCLUDED__

/*! \file */

/** @file ia_css_program_group_param_types.h
 *
 * Define the parameter objects that are necessary to create the process
 * groups i.e. enable parameters and parameters to set-up frame descriptors
 */

#include <ia_css_program_group_data.h>
#include <ia_css_kernel_bitmap.h>				/* ia_css_kernel_bitmap_t */

#include <type_support.h>
/*! make this public so that driver can populate,
 * size, bpp, dimensions for all terminals.
 *
 * Currently one API is provided to get frame_format_type.
 *
 * frame_format_type is set during ia_css_terminal_param_init().
 * Value for that is const and binary specific.
 */
struct ia_css_terminal_param_s {
	uint32_t							size;										/**< Size of this structure */
	ia_css_frame_format_type_t			frame_format_type;							/**< Indicates if this is a generic type or inbuild with variable size descriptor */
	int32_t 		parent_offset; /**< offset to add to reach parent. This is negative value.*/
	uint16_t							dimensions[IA_CSS_N_DATA_DIMENSION];		/**< Logical dimensions */
	uint16_t							fragment_dimensions[IA_CSS_N_DATA_DIMENSION];		/**< Logical fragment dimension */
	uint32_t							stride; /**< Stride of a frame */
	uint16_t							offset; /**< Offset in bytes to first fragment */
	uint8_t								bpp;										/**< Bits per pixel */
	uint8_t								reserved[1];
};

typedef struct ia_css_program_group_param_s		ia_css_program_group_param_t;
typedef struct ia_css_program_param_s			ia_css_program_param_t;
typedef struct ia_css_terminal_param_s			ia_css_terminal_param_t;

#endif /* __IA_CSS_PROGRAM_GROUP_PARAM_TYPES_H_INCLUDED__  */



