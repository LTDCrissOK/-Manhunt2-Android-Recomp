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

// Function: sub_00159D60
// Address: 0x159d60 - 0x159d98
void sub_00159D60_0x159d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159D60_0x159d60");
#endif

    switch (ctx->pc) {
        case 0x159d74u: goto label_159d74;
        case 0x159d7cu: goto label_159d7c;
        case 0x159d84u: goto label_159d84;
        default: break;
    }

    ctx->pc = 0x159d60u;

    // 0x159d60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x159d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x159d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159d68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x159d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x159d6c: 0xc04ef94  jal         func_13BE50
    ctx->pc = 0x159D6Cu;
    SET_GPR_U32(ctx, 31, 0x159D74u);
    ctx->pc = 0x159D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D6Cu;
    // 0x159d70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE50u, 0x159D6Cu, 0x159D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D74u;
label_159d74:
    // 0x159d74: 0xc04f356  jal         func_13CD58
    ctx->pc = 0x159D74u;
    SET_GPR_U32(ctx, 31, 0x159D7Cu);
    ctx->pc = 0x159D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D74u;
    // 0x159d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CD58u, 0x159D74u, 0x159D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D7Cu;
label_159d7c:
    // 0x159d7c: 0xc056b82  jal         func_15AE08
    ctx->pc = 0x159D7Cu;
    SET_GPR_U32(ctx, 31, 0x159D84u);
    ctx->pc = 0x159D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159D7Cu;
    // 0x159d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AE08u, 0x159D7Cu, 0x159D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159D84u;
label_159d84:
    // 0x159d84: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x159d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x159d88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159d8c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x159d8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159d90: 0x3e00008  jr          $ra
    ctx->pc = 0x159D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159D90u;
        // 0x159d94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159D98u;
}
