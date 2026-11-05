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

// Function: sub_0010B2B0
// Address: 0x10b2b0 - 0x10b320
void sub_0010B2B0_0x10b2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B2B0_0x10b2b0");
#endif

    switch (ctx->pc) {
        case 0x10b2c4u: goto label_10b2c4;
        case 0x10b304u: goto label_10b304;
        default: break;
    }

    ctx->pc = 0x10b2b0u;

    // 0x10b2b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b2b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b2b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10b2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10b2bc: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B2BCu;
    SET_GPR_U32(ctx, 31, 0x10B2C4u);
    ctx->pc = 0x10B2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2BCu;
    // 0x10b2c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B2BCu, 0x10B2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B2C4u;
label_10b2c4:
    // 0x10b2c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b2c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b2c8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b2cc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10B2CCu;
    {
        const bool branch_taken_0x10b2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2CCu;
        // 0x10b2d0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2cc) {
            ctx->pc = 0x10B30Cu;
            goto label_10b30c;
        }
    }
    ctx->pc = 0x10B2D4u;
    // 0x10b2d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b2d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b2dc: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b2e0: 0x8c8300b0  lw          $v1, 0xB0($a0)
    ctx->pc = 0x10b2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x10b2e4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x10B2E4u;
    {
        const bool branch_taken_0x10b2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B2E4u;
        // 0x10b2e8: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b2e4) {
            ctx->pc = 0x10B30Cu;
            goto label_10b30c;
        }
    }
    ctx->pc = 0x10B2ECu;
    // 0x10b2ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10b2f0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10b2f4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x10b2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10b2f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10b2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10b2fc: 0xc0441fa  jal         func_1107E8
    ctx->pc = 0x10B2FCu;
    SET_GPR_U32(ctx, 31, 0x10B304u);
    ctx->pc = 0x10B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B2FCu;
    // 0x10b300: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1107E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1107E8u, 0x10B2FCu, 0x10B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B304u;
label_10b304:
    // 0x10b304: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B304u;
    {
        const bool branch_taken_0x10b304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B304u;
        // 0x10b308: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b304) {
            ctx->pc = 0x10B310u;
            goto label_10b310;
        }
    }
    ctx->pc = 0x10B30Cu;
label_10b30c:
    // 0x10b30c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b310:
    // 0x10b310: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b314: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10b314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b318: 0x3e00008  jr          $ra
    ctx->pc = 0x10B318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B318u;
        // 0x10b31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B320u;
}
