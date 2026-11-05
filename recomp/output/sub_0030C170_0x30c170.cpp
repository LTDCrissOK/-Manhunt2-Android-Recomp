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

// Function: sub_0030C170
// Address: 0x30c170 - 0x30c1b8
void sub_0030C170_0x30c170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C170_0x30c170");
#endif

    switch (ctx->pc) {
        case 0x30c184u: goto label_30c184;
        default: break;
    }

    ctx->pc = 0x30c170u;

    // 0x30c170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c178: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c17c: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x30C17Cu;
    SET_GPR_U32(ctx, 31, 0x30C184u);
    ctx->pc = 0x30C180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C17Cu;
    // 0x30c180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x30C17Cu, 0x30C184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C184u;
label_30c184:
    // 0x30c184: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x30c184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30c188: 0x22027  nor         $a0, $zero, $v0
    ctx->pc = 0x30c188u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x30c18c: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x30c18cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x30c190: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c190u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c194: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x30c194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x30c198: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x30c198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30c19c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c1a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30c1a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30c1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30c1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x30C1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1A8u;
        // 0x30c1ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C1B0u;
    // 0x30c1b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x30c1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c1b4: 0x0  nop
    ctx->pc = 0x30c1b4u;
    // NOP
    ctx->pc = 0x30c1b8u;
}
