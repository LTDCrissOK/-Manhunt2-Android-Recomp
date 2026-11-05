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

// Function: sub_001F6F28
// Address: 0x1f6f28 - 0x1f6f70
void sub_001F6F28_0x1f6f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6F28_0x1f6f28");
#endif

    switch (ctx->pc) {
        case 0x1f6f50u: goto label_1f6f50;
        case 0x1f6f60u: goto label_1f6f60;
        default: break;
    }

    ctx->pc = 0x1f6f28u;

    // 0x1f6f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6f2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6f30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f6f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f6f34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6f38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6F38u;
    {
        const bool branch_taken_0x1f6f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F38u;
        // 0x1f6f3c: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f38) {
            ctx->pc = 0x1F6F60u;
            goto label_1f6f60;
        }
    }
    ctx->pc = 0x1F6F40u;
    // 0x1f6f40: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f6f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f6f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f48: 0xc080904  jal         func_202410
    ctx->pc = 0x1F6F48u;
    SET_GPR_U32(ctx, 31, 0x1F6F50u);
    ctx->pc = 0x1F6F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6F48u;
    // 0x1f6f4c: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202410u, 0x1F6F48u, 0x1F6F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F50u;
label_1f6f50:
    // 0x1f6f50: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f6f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f6f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6f58: 0xc07fb04  jal         func_1FEC10
    ctx->pc = 0x1F6F58u;
    SET_GPR_U32(ctx, 31, 0x1F6F60u);
    ctx->pc = 0x1F6F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6F58u;
    // 0x1f6f5c: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEC10u, 0x1F6F58u, 0x1F6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6F60u;
label_1f6f60:
    // 0x1f6f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6f64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f6f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6f68: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6F68u;
        // 0x1f6f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6F70u;
}
