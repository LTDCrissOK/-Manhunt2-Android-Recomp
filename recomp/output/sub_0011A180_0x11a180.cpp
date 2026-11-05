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

// Function: sub_0011A180
// Address: 0x11a180 - 0x11a540
void sub_0011A180_0x11a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A180_0x11a180");
#endif

    switch (ctx->pc) {
        case 0x11a1a0u: goto label_11a1a0;
        case 0x11a1bcu: goto label_11a1bc;
        case 0x11a1d8u: goto label_11a1d8;
        case 0x11a1f4u: goto label_11a1f4;
        case 0x11a210u: goto label_11a210;
        case 0x11a22cu: goto label_11a22c;
        case 0x11a248u: goto label_11a248;
        case 0x11a264u: goto label_11a264;
        case 0x11a280u: goto label_11a280;
        case 0x11a29cu: goto label_11a29c;
        case 0x11a2b8u: goto label_11a2b8;
        case 0x11a2d4u: goto label_11a2d4;
        case 0x11a2f0u: goto label_11a2f0;
        case 0x11a30cu: goto label_11a30c;
        case 0x11a328u: goto label_11a328;
        case 0x11a344u: goto label_11a344;
        case 0x11a360u: goto label_11a360;
        case 0x11a37cu: goto label_11a37c;
        case 0x11a398u: goto label_11a398;
        case 0x11a3b4u: goto label_11a3b4;
        case 0x11a3d0u: goto label_11a3d0;
        case 0x11a3ecu: goto label_11a3ec;
        case 0x11a408u: goto label_11a408;
        case 0x11a424u: goto label_11a424;
        case 0x11a440u: goto label_11a440;
        case 0x11a45cu: goto label_11a45c;
        case 0x11a478u: goto label_11a478;
        case 0x11a494u: goto label_11a494;
        case 0x11a4b0u: goto label_11a4b0;
        case 0x11a4ccu: goto label_11a4cc;
        case 0x11a4e8u: goto label_11a4e8;
        case 0x11a504u: goto label_11a504;
        default: break;
    }

    ctx->pc = 0x11a180u;

    // 0x11a180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11a180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11a184: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11a184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11a188: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11a188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a18c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x11a18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11a190: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a190u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a198: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A198u;
    SET_GPR_U32(ctx, 31, 0x11A1A0u);
    ctx->pc = 0x11A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A198u;
    // 0x11a19c: 0x24a5b720  addiu       $a1, $a1, -0x48E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A198u, 0x11A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1A0u;
label_11a1a0:
    // 0x11a1a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a1a4: 0x144000db  bnez        $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x11A1A4u;
    {
        const bool branch_taken_0x11a1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1A4u;
        // 0x11a1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1a4) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A1ACu;
    // 0x11a1ac: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a1acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a1b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A1B4u;
    SET_GPR_U32(ctx, 31, 0x11A1BCu);
    ctx->pc = 0x11A1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1B4u;
    // 0x11a1b8: 0x24a5b738  addiu       $a1, $a1, -0x48C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A1B4u, 0x11A1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1BCu;
label_11a1bc:
    // 0x11a1bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a1c0: 0x144000d4  bnez        $v0, . + 4 + (0xD4 << 2)
    ctx->pc = 0x11A1C0u;
    {
        const bool branch_taken_0x11a1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1C0u;
        // 0x11a1c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1c0) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A1C8u;
    // 0x11a1c8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A1D0u;
    SET_GPR_U32(ctx, 31, 0x11A1D8u);
    ctx->pc = 0x11A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1D0u;
    // 0x11a1d4: 0x24a5b748  addiu       $a1, $a1, -0x48B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A1D0u, 0x11A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1D8u;
label_11a1d8:
    // 0x11a1d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a1dc: 0x144000cd  bnez        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x11A1DCu;
    {
        const bool branch_taken_0x11a1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1DCu;
        // 0x11a1e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1dc) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A1E4u;
    // 0x11a1e4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a1e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a1ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A1ECu;
    SET_GPR_U32(ctx, 31, 0x11A1F4u);
    ctx->pc = 0x11A1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A1ECu;
    // 0x11a1f0: 0x24a5b750  addiu       $a1, $a1, -0x48B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A1ECu, 0x11A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A1F4u;
label_11a1f4:
    // 0x11a1f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a1f8: 0x144000c6  bnez        $v0, . + 4 + (0xC6 << 2)
    ctx->pc = 0x11A1F8u;
    {
        const bool branch_taken_0x11a1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A1F8u;
        // 0x11a1fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a1f8) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A200u;
    // 0x11a200: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a208: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A208u;
    SET_GPR_U32(ctx, 31, 0x11A210u);
    ctx->pc = 0x11A20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A208u;
    // 0x11a20c: 0x24a5b758  addiu       $a1, $a1, -0x48A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A208u, 0x11A210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A210u;
label_11a210:
    // 0x11a210: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a214: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x11A214u;
    {
        const bool branch_taken_0x11a214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A214u;
        // 0x11a218: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a214) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A21Cu;
    // 0x11a21c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a224: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A224u;
    SET_GPR_U32(ctx, 31, 0x11A22Cu);
    ctx->pc = 0x11A228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A224u;
    // 0x11a228: 0x24a5b768  addiu       $a1, $a1, -0x4898 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A224u, 0x11A22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A22Cu;
label_11a22c:
    // 0x11a22c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a230: 0x144000b8  bnez        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x11A230u;
    {
        const bool branch_taken_0x11a230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A230u;
        // 0x11a234: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a230) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A238u;
    // 0x11a238: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a23c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a240: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A240u;
    SET_GPR_U32(ctx, 31, 0x11A248u);
    ctx->pc = 0x11A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A240u;
    // 0x11a244: 0x24a5b778  addiu       $a1, $a1, -0x4888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A240u, 0x11A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A248u;
label_11a248:
    // 0x11a248: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a24c: 0x144000b1  bnez        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x11A24Cu;
    {
        const bool branch_taken_0x11a24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A24Cu;
        // 0x11a250: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a24c) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A254u;
    // 0x11a254: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a25c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A25Cu;
    SET_GPR_U32(ctx, 31, 0x11A264u);
    ctx->pc = 0x11A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A25Cu;
    // 0x11a260: 0x24a5b788  addiu       $a1, $a1, -0x4878 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A25Cu, 0x11A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A264u;
label_11a264:
    // 0x11a264: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a268: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x11A268u;
    {
        const bool branch_taken_0x11a268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A268u;
        // 0x11a26c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a268) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A270u;
    // 0x11a270: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a270u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a278: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A278u;
    SET_GPR_U32(ctx, 31, 0x11A280u);
    ctx->pc = 0x11A27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A278u;
    // 0x11a27c: 0x24a5b798  addiu       $a1, $a1, -0x4868 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A278u, 0x11A280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A280u;
label_11a280:
    // 0x11a280: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a284: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x11A284u;
    {
        const bool branch_taken_0x11a284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A284u;
        // 0x11a288: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a284) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A28Cu;
    // 0x11a28c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a294: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A294u;
    SET_GPR_U32(ctx, 31, 0x11A29Cu);
    ctx->pc = 0x11A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A294u;
    // 0x11a298: 0x24a5b7b0  addiu       $a1, $a1, -0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A294u, 0x11A29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A29Cu;
label_11a29c:
    // 0x11a29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a2a0: 0x1440009c  bnez        $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x11A2A0u;
    {
        const bool branch_taken_0x11a2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2A0u;
        // 0x11a2a4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2a0) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A2A8u;
    // 0x11a2a8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a2ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A2B0u;
    SET_GPR_U32(ctx, 31, 0x11A2B8u);
    ctx->pc = 0x11A2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A2B0u;
    // 0x11a2b4: 0x24a5b7c0  addiu       $a1, $a1, -0x4840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A2B0u, 0x11A2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2B8u;
label_11a2b8:
    // 0x11a2b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a2bc: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x11A2BCu;
    {
        const bool branch_taken_0x11a2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2BCu;
        // 0x11a2c0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2bc) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A2C4u;
    // 0x11a2c4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a2c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A2CCu;
    SET_GPR_U32(ctx, 31, 0x11A2D4u);
    ctx->pc = 0x11A2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A2CCu;
    // 0x11a2d0: 0x24a5b7d8  addiu       $a1, $a1, -0x4828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A2CCu, 0x11A2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2D4u;
label_11a2d4:
    // 0x11a2d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a2d8: 0x1440008e  bnez        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x11A2D8u;
    {
        const bool branch_taken_0x11a2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2D8u;
        // 0x11a2dc: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2d8) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A2E0u;
    // 0x11a2e0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a2e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a2e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A2E8u;
    SET_GPR_U32(ctx, 31, 0x11A2F0u);
    ctx->pc = 0x11A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A2E8u;
    // 0x11a2ec: 0x24a5b7f0  addiu       $a1, $a1, -0x4810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A2E8u, 0x11A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A2F0u;
label_11a2f0:
    // 0x11a2f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a2f4: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x11A2F4u;
    {
        const bool branch_taken_0x11a2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A2F4u;
        // 0x11a2f8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a2f4) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A2FCu;
    // 0x11a2fc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a304: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A304u;
    SET_GPR_U32(ctx, 31, 0x11A30Cu);
    ctx->pc = 0x11A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A304u;
    // 0x11a308: 0x24a5b7f8  addiu       $a1, $a1, -0x4808 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A304u, 0x11A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A30Cu;
label_11a30c:
    // 0x11a30c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a30cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a310: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x11A310u;
    {
        const bool branch_taken_0x11a310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A310u;
        // 0x11a314: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a310) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A318u;
    // 0x11a318: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a31c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a320: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A320u;
    SET_GPR_U32(ctx, 31, 0x11A328u);
    ctx->pc = 0x11A324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A320u;
    // 0x11a324: 0x24a5b810  addiu       $a1, $a1, -0x47F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A320u, 0x11A328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A328u;
label_11a328:
    // 0x11a328: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a32c: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x11A32Cu;
    {
        const bool branch_taken_0x11a32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A32Cu;
        // 0x11a330: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a32c) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A334u;
    // 0x11a334: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a33c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A33Cu;
    SET_GPR_U32(ctx, 31, 0x11A344u);
    ctx->pc = 0x11A340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A33Cu;
    // 0x11a340: 0x24a5b828  addiu       $a1, $a1, -0x47D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A33Cu, 0x11A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A344u;
label_11a344:
    // 0x11a344: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a348: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x11A348u;
    {
        const bool branch_taken_0x11a348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A348u;
        // 0x11a34c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a348) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A350u;
    // 0x11a350: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a358: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A358u;
    SET_GPR_U32(ctx, 31, 0x11A360u);
    ctx->pc = 0x11A35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A358u;
    // 0x11a35c: 0x24a5b840  addiu       $a1, $a1, -0x47C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A358u, 0x11A360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A360u;
label_11a360:
    // 0x11a360: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a364: 0x1440006b  bnez        $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x11A364u;
    {
        const bool branch_taken_0x11a364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A364u;
        // 0x11a368: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a364) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A36Cu;
    // 0x11a36c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a36cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a374: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A374u;
    SET_GPR_U32(ctx, 31, 0x11A37Cu);
    ctx->pc = 0x11A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A374u;
    // 0x11a378: 0x24a5b858  addiu       $a1, $a1, -0x47A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A374u, 0x11A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A37Cu;
label_11a37c:
    // 0x11a37c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a380: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x11A380u;
    {
        const bool branch_taken_0x11a380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A380u;
        // 0x11a384: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a380) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A388u;
    // 0x11a388: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a390: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A390u;
    SET_GPR_U32(ctx, 31, 0x11A398u);
    ctx->pc = 0x11A394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A390u;
    // 0x11a394: 0x24a5b870  addiu       $a1, $a1, -0x4790 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A390u, 0x11A398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A398u;
label_11a398:
    // 0x11a398: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a39c: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x11A39Cu;
    {
        const bool branch_taken_0x11a39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A39Cu;
        // 0x11a3a0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a39c) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A3A4u;
    // 0x11a3a4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a3a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A3ACu;
    SET_GPR_U32(ctx, 31, 0x11A3B4u);
    ctx->pc = 0x11A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3ACu;
    // 0x11a3b0: 0x24a5b888  addiu       $a1, $a1, -0x4778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A3ACu, 0x11A3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3B4u;
label_11a3b4:
    // 0x11a3b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a3b8: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x11A3B8u;
    {
        const bool branch_taken_0x11a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3B8u;
        // 0x11a3bc: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3b8) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A3C0u;
    // 0x11a3c0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A3C8u;
    SET_GPR_U32(ctx, 31, 0x11A3D0u);
    ctx->pc = 0x11A3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3C8u;
    // 0x11a3cc: 0x24a5b898  addiu       $a1, $a1, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A3C8u, 0x11A3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3D0u;
label_11a3d0:
    // 0x11a3d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a3d4: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x11A3D4u;
    {
        const bool branch_taken_0x11a3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3D4u;
        // 0x11a3d8: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3d4) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A3DCu;
    // 0x11a3dc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a3e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a3e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A3E4u;
    SET_GPR_U32(ctx, 31, 0x11A3ECu);
    ctx->pc = 0x11A3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A3E4u;
    // 0x11a3e8: 0x24a5b8a8  addiu       $a1, $a1, -0x4758 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A3E4u, 0x11A3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A3ECu;
label_11a3ec:
    // 0x11a3ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a3f0: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x11A3F0u;
    {
        const bool branch_taken_0x11a3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A3F0u;
        // 0x11a3f4: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a3f0) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A3F8u;
    // 0x11a3f8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a3fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a400: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A400u;
    SET_GPR_U32(ctx, 31, 0x11A408u);
    ctx->pc = 0x11A404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A400u;
    // 0x11a404: 0x24a5b8c0  addiu       $a1, $a1, -0x4740 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A400u, 0x11A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A408u;
label_11a408:
    // 0x11a408: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a40c: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x11A40Cu;
    {
        const bool branch_taken_0x11a40c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A40Cu;
        // 0x11a410: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a40c) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A414u;
    // 0x11a414: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a414u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a418: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a41c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A41Cu;
    SET_GPR_U32(ctx, 31, 0x11A424u);
    ctx->pc = 0x11A420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A41Cu;
    // 0x11a420: 0x24a5b8d0  addiu       $a1, $a1, -0x4730 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A41Cu, 0x11A424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A424u;
label_11a424:
    // 0x11a424: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a428: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x11A428u;
    {
        const bool branch_taken_0x11a428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A428u;
        // 0x11a42c: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a428) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A430u;
    // 0x11a430: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a434: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a438: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A438u;
    SET_GPR_U32(ctx, 31, 0x11A440u);
    ctx->pc = 0x11A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A438u;
    // 0x11a43c: 0x24a5b8e0  addiu       $a1, $a1, -0x4720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A438u, 0x11A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A440u;
label_11a440:
    // 0x11a440: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a444: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x11A444u;
    {
        const bool branch_taken_0x11a444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A444u;
        // 0x11a448: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a444) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A44Cu;
    // 0x11a44c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a454: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A454u;
    SET_GPR_U32(ctx, 31, 0x11A45Cu);
    ctx->pc = 0x11A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A454u;
    // 0x11a458: 0x24a5b8f0  addiu       $a1, $a1, -0x4710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A454u, 0x11A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A45Cu;
label_11a45c:
    // 0x11a45c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a460: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11A460u;
    {
        const bool branch_taken_0x11a460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A460u;
        // 0x11a464: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a460) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A468u;
    // 0x11a468: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a46c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a470: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A470u;
    SET_GPR_U32(ctx, 31, 0x11A478u);
    ctx->pc = 0x11A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A470u;
    // 0x11a474: 0x24a5b908  addiu       $a1, $a1, -0x46F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A470u, 0x11A478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A478u;
label_11a478:
    // 0x11a478: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a47c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x11A47Cu;
    {
        const bool branch_taken_0x11a47c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A47Cu;
        // 0x11a480: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a47c) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A484u;
    // 0x11a484: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a48c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A48Cu;
    SET_GPR_U32(ctx, 31, 0x11A494u);
    ctx->pc = 0x11A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A48Cu;
    // 0x11a490: 0x24a5b918  addiu       $a1, $a1, -0x46E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A48Cu, 0x11A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A494u;
label_11a494:
    // 0x11a494: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a498: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x11A498u;
    {
        const bool branch_taken_0x11a498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A498u;
        // 0x11a49c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a498) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A4A0u;
    // 0x11a4a0: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4a8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A4A8u;
    SET_GPR_U32(ctx, 31, 0x11A4B0u);
    ctx->pc = 0x11A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4A8u;
    // 0x11a4ac: 0x24a5b930  addiu       $a1, $a1, -0x46D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A4A8u, 0x11A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4B0u;
label_11a4b0:
    // 0x11a4b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a4b4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11A4B4u;
    {
        const bool branch_taken_0x11a4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4B4u;
        // 0x11a4b8: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4b4) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A4BCu;
    // 0x11a4bc: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a4c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A4C4u;
    SET_GPR_U32(ctx, 31, 0x11A4CCu);
    ctx->pc = 0x11A4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4C4u;
    // 0x11a4c8: 0x24a5b940  addiu       $a1, $a1, -0x46C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A4C4u, 0x11A4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4CCu;
label_11a4cc:
    // 0x11a4cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a4d0: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11A4D0u;
    {
        const bool branch_taken_0x11a4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A4D0u;
        // 0x11a4d4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a4d0) {
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A4D8u;
    // 0x11a4d8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a4dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4e0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A4E0u;
    SET_GPR_U32(ctx, 31, 0x11A4E8u);
    ctx->pc = 0x11A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4E0u;
    // 0x11a4e4: 0x24a5b950  addiu       $a1, $a1, -0x46B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A4E0u, 0x11A4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A4E8u;
label_11a4e8:
    // 0x11a4e8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a4ec: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x11A4ECu;
    {
        const bool branch_taken_0x11a4ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11a4ec) {
            ctx->pc = 0x11A4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11A4ECu;
            // 0x11a4f0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11A514u;
            goto label_11a514;
        }
    }
    ctx->pc = 0x11A4F4u;
    // 0x11a4f4: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x11a4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x11a4f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a4fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A4FCu;
    SET_GPR_U32(ctx, 31, 0x11A504u);
    ctx->pc = 0x11A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A4FCu;
    // 0x11a500: 0x24a5b958  addiu       $a1, $a1, -0x46A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A4FCu, 0x11A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A504u;
label_11a504:
    // 0x11a504: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x11a504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a508: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x11a508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x11a50c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x11a50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x11a510: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x11a510u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_11a514:
    // 0x11a514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11a514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a518: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x11a518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11a51c: 0x3e00008  jr          $ra
    ctx->pc = 0x11A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A51Cu;
        // 0x11a520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A524u;
    // 0x11a524: 0x0  nop
    ctx->pc = 0x11a524u;
    // NOP
    // 0x11a528: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11a528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a52c: 0x0  nop
    ctx->pc = 0x11a52cu;
    // NOP
    // 0x11a530: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a534: 0x0  nop
    ctx->pc = 0x11a534u;
    // NOP
    // 0x11a538: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a53c: 0x0  nop
    ctx->pc = 0x11a53cu;
    // NOP
    ctx->pc = 0x11a540u;
}
