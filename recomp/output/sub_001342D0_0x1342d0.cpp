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

// Function: sub_001342D0
// Address: 0x1342d0 - 0x134318
void sub_001342D0_0x1342d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001342D0_0x1342d0");
#endif

    switch (ctx->pc) {
        case 0x1342e8u: goto label_1342e8;
        case 0x1342f8u: goto label_1342f8;
        default: break;
    }

    ctx->pc = 0x1342d0u;

    // 0x1342d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1342d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1342d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1342d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1342d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1342d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1342dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1342dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1342e0: 0xc04d154  jal         func_134550
    ctx->pc = 0x1342E0u;
    SET_GPR_U32(ctx, 31, 0x1342E8u);
    ctx->pc = 0x1342E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342E0u;
    // 0x1342e4: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134550u, 0x1342E0u, 0x1342E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342E8u;
label_1342e8:
    // 0x1342e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1342E8u;
    {
        const bool branch_taken_0x1342e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1342ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342E8u;
        // 0x1342ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342e8) {
            ctx->pc = 0x134300u;
            goto label_134300;
        }
    }
    ctx->pc = 0x1342F0u;
    // 0x1342f0: 0xc04b3f8  jal         func_12CFE0
    ctx->pc = 0x1342F0u;
    SET_GPR_U32(ctx, 31, 0x1342F8u);
    ctx->pc = 0x1342F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1342F0u;
    // 0x1342f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFE0u, 0x1342F0u, 0x1342F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1342F8u;
label_1342f8:
    // 0x1342f8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1342F8u;
    {
        const bool branch_taken_0x1342f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1342FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1342F8u;
        // 0x1342fc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1342f8) {
            ctx->pc = 0x134308u;
            goto label_134308;
        }
    }
    ctx->pc = 0x134300u;
label_134300:
    // 0x134300: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x134300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x134304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_134308:
    // 0x134308: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13430c: 0x3e00008  jr          $ra
    ctx->pc = 0x13430Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13430Cu;
        // 0x134310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13430Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134314u;
    // 0x134314: 0x0  nop
    ctx->pc = 0x134314u;
    // NOP
    ctx->pc = 0x134318u;
}
