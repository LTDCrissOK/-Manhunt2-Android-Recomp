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

// Function: sub_003ABB28
// Address: 0x3abb28 - 0x3abb70
void sub_003ABB28_0x3abb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABB28_0x3abb28");
#endif

    switch (ctx->pc) {
        case 0x3abb44u: goto label_3abb44;
        case 0x3abb50u: goto label_3abb50;
        case 0x3abb58u: goto label_3abb58;
        default: break;
    }

    ctx->pc = 0x3abb28u;

    // 0x3abb28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3abb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3abb2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3abb2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3abb30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3abb30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abb34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3abb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3abb38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3abb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3abb3c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3ABB3Cu;
    SET_GPR_U32(ctx, 31, 0x3ABB44u);
    ctx->pc = 0x3ABB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB3Cu;
    // 0x3abb40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3ABB3Cu, 0x3ABB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB44u;
label_3abb44:
    // 0x3abb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3abb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abb48: 0xc0eaedc  jal         func_3ABB70
    ctx->pc = 0x3ABB48u;
    SET_GPR_U32(ctx, 31, 0x3ABB50u);
    ctx->pc = 0x3ABB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB48u;
    // 0x3abb4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ABB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ABB70u, 0x3ABB48u, 0x3ABB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB50u;
label_3abb50:
    // 0x3abb50: 0xc0ea7de  jal         func_3A9F78
    ctx->pc = 0x3ABB50u;
    SET_GPR_U32(ctx, 31, 0x3ABB58u);
    ctx->pc = 0x3ABB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABB50u;
    // 0x3abb54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F78u, 0x3ABB50u, 0x3ABB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABB58u;
label_3abb58:
    // 0x3abb58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3abb58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3abb5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3abb5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3abb60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3abb60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3abb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3abb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3abb68: 0x3e00008  jr          $ra
    ctx->pc = 0x3ABB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABB68u;
        // 0x3abb6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ABB70u;
}
