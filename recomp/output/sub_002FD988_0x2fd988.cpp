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

// Function: sub_002FD988
// Address: 0x2fd988 - 0x2fd9c0
void sub_002FD988_0x2fd988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD988_0x2fd988");
#endif

    switch (ctx->pc) {
        case 0x2fd99cu: goto label_2fd99c;
        case 0x2fd9acu: goto label_2fd9ac;
        default: break;
    }

    ctx->pc = 0x2fd988u;

    // 0x2fd988: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fd988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fd98c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd990: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fd990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fd994: 0xc0bf4ee  jal         func_2FD3B8
    ctx->pc = 0x2FD994u;
    SET_GPR_U32(ctx, 31, 0x2FD99Cu);
    ctx->pc = 0x2FD998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD994u;
    // 0x2fd998: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD3B8u, 0x2FD994u, 0x2FD99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD99Cu;
label_2fd99c:
    // 0x2fd99c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FD99Cu;
    {
        const bool branch_taken_0x2fd99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd99c) {
            ctx->pc = 0x2FD9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD99Cu;
            // 0x2fd9a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD9B0u;
            goto label_2fd9b0;
        }
    }
    ctx->pc = 0x2FD9A4u;
    // 0x2fd9a4: 0xc0bf606  jal         func_2FD818
    ctx->pc = 0x2FD9A4u;
    SET_GPR_U32(ctx, 31, 0x2FD9ACu);
    ctx->pc = 0x2FD9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD9A4u;
    // 0x2fd9a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD818u, 0x2FD9A4u, 0x2FD9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD9ACu;
label_2fd9ac:
    // 0x2fd9ac: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2fd9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2fd9b0:
    // 0x2fd9b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd9b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd9b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fd9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD9B8u;
        // 0x2fd9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD9C0u;
}
