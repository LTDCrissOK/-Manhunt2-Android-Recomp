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

// Function: sub_002CF6A0
// Address: 0x2cf6a0 - 0x2cf6f8
void sub_002CF6A0_0x2cf6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF6A0_0x2cf6a0");
#endif

    switch (ctx->pc) {
        case 0x2cf6b8u: goto label_2cf6b8;
        case 0x2cf6e4u: goto label_2cf6e4;
        default: break;
    }

    ctx->pc = 0x2cf6a0u;

    // 0x2cf6a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf6a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf6a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cf6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cf6ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf6acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf6b0: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CF6B0u;
    SET_GPR_U32(ctx, 31, 0x2CF6B8u);
    ctx->pc = 0x2CF6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6B0u;
    // 0x2cf6b4: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CF6B0u, 0x2CF6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6B8u;
label_2cf6b8:
    // 0x2cf6b8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2cf6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2cf6bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cf6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf6c0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x2cf6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2cf6c4: 0x246507ff  addiu       $a1, $v1, 0x7FF
    ctx->pc = 0x2cf6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
    // 0x2cf6c8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2cf6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2cf6cc: 0x24630ffe  addiu       $v1, $v1, 0xFFE
    ctx->pc = 0x2cf6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4094));
    // 0x2cf6d0: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x2cf6d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x2cf6d4: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x2cf6d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x2cf6d8: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x2cf6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x2cf6dc: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CF6DCu;
    SET_GPR_U32(ctx, 31, 0x2CF6E4u);
    ctx->pc = 0x2CF6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF6DCu;
    // 0x2cf6e0: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CF6DCu, 0x2CF6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6E4u;
label_2cf6e4:
    // 0x2cf6e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf6e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf6e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cf6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF6ECu;
        // 0x2cf6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF6F4u;
    // 0x2cf6f4: 0x0  nop
    ctx->pc = 0x2cf6f4u;
    // NOP
    ctx->pc = 0x2cf6f8u;
}
