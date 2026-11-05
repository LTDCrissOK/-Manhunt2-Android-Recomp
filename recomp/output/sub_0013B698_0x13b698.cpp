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

// Function: sub_0013B698
// Address: 0x13b698 - 0x13b6e8
void sub_0013B698_0x13b698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B698_0x13b698");
#endif

    switch (ctx->pc) {
        case 0x13b6d8u: goto label_13b6d8;
        default: break;
    }

    ctx->pc = 0x13b698u;

    // 0x13b698: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13b698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13b69c: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x13b69cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x13b6a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b6a4: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x13b6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x13b6a8: 0x9083046c  lbu         $v1, 0x46C($a0)
    ctx->pc = 0x13b6a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x13b6ac: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x13b6acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13b6b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b6b4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x13b6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13b6b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b6bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b6c0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x13b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13b6c4: 0x8ca4020c  lw          $a0, 0x20C($a1)
    ctx->pc = 0x13b6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x13b6c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B6C8u;
    {
        const bool branch_taken_0x13b6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6C8u;
        // 0x13b6cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6c8) {
            ctx->pc = 0x13B6DCu;
            goto label_13b6dc;
        }
    }
    ctx->pc = 0x13B6D0u;
    // 0x13b6d0: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x13B6D0u;
    SET_GPR_U32(ctx, 31, 0x13B6D8u);
    ctx->pc = 0x13B6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6D0u;
    // 0x13b6d4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x13B6D0u, 0x13B6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B6D8u;
label_13b6d8:
    // 0x13b6d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b6d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13b6dc:
    // 0x13b6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13B6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B6DCu;
        // 0x13b6e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B6E4u;
    // 0x13b6e4: 0x0  nop
    ctx->pc = 0x13b6e4u;
    // NOP
    ctx->pc = 0x13b6e8u;
}
