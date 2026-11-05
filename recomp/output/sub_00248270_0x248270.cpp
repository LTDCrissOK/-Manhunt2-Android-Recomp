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

// Function: sub_00248270
// Address: 0x248270 - 0x248370
void sub_00248270_0x248270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248270_0x248270");
#endif

    switch (ctx->pc) {
        case 0x248270u: goto label_248270;
        case 0x248274u: goto label_248274;
        case 0x248278u: goto label_248278;
        case 0x24827cu: goto label_24827c;
        case 0x248280u: goto label_248280;
        case 0x248284u: goto label_248284;
        case 0x248288u: goto label_248288;
        case 0x24828cu: goto label_24828c;
        case 0x248290u: goto label_248290;
        case 0x248294u: goto label_248294;
        case 0x248298u: goto label_248298;
        case 0x24829cu: goto label_24829c;
        case 0x2482a0u: goto label_2482a0;
        case 0x2482a4u: goto label_2482a4;
        case 0x2482a8u: goto label_2482a8;
        case 0x2482acu: goto label_2482ac;
        case 0x2482b0u: goto label_2482b0;
        case 0x2482b4u: goto label_2482b4;
        case 0x2482b8u: goto label_2482b8;
        case 0x2482bcu: goto label_2482bc;
        case 0x2482c0u: goto label_2482c0;
        case 0x2482c4u: goto label_2482c4;
        case 0x2482c8u: goto label_2482c8;
        case 0x2482ccu: goto label_2482cc;
        case 0x2482d0u: goto label_2482d0;
        case 0x2482d4u: goto label_2482d4;
        case 0x2482d8u: goto label_2482d8;
        case 0x2482dcu: goto label_2482dc;
        case 0x2482e0u: goto label_2482e0;
        case 0x2482e4u: goto label_2482e4;
        case 0x2482e8u: goto label_2482e8;
        case 0x2482ecu: goto label_2482ec;
        case 0x2482f0u: goto label_2482f0;
        case 0x2482f4u: goto label_2482f4;
        case 0x2482f8u: goto label_2482f8;
        case 0x2482fcu: goto label_2482fc;
        case 0x248300u: goto label_248300;
        case 0x248304u: goto label_248304;
        case 0x248308u: goto label_248308;
        case 0x24830cu: goto label_24830c;
        case 0x248310u: goto label_248310;
        case 0x248314u: goto label_248314;
        case 0x248318u: goto label_248318;
        case 0x24831cu: goto label_24831c;
        case 0x248320u: goto label_248320;
        case 0x248324u: goto label_248324;
        case 0x248328u: goto label_248328;
        case 0x24832cu: goto label_24832c;
        case 0x248330u: goto label_248330;
        case 0x248334u: goto label_248334;
        case 0x248338u: goto label_248338;
        case 0x24833cu: goto label_24833c;
        case 0x248340u: goto label_248340;
        case 0x248344u: goto label_248344;
        case 0x248348u: goto label_248348;
        case 0x24834cu: goto label_24834c;
        case 0x248350u: goto label_248350;
        case 0x248354u: goto label_248354;
        case 0x248358u: goto label_248358;
        case 0x24835cu: goto label_24835c;
        case 0x248360u: goto label_248360;
        case 0x248364u: goto label_248364;
        case 0x248368u: goto label_248368;
        case 0x24836cu: goto label_24836c;
        default: break;
    }

    ctx->pc = 0x248270u;

label_248270:
    // 0x248270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_248274:
    // 0x248274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_248278:
    // 0x248278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x248278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24827c:
    // 0x24827c: 0xc08daf0  jal         func_236BC0
label_248280:
    if (ctx->pc == 0x248280u) {
        ctx->pc = 0x248280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24827Cu;
        // 0x248280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248284u;
        goto label_248284;
    }
    ctx->pc = 0x24827Cu;
    SET_GPR_U32(ctx, 31, 0x248284u);
    ctx->pc = 0x248280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24827Cu;
    // 0x248280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BC0u, 0x24827Cu, 0x248284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248284u;
label_248284:
    // 0x248284: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_248288:
    if (ctx->pc == 0x248288u) {
        ctx->pc = 0x248288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248284u;
        // 0x248288: 0x8e060334  lw          $a2, 0x334($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24828Cu;
        goto label_24828c;
    }
    ctx->pc = 0x248284u;
    {
        const bool branch_taken_0x248284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248284) {
            ctx->pc = 0x248288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248284u;
            // 0x248288: 0x8e060334  lw          $a2, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248318u;
            goto label_248318;
        }
    }
    ctx->pc = 0x24828Cu;
label_24828c:
    // 0x24828c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x24828cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_248290:
    // 0x248290: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x248290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_248294:
    // 0x248294: 0x54400033  bnel        $v0, $zero, . + 4 + (0x33 << 2)
label_248298:
    if (ctx->pc == 0x248298u) {
        ctx->pc = 0x248298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248294u;
        // 0x248298: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24829Cu;
        goto label_24829c;
    }
    ctx->pc = 0x248294u;
    {
        const bool branch_taken_0x248294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248294) {
            ctx->pc = 0x248298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248294u;
            // 0x248298: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248364u;
            goto label_248364;
        }
    }
    ctx->pc = 0x24829Cu;
label_24829c:
    // 0x24829c: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x24829cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2482a0:
    // 0x2482a0: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2482a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_2482a4:
    // 0x2482a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2482a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2482a8:
    // 0x2482a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2482a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2482ac:
    // 0x2482ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2482acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2482b0:
    // 0x2482b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2482b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2482b4:
    // 0x2482b4: 0xc0bf056  jal         func_2FC158
label_2482b8:
    if (ctx->pc == 0x2482B8u) {
        ctx->pc = 0x2482B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482B4u;
        // 0x2482b8: 0xae0311c0  sw          $v1, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2482BCu;
        goto label_2482bc;
    }
    ctx->pc = 0x2482B4u;
    SET_GPR_U32(ctx, 31, 0x2482BCu);
    ctx->pc = 0x2482B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482B4u;
    // 0x2482b8: 0xae0311c0  sw          $v1, 0x11C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC158u, 0x2482B4u, 0x2482BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2482BCu;
label_2482bc:
    // 0x2482bc: 0x8e060334  lw          $a2, 0x334($s0)
    ctx->pc = 0x2482bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_2482c0:
    // 0x2482c0: 0xae0012b4  sw          $zero, 0x12B4($s0)
    ctx->pc = 0x2482c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4788), GPR_U32(ctx, 0));
label_2482c4:
    // 0x2482c4: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2482c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2482c8:
    // 0x2482c8: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_2482cc:
    if (ctx->pc == 0x2482CCu) {
        ctx->pc = 0x2482CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482C8u;
        // 0x2482cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2482D0u;
        goto label_2482d0;
    }
    ctx->pc = 0x2482C8u;
    {
        const bool branch_taken_0x2482c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2482CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482C8u;
        // 0x2482cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482c8) {
            ctx->pc = 0x2482F4u;
            goto label_2482f4;
        }
    }
    ctx->pc = 0x2482D0u;
label_2482d0:
    // 0x2482d0: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2482d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2482d4:
    // 0x2482d4: 0x0  nop
    ctx->pc = 0x2482d4u;
    // NOP
label_2482d8:
    // 0x2482d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2482d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2482dc:
    // 0x2482dc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2482e0:
    if (ctx->pc == 0x2482E0u) {
        ctx->pc = 0x2482E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482DCu;
        // 0x2482e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2482E4u;
        goto label_2482e4;
    }
    ctx->pc = 0x2482DCu;
    {
        const bool branch_taken_0x2482dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2482E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482DCu;
        // 0x2482e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482dc) {
            ctx->pc = 0x2482F4u;
            goto label_2482f4;
        }
    }
    ctx->pc = 0x2482E4u;
label_2482e4:
    // 0x2482e4: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2482e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2482e8:
    // 0x2482e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2482ec:
    if (ctx->pc == 0x2482ECu) {
        ctx->pc = 0x2482ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482E8u;
        // 0x2482ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2482F0u;
        goto label_2482f0;
    }
    ctx->pc = 0x2482E8u;
    {
        const bool branch_taken_0x2482e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2482ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482E8u;
        // 0x2482ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2482e8) {
            ctx->pc = 0x2482D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2482d8;
        }
    }
    ctx->pc = 0x2482F0u;
label_2482f0:
    // 0x2482f0: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2482f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2482f4:
    // 0x2482f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2482f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2482f8:
    // 0x2482f8: 0xc073f08  jal         func_1CFC20
label_2482fc:
    if (ctx->pc == 0x2482FCu) {
        ctx->pc = 0x2482FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2482F8u;
        // 0x2482fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248300u;
        goto label_248300;
    }
    ctx->pc = 0x2482F8u;
    SET_GPR_U32(ctx, 31, 0x248300u);
    ctx->pc = 0x2482FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2482F8u;
    // 0x2482fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2482F8u, 0x248300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248300u;
label_248300:
    // 0x248300: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x248300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_248304:
    // 0x248304: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x248304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_248308:
    // 0x248308: 0x40f809  jalr        $v0
label_24830c:
    if (ctx->pc == 0x24830Cu) {
        ctx->pc = 0x24830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248308u;
        // 0x24830c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248310u;
        goto label_248310;
    }
    ctx->pc = 0x248308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x248310u);
        ctx->pc = 0x24830Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248308u;
        // 0x24830c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248308u, 0x248310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248310u;
label_248310:
    // 0x248310: 0x10000014  b           . + 4 + (0x14 << 2)
label_248314:
    if (ctx->pc == 0x248314u) {
        ctx->pc = 0x248314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248310u;
        // 0x248314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248318u;
        goto label_248318;
    }
    ctx->pc = 0x248310u;
    {
        const bool branch_taken_0x248310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248310u;
        // 0x248314: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248310) {
            ctx->pc = 0x248364u;
            goto label_248364;
        }
    }
    ctx->pc = 0x248318u;
label_248318:
    // 0x248318: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x248318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_24831c:
    // 0x24831c: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_248320:
    if (ctx->pc == 0x248320u) {
        ctx->pc = 0x248320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24831Cu;
        // 0x248320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248324u;
        goto label_248324;
    }
    ctx->pc = 0x24831Cu;
    {
        const bool branch_taken_0x24831c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x248320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24831Cu;
        // 0x248320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24831c) {
            ctx->pc = 0x248344u;
            goto label_248344;
        }
    }
    ctx->pc = 0x248324u;
label_248324:
    // 0x248324: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x248324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_248328:
    // 0x248328: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24832c:
    // 0x24832c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_248330:
    if (ctx->pc == 0x248330u) {
        ctx->pc = 0x248330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24832Cu;
        // 0x248330: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248334u;
        goto label_248334;
    }
    ctx->pc = 0x24832Cu;
    {
        const bool branch_taken_0x24832c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x248330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24832Cu;
        // 0x248330: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24832c) {
            ctx->pc = 0x248344u;
            goto label_248344;
        }
    }
    ctx->pc = 0x248334u;
label_248334:
    // 0x248334: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x248334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_248338:
    // 0x248338: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_24833c:
    if (ctx->pc == 0x24833Cu) {
        ctx->pc = 0x24833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248338u;
        // 0x24833c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248340u;
        goto label_248340;
    }
    ctx->pc = 0x248338u;
    {
        const bool branch_taken_0x248338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248338u;
        // 0x24833c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248338) {
            ctx->pc = 0x248328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248328;
        }
    }
    ctx->pc = 0x248340u;
label_248340:
    // 0x248340: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x248340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_248344:
    // 0x248344: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_248348:
    // 0x248348: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_24834c:
    // 0x24834c: 0xc073f08  jal         func_1CFC20
label_248350:
    if (ctx->pc == 0x248350u) {
        ctx->pc = 0x248350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24834Cu;
        // 0x248350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248354u;
        goto label_248354;
    }
    ctx->pc = 0x24834Cu;
    SET_GPR_U32(ctx, 31, 0x248354u);
    ctx->pc = 0x248350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24834Cu;
    // 0x248350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x24834Cu, 0x248354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248354u;
label_248354:
    // 0x248354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248358:
    // 0x248358: 0xc08dc16  jal         func_237058
label_24835c:
    if (ctx->pc == 0x24835Cu) {
        ctx->pc = 0x24835Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248358u;
        // 0x24835c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248360u;
        goto label_248360;
    }
    ctx->pc = 0x248358u;
    SET_GPR_U32(ctx, 31, 0x248360u);
    ctx->pc = 0x24835Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248358u;
    // 0x24835c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x248358u, 0x248360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248360u;
label_248360:
    // 0x248360: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248360u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248364:
    // 0x248364: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x248364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_248368:
    // 0x248368: 0x3e00008  jr          $ra
label_24836c:
    if (ctx->pc == 0x24836Cu) {
        ctx->pc = 0x24836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248368u;
        // 0x24836c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248370u;
        goto label_fallthrough_0x248368;
    }
    ctx->pc = 0x248368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24836Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248368u;
        // 0x24836c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x248368:
    ctx->pc = 0x248370u;
}
