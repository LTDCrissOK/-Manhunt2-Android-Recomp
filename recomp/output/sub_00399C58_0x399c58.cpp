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

// Function: sub_00399C58
// Address: 0x399c58 - 0x399ca0
void sub_00399C58_0x399c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399C58_0x399c58");
#endif

    switch (ctx->pc) {
        case 0x399c74u: goto label_399c74;
        case 0x399c80u: goto label_399c80;
        case 0x399c88u: goto label_399c88;
        default: break;
    }

    ctx->pc = 0x399c58u;

    // 0x399c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x399c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x399c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399c60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x399c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x399c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x399c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x399c6c: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399C6Cu;
    SET_GPR_U32(ctx, 31, 0x399C74u);
    ctx->pc = 0x399C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C6Cu;
    // 0x399c70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399C6Cu, 0x399C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C74u;
label_399c74:
    // 0x399c74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c78: 0xc0e6728  jal         func_399CA0
    ctx->pc = 0x399C78u;
    SET_GPR_U32(ctx, 31, 0x399C80u);
    ctx->pc = 0x399C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C78u;
    // 0x399c7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CA0u, 0x399C78u, 0x399C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C80u;
label_399c80:
    // 0x399c80: 0xc0e6a78  jal         func_39A9E0
    ctx->pc = 0x399C80u;
    SET_GPR_U32(ctx, 31, 0x399C88u);
    ctx->pc = 0x399C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399C80u;
    // 0x399c84: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9E0u, 0x399C80u, 0x399C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C88u;
label_399c88:
    // 0x399c88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x399c88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399c8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x399c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399c94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399c98: 0x3e00008  jr          $ra
    ctx->pc = 0x399C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C98u;
        // 0x399c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399CA0u;
}
