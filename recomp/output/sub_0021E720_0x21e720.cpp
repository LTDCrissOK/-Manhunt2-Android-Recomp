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

// Function: sub_0021E720
// Address: 0x21e720 - 0x21e858
void sub_0021E720_0x21e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E720_0x21e720");
#endif

    switch (ctx->pc) {
        case 0x21e754u: goto label_21e754;
        case 0x21e768u: goto label_21e768;
        case 0x21e774u: goto label_21e774;
        case 0x21e784u: goto label_21e784;
        case 0x21e7a4u: goto label_21e7a4;
        case 0x21e7c8u: goto label_21e7c8;
        case 0x21e7f0u: goto label_21e7f0;
        case 0x21e7fcu: goto label_21e7fc;
        case 0x21e810u: goto label_21e810;
        case 0x21e828u: goto label_21e828;
        case 0x21e838u: goto label_21e838;
        default: break;
    }

    ctx->pc = 0x21e720u;

    // 0x21e720: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21e724: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x21e724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x21e728: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x21e728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x21e72c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21e72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e730: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x21e730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x21e734: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x21e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x21e738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21e738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e73c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e740: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x21e740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x21e744: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x21e744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x21e748: 0x24a51df8  addiu       $a1, $a1, 0x1DF8
    ctx->pc = 0x21e748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7672));
    // 0x21e74c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E74Cu;
    SET_GPR_U32(ctx, 31, 0x21E754u);
    ctx->pc = 0x21E750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E74Cu;
    // 0x21e750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E74Cu, 0x21E754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E754u;
label_21e754:
    // 0x21e754: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e758: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x21E758u;
    {
        const bool branch_taken_0x21e758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e758) {
            ctx->pc = 0x21E75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E758u;
            // 0x21e75c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E804u;
            goto label_21e804;
        }
    }
    ctx->pc = 0x21E760u;
    // 0x21e760: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21E760u;
    SET_GPR_U32(ctx, 31, 0x21E768u);
    ctx->pc = 0x21E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E760u;
    // 0x21e764: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21E760u, 0x21E768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E768u;
label_21e768:
    // 0x21e768: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21e768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e76c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E76Cu;
    SET_GPR_U32(ctx, 31, 0x21E774u);
    ctx->pc = 0x21E770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E76Cu;
    // 0x21e770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E76Cu, 0x21E774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E774u;
label_21e774:
    // 0x21e774: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e778: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e77c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E77Cu;
    SET_GPR_U32(ctx, 31, 0x21E784u);
    ctx->pc = 0x21E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E77Cu;
    // 0x21e780: 0x24a51e08  addiu       $a1, $a1, 0x1E08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E77Cu, 0x21E784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E784u;
label_21e784:
    // 0x21e784: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E788u;
    {
        const bool branch_taken_0x21e788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E788u;
        // 0x21e78c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e788) {
            ctx->pc = 0x21E798u;
            goto label_21e798;
        }
    }
    ctx->pc = 0x21E790u;
    // 0x21e790: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21E790u;
    {
        const bool branch_taken_0x21e790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E790u;
        // 0x21e794: 0xae2001a0  sw          $zero, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e790) {
            ctx->pc = 0x21E7F0u;
            goto label_21e7f0;
        }
    }
    ctx->pc = 0x21E798u;
label_21e798:
    // 0x21e798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e79c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E79Cu;
    SET_GPR_U32(ctx, 31, 0x21E7A4u);
    ctx->pc = 0x21E7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E79Cu;
    // 0x21e7a0: 0x24a51e10  addiu       $a1, $a1, 0x1E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E79Cu, 0x21E7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7A4u;
label_21e7a4:
    // 0x21e7a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e7a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E7A8u;
    {
        const bool branch_taken_0x21e7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7A8u;
        // 0x21e7ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7a8) {
            ctx->pc = 0x21E7B8u;
            goto label_21e7b8;
        }
    }
    ctx->pc = 0x21E7B0u;
    // 0x21e7b0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21E7B0u;
    {
        const bool branch_taken_0x21e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7B0u;
        // 0x21e7b4: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7b0) {
            ctx->pc = 0x21E7F0u;
            goto label_21e7f0;
        }
    }
    ctx->pc = 0x21E7B8u;
label_21e7b8:
    // 0x21e7b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e7bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E7C0u;
    SET_GPR_U32(ctx, 31, 0x21E7C8u);
    ctx->pc = 0x21E7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7C0u;
    // 0x21e7c4: 0x24a51e18  addiu       $a1, $a1, 0x1E18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E7C0u, 0x21E7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7C8u;
label_21e7c8:
    // 0x21e7c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e7cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E7CCu;
    {
        const bool branch_taken_0x21e7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7CCu;
        // 0x21e7d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7cc) {
            ctx->pc = 0x21E7DCu;
            goto label_21e7dc;
        }
    }
    ctx->pc = 0x21E7D4u;
    // 0x21e7d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21E7D4u;
    {
        const bool branch_taken_0x21e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7D4u;
        // 0x21e7d8: 0xae2201a0  sw          $v0, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7d4) {
            ctx->pc = 0x21E7F0u;
            goto label_21e7f0;
        }
    }
    ctx->pc = 0x21E7DCu;
label_21e7dc:
    // 0x21e7dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e7e0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21e7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e7e4: 0x24a51e20  addiu       $a1, $a1, 0x1E20
    ctx->pc = 0x21e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7712));
    // 0x21e7e8: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x21E7E8u;
    SET_GPR_U32(ctx, 31, 0x21E7F0u);
    ctx->pc = 0x21E7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7E8u;
    // 0x21e7ec: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x21E7E8u, 0x21E7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7F0u;
label_21e7f0:
    // 0x21e7f0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e7f4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21E7F4u;
    SET_GPR_U32(ctx, 31, 0x21E7FCu);
    ctx->pc = 0x21E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E7F4u;
    // 0x21e7f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21E7F4u, 0x21E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E7FCu;
label_21e7fc:
    // 0x21e7fc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21E7FCu;
    {
        const bool branch_taken_0x21e7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7FCu;
        // 0x21e800: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7fc) {
            ctx->pc = 0x21E83Cu;
            goto label_21e83c;
        }
    }
    ctx->pc = 0x21E804u;
label_21e804:
    // 0x21e804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e808: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E808u;
    SET_GPR_U32(ctx, 31, 0x21E810u);
    ctx->pc = 0x21E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E808u;
    // 0x21e80c: 0x24a51e48  addiu       $a1, $a1, 0x1E48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E808u, 0x21E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E810u;
label_21e810:
    // 0x21e810: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e814: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E814u;
    {
        const bool branch_taken_0x21e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E814u;
        // 0x21e818: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e814) {
            ctx->pc = 0x21E830u;
            goto label_21e830;
        }
    }
    ctx->pc = 0x21E81Cu;
    // 0x21e81c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e820: 0xc08753c  jal         func_21D4F0
    ctx->pc = 0x21E820u;
    SET_GPR_U32(ctx, 31, 0x21E828u);
    ctx->pc = 0x21E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E820u;
    // 0x21e824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4F0u, 0x21E820u, 0x21E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E828u;
label_21e828:
    // 0x21e828: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21E828u;
    {
        const bool branch_taken_0x21e828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E828u;
        // 0x21e82c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e828) {
            ctx->pc = 0x21E840u;
            goto label_21e840;
        }
    }
    ctx->pc = 0x21E830u;
label_21e830:
    // 0x21e830: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21E830u;
    SET_GPR_U32(ctx, 31, 0x21E838u);
    ctx->pc = 0x21E834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E830u;
    // 0x21e834: 0x262501a4  addiu       $a1, $s1, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21E830u, 0x21E838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E838u;
label_21e838:
    // 0x21e838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e83c:
    // 0x21e83c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x21e83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21e840:
    // 0x21e840: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x21e840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21e844: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x21e844u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21e848: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x21e848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21e84c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E84Cu;
        // 0x21e850: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E854u;
    // 0x21e854: 0x0  nop
    ctx->pc = 0x21e854u;
    // NOP
    ctx->pc = 0x21e858u;
}
