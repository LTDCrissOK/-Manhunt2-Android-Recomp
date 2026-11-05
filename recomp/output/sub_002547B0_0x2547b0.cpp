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

// Function: sub_002547B0
// Address: 0x2547b0 - 0x254808
void sub_002547B0_0x2547b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002547B0_0x2547b0");
#endif

    switch (ctx->pc) {
        case 0x2547d4u: goto label_2547d4;
        case 0x2547f0u: goto label_2547f0;
        default: break;
    }

    ctx->pc = 0x2547b0u;

    // 0x2547b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2547b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2547b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2547b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2547b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2547b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2547bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2547bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2547c0: 0x8e021020  lw          $v0, 0x1020($s0)
    ctx->pc = 0x2547c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x2547c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2547C4u;
    {
        const bool branch_taken_0x2547c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2547c4) {
            ctx->pc = 0x2547E8u;
            goto label_2547e8;
        }
    }
    ctx->pc = 0x2547CCu;
    // 0x2547cc: 0xc095368  jal         func_254DA0
    ctx->pc = 0x2547CCu;
    SET_GPR_U32(ctx, 31, 0x2547D4u);
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x2547CCu, 0x2547D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547D4u;
label_2547d4:
    // 0x2547d4: 0x8e031020  lw          $v1, 0x1020($s0)
    ctx->pc = 0x2547d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x2547d8: 0x90440020  lbu         $a0, 0x20($v0)
    ctx->pc = 0x2547d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2547dc: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x2547dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2547e0: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2547E0u;
    {
        const bool branch_taken_0x2547e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2547e0) {
            ctx->pc = 0x2547E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2547E0u;
            // 0x2547e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2547F8u;
            goto label_2547f8;
        }
    }
    ctx->pc = 0x2547E8u;
label_2547e8:
    // 0x2547e8: 0xc095368  jal         func_254DA0
    ctx->pc = 0x2547E8u;
    SET_GPR_U32(ctx, 31, 0x2547F0u);
    ctx->pc = 0x2547ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547E8u;
    // 0x2547ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x2547E8u, 0x2547F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2547F0u;
label_2547f0:
    // 0x2547f0: 0xae021020  sw          $v0, 0x1020($s0)
    ctx->pc = 0x2547f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4128), GPR_U32(ctx, 2));
    // 0x2547f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2547f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2547f8:
    // 0x2547f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2547f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2547fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2547fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x254800: 0x3e00008  jr          $ra
    ctx->pc = 0x254800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254800u;
        // 0x254804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254808u;
}
