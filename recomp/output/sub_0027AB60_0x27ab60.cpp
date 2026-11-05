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

// Function: sub_0027AB60
// Address: 0x27ab60 - 0x27aba0
void sub_0027AB60_0x27ab60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AB60_0x27ab60");
#endif

    switch (ctx->pc) {
        case 0x27ab80u: goto label_27ab80;
        case 0x27ab8cu: goto label_27ab8c;
        default: break;
    }

    ctx->pc = 0x27ab60u;

    // 0x27ab60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ab64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ab68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ab68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27ab70: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27ab74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ab74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab78: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x27AB78u;
    SET_GPR_U32(ctx, 31, 0x27AB80u);
    ctx->pc = 0x27AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB78u;
    // 0x27ab7c: 0x2484ede8  addiu       $a0, $a0, -0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x27AB78u, 0x27AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB80u;
label_27ab80:
    // 0x27ab80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab84: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27AB84u;
    SET_GPR_U32(ctx, 31, 0x27AB8Cu);
    ctx->pc = 0x27AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB84u;
    // 0x27ab88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27AB84u, 0x27AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB8Cu;
label_27ab8c:
    // 0x27ab8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ab8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ab90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27ab90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ab94: 0x3e00008  jr          $ra
    ctx->pc = 0x27AB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB94u;
        // 0x27ab98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB9Cu;
    // 0x27ab9c: 0x0  nop
    ctx->pc = 0x27ab9cu;
    // NOP
    ctx->pc = 0x27aba0u;
}
