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

// Function: sub_00152058
// Address: 0x152058 - 0x1520c0
void sub_00152058_0x152058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152058_0x152058");
#endif

    switch (ctx->pc) {
        case 0x1520b4u: goto label_1520b4;
        default: break;
    }

    ctx->pc = 0x152058u;

    // 0x152058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x152058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15205c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x152060: 0x9082046c  lbu         $v0, 0x46C($a0)
    ctx->pc = 0x152060u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x152064: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x152064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x152068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15206c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15206cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x152070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x152070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152074: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x152074u;
    {
        const bool branch_taken_0x152074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152074u;
        // 0x152078: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152074) {
            ctx->pc = 0x1520B4u;
            goto label_1520b4;
        }
    }
    ctx->pc = 0x15207Cu;
    // 0x15207c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x15207cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x152080: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x152084: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x152084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x152088: 0x8c42020c  lw          $v0, 0x20C($v0)
    ctx->pc = 0x152088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x15208c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15208Cu;
    {
        const bool branch_taken_0x15208c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x152090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15208Cu;
        // 0x152090: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15208c) {
            ctx->pc = 0x1520B8u;
            goto label_1520b8;
        }
    }
    ctx->pc = 0x152094u;
    // 0x152094: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x152094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x152098: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x152098u;
    {
        const bool branch_taken_0x152098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152098u;
        // 0x15209c: 0x641021  addu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152098) {
            ctx->pc = 0x1520B8u;
            goto label_1520b8;
        }
    }
    ctx->pc = 0x1520A0u;
    // 0x1520a0: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x1520a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1520a4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1520A4u;
    {
        const bool branch_taken_0x1520a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1520a4) {
            ctx->pc = 0x1520B8u;
            goto label_1520b8;
        }
    }
    ctx->pc = 0x1520ACu;
    // 0x1520ac: 0xc0cda26  jal         func_336898
    ctx->pc = 0x1520ACu;
    SET_GPR_U32(ctx, 31, 0x1520B4u);
    ctx->pc = 0x1520B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1520ACu;
    // 0x1520b0: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x1520ACu, 0x1520B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1520B4u;
label_1520b4:
    // 0x1520b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1520b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1520b8:
    // 0x1520b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1520B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1520BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520B8u;
        // 0x1520bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1520B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1520C0u;
}
