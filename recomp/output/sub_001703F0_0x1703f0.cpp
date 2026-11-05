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

// Function: sub_001703F0
// Address: 0x1703f0 - 0x170458
void sub_001703F0_0x1703f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001703F0_0x1703f0");
#endif

    switch (ctx->pc) {
        case 0x170414u: goto label_170414;
        case 0x170420u: goto label_170420;
        case 0x170434u: goto label_170434;
        case 0x170444u: goto label_170444;
        default: break;
    }

    ctx->pc = 0x1703f0u;

    // 0x1703f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1703f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1703f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1703f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1703f8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1703f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1703fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1703fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170400: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x170400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x170404: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x170404u;
    {
        const bool branch_taken_0x170404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170404u;
        // 0x170408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170404) {
            ctx->pc = 0x170448u;
            goto label_170448;
        }
    }
    ctx->pc = 0x17040Cu;
    // 0x17040c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17040Cu;
    SET_GPR_U32(ctx, 31, 0x170414u);
    ctx->pc = 0x170410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17040Cu;
    // 0x170410: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17040Cu, 0x170414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170414u;
label_170414:
    // 0x170414: 0x8e050224  lw          $a1, 0x224($s0)
    ctx->pc = 0x170414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x170418: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x170418u;
    SET_GPR_U32(ctx, 31, 0x170420u);
    ctx->pc = 0x17041Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170418u;
    // 0x17041c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x170418u, 0x170420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170420u;
label_170420:
    // 0x170420: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x170420u;
    {
        const bool branch_taken_0x170420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170420u;
        // 0x170424: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170420) {
            ctx->pc = 0x17043Cu;
            goto label_17043c;
        }
    }
    ctx->pc = 0x170428u;
    // 0x170428: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x170428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x17042c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17042Cu;
    SET_GPR_U32(ctx, 31, 0x170434u);
    ctx->pc = 0x170430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17042Cu;
    // 0x170430: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17042Cu, 0x170434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170434u;
label_170434:
    // 0x170434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170434u;
    {
        const bool branch_taken_0x170434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170434u;
        // 0x170438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170434) {
            ctx->pc = 0x170448u;
            goto label_170448;
        }
    }
    ctx->pc = 0x17043Cu;
label_17043c:
    // 0x17043c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17043Cu;
    SET_GPR_U32(ctx, 31, 0x170444u);
    ctx->pc = 0x170440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17043Cu;
    // 0x170440: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17043Cu, 0x170444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170444u;
label_170444:
    // 0x170444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170448:
    // 0x170448: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x170448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17044c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17044cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170450: 0x3e00008  jr          $ra
    ctx->pc = 0x170450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170450u;
        // 0x170454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170458u;
}
