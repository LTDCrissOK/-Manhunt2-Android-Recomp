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

// Function: sub_0035D5B0
// Address: 0x35d5b0 - 0x35d5f0
void sub_0035D5B0_0x35d5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D5B0_0x35d5b0");
#endif

    switch (ctx->pc) {
        case 0x35d5ccu: goto label_35d5cc;
        default: break;
    }

    ctx->pc = 0x35d5b0u;

    // 0x35d5b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d5b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d5b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35d5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35d5bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d5bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5c0: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x35d5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35d5c4: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x35D5C4u;
    SET_GPR_U32(ctx, 31, 0x35D5CCu);
    ctx->pc = 0x35D5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D5C4u;
    // 0x35d5c8: 0x84a50004  lh          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x35D5C4u, 0x35D5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D5CCu;
label_35d5cc:
    // 0x35d5cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d5ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d5d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35d5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x35D5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5D8u;
        // 0x35d5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D5E0u;
    // 0x35d5e0: 0x0  nop
    ctx->pc = 0x35d5e0u;
    // NOP
    // 0x35d5e4: 0x0  nop
    ctx->pc = 0x35d5e4u;
    // NOP
    // 0x35d5e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35d5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35d5ec: 0x0  nop
    ctx->pc = 0x35d5ecu;
    // NOP
    ctx->pc = 0x35d5f0u;
}
