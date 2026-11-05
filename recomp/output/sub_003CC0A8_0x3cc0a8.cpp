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

// Function: sub_003CC0A8
// Address: 0x3cc0a8 - 0x3cc0f8
void sub_003CC0A8_0x3cc0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC0A8_0x3cc0a8");
#endif

    switch (ctx->pc) {
        case 0x3cc0d4u: goto label_3cc0d4;
        default: break;
    }

    ctx->pc = 0x3cc0a8u;

    // 0x3cc0a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3cc0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3cc0ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3cc0acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3cc0b0: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x3cc0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x3cc0b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3cc0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc0b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3cc0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3cc0bc: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x3cc0bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3cc0c0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3cc0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3cc0c4: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x3cc0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x3cc0c8: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x3cc0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x3cc0cc: 0xc0f2cba  jal         func_3CB2E8
    ctx->pc = 0x3CC0CCu;
    SET_GPR_U32(ctx, 31, 0x3CC0D4u);
    ctx->pc = 0x3CC0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC0CCu;
    // 0x3cc0d0: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CB2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CB2E8u, 0x3CC0CCu, 0x3CC0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC0D4u;
label_3cc0d4:
    // 0x3cc0d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3cc0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3cc0d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cc0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc0dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3cc0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cc0e0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3cc0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3cc0e4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3cc0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3cc0e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cc0e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cc0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0ECu;
        // 0x3cc0f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC0F4u;
    // 0x3cc0f4: 0x0  nop
    ctx->pc = 0x3cc0f4u;
    // NOP
    ctx->pc = 0x3cc0f8u;
}
