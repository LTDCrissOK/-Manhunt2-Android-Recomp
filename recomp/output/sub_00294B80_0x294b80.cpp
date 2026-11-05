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

// Function: sub_00294B80
// Address: 0x294b80 - 0x294bb8
void sub_00294B80_0x294b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294B80_0x294b80");
#endif

    switch (ctx->pc) {
        case 0x294b94u: goto label_294b94;
        default: break;
    }

    ctx->pc = 0x294b80u;

    // 0x294b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294b84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294b88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x294b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x294b8c: 0xc0a75d4  jal         func_29D750
    ctx->pc = 0x294B8Cu;
    SET_GPR_U32(ctx, 31, 0x294B94u);
    ctx->pc = 0x294B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294B8Cu;
    // 0x294b90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D750u, 0x294B8Cu, 0x294B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294B94u;
label_294b94:
    // 0x294b94: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x294b98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x294b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b9c: 0x24632f30  addiu       $v1, $v1, 0x2F30
    ctx->pc = 0x294b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12080));
    // 0x294ba0: 0xa200027c  sb          $zero, 0x27C($s0)
    ctx->pc = 0x294ba0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 636), (uint8_t)GPR_U32(ctx, 0));
    // 0x294ba4: 0xae030278  sw          $v1, 0x278($s0)
    ctx->pc = 0x294ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 3));
    // 0x294ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294bac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x294bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x294BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294BB0u;
        // 0x294bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294BB8u;
}
