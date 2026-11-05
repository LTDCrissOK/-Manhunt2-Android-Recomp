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

// Function: sub_00140D48
// Address: 0x140d48 - 0x140d88
void sub_00140D48_0x140d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140D48_0x140d48");
#endif

    switch (ctx->pc) {
        case 0x140d60u: goto label_140d60;
        case 0x140d74u: goto label_140d74;
        default: break;
    }

    ctx->pc = 0x140d48u;

    // 0x140d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x140d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x140d4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x140d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x140d50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x140d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x140d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x140d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140d58: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x140D58u;
    SET_GPR_U32(ctx, 31, 0x140D60u);
    ctx->pc = 0x140D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D58u;
    // 0x140d5c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x140D58u, 0x140D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D60u;
label_140d60:
    // 0x140d60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x140d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140d64: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x140D64u;
    {
        const bool branch_taken_0x140d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x140D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D64u;
        // 0x140d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140d64) {
            ctx->pc = 0x140D78u;
            goto label_140d78;
        }
    }
    ctx->pc = 0x140D6Cu;
    // 0x140d6c: 0xc0504b6  jal         func_1412D8
    ctx->pc = 0x140D6Cu;
    SET_GPR_U32(ctx, 31, 0x140D74u);
    ctx->pc = 0x140D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x140D6Cu;
    // 0x140d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1412D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1412D8u, 0x140D6Cu, 0x140D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x140D74u;
label_140d74:
    // 0x140d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x140d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_140d78:
    // 0x140d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x140d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140d7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x140d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x140d80: 0x3e00008  jr          $ra
    ctx->pc = 0x140D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140D80u;
        // 0x140d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x140D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140D88u;
}
