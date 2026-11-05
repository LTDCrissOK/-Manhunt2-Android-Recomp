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

// Function: sub_002D3268
// Address: 0x2d3268 - 0x2d32b0
void sub_002D3268_0x2d3268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3268_0x2d3268");
#endif

    switch (ctx->pc) {
        case 0x2d3298u: goto label_2d3298;
        default: break;
    }

    ctx->pc = 0x2d3268u;

    // 0x2d3268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d326c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d326cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d3270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d3270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3274: 0x24423da8  addiu       $v0, $v0, 0x3DA8
    ctx->pc = 0x2d3274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15784));
    // 0x2d3278: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d327c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d3280: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d3280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d3284: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d3284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d3288: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d3288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d328c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2d328cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2d3290: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D3290u;
    SET_GPR_U32(ctx, 31, 0x2D3298u);
    ctx->pc = 0x2D3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3290u;
    // 0x2d3294: 0x24a50ea8  addiu       $a1, $a1, 0xEA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D3290u, 0x2D3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3298u;
label_2d3298:
    // 0x2d3298: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3298u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d329c: 0xa200000c  sb          $zero, 0xC($s0)
    ctx->pc = 0x2d329cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d32a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d32a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d32a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d32a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d32a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D32A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D32ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32A8u;
        // 0x2d32ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D32A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D32B0u;
}
