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

// Function: sub_00316030
// Address: 0x316030 - 0x316088
void sub_00316030_0x316030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316030_0x316030");
#endif

    switch (ctx->pc) {
        case 0x316054u: goto label_316054;
        default: break;
    }

    ctx->pc = 0x316030u;

    // 0x316030: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x316030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x316034: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x316034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x316038: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x316038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x31603c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31603Cu;
    {
        const bool branch_taken_0x31603c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31603Cu;
        // 0x316040: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31603c) {
            ctx->pc = 0x31605Cu;
            goto label_31605c;
        }
    }
    ctx->pc = 0x316044u;
    // 0x316044: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x316048: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x316048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31604c: 0xc0b580e  jal         func_2D6038
    ctx->pc = 0x31604Cu;
    SET_GPR_U32(ctx, 31, 0x316054u);
    ctx->pc = 0x316050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31604Cu;
    // 0x316050: 0x8c44bd20  lw          $a0, -0x42E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6038u, 0x31604Cu, 0x316054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316054u;
label_316054:
    // 0x316054: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x316054u;
    {
        const bool branch_taken_0x316054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316054u;
        // 0x316058: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316054) {
            ctx->pc = 0x316080u;
            goto label_316080;
        }
    }
    ctx->pc = 0x31605Cu;
label_31605c:
    // 0x31605c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31605Cu;
    {
        const bool branch_taken_0x31605c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x316060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31605Cu;
        // 0x316060: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31605c) {
            ctx->pc = 0x316078u;
            goto label_316078;
        }
    }
    ctx->pc = 0x316064u;
    // 0x316064: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x316064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x316068: 0x8c42bd40  lw          $v0, -0x42C0($v0)
    ctx->pc = 0x316068u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD40u));
    // 0x31606c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31606Cu;
    {
        const bool branch_taken_0x31606c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31606Cu;
        // 0x316070: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31606c) {
            ctx->pc = 0x316080u;
            goto label_316080;
        }
    }
    ctx->pc = 0x316074u;
    // 0x316074: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x316074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_316078:
    // 0x316078: 0x8c62bd3c  lw          $v0, -0x42C4($v1)
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950204)));
    // 0x31607c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31607cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_316080:
    // 0x316080: 0x3e00008  jr          $ra
    ctx->pc = 0x316080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316080u;
        // 0x316084: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316088u;
}
