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

// Function: sub_00153758
// Address: 0x153758 - 0x153848
void sub_00153758_0x153758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153758_0x153758");
#endif

    switch (ctx->pc) {
        case 0x153770u: goto label_153770;
        case 0x153788u: goto label_153788;
        case 0x1537b8u: goto label_1537b8;
        case 0x1537c8u: goto label_1537c8;
        case 0x1537f0u: goto label_1537f0;
        case 0x153800u: goto label_153800;
        case 0x153810u: goto label_153810;
        case 0x153820u: goto label_153820;
        case 0x153830u: goto label_153830;
        default: break;
    }

    ctx->pc = 0x153758u;

    // 0x153758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15375c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x153760: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x153760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x153764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x153764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153768: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x153768u;
    SET_GPR_U32(ctx, 31, 0x153770u);
    ctx->pc = 0x15376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153768u;
    // 0x15376c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x153768u, 0x153770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153770u;
label_153770:
    // 0x153770: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x153770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153774: 0x1443002f  bne         $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x153774u;
    {
        const bool branch_taken_0x153774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x153778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153774u;
        // 0x153778: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153774) {
            ctx->pc = 0x153834u;
            goto label_153834;
        }
    }
    ctx->pc = 0x15377Cu;
    // 0x15377c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x15377cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x153780: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x153780u;
    SET_GPR_U32(ctx, 31, 0x153788u);
    ctx->pc = 0x153784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153780u;
    // 0x153784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x153780u, 0x153788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153788u;
label_153788:
    // 0x153788: 0x8e040664  lw          $a0, 0x664($s0)
    ctx->pc = 0x153788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1636)));
    // 0x15378c: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15378Cu;
    {
        const bool branch_taken_0x15378c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15378c) {
            ctx->pc = 0x153790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15378Cu;
            // 0x153790: 0x8e040660  lw          $a0, 0x660($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1537D0u;
            goto label_1537d0;
        }
    }
    ctx->pc = 0x153794u;
    // 0x153794: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x153794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x153798: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x153798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x15379c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x15379cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1537a0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1537A0u;
    {
        const bool branch_taken_0x1537a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1537a0) {
            ctx->pc = 0x1537C0u;
            goto label_1537c0;
        }
    }
    ctx->pc = 0x1537A8u;
    // 0x1537a8: 0x8c8202d0  lw          $v0, 0x2D0($a0)
    ctx->pc = 0x1537a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
    // 0x1537ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1537acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1537b0: 0xc055422  jal         func_155088
    ctx->pc = 0x1537B0u;
    SET_GPR_U32(ctx, 31, 0x1537B8u);
    ctx->pc = 0x1537B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537B0u;
    // 0x1537b4: 0xae020660  sw          $v0, 0x660($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1632), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155088u, 0x1537B0u, 0x1537B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537B8u;
label_1537b8:
    // 0x1537b8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1537B8u;
    {
        const bool branch_taken_0x1537b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537B8u;
        // 0x1537bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537b8) {
            ctx->pc = 0x153834u;
            goto label_153834;
        }
    }
    ctx->pc = 0x1537C0u;
label_1537c0:
    // 0x1537c0: 0xc055488  jal         func_155220
    ctx->pc = 0x1537C0u;
    SET_GPR_U32(ctx, 31, 0x1537C8u);
    ctx->pc = 0x1537C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537C0u;
    // 0x1537c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155220u, 0x1537C0u, 0x1537C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537C8u;
label_1537c8:
    // 0x1537c8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1537C8u;
    {
        const bool branch_taken_0x1537c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537C8u;
        // 0x1537cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537c8) {
            ctx->pc = 0x153834u;
            goto label_153834;
        }
    }
    ctx->pc = 0x1537D0u;
label_1537d0:
    // 0x1537d0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1537D0u;
    {
        const bool branch_taken_0x1537d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1537D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1537D0u;
        // 0x1537d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537d0) {
            ctx->pc = 0x153834u;
            goto label_153834;
        }
    }
    ctx->pc = 0x1537D8u;
    // 0x1537d8: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1537d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1537dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1537dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1537e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1537e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1537e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1537e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1537e8: 0xc09c920  jal         func_272480
    ctx->pc = 0x1537E8u;
    SET_GPR_U32(ctx, 31, 0x1537F0u);
    ctx->pc = 0x1537ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537E8u;
    // 0x1537ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272480u, 0x1537E8u, 0x1537F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1537F0u;
label_1537f0:
    // 0x1537f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1537F0u;
    {
        const bool branch_taken_0x1537f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1537f0) {
            ctx->pc = 0x153808u;
            goto label_153808;
        }
    }
    ctx->pc = 0x1537F8u;
    // 0x1537f8: 0xc055422  jal         func_155088
    ctx->pc = 0x1537F8u;
    SET_GPR_U32(ctx, 31, 0x153800u);
    ctx->pc = 0x1537FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1537F8u;
    // 0x1537fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155088u, 0x1537F8u, 0x153800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153800u;
label_153800:
    // 0x153800: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x153800u;
    {
        const bool branch_taken_0x153800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153800u;
        // 0x153804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153800) {
            ctx->pc = 0x153834u;
            goto label_153834;
        }
    }
    ctx->pc = 0x153808u;
label_153808:
    // 0x153808: 0xc05566c  jal         func_1559B0
    ctx->pc = 0x153808u;
    SET_GPR_U32(ctx, 31, 0x153810u);
    ctx->pc = 0x15380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153808u;
    // 0x15380c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1559B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1559B0u, 0x153808u, 0x153810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153810u;
label_153810:
    // 0x153810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153810u;
    {
        const bool branch_taken_0x153810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153810u;
        // 0x153814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153810) {
            ctx->pc = 0x153828u;
            goto label_153828;
        }
    }
    ctx->pc = 0x153818u;
    // 0x153818: 0xc05537c  jal         func_154DF0
    ctx->pc = 0x153818u;
    SET_GPR_U32(ctx, 31, 0x153820u);
    ctx->pc = 0x15381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153818u;
    // 0x15381c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DF0u, 0x153818u, 0x153820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153820u;
label_153820:
    // 0x153820: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x153820u;
    {
        const bool branch_taken_0x153820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153820u;
        // 0x153824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153820) {
            ctx->pc = 0x153834u;
            goto label_153834;
        }
    }
    ctx->pc = 0x153828u;
label_153828:
    // 0x153828: 0xc055374  jal         func_154DD0
    ctx->pc = 0x153828u;
    SET_GPR_U32(ctx, 31, 0x153830u);
    ctx->pc = 0x15382Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153828u;
    // 0x15382c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DD0u, 0x153828u, 0x153830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153830u;
label_153830:
    // 0x153830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x153830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153834:
    // 0x153834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x153834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x153838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15383c: 0x3e00008  jr          $ra
    ctx->pc = 0x15383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15383Cu;
        // 0x153840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15383Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153844u;
    // 0x153844: 0x0  nop
    ctx->pc = 0x153844u;
    // NOP
    ctx->pc = 0x153848u;
}
