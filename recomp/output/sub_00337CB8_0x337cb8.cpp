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

// Function: sub_00337CB8
// Address: 0x337cb8 - 0x337d00
void sub_00337CB8_0x337cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337CB8_0x337cb8");
#endif

    switch (ctx->pc) {
        case 0x337ce0u: goto label_337ce0;
        default: break;
    }

    ctx->pc = 0x337cb8u;

    // 0x337cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337cbc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x337cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337cc0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x337cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x337cc4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x337cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x337cc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337ccc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x337cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337cd0: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x337cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337cd4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x337cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x337cd8: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x337CD8u;
    SET_GPR_U32(ctx, 31, 0x337CE0u);
    ctx->pc = 0x337CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337CD8u;
    // 0x337cdc: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x337CD8u, 0x337CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337CE0u;
label_337ce0:
    // 0x337ce0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x337ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x337ce4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x337ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337ce8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x337ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337cec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x337cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337cf0: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x337cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x337cf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x337cf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x337CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CF8u;
        // 0x337cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337D00u;
}
