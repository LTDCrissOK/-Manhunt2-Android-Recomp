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

// Function: sub_00145C30
// Address: 0x145c30 - 0x145c78
void sub_00145C30_0x145c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145C30_0x145c30");
#endif

    switch (ctx->pc) {
        case 0x145c48u: goto label_145c48;
        case 0x145c64u: goto label_145c64;
        default: break;
    }

    ctx->pc = 0x145c30u;

    // 0x145c30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x145c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145c34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x145c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x145c38: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x145c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x145c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c40: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x145C40u;
    SET_GPR_U32(ctx, 31, 0x145C48u);
    ctx->pc = 0x145C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C40u;
    // 0x145c44: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x145C40u, 0x145C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C48u;
label_145c48:
    // 0x145c48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x145c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x145c4c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x145C4Cu;
    {
        const bool branch_taken_0x145c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x145C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C4Cu;
        // 0x145c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c4c) {
            ctx->pc = 0x145C68u;
            goto label_145c68;
        }
    }
    ctx->pc = 0x145C54u;
    // 0x145c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x145c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x145c5c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x145C5Cu;
    SET_GPR_U32(ctx, 31, 0x145C64u);
    ctx->pc = 0x145C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145C5Cu;
    // 0x145c60: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x145C5Cu, 0x145C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145C64u;
label_145c64:
    // 0x145c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145c68:
    // 0x145c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x145c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145c6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x145c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x145c70: 0x3e00008  jr          $ra
    ctx->pc = 0x145C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C70u;
        // 0x145c74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145C78u;
}
