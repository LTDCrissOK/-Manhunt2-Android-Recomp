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

// Function: sub_002D3DC0
// Address: 0x2d3dc0 - 0x2d3df0
void sub_002D3DC0_0x2d3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3DC0_0x2d3dc0");
#endif

    switch (ctx->pc) {
        case 0x2d3ddcu: goto label_2d3ddc;
        default: break;
    }

    ctx->pc = 0x2d3dc0u;

    // 0x2d3dc0: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x2d3dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2d3dc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2d3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2d3dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d3dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d3dcc: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x2d3dccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2d3dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3dd4: 0xc0c2c18  jal         func_30B060
    ctx->pc = 0x2D3DD4u;
    SET_GPR_U32(ctx, 31, 0x2D3DDCu);
    ctx->pc = 0x30B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B060u, 0x2D3DD4u, 0x2D3DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3DDCu;
label_2d3ddc:
    // 0x2d3ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3de0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2d3de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d3de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3DE4u;
        // 0x2d3de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3DECu;
    // 0x2d3dec: 0x0  nop
    ctx->pc = 0x2d3decu;
    // NOP
    ctx->pc = 0x2d3df0u;
}
