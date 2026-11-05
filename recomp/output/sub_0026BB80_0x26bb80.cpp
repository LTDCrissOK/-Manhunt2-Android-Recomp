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

// Function: sub_0026BB80
// Address: 0x26bb80 - 0x26bbb8
void sub_0026BB80_0x26bb80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BB80_0x26bb80");
#endif

    switch (ctx->pc) {
        case 0x26bb94u: goto label_26bb94;
        default: break;
    }

    ctx->pc = 0x26bb80u;

    // 0x26bb80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bb84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26bb88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26bb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26bb8c: 0xc09baa8  jal         func_26EAA0
    ctx->pc = 0x26BB8Cu;
    SET_GPR_U32(ctx, 31, 0x26BB94u);
    ctx->pc = 0x26BB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BB8Cu;
    // 0x26bb90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EAA0u, 0x26BB8Cu, 0x26BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BB94u;
label_26bb94:
    // 0x26bb94: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x26bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x26bb98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26bb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bb9c: 0x24632848  addiu       $v1, $v1, 0x2848
    ctx->pc = 0x26bb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10312));
    // 0x26bba0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26bba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26bba4: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x26bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x26bba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bbac: 0x3e00008  jr          $ra
    ctx->pc = 0x26BBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BBACu;
        // 0x26bbb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BBB4u;
    // 0x26bbb4: 0x0  nop
    ctx->pc = 0x26bbb4u;
    // NOP
    ctx->pc = 0x26bbb8u;
}
