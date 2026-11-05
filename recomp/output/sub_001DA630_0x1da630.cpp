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

// Function: sub_001DA630
// Address: 0x1da630 - 0x1da698
void sub_001DA630_0x1da630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA630_0x1da630");
#endif

    switch (ctx->pc) {
        case 0x1da650u: goto label_1da650;
        case 0x1da65cu: goto label_1da65c;
        case 0x1da66cu: goto label_1da66c;
        case 0x1da674u: goto label_1da674;
        default: break;
    }

    ctx->pc = 0x1da630u;

    // 0x1da630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1da634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1da638: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1da638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1da63c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da640: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da644: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1da644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da648: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1DA648u;
    SET_GPR_U32(ctx, 31, 0x1DA650u);
    ctx->pc = 0x1DA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA648u;
    // 0x1da64c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1DA648u, 0x1DA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA650u;
label_1da650:
    // 0x1da650: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1da650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da654: 0xc076442  jal         func_1D9108
    ctx->pc = 0x1DA654u;
    SET_GPR_U32(ctx, 31, 0x1DA65Cu);
    ctx->pc = 0x1DA658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA654u;
    // 0x1da658: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9108u, 0x1DA654u, 0x1DA65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA65Cu;
label_1da65c:
    // 0x1da65c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1da65cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da660: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1da660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da664: 0xc076574  jal         func_1D95D0
    ctx->pc = 0x1DA664u;
    SET_GPR_U32(ctx, 31, 0x1DA66Cu);
    ctx->pc = 0x1DA668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA664u;
    // 0x1da668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D95D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95D0u, 0x1DA664u, 0x1DA66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA66Cu;
label_1da66c:
    // 0x1da66c: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x1DA66Cu;
    SET_GPR_U32(ctx, 31, 0x1DA674u);
    ctx->pc = 0x1DA670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA66Cu;
    // 0x1da670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x1DA66Cu, 0x1DA674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA674u;
label_1da674:
    // 0x1da674: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1da674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da67c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1da67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da680: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1da680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da684: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA684u;
        // 0x1da688: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA68Cu;
    // 0x1da68c: 0x0  nop
    ctx->pc = 0x1da68cu;
    // NOP
    // 0x1da690: 0x27bd1450  addiu       $sp, $sp, 0x1450
    ctx->pc = 0x1da690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 5200));
    // 0x1da694: 0x0  nop
    ctx->pc = 0x1da694u;
    // NOP
    ctx->pc = 0x1da698u;
}
