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

// Function: sub_001699A8
// Address: 0x1699a8 - 0x1699e8
void sub_001699A8_0x1699a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001699A8_0x1699a8");
#endif

    switch (ctx->pc) {
        case 0x1699d0u: goto label_1699d0;
        default: break;
    }

    ctx->pc = 0x1699a8u;

    // 0x1699a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1699a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1699ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1699acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1699b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1699b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1699b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1699b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699b8: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x1699b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x1699bc: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x1699bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x1699c0: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x1699c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x1699c4: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1699c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x1699c8: 0xc05a78a  jal         func_169E28
    ctx->pc = 0x1699C8u;
    SET_GPR_U32(ctx, 31, 0x1699D0u);
    ctx->pc = 0x1699CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1699C8u;
    // 0x1699cc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E28u, 0x1699C8u, 0x1699D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1699D0u;
label_1699d0:
    // 0x1699d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1699d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1699d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1699d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1699d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1699d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1699dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1699DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1699E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699DCu;
        // 0x1699e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1699DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1699E4u;
    // 0x1699e4: 0x0  nop
    ctx->pc = 0x1699e4u;
    // NOP
    ctx->pc = 0x1699e8u;
}
