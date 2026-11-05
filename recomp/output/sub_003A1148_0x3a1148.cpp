#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A1148
// Address: 0x3a1148 - 0x3a1378
void sub_003A1148_0x3a1148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1148_0x3a1148");
#endif

    switch (ctx->pc) {
        case 0x3a1148u: goto label_3a1148;
        case 0x3a114cu: goto label_3a114c;
        case 0x3a1150u: goto label_3a1150;
        case 0x3a1154u: goto label_3a1154;
        case 0x3a1158u: goto label_3a1158;
        case 0x3a115cu: goto label_3a115c;
        case 0x3a1160u: goto label_3a1160;
        case 0x3a1164u: goto label_3a1164;
        case 0x3a1168u: goto label_3a1168;
        case 0x3a116cu: goto label_3a116c;
        case 0x3a1170u: goto label_3a1170;
        case 0x3a1174u: goto label_3a1174;
        case 0x3a1178u: goto label_3a1178;
        case 0x3a117cu: goto label_3a117c;
        case 0x3a1180u: goto label_3a1180;
        case 0x3a1184u: goto label_3a1184;
        case 0x3a1188u: goto label_3a1188;
        case 0x3a118cu: goto label_3a118c;
        case 0x3a1190u: goto label_3a1190;
        case 0x3a1194u: goto label_3a1194;
        case 0x3a1198u: goto label_3a1198;
        case 0x3a119cu: goto label_3a119c;
        case 0x3a11a0u: goto label_3a11a0;
        case 0x3a11a4u: goto label_3a11a4;
        case 0x3a11a8u: goto label_3a11a8;
        case 0x3a11acu: goto label_3a11ac;
        case 0x3a11b0u: goto label_3a11b0;
        case 0x3a11b4u: goto label_3a11b4;
        case 0x3a11b8u: goto label_3a11b8;
        case 0x3a11bcu: goto label_3a11bc;
        case 0x3a11c0u: goto label_3a11c0;
        case 0x3a11c4u: goto label_3a11c4;
        case 0x3a11c8u: goto label_3a11c8;
        case 0x3a11ccu: goto label_3a11cc;
        case 0x3a11d0u: goto label_3a11d0;
        case 0x3a11d4u: goto label_3a11d4;
        case 0x3a11d8u: goto label_3a11d8;
        case 0x3a11dcu: goto label_3a11dc;
        case 0x3a11e0u: goto label_3a11e0;
        case 0x3a11e4u: goto label_3a11e4;
        case 0x3a11e8u: goto label_3a11e8;
        case 0x3a11ecu: goto label_3a11ec;
        case 0x3a11f0u: goto label_3a11f0;
        case 0x3a11f4u: goto label_3a11f4;
        case 0x3a11f8u: goto label_3a11f8;
        case 0x3a11fcu: goto label_3a11fc;
        case 0x3a1200u: goto label_3a1200;
        case 0x3a1204u: goto label_3a1204;
        case 0x3a1208u: goto label_3a1208;
        case 0x3a120cu: goto label_3a120c;
        case 0x3a1210u: goto label_3a1210;
        case 0x3a1214u: goto label_3a1214;
        case 0x3a1218u: goto label_3a1218;
        case 0x3a121cu: goto label_3a121c;
        case 0x3a1220u: goto label_3a1220;
        case 0x3a1224u: goto label_3a1224;
        case 0x3a1228u: goto label_3a1228;
        case 0x3a122cu: goto label_3a122c;
        case 0x3a1230u: goto label_3a1230;
        case 0x3a1234u: goto label_3a1234;
        case 0x3a1238u: goto label_3a1238;
        case 0x3a123cu: goto label_3a123c;
        case 0x3a1240u: goto label_3a1240;
        case 0x3a1244u: goto label_3a1244;
        case 0x3a1248u: goto label_3a1248;
        case 0x3a124cu: goto label_3a124c;
        case 0x3a1250u: goto label_3a1250;
        case 0x3a1254u: goto label_3a1254;
        case 0x3a1258u: goto label_3a1258;
        case 0x3a125cu: goto label_3a125c;
        case 0x3a1260u: goto label_3a1260;
        case 0x3a1264u: goto label_3a1264;
        case 0x3a1268u: goto label_3a1268;
        case 0x3a126cu: goto label_3a126c;
        case 0x3a1270u: goto label_3a1270;
        case 0x3a1274u: goto label_3a1274;
        case 0x3a1278u: goto label_3a1278;
        case 0x3a127cu: goto label_3a127c;
        case 0x3a1280u: goto label_3a1280;
        case 0x3a1284u: goto label_3a1284;
        case 0x3a1288u: goto label_3a1288;
        case 0x3a128cu: goto label_3a128c;
        case 0x3a1290u: goto label_3a1290;
        case 0x3a1294u: goto label_3a1294;
        case 0x3a1298u: goto label_3a1298;
        case 0x3a129cu: goto label_3a129c;
        case 0x3a12a0u: goto label_3a12a0;
        case 0x3a12a4u: goto label_3a12a4;
        case 0x3a12a8u: goto label_3a12a8;
        case 0x3a12acu: goto label_3a12ac;
        case 0x3a12b0u: goto label_3a12b0;
        case 0x3a12b4u: goto label_3a12b4;
        case 0x3a12b8u: goto label_3a12b8;
        case 0x3a12bcu: goto label_3a12bc;
        case 0x3a12c0u: goto label_3a12c0;
        case 0x3a12c4u: goto label_3a12c4;
        case 0x3a12c8u: goto label_3a12c8;
        case 0x3a12ccu: goto label_3a12cc;
        case 0x3a12d0u: goto label_3a12d0;
        case 0x3a12d4u: goto label_3a12d4;
        case 0x3a12d8u: goto label_3a12d8;
        case 0x3a12dcu: goto label_3a12dc;
        case 0x3a12e0u: goto label_3a12e0;
        case 0x3a12e4u: goto label_3a12e4;
        case 0x3a12e8u: goto label_3a12e8;
        case 0x3a12ecu: goto label_3a12ec;
        case 0x3a12f0u: goto label_3a12f0;
        case 0x3a12f4u: goto label_3a12f4;
        case 0x3a12f8u: goto label_3a12f8;
        case 0x3a12fcu: goto label_3a12fc;
        case 0x3a1300u: goto label_3a1300;
        case 0x3a1304u: goto label_3a1304;
        case 0x3a1308u: goto label_3a1308;
        case 0x3a130cu: goto label_3a130c;
        case 0x3a1310u: goto label_3a1310;
        case 0x3a1314u: goto label_3a1314;
        case 0x3a1318u: goto label_3a1318;
        case 0x3a131cu: goto label_3a131c;
        case 0x3a1320u: goto label_3a1320;
        case 0x3a1324u: goto label_3a1324;
        case 0x3a1328u: goto label_3a1328;
        case 0x3a132cu: goto label_3a132c;
        case 0x3a1330u: goto label_3a1330;
        case 0x3a1334u: goto label_3a1334;
        case 0x3a1338u: goto label_3a1338;
        case 0x3a133cu: goto label_3a133c;
        case 0x3a1340u: goto label_3a1340;
        case 0x3a1344u: goto label_3a1344;
        case 0x3a1348u: goto label_3a1348;
        case 0x3a134cu: goto label_3a134c;
        case 0x3a1350u: goto label_3a1350;
        case 0x3a1354u: goto label_3a1354;
        case 0x3a1358u: goto label_3a1358;
        case 0x3a135cu: goto label_3a135c;
        case 0x3a1360u: goto label_3a1360;
        case 0x3a1364u: goto label_3a1364;
        case 0x3a1368u: goto label_3a1368;
        case 0x3a136cu: goto label_3a136c;
        case 0x3a1370u: goto label_3a1370;
        case 0x3a1374u: goto label_3a1374;
        default: break;
    }

    ctx->pc = 0x3a1148u;

label_3a1148:
    // 0x3a1148: 0x90850001  lbu         $a1, 0x1($a0)
    ctx->pc = 0x3a1148u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_3a114c:
    // 0x3a114c: 0x3c064149  lui         $a2, 0x4149
    ctx->pc = 0x3a114cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16713 << 16));
label_3a1150:
    // 0x3a1150: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3a1150u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a1154:
    // 0x3a1154: 0x34c65846  ori         $a2, $a2, 0x5846
    ctx->pc = 0x3a1154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)22598);
label_3a1158:
    // 0x3a1158: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x3a1158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
label_3a115c:
    // 0x3a115c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3a115cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
label_3a1160:
    // 0x3a1160: 0x90870003  lbu         $a3, 0x3($a0)
    ctx->pc = 0x3a1160u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_3a1164:
    // 0x3a1164: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3a1164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_3a1168:
    // 0x3a1168: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3a1168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_3a116c:
    // 0x3a116c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a116cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1170:
    // 0x3a1170: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3a1170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_3a1174:
    // 0x3a1174: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3a1174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_3a1178:
    // 0x3a1178: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3a1178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3a117c:
    // 0x3a117c: 0x1066000c  beq         $v1, $a2, . + 4 + (0xC << 2)
label_3a1180:
    if (ctx->pc == 0x3A1180u) {
        ctx->pc = 0x3A1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A117Cu;
        // 0x3a1180: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1184u;
        goto label_3a1184;
    }
    ctx->pc = 0x3A117Cu;
    {
        const bool branch_taken_0x3a117c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x3A1180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A117Cu;
        // 0x3a1180: 0xc3102a  slt         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a117c) {
            ctx->pc = 0x3A11B0u;
            goto label_3a11b0;
        }
    }
    ctx->pc = 0x3A1184u;
label_3a1184:
    // 0x3a1184: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3a1188:
    if (ctx->pc == 0x3A1188u) {
        ctx->pc = 0x3A1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1184u;
        // 0x3a1188: 0x3c024149  lui         $v0, 0x4149 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A118Cu;
        goto label_3a118c;
    }
    ctx->pc = 0x3A1184u;
    {
        const bool branch_taken_0x3a1184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1184u;
        // 0x3a1188: 0x3c024149  lui         $v0, 0x4149 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16713 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1184) {
            ctx->pc = 0x3A11A0u;
            goto label_3a11a0;
        }
    }
    ctx->pc = 0x3A118Cu;
label_3a118c:
    // 0x3a118c: 0x34425845  ori         $v0, $v0, 0x5845
    ctx->pc = 0x3a118cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22597);
label_3a1190:
    // 0x3a1190: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_3a1194:
    if (ctx->pc == 0x3A1194u) {
        ctx->pc = 0x3A1194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1190u;
        // 0x3a1194: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1198u;
        goto label_3a1198;
    }
    ctx->pc = 0x3A1190u;
    {
        const bool branch_taken_0x3a1190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a1190) {
            ctx->pc = 0x3A1194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1190u;
            // 0x3a1194: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A11B0u;
            goto label_3a11b0;
        }
    }
    ctx->pc = 0x3A1198u;
label_3a1198:
    // 0x3a1198: 0x3e00008  jr          $ra
label_3a119c:
    if (ctx->pc == 0x3A119Cu) {
        ctx->pc = 0x3A119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1198u;
        // 0x3a119c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11A0u;
        goto label_3a11a0;
    }
    ctx->pc = 0x3A1198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1198u;
        // 0x3a119c: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A11A0u;
label_3a11a0:
    // 0x3a11a0: 0x34425850  ori         $v0, $v0, 0x5850
    ctx->pc = 0x3a11a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22608);
label_3a11a4:
    // 0x3a11a4: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
label_3a11a8:
    if (ctx->pc == 0x3A11A8u) {
        ctx->pc = 0x3A11A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11A4u;
        // 0x3a11a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11ACu;
        goto label_3a11ac;
    }
    ctx->pc = 0x3A11A4u;
    {
        const bool branch_taken_0x3a11a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a11a4) {
            ctx->pc = 0x3A11A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A11A4u;
            // 0x3a11a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A11B0u;
            goto label_3a11b0;
        }
    }
    ctx->pc = 0x3A11ACu;
label_3a11ac:
    // 0x3a11ac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3a11acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a11b0:
    // 0x3a11b0: 0x3e00008  jr          $ra
label_3a11b4:
    if (ctx->pc == 0x3A11B4u) {
        ctx->pc = 0x3A11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11B0u;
        // 0x3a11b4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11B8u;
        goto label_3a11b8;
    }
    ctx->pc = 0x3A11B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A11B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11B0u;
        // 0x3a11b4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A11B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A11B8u;
label_3a11b8:
    // 0x3a11b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3a11b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3a11bc:
    // 0x3a11bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a11bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a11c0:
    // 0x3a11c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3a11c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_3a11c4:
    // 0x3a11c4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3a11c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3a11c8:
    // 0x3a11c8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3a11c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_3a11cc:
    // 0x3a11cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a11ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a11d0:
    // 0x3a11d0: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x3a11d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_3a11d4:
    // 0x3a11d4: 0x265000a0  addiu       $s0, $s2, 0xA0
    ctx->pc = 0x3a11d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_3a11d8:
    // 0x3a11d8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3a11d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_3a11dc:
    // 0x3a11dc: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x3a11dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a11e0:
    // 0x3a11e0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3a11e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_3a11e4:
    // 0x3a11e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a11e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a11e8:
    // 0x3a11e8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3a11e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_3a11ec:
    // 0x3a11ec: 0xc0efab3  jal         func_3BEACC
label_3a11f0:
    if (ctx->pc == 0x3A11F0u) {
        ctx->pc = 0x3A11F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A11ECu;
        // 0x3a11f0: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A11F4u;
        goto label_3a11f4;
    }
    ctx->pc = 0x3A11ECu;
    SET_GPR_U32(ctx, 31, 0x3A11F4u);
    ctx->pc = 0x3A11F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A11ECu;
    // 0x3a11f0: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A11ECu, 0x3A11F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A11F4u;
label_3a11f4:
    // 0x3a11f4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3a11f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a11f8:
    // 0x3a11f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a11f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a11fc:
    // 0x3a11fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a11fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1200:
    // 0x3a1200: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1204:
    // 0x3a1204: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3a1204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3a1208:
    // 0x3a1208: 0x40f809  jalr        $v0
label_3a120c:
    if (ctx->pc == 0x3A120Cu) {
        ctx->pc = 0x3A120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1208u;
        // 0x3a120c: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1210u;
        goto label_3a1210;
    }
    ctx->pc = 0x3A1208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1210u);
        ctx->pc = 0x3A120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1208u;
        // 0x3a120c: 0x24061800  addiu       $a2, $zero, 0x1800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1208u, 0x3A1210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1210u;
label_3a1210:
    // 0x3a1210: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a1210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1214:
    // 0x3a1214: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3a1214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3a1218:
    // 0x3a1218: 0xc0e8318  jal         func_3A0C60
label_3a121c:
    if (ctx->pc == 0x3A121Cu) {
        ctx->pc = 0x3A121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1218u;
        // 0x3a121c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1220u;
        goto label_3a1220;
    }
    ctx->pc = 0x3A1218u;
    SET_GPR_U32(ctx, 31, 0x3A1220u);
    ctx->pc = 0x3A121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1218u;
    // 0x3a121c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C60u, 0x3A1218u, 0x3A1220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1220u;
label_3a1220:
    // 0x3a1220: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a1220u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a1224:
    // 0x3a1224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a1224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a1228:
    // 0x3a1228: 0x16620009  bne         $s3, $v0, . + 4 + (0x9 << 2)
label_3a122c:
    if (ctx->pc == 0x3A122Cu) {
        ctx->pc = 0x3A122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1228u;
        // 0x3a122c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1230u;
        goto label_3a1230;
    }
    ctx->pc = 0x3A1228u;
    {
        const bool branch_taken_0x3a1228 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1228u;
        // 0x3a122c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1228) {
            ctx->pc = 0x3A1250u;
            goto label_3a1250;
        }
    }
    ctx->pc = 0x3A1230u;
label_3a1230:
    // 0x3a1230: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a1230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1234:
    // 0x3a1234: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a1234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a1238:
    // 0x3a1238: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3a1238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3a123c:
    // 0x3a123c: 0x40f809  jalr        $v0
label_3a1240:
    if (ctx->pc == 0x3A1240u) {
        ctx->pc = 0x3A1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A123Cu;
        // 0x3a1240: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1244u;
        goto label_3a1244;
    }
    ctx->pc = 0x3A123Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1244u);
        ctx->pc = 0x3A1240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A123Cu;
        // 0x3a1240: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A123Cu, 0x3A1244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1244u;
label_3a1244:
    // 0x3a1244: 0x10000044  b           . + 4 + (0x44 << 2)
label_3a1248:
    if (ctx->pc == 0x3A1248u) {
        ctx->pc = 0x3A1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1244u;
        // 0x3a1248: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A124Cu;
        goto label_3a124c;
    }
    ctx->pc = 0x3A1244u;
    {
        const bool branch_taken_0x3a1244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1244u;
        // 0x3a1248: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1244) {
            ctx->pc = 0x3A1358u;
            goto label_3a1358;
        }
    }
    ctx->pc = 0x3A124Cu;
label_3a124c:
    // 0x3a124c: 0x0  nop
    ctx->pc = 0x3a124cu;
    // NOP
label_3a1250:
    // 0x3a1250: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
label_3a1254:
    if (ctx->pc == 0x3A1254u) {
        ctx->pc = 0x3A1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1250u;
        // 0x3a1254: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1258u;
        goto label_3a1258;
    }
    ctx->pc = 0x3A1250u;
    {
        const bool branch_taken_0x3a1250 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1250u;
        // 0x3a1254: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1250) {
            ctx->pc = 0x3A12A8u;
            goto label_3a12a8;
        }
    }
    ctx->pc = 0x3A1258u;
label_3a1258:
    // 0x3a1258: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3a1258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a125c:
    // 0x3a125c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a125cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a1260:
    // 0x3a1260: 0xc0ec2c2  jal         func_3B0B08
label_3a1264:
    if (ctx->pc == 0x3A1264u) {
        ctx->pc = 0x3A1264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1260u;
        // 0x3a1264: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1268u;
        goto label_3a1268;
    }
    ctx->pc = 0x3A1260u;
    SET_GPR_U32(ctx, 31, 0x3A1268u);
    ctx->pc = 0x3A1264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1260u;
    // 0x3a1264: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0B08u, 0x3A1260u, 0x3A1268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1268u;
label_3a1268:
    // 0x3a1268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a1268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a126c:
    // 0x3a126c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3a126cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1270:
    // 0x3a1270: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_3a1274:
    if (ctx->pc == 0x3A1274u) {
        ctx->pc = 0x3A1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1270u;
        // 0x3a1274: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1278u;
        goto label_3a1278;
    }
    ctx->pc = 0x3A1270u;
    {
        const bool branch_taken_0x3a1270 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1270u;
        // 0x3a1274: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1270) {
            ctx->pc = 0x3A1280u;
            goto label_3a1280;
        }
    }
    ctx->pc = 0x3A1278u;
label_3a1278:
    // 0x3a1278: 0x1000000e  b           . + 4 + (0xE << 2)
label_3a127c:
    if (ctx->pc == 0x3A127Cu) {
        ctx->pc = 0x3A127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1278u;
        // 0x3a127c: 0x2484c4f0  addiu       $a0, $a0, -0x3B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1280u;
        goto label_3a1280;
    }
    ctx->pc = 0x3A1278u;
    {
        const bool branch_taken_0x3a1278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1278u;
        // 0x3a127c: 0x2484c4f0  addiu       $a0, $a0, -0x3B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1278) {
            ctx->pc = 0x3A12B4u;
            goto label_3a12b4;
        }
    }
    ctx->pc = 0x3A1280u;
label_3a1280:
    // 0x3a1280: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3a1280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3a1284:
    // 0x3a1284: 0x93a40028  lbu         $a0, 0x28($sp)
    ctx->pc = 0x3a1284u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
label_3a1288:
    // 0x3a1288: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3a1288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3a128c:
    // 0x3a128c: 0xae02021c  sw          $v0, 0x21C($s0)
    ctx->pc = 0x3a128cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 2));
label_3a1290:
    // 0x3a1290: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3a1290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_3a1294:
    // 0x3a1294: 0xa2040010  sb          $a0, 0x10($s0)
    ctx->pc = 0x3a1294u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 4));
label_3a1298:
    // 0x3a1298: 0xae050210  sw          $a1, 0x210($s0)
    ctx->pc = 0x3a1298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 5));
label_3a129c:
    // 0x3a129c: 0x10000016  b           . + 4 + (0x16 << 2)
label_3a12a0:
    if (ctx->pc == 0x3A12A0u) {
        ctx->pc = 0x3A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A129Cu;
        // 0x3a12a0: 0xae451958  sw          $a1, 0x1958($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6488), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12A4u;
        goto label_3a12a4;
    }
    ctx->pc = 0x3A129Cu;
    {
        const bool branch_taken_0x3a129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A12A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A129Cu;
        // 0x3a12a0: 0xae451958  sw          $a1, 0x1958($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6488), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a129c) {
            ctx->pc = 0x3A12F8u;
            goto label_3a12f8;
        }
    }
    ctx->pc = 0x3A12A4u;
label_3a12a4:
    // 0x3a12a4: 0x0  nop
    ctx->pc = 0x3a12a4u;
    // NOP
label_3a12a8:
    // 0x3a12a8: 0x1262000d  beq         $s3, $v0, . + 4 + (0xD << 2)
label_3a12ac:
    if (ctx->pc == 0x3A12ACu) {
        ctx->pc = 0x3A12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12A8u;
        // 0x3a12ac: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12B0u;
        goto label_3a12b0;
    }
    ctx->pc = 0x3A12A8u;
    {
        const bool branch_taken_0x3a12a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A12ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12A8u;
        // 0x3a12ac: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12a8) {
            ctx->pc = 0x3A12E0u;
            goto label_3a12e0;
        }
    }
    ctx->pc = 0x3A12B0u;
label_3a12b0:
    // 0x3a12b0: 0x2484c518  addiu       $a0, $a0, -0x3AE8
    ctx->pc = 0x3a12b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952216));
label_3a12b4:
    // 0x3a12b4: 0xc0ecbf4  jal         func_3B2FD0
label_3a12b8:
    if (ctx->pc == 0x3A12B8u) {
        ctx->pc = 0x3A12BCu;
        goto label_3a12bc;
    }
    ctx->pc = 0x3A12B4u;
    SET_GPR_U32(ctx, 31, 0x3A12BCu);
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x3A12B4u, 0x3A12BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A12BCu;
label_3a12bc:
    // 0x3a12bc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3a12bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a12c0:
    // 0x3a12c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a12c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a12c4:
    // 0x3a12c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a12c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a12c8:
    // 0x3a12c8: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x3a12c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3a12cc:
    // 0x3a12cc: 0x60f809  jalr        $v1
label_3a12d0:
    if (ctx->pc == 0x3A12D0u) {
        ctx->pc = 0x3A12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12CCu;
        // 0x3a12d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12D4u;
        goto label_3a12d4;
    }
    ctx->pc = 0x3A12CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A12D4u);
        ctx->pc = 0x3A12D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12CCu;
        // 0x3a12d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A12CCu, 0x3A12D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A12D4u;
label_3a12d4:
    // 0x3a12d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3a12d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a12d8:
    // 0x3a12d8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3a12dc:
    if (ctx->pc == 0x3A12DCu) {
        ctx->pc = 0x3A12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12D8u;
        // 0x3a12dc: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12E0u;
        goto label_3a12e0;
    }
    ctx->pc = 0x3A12D8u;
    {
        const bool branch_taken_0x3a12d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A12DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12D8u;
        // 0x3a12dc: 0xa2420001  sb          $v0, 0x1($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12d8) {
            ctx->pc = 0x3A1354u;
            goto label_3a1354;
        }
    }
    ctx->pc = 0x3A12E0u;
label_3a12e0:
    // 0x3a12e0: 0x8e42195c  lw          $v0, 0x195C($s2)
    ctx->pc = 0x3a12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6492)));
label_3a12e4:
    // 0x3a12e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a12e8:
    if (ctx->pc == 0x3A12E8u) {
        ctx->pc = 0x3A12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12E4u;
        // 0x3a12e8: 0xae401958  sw          $zero, 0x1958($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12ECu;
        goto label_3a12ec;
    }
    ctx->pc = 0x3A12E4u;
    {
        const bool branch_taken_0x3a12e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A12E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12E4u;
        // 0x3a12e8: 0xae401958  sw          $zero, 0x1958($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a12e4) {
            ctx->pc = 0x3A12F8u;
            goto label_3a12f8;
        }
    }
    ctx->pc = 0x3A12ECu;
label_3a12ec:
    // 0x3a12ec: 0x8e441960  lw          $a0, 0x1960($s2)
    ctx->pc = 0x3a12ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6496)));
label_3a12f0:
    // 0x3a12f0: 0x40f809  jalr        $v0
label_3a12f4:
    if (ctx->pc == 0x3A12F4u) {
        ctx->pc = 0x3A12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12F0u;
        // 0x3a12f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A12F8u;
        goto label_3a12f8;
    }
    ctx->pc = 0x3A12F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A12F8u);
        ctx->pc = 0x3A12F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A12F0u;
        // 0x3a12f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A12F0u, 0x3A12F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A12F8u;
label_3a12f8:
    // 0x3a12f8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3a12f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a12fc:
    // 0x3a12fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a12fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1300:
    // 0x3a1300: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a1300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1304:
    // 0x3a1304: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3a1304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1308:
    // 0x3a1308: 0xc0eb07e  jal         func_3AC1F8
label_3a130c:
    if (ctx->pc == 0x3A130Cu) {
        ctx->pc = 0x3A130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1308u;
        // 0x3a130c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1310u;
        goto label_3a1310;
    }
    ctx->pc = 0x3A1308u;
    SET_GPR_U32(ctx, 31, 0x3A1310u);
    ctx->pc = 0x3A130Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1308u;
    // 0x3a130c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3A1308u, 0x3A1310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1310u;
label_3a1310:
    // 0x3a1310: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a1310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a1314:
    // 0x3a1314: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a1314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a1318:
    // 0x3a1318: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a1318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a131c:
    // 0x3a131c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x3a131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_3a1320:
    // 0x3a1320: 0x40f809  jalr        $v0
label_3a1324:
    if (ctx->pc == 0x3A1324u) {
        ctx->pc = 0x3A1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1320u;
        // 0x3a1324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1328u;
        goto label_3a1328;
    }
    ctx->pc = 0x3A1320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1328u);
        ctx->pc = 0x3A1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1320u;
        // 0x3a1324: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1320u, 0x3A1328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1328u;
label_3a1328:
    // 0x3a1328: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3a1328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a132c:
    // 0x3a132c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a132cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a1330:
    // 0x3a1330: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3a1330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a1334:
    // 0x3a1334: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x3a1334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_3a1338:
    // 0x3a1338: 0x60f809  jalr        $v1
label_3a133c:
    if (ctx->pc == 0x3A133Cu) {
        ctx->pc = 0x3A133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1338u;
        // 0x3a133c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1340u;
        goto label_3a1340;
    }
    ctx->pc = 0x3A1338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A1340u);
        ctx->pc = 0x3A133Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1338u;
        // 0x3a133c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1338u, 0x3A1340u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1340u;
label_3a1340:
    // 0x3a1340: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3a1340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3a1344:
    // 0x3a1344: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a1344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a1348:
    // 0x3a1348: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3a1348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3a134c:
    // 0x3a134c: 0xa2430001  sb          $v1, 0x1($s2)
    ctx->pc = 0x3a134cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 3));
label_3a1350:
    // 0x3a1350: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3a1350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3a1354:
    // 0x3a1354: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3a1354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3a1358:
    // 0x3a1358: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x3a1358u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3a135c:
    // 0x3a135c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3a135cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3a1360:
    // 0x3a1360: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x3a1360u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3a1364:
    // 0x3a1364: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x3a1364u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3a1368:
    // 0x3a1368: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x3a1368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_3a136c:
    // 0x3a136c: 0x3e00008  jr          $ra
label_3a1370:
    if (ctx->pc == 0x3A1370u) {
        ctx->pc = 0x3A1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A136Cu;
        // 0x3a1370: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1374u;
        goto label_3a1374;
    }
    ctx->pc = 0x3A136Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A136Cu;
        // 0x3a1370: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A136Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1374u;
label_3a1374:
    // 0x3a1374: 0x0  nop
    ctx->pc = 0x3a1374u;
    // NOP
    ctx->pc = 0x3a1378u;
}
