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

// Function: sub_00399B58
// Address: 0x399b58 - 0x399b90
void sub_00399B58_0x399b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399B58_0x399b58");
#endif

    switch (ctx->pc) {
        case 0x399b6cu: goto label_399b6c;
        case 0x399b74u: goto label_399b74;
        case 0x399b7cu: goto label_399b7c;
        default: break;
    }

    ctx->pc = 0x399b58u;

    // 0x399b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399b60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399b64: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399B64u;
    SET_GPR_U32(ctx, 31, 0x399B6Cu);
    ctx->pc = 0x399B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B64u;
    // 0x399b68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399B64u, 0x399B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B6Cu;
label_399b6c:
    // 0x399b6c: 0xc0e66e4  jal         func_399B90
    ctx->pc = 0x399B6Cu;
    SET_GPR_U32(ctx, 31, 0x399B74u);
    ctx->pc = 0x399B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B6Cu;
    // 0x399b70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399B90u, 0x399B6Cu, 0x399B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B74u;
label_399b74:
    // 0x399b74: 0xc0e6a78  jal         func_39A9E0
    ctx->pc = 0x399B74u;
    SET_GPR_U32(ctx, 31, 0x399B7Cu);
    ctx->pc = 0x399B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399B74u;
    // 0x399b78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9E0u, 0x399B74u, 0x399B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399B7Cu;
label_399b7c:
    // 0x399b7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399b80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399b80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399b88: 0x3e00008  jr          $ra
    ctx->pc = 0x399B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399B88u;
        // 0x399b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399B90u;
}
