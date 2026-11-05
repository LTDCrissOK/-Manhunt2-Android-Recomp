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

// Function: sub_0011C248
// Address: 0x11c248 - 0x11c3a0
void sub_0011C248_0x11c248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C248_0x11c248");
#endif

    switch (ctx->pc) {
        case 0x11c268u: goto label_11c268;
        case 0x11c284u: goto label_11c284;
        case 0x11c2a0u: goto label_11c2a0;
        case 0x11c2bcu: goto label_11c2bc;
        case 0x11c2d8u: goto label_11c2d8;
        case 0x11c2f4u: goto label_11c2f4;
        case 0x11c310u: goto label_11c310;
        case 0x11c32cu: goto label_11c32c;
        case 0x11c348u: goto label_11c348;
        case 0x11c364u: goto label_11c364;
        case 0x11c378u: goto label_11c378;
        default: break;
    }

    ctx->pc = 0x11c248u;

    // 0x11c248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c24c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11c24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11c250: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11c250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c254: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11c254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11c258: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11c258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11c25c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c260: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C260u;
    SET_GPR_U32(ctx, 31, 0x11C268u);
    ctx->pc = 0x11C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C260u;
    // 0x11c264: 0x24a5bc98  addiu       $a1, $a1, -0x4368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C260u, 0x11C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C268u;
label_11c268:
    // 0x11c268: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C268u;
    {
        const bool branch_taken_0x11c268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C268u;
        // 0x11c26c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c268) {
            ctx->pc = 0x11C278u;
            goto label_11c278;
        }
    }
    ctx->pc = 0x11C270u;
    // 0x11c270: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x11C270u;
    {
        const bool branch_taken_0x11c270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C270u;
        // 0x11c274: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c270) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C278u;
label_11c278:
    // 0x11c278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c27c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C27Cu;
    SET_GPR_U32(ctx, 31, 0x11C284u);
    ctx->pc = 0x11C280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C27Cu;
    // 0x11c280: 0x24a5bb18  addiu       $a1, $a1, -0x44E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C27Cu, 0x11C284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C284u;
label_11c284:
    // 0x11c284: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C284u;
    {
        const bool branch_taken_0x11c284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C284u;
        // 0x11c288: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c284) {
            ctx->pc = 0x11C294u;
            goto label_11c294;
        }
    }
    ctx->pc = 0x11C28Cu;
    // 0x11c28c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x11C28Cu;
    {
        const bool branch_taken_0x11c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C28Cu;
        // 0x11c290: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c28c) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C294u;
label_11c294:
    // 0x11c294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c298: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C298u;
    SET_GPR_U32(ctx, 31, 0x11C2A0u);
    ctx->pc = 0x11C29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C298u;
    // 0x11c29c: 0x24a5bca0  addiu       $a1, $a1, -0x4360 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C298u, 0x11C2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2A0u;
label_11c2a0:
    // 0x11c2a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C2A0u;
    {
        const bool branch_taken_0x11c2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2A0u;
        // 0x11c2a4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2a0) {
            ctx->pc = 0x11C2B0u;
            goto label_11c2b0;
        }
    }
    ctx->pc = 0x11C2A8u;
    // 0x11c2a8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11C2A8u;
    {
        const bool branch_taken_0x11c2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2A8u;
        // 0x11c2ac: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2a8) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C2B0u;
label_11c2b0:
    // 0x11c2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2b4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C2B4u;
    SET_GPR_U32(ctx, 31, 0x11C2BCu);
    ctx->pc = 0x11C2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2B4u;
    // 0x11c2b8: 0x24a5bcb0  addiu       $a1, $a1, -0x4350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C2B4u, 0x11C2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2BCu;
label_11c2bc:
    // 0x11c2bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C2BCu;
    {
        const bool branch_taken_0x11c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2BCu;
        // 0x11c2c0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2bc) {
            ctx->pc = 0x11C2CCu;
            goto label_11c2cc;
        }
    }
    ctx->pc = 0x11C2C4u;
    // 0x11c2c4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x11C2C4u;
    {
        const bool branch_taken_0x11c2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2C4u;
        // 0x11c2c8: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2c4) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C2CCu;
label_11c2cc:
    // 0x11c2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2d0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C2D0u;
    SET_GPR_U32(ctx, 31, 0x11C2D8u);
    ctx->pc = 0x11C2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2D0u;
    // 0x11c2d4: 0x24a5bcb8  addiu       $a1, $a1, -0x4348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C2D0u, 0x11C2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2D8u;
label_11c2d8:
    // 0x11c2d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C2D8u;
    {
        const bool branch_taken_0x11c2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2D8u;
        // 0x11c2dc: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2d8) {
            ctx->pc = 0x11C2E8u;
            goto label_11c2e8;
        }
    }
    ctx->pc = 0x11C2E0u;
    // 0x11c2e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11C2E0u;
    {
        const bool branch_taken_0x11c2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2E0u;
        // 0x11c2e4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2e0) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C2E8u;
label_11c2e8:
    // 0x11c2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2ec: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C2ECu;
    SET_GPR_U32(ctx, 31, 0x11C2F4u);
    ctx->pc = 0x11C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C2ECu;
    // 0x11c2f0: 0x24a5bcc0  addiu       $a1, $a1, -0x4340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C2ECu, 0x11C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C2F4u;
label_11c2f4:
    // 0x11c2f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C2F4u;
    {
        const bool branch_taken_0x11c2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2F4u;
        // 0x11c2f8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2f4) {
            ctx->pc = 0x11C304u;
            goto label_11c304;
        }
    }
    ctx->pc = 0x11C2FCu;
    // 0x11c2fc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x11C2FCu;
    {
        const bool branch_taken_0x11c2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C2FCu;
        // 0x11c300: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2fc) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C304u;
label_11c304:
    // 0x11c304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c308: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C308u;
    SET_GPR_U32(ctx, 31, 0x11C310u);
    ctx->pc = 0x11C30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C308u;
    // 0x11c30c: 0x24a5bcd0  addiu       $a1, $a1, -0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C308u, 0x11C310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C310u;
label_11c310:
    // 0x11c310: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C310u;
    {
        const bool branch_taken_0x11c310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C310u;
        // 0x11c314: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c310) {
            ctx->pc = 0x11C320u;
            goto label_11c320;
        }
    }
    ctx->pc = 0x11C318u;
    // 0x11c318: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11C318u;
    {
        const bool branch_taken_0x11c318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C318u;
        // 0x11c31c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c318) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C320u;
label_11c320:
    // 0x11c320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c324: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C324u;
    SET_GPR_U32(ctx, 31, 0x11C32Cu);
    ctx->pc = 0x11C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C324u;
    // 0x11c328: 0x24a5bc00  addiu       $a1, $a1, -0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C324u, 0x11C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C32Cu;
label_11c32c:
    // 0x11c32c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C32Cu;
    {
        const bool branch_taken_0x11c32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C32Cu;
        // 0x11c330: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c32c) {
            ctx->pc = 0x11C33Cu;
            goto label_11c33c;
        }
    }
    ctx->pc = 0x11C334u;
    // 0x11c334: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x11C334u;
    {
        const bool branch_taken_0x11c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C334u;
        // 0x11c338: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c334) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C33Cu;
label_11c33c:
    // 0x11c33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c340: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C340u;
    SET_GPR_U32(ctx, 31, 0x11C348u);
    ctx->pc = 0x11C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C340u;
    // 0x11c344: 0x24a5bcd8  addiu       $a1, $a1, -0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C340u, 0x11C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C348u;
label_11c348:
    // 0x11c348: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11C348u;
    {
        const bool branch_taken_0x11c348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C348u;
        // 0x11c34c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c348) {
            ctx->pc = 0x11C358u;
            goto label_11c358;
        }
    }
    ctx->pc = 0x11C350u;
    // 0x11c350: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x11C350u;
    {
        const bool branch_taken_0x11c350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C350u;
        // 0x11c354: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c350) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C358u;
label_11c358:
    // 0x11c358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c35c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C35Cu;
    SET_GPR_U32(ctx, 31, 0x11C364u);
    ctx->pc = 0x11C360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C35Cu;
    // 0x11c360: 0x24a5bce0  addiu       $a1, $a1, -0x4320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C35Cu, 0x11C364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C364u;
label_11c364:
    // 0x11c364: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11C364u;
    {
        const bool branch_taken_0x11c364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C364u;
        // 0x11c368: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c364) {
            ctx->pc = 0x11C38Cu;
            goto label_11c38c;
        }
    }
    ctx->pc = 0x11C36Cu;
    // 0x11c36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c370: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11C370u;
    SET_GPR_U32(ctx, 31, 0x11C378u);
    ctx->pc = 0x11C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11C370u;
    // 0x11c374: 0x24a5bce8  addiu       $a1, $a1, -0x4318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11C370u, 0x11C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11C378u;
label_11c378:
    // 0x11c378: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11c378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11c37c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x11c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x11c380: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x11c380u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x11c384: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C384u;
    {
        const bool branch_taken_0x11c384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C384u;
        // 0x11c388: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c384) {
            ctx->pc = 0x11C390u;
            goto label_11c390;
        }
    }
    ctx->pc = 0x11C38Cu;
label_11c38c:
    // 0x11c38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11c390:
    // 0x11c390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11c390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c394: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11c394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11c398: 0x3e00008  jr          $ra
    ctx->pc = 0x11C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C398u;
        // 0x11c39c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C3A0u;
}
