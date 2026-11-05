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

// Function: sub_00337D48
// Address: 0x337d48 - 0x337d98
void sub_00337D48_0x337d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337D48_0x337d48");
#endif

    switch (ctx->pc) {
        case 0x337d70u: goto label_337d70;
        default: break;
    }

    ctx->pc = 0x337d48u;

    // 0x337d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337d4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337d50: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x337d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x337d54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x337d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x337d58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x337d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337d60: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x337d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337d64: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x337d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337d68: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337D68u;
    SET_GPR_U32(ctx, 31, 0x337D70u);
    ctx->pc = 0x337D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337D68u;
    // 0x337d6c: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337D68u, 0x337D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337D70u;
label_337d70:
    // 0x337d70: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x337d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337d74: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x337d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337d78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x337d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337d7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x337d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337d80: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x337d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x337d84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x337d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337d88: 0x3e00008  jr          $ra
    ctx->pc = 0x337D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D88u;
        // 0x337d8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337D90u;
    // 0x337d90: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x337d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x337d94: 0x0  nop
    ctx->pc = 0x337d94u;
    // NOP
    ctx->pc = 0x337d98u;
}
