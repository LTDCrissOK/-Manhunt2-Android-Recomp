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

// Function: sub_0018E6F0
// Address: 0x18e6f0 - 0x18e778
void sub_0018E6F0_0x18e6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E6F0_0x18e6f0");
#endif

    switch (ctx->pc) {
        case 0x18e6f0u: goto label_18e6f0;
        case 0x18e6f4u: goto label_18e6f4;
        case 0x18e6f8u: goto label_18e6f8;
        case 0x18e6fcu: goto label_18e6fc;
        case 0x18e700u: goto label_18e700;
        case 0x18e704u: goto label_18e704;
        case 0x18e708u: goto label_18e708;
        case 0x18e70cu: goto label_18e70c;
        case 0x18e710u: goto label_18e710;
        case 0x18e714u: goto label_18e714;
        case 0x18e718u: goto label_18e718;
        case 0x18e71cu: goto label_18e71c;
        case 0x18e720u: goto label_18e720;
        case 0x18e724u: goto label_18e724;
        case 0x18e728u: goto label_18e728;
        case 0x18e72cu: goto label_18e72c;
        case 0x18e730u: goto label_18e730;
        case 0x18e734u: goto label_18e734;
        case 0x18e738u: goto label_18e738;
        case 0x18e73cu: goto label_18e73c;
        case 0x18e740u: goto label_18e740;
        case 0x18e744u: goto label_18e744;
        case 0x18e748u: goto label_18e748;
        case 0x18e74cu: goto label_18e74c;
        case 0x18e750u: goto label_18e750;
        case 0x18e754u: goto label_18e754;
        case 0x18e758u: goto label_18e758;
        case 0x18e75cu: goto label_18e75c;
        case 0x18e760u: goto label_18e760;
        case 0x18e764u: goto label_18e764;
        case 0x18e768u: goto label_18e768;
        case 0x18e76cu: goto label_18e76c;
        case 0x18e770u: goto label_18e770;
        case 0x18e774u: goto label_18e774;
        default: break;
    }

    ctx->pc = 0x18e6f0u;

label_18e6f0:
    // 0x18e6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18e6f4:
    // 0x18e6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18e6f8:
    // 0x18e6f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18e6fc:
    // 0x18e6fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e6fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e700:
    // 0x18e700: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x18e700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_18e704:
    // 0x18e704: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_18e708:
    if (ctx->pc == 0x18E708u) {
        ctx->pc = 0x18E708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E704u;
        // 0x18e708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E70Cu;
        goto label_18e70c;
    }
    ctx->pc = 0x18E704u;
    {
        const bool branch_taken_0x18e704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e704) {
            ctx->pc = 0x18E708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E704u;
            // 0x18e708: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E76Cu;
            goto label_18e76c;
        }
    }
    ctx->pc = 0x18E70Cu;
label_18e70c:
    // 0x18e70c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18e70cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18e710:
    // 0x18e710: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_18e714:
    if (ctx->pc == 0x18E714u) {
        ctx->pc = 0x18E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E710u;
        // 0x18e714: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E718u;
        goto label_18e718;
    }
    ctx->pc = 0x18E710u;
    {
        const bool branch_taken_0x18e710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E710u;
        // 0x18e714: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e710) {
            ctx->pc = 0x18E728u;
            goto label_18e728;
        }
    }
    ctx->pc = 0x18E718u;
label_18e718:
    // 0x18e718: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18e718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18e71c:
    // 0x18e71c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18e720:
    // 0x18e720: 0x40f809  jalr        $v0
label_18e724:
    if (ctx->pc == 0x18E724u) {
        ctx->pc = 0x18E728u;
        goto label_18e728;
    }
    ctx->pc = 0x18E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E728u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E720u, 0x18E728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E728u;
label_18e728:
    // 0x18e728: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18e728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_18e72c:
    // 0x18e72c: 0xc061a12  jal         func_186848
label_18e730:
    if (ctx->pc == 0x18E730u) {
        ctx->pc = 0x18E730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E72Cu;
        // 0x18e730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E734u;
        goto label_18e734;
    }
    ctx->pc = 0x18E72Cu;
    SET_GPR_U32(ctx, 31, 0x18E734u);
    ctx->pc = 0x18E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E72Cu;
    // 0x18e730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E72Cu, 0x18E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E734u;
label_18e734:
    // 0x18e734: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e738:
    // 0x18e738: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e73c:
    // 0x18e73c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x18e73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_18e740:
    // 0x18e740: 0x26060040  addiu       $a2, $s0, 0x40
    ctx->pc = 0x18e740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_18e744:
    // 0x18e744: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18e748:
    // 0x18e748: 0x40f809  jalr        $v0
label_18e74c:
    if (ctx->pc == 0x18E74Cu) {
        ctx->pc = 0x18E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E748u;
        // 0x18e74c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E750u;
        goto label_18e750;
    }
    ctx->pc = 0x18E748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E750u);
        ctx->pc = 0x18E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E748u;
        // 0x18e74c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E748u, 0x18E750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E750u;
label_18e750:
    // 0x18e750: 0xc061a16  jal         func_186858
label_18e754:
    if (ctx->pc == 0x18E754u) {
        ctx->pc = 0x18E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E750u;
        // 0x18e754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E758u;
        goto label_18e758;
    }
    ctx->pc = 0x18E750u;
    SET_GPR_U32(ctx, 31, 0x18E758u);
    ctx->pc = 0x18E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E750u;
    // 0x18e754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18E750u, 0x18E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E758u;
label_18e758:
    // 0x18e758: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x18e758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_18e75c:
    // 0x18e75c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18e75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18e760:
    // 0x18e760: 0x0  nop
    ctx->pc = 0x18e760u;
    // NOP
label_18e764:
    // 0x18e764: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x18e764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_18e768:
    // 0x18e768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e76c:
    // 0x18e76c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e76cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18e770:
    // 0x18e770: 0x3e00008  jr          $ra
label_18e774:
    if (ctx->pc == 0x18E774u) {
        ctx->pc = 0x18E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E770u;
        // 0x18e774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E778u;
        goto label_fallthrough_0x18e770;
    }
    ctx->pc = 0x18E770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E770u;
        // 0x18e774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e770:
    ctx->pc = 0x18E778u;
}
