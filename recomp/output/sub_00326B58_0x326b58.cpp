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

// Function: sub_00326B58
// Address: 0x326b58 - 0x326b88
void sub_00326B58_0x326b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326B58_0x326b58");
#endif

    switch (ctx->pc) {
        case 0x326b7cu: goto label_326b7c;
        default: break;
    }

    ctx->pc = 0x326b58u;

    // 0x326b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x326b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x326b5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x326b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x326b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x326b64: 0x3c050032  lui         $a1, 0x32
    ctx->pc = 0x326b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)50 << 16));
    // 0x326b68: 0x24a56cb8  addiu       $a1, $a1, 0x6CB8
    ctx->pc = 0x326b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27832));
    // 0x326b6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x326b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326b70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x326b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326b74: 0xc0c8a76  jal         func_3229D8
    ctx->pc = 0x326B74u;
    SET_GPR_U32(ctx, 31, 0x326B7Cu);
    ctx->pc = 0x326B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326B74u;
    // 0x326b78: 0xa4400008  sh          $zero, 0x8($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3229D8u, 0x326B74u, 0x326B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326B7Cu;
label_326b7c:
    // 0x326b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x326b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326b80: 0x3e00008  jr          $ra
    ctx->pc = 0x326B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326B80u;
        // 0x326b84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326B88u;
}
