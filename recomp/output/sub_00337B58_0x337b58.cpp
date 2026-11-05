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

// Function: sub_00337B58
// Address: 0x337b58 - 0x337ba0
void sub_00337B58_0x337b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337B58_0x337b58");
#endif

    switch (ctx->pc) {
        case 0x337b80u: goto label_337b80;
        default: break;
    }

    ctx->pc = 0x337b58u;

    // 0x337b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337b5c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337b60: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x337b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x337b64: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x337b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x337b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x337b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337b70: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x337b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337b74: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x337b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337b78: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337B78u;
    SET_GPR_U32(ctx, 31, 0x337B80u);
    ctx->pc = 0x337B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337B78u;
    // 0x337b7c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337B78u, 0x337B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337B80u;
label_337b80:
    // 0x337b80: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x337b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337b84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x337b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337b88: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x337b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337b8c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x337b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337b90: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x337b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x337b94: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x337b94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337b98: 0x3e00008  jr          $ra
    ctx->pc = 0x337B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B98u;
        // 0x337b9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337BA0u;
}
