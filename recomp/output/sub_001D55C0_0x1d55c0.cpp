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

// Function: sub_001D55C0
// Address: 0x1d55c0 - 0x1d5730
void sub_001D55C0_0x1d55c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D55C0_0x1d55c0");
#endif

    switch (ctx->pc) {
        case 0x1d55dcu: goto label_1d55dc;
        case 0x1d55f8u: goto label_1d55f8;
        case 0x1d5614u: goto label_1d5614;
        case 0x1d5630u: goto label_1d5630;
        case 0x1d564cu: goto label_1d564c;
        case 0x1d5668u: goto label_1d5668;
        case 0x1d5684u: goto label_1d5684;
        case 0x1d56a0u: goto label_1d56a0;
        case 0x1d56bcu: goto label_1d56bc;
        case 0x1d56d8u: goto label_1d56d8;
        case 0x1d56f4u: goto label_1d56f4;
        case 0x1d5710u: goto label_1d5710;
        default: break;
    }

    ctx->pc = 0x1d55c0u;

    // 0x1d55c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d55c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d55c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d55c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d55c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1d55c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d55ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d55d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d55d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d55d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D55D4u;
    SET_GPR_U32(ctx, 31, 0x1D55DCu);
    ctx->pc = 0x1D55D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55D4u;
    // 0x1d55d8: 0x24a5d390  addiu       $a1, $a1, -0x2C70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D55D4u, 0x1D55DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55DCu;
label_1d55dc:
    // 0x1d55dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d55dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d55e0: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1D55E0u;
    {
        const bool branch_taken_0x1d55e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D55E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55E0u;
        // 0x1d55e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55e0) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D55E8u;
    // 0x1d55e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d55e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d55ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d55ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d55f0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D55F0u;
    SET_GPR_U32(ctx, 31, 0x1D55F8u);
    ctx->pc = 0x1D55F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D55F0u;
    // 0x1d55f4: 0x24a5d3e8  addiu       $a1, $a1, -0x2C18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D55F0u, 0x1D55F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D55F8u;
label_1d55f8:
    // 0x1d55f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d55f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d55fc: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x1D55FCu;
    {
        const bool branch_taken_0x1d55fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D55FCu;
        // 0x1d5600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d55fc) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D5604u;
    // 0x1d5604: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d5604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d5608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d560c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D560Cu;
    SET_GPR_U32(ctx, 31, 0x1D5614u);
    ctx->pc = 0x1D5610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D560Cu;
    // 0x1d5610: 0x24a5d400  addiu       $a1, $a1, -0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D560Cu, 0x1D5614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5614u;
label_1d5614:
    // 0x1d5614: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5618: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1D5618u;
    {
        const bool branch_taken_0x1d5618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D561Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5618u;
        // 0x1d561c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5618) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D5620u;
    // 0x1d5620: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d5620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d5624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5628: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D5628u;
    SET_GPR_U32(ctx, 31, 0x1D5630u);
    ctx->pc = 0x1D562Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5628u;
    // 0x1d562c: 0x24a5d418  addiu       $a1, $a1, -0x2BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D5628u, 0x1D5630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5630u;
label_1d5630:
    // 0x1d5630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5634: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1D5634u;
    {
        const bool branch_taken_0x1d5634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5634u;
        // 0x1d5638: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5634) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D563Cu;
    // 0x1d563c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d563cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d5640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5644: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D5644u;
    SET_GPR_U32(ctx, 31, 0x1D564Cu);
    ctx->pc = 0x1D5648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5644u;
    // 0x1d5648: 0x24a5d438  addiu       $a1, $a1, -0x2BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D5644u, 0x1D564Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D564Cu;
label_1d564c:
    // 0x1d564c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d564cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5650: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D5650u;
    {
        const bool branch_taken_0x1d5650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5650u;
        // 0x1d5654: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5650) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D5658u;
    // 0x1d5658: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d5658u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d565c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d565cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5660: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D5660u;
    SET_GPR_U32(ctx, 31, 0x1D5668u);
    ctx->pc = 0x1D5664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5660u;
    // 0x1d5664: 0x24a5d460  addiu       $a1, $a1, -0x2BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D5660u, 0x1D5668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5668u;
label_1d5668:
    // 0x1d5668: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d566c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D566Cu;
    {
        const bool branch_taken_0x1d566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D566Cu;
        // 0x1d5670: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d566c) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D5674u;
    // 0x1d5674: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d5674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d5678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d567c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D567Cu;
    SET_GPR_U32(ctx, 31, 0x1D5684u);
    ctx->pc = 0x1D5680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D567Cu;
    // 0x1d5680: 0x24a5d480  addiu       $a1, $a1, -0x2B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D567Cu, 0x1D5684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5684u;
label_1d5684:
    // 0x1d5684: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5688: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D5688u;
    {
        const bool branch_taken_0x1d5688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D568Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5688u;
        // 0x1d568c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5688) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D5690u;
    // 0x1d5690: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d5690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d5694: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5698: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D5698u;
    SET_GPR_U32(ctx, 31, 0x1D56A0u);
    ctx->pc = 0x1D569Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5698u;
    // 0x1d569c: 0x24a5d4a0  addiu       $a1, $a1, -0x2B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D5698u, 0x1D56A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56A0u;
label_1d56a0:
    // 0x1d56a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d56a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d56a4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D56A4u;
    {
        const bool branch_taken_0x1d56a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56A4u;
        // 0x1d56a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56a4) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D56ACu;
    // 0x1d56ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d56acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d56b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d56b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D56B4u;
    SET_GPR_U32(ctx, 31, 0x1D56BCu);
    ctx->pc = 0x1D56B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56B4u;
    // 0x1d56b8: 0x24a5d4c8  addiu       $a1, $a1, -0x2B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D56B4u, 0x1D56BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56BCu;
label_1d56bc:
    // 0x1d56bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d56bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d56c0: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D56C0u;
    {
        const bool branch_taken_0x1d56c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56C0u;
        // 0x1d56c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56c0) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D56C8u;
    // 0x1d56c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d56c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d56cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d56ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D56D0u;
    SET_GPR_U32(ctx, 31, 0x1D56D8u);
    ctx->pc = 0x1D56D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56D0u;
    // 0x1d56d4: 0x24a5d4f0  addiu       $a1, $a1, -0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D56D0u, 0x1D56D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56D8u;
label_1d56d8:
    // 0x1d56d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d56d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d56dc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D56DCu;
    {
        const bool branch_taken_0x1d56dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56DCu;
        // 0x1d56e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56dc) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D56E4u;
    // 0x1d56e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d56e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d56e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d56e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d56ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D56ECu;
    SET_GPR_U32(ctx, 31, 0x1D56F4u);
    ctx->pc = 0x1D56F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D56ECu;
    // 0x1d56f0: 0x24a5d518  addiu       $a1, $a1, -0x2AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D56ECu, 0x1D56F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D56F4u;
label_1d56f4:
    // 0x1d56f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d56f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d56f8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D56F8u;
    {
        const bool branch_taken_0x1d56f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D56F8u;
        // 0x1d56fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d56f8) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D5700u;
    // 0x1d5700: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d5700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d5704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d5704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5708: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x1D5708u;
    SET_GPR_U32(ctx, 31, 0x1D5710u);
    ctx->pc = 0x1D570Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5708u;
    // 0x1d570c: 0x24a5d540  addiu       $a1, $a1, -0x2AC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x1D5708u, 0x1D5710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5710u;
label_1d5710:
    // 0x1d5710: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1d5710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d5714: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5714u;
    {
        const bool branch_taken_0x1d5714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5714u;
        // 0x1d5718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5714) {
            ctx->pc = 0x1D5720u;
            goto label_1d5720;
        }
    }
    ctx->pc = 0x1D571Cu;
    // 0x1d571c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d571cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5720:
    // 0x1d5720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d5724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5728: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D572Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5728u;
        // 0x1d572c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5730u;
}
