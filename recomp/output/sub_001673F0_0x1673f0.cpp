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

// Function: sub_001673F0
// Address: 0x1673f0 - 0x167468
void sub_001673F0_0x1673f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001673F0_0x1673f0");
#endif

    switch (ctx->pc) {
        case 0x167414u: goto label_167414;
        case 0x167420u: goto label_167420;
        case 0x167434u: goto label_167434;
        case 0x167444u: goto label_167444;
        case 0x167450u: goto label_167450;
        default: break;
    }

    ctx->pc = 0x1673f0u;

    // 0x1673f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1673f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1673f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1673f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1673f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1673f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1673fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1673fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167400: 0x8e0203c4  lw          $v0, 0x3C4($s0)
    ctx->pc = 0x167400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x167404: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x167404u;
    {
        const bool branch_taken_0x167404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167404u;
        // 0x167408: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167404) {
            ctx->pc = 0x167454u;
            goto label_167454;
        }
    }
    ctx->pc = 0x16740Cu;
    // 0x16740c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16740Cu;
    SET_GPR_U32(ctx, 31, 0x167414u);
    ctx->pc = 0x167410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16740Cu;
    // 0x167410: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16740Cu, 0x167414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167414u;
label_167414:
    // 0x167414: 0x8e0503c4  lw          $a1, 0x3C4($s0)
    ctx->pc = 0x167414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x167418: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x167418u;
    SET_GPR_U32(ctx, 31, 0x167420u);
    ctx->pc = 0x16741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167418u;
    // 0x16741c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x167418u, 0x167420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167420u;
label_167420:
    // 0x167420: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x167420u;
    {
        const bool branch_taken_0x167420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167420u;
        // 0x167424: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167420) {
            ctx->pc = 0x16743Cu;
            goto label_16743c;
        }
    }
    ctx->pc = 0x167428u;
    // 0x167428: 0xae0003c4  sw          $zero, 0x3C4($s0)
    ctx->pc = 0x167428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
    // 0x16742c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16742Cu;
    SET_GPR_U32(ctx, 31, 0x167434u);
    ctx->pc = 0x167430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16742Cu;
    // 0x167430: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16742Cu, 0x167434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167434u;
label_167434:
    // 0x167434: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x167434u;
    {
        const bool branch_taken_0x167434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167434u;
        // 0x167438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167434) {
            ctx->pc = 0x167454u;
            goto label_167454;
        }
    }
    ctx->pc = 0x16743Cu;
label_16743c:
    // 0x16743c: 0xc059cbe  jal         func_1672F8
    ctx->pc = 0x16743Cu;
    SET_GPR_U32(ctx, 31, 0x167444u);
    ctx->pc = 0x167440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16743Cu;
    // 0x167440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1672F8u, 0x16743Cu, 0x167444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167444u;
label_167444:
    // 0x167444: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x167444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167448: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x167448u;
    SET_GPR_U32(ctx, 31, 0x167450u);
    ctx->pc = 0x16744Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167448u;
    // 0x16744c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x167448u, 0x167450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167450u;
label_167450:
    // 0x167450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167454:
    // 0x167454: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x167454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167458: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x167458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16745c: 0x3e00008  jr          $ra
    ctx->pc = 0x16745Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16745Cu;
        // 0x167460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16745Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167464u;
    // 0x167464: 0x0  nop
    ctx->pc = 0x167464u;
    // NOP
    ctx->pc = 0x167468u;
}
