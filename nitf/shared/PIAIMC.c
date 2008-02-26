/* =========================================================================
 * This file is part of NITRO
 * =========================================================================
 * 
 * (C) Copyright 2004 - 2008, General Dynamics - Advanced Information Systems
 *
 * NITRO is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public 
 * License along with this program; if not, If not, 
 * see <http://www.gnu.org/licenses/>.
 *
 */


#include <nitf/IOHandle.h>
#include <nitf/TRE.h>
#include <nitf/Record.h>

NITF_CXX_GUARD

static nitf_TREDescription description[] = {
    {NITF_BCS_N, 3, "Cloud Cover", "CLOUDCVR",
     NITF_VAL_BCS_N_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 1, "Standard Radiometric?", "SRP",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 12, "Sensor Mode", "SENSMODE",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 18, "Sensor Name", "SENSNAME",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 255, "Source", "SOURCE",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_N, 2, "Compression Generation", "COMGEN",
     NITF_VAL_BCS_N_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 1, "Subjective Quality", "SUBQUAL",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 7, "PIA Mission Number", "PIAMSNNM",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 32, "Camera Specs", "CAMSPECS",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 2, "Project ID Code", "PROJID",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_N, 1, "Generation", "GENERATN",
     NITF_VAL_BCS_N_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 1, "Exploitation Support", "ESD",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 2, "Other Conditions", "OTHRCOND",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_N, 7, "Mean GSD", "MEANGSD",
     NITF_VAL_BCS_N_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 3, "Image Datum", "IDATUM",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 3, "Image Ellipsoid", "IELLIP",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 2, "Image Proc Levl Code", "PREPROC",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_A, 2, "Image Projection Systm", "IPROJ",
     NITF_VAL_BCS_A_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_BCS_N, 8, "Satellite Track", "SATTRACK",
     NITF_VAL_BCS_N_PLUS"|"NITF_VAL_BCS_SPACE"+", NITF_NO_RANGE, NULL, NULL},
    {NITF_END, 0, NULL, NULL}
};

NITF_DECLARE_SINGLE_PLUGIN(PIAIMC, description)

NITF_CXX_ENDGUARD
