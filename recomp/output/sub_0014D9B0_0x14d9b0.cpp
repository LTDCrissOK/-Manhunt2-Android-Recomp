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

// Function: sub_0014D9B0
// Address: 0x14d9b0 - 0x14da08
void sub_0014D9B0_0x14d9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D9B0_0x14d9b0");
#endif

    switch (ctx->pc) {
        case 0x14d9c8u: goto label_14d9c8;
        case 0x14d9f8u: goto label_14d9f8;
        default: break;
    }

    ctx->pc = 0x14d9b0u;

    // 0x14d9b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d9b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d9b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d9b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d9bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d9bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d9c0: 0xc0536be  jal         func_14DAF8
    ctx->pc = 0x14D9C0u;
    SET_GPR_U32(ctx, 31, 0x14D9C8u);
    ctx->pc = 0x14D9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9C0u;
    // 0x14d9c4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAF8u, 0x14D9C0u, 0x14D9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9C8u;
label_14d9c8:
    // 0x14d9c8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14D9C8u;
    {
        const bool branch_taken_0x14d9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d9c8) {
            ctx->pc = 0x14D9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D9C8u;
            // 0x14d9cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D9FCu;
            goto label_14d9fc;
        }
    }
    ctx->pc = 0x14D9D0u;
    // 0x14d9d0: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14d9d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x14d9d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x14d9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x14d9d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d9dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d9e0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x14d9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d9e4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D9E4u;
    {
        const bool branch_taken_0x14d9e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9E4u;
        // 0x14d9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d9e4) {
            ctx->pc = 0x14D9F8u;
            goto label_14d9f8;
        }
    }
    ctx->pc = 0x14D9ECu;
    // 0x14d9ec: 0x24060022  addiu       $a2, $zero, 0x22
    ctx->pc = 0x14d9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14d9f0: 0xc04dbd4  jal         func_136F50
    ctx->pc = 0x14D9F0u;
    SET_GPR_U32(ctx, 31, 0x14D9F8u);
    ctx->pc = 0x14D9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D9F0u;
    // 0x14d9f4: 0x24070014  addiu       $a3, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F50u, 0x14D9F0u, 0x14D9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9F8u;
label_14d9f8:
    // 0x14d9f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d9f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14d9fc:
    // 0x14d9fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14da00: 0x3e00008  jr          $ra
    ctx->pc = 0x14DA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14DA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA00u;
        // 0x14da04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14DA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14DA08u;
}
