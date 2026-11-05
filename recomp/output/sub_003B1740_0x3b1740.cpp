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

// Function: sub_003B1740
// Address: 0x3b1740 - 0x3b17a0
void sub_003B1740_0x3b1740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B1740_0x3b1740");
#endif

    switch (ctx->pc) {
        case 0x3b1740u: goto label_3b1740;
        case 0x3b1744u: goto label_3b1744;
        case 0x3b1748u: goto label_3b1748;
        case 0x3b174cu: goto label_3b174c;
        case 0x3b1750u: goto label_3b1750;
        case 0x3b1754u: goto label_3b1754;
        case 0x3b1758u: goto label_3b1758;
        case 0x3b175cu: goto label_3b175c;
        case 0x3b1760u: goto label_3b1760;
        case 0x3b1764u: goto label_3b1764;
        case 0x3b1768u: goto label_3b1768;
        case 0x3b176cu: goto label_3b176c;
        case 0x3b1770u: goto label_3b1770;
        case 0x3b1774u: goto label_3b1774;
        case 0x3b1778u: goto label_3b1778;
        case 0x3b177cu: goto label_3b177c;
        case 0x3b1780u: goto label_3b1780;
        case 0x3b1784u: goto label_3b1784;
        case 0x3b1788u: goto label_3b1788;
        case 0x3b178cu: goto label_3b178c;
        case 0x3b1790u: goto label_3b1790;
        case 0x3b1794u: goto label_3b1794;
        case 0x3b1798u: goto label_3b1798;
        case 0x3b179cu: goto label_3b179c;
        default: break;
    }

    ctx->pc = 0x3b1740u;

label_3b1740:
    // 0x3b1740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b1740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3b1744:
    // 0x3b1744: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b1748:
    // 0x3b1748: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b1748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b174c:
    // 0x3b174c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3b174cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3b1750:
    // 0x3b1750: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3b1750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b1754:
    // 0x3b1754: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3b1754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b1758:
    // 0x3b1758: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3b1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3b175c:
    // 0x3b175c: 0x40f809  jalr        $v0
label_3b1760:
    if (ctx->pc == 0x3B1760u) {
        ctx->pc = 0x3B1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B175Cu;
        // 0x3b1760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1764u;
        goto label_3b1764;
    }
    ctx->pc = 0x3B175Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B1764u);
        ctx->pc = 0x3B1760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B175Cu;
        // 0x3b1760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B175Cu, 0x3B1764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B1764u;
label_3b1764:
    // 0x3b1764: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3b1768:
    if (ctx->pc == 0x3B1768u) {
        ctx->pc = 0x3B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1764u;
        // 0x3b1768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B176Cu;
        goto label_3b176c;
    }
    ctx->pc = 0x3B1764u;
    {
        const bool branch_taken_0x3b1764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1764u;
        // 0x3b1768: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1764) {
            ctx->pc = 0x3B1788u;
            goto label_3b1788;
        }
    }
    ctx->pc = 0x3B176Cu;
label_3b176c:
    // 0x3b176c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3b176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b1770:
    // 0x3b1770: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3b1774:
    if (ctx->pc == 0x3B1774u) {
        ctx->pc = 0x3B1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1770u;
        // 0x3b1774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1778u;
        goto label_3b1778;
    }
    ctx->pc = 0x3B1770u;
    {
        const bool branch_taken_0x3b1770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B1774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1770u;
        // 0x3b1774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b1770) {
            ctx->pc = 0x3B1788u;
            goto label_3b1788;
        }
    }
    ctx->pc = 0x3B1778u;
label_3b1778:
    // 0x3b1778: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3b1778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_3b177c:
    // 0x3b177c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_3b1780:
    if (ctx->pc == 0x3B1780u) {
        ctx->pc = 0x3B1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B177Cu;
        // 0x3b1780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1784u;
        goto label_3b1784;
    }
    ctx->pc = 0x3B177Cu;
    {
        const bool branch_taken_0x3b177c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B1780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B177Cu;
        // 0x3b1780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b177c) {
            ctx->pc = 0x3B1788u;
            goto label_3b1788;
        }
    }
    ctx->pc = 0x3B1784u;
label_3b1784:
    // 0x3b1784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b1784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b1788:
    // 0x3b1788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b178c:
    // 0x3b178c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3b178cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b1790:
    // 0x3b1790: 0x3e00008  jr          $ra
label_3b1794:
    if (ctx->pc == 0x3B1794u) {
        ctx->pc = 0x3B1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1790u;
        // 0x3b1794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B1798u;
        goto label_3b1798;
    }
    ctx->pc = 0x3B1790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1790u;
        // 0x3b1794: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1798u;
label_3b1798:
    // 0x3b1798: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3b1798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3b179c:
    // 0x3b179c: 0x0  nop
    ctx->pc = 0x3b179cu;
    // NOP
    ctx->pc = 0x3b17a0u;
}
