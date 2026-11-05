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

// Function: sub_00216AA0
// Address: 0x216aa0 - 0x216b00
void sub_00216AA0_0x216aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216AA0_0x216aa0");
#endif

    switch (ctx->pc) {
        case 0x216ae4u: goto label_216ae4;
        default: break;
    }

    ctx->pc = 0x216aa0u;

    // 0x216aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216aa4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x216aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216aa8: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x216AA8u;
    {
        const bool branch_taken_0x216aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x216AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AA8u;
        // 0x216aac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216aa8) {
            ctx->pc = 0x216AF0u;
            goto label_216af0;
        }
    }
    ctx->pc = 0x216AB0u;
    // 0x216ab0: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x216ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x216ab4: 0x30623001  andi        $v0, $v1, 0x3001
    ctx->pc = 0x216ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12289);
    // 0x216ab8: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x216ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x216abc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216ABCu;
    {
        const bool branch_taken_0x216abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216ABCu;
        // 0x216ac0: 0x30627001  andi        $v0, $v1, 0x7001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28673);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216abc) {
            ctx->pc = 0x216AD0u;
            goto label_216ad0;
        }
    }
    ctx->pc = 0x216AC4u;
    // 0x216ac4: 0x38427001  xori        $v0, $v0, 0x7001
    ctx->pc = 0x216ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)28673);
    // 0x216ac8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x216AC8u;
    {
        const bool branch_taken_0x216ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AC8u;
        // 0x216acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ac8) {
            ctx->pc = 0x216AF4u;
            goto label_216af4;
        }
    }
    ctx->pc = 0x216AD0u;
label_216ad0:
    // 0x216ad0: 0x8ca20234  lw          $v0, 0x234($a1)
    ctx->pc = 0x216ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 564)));
    // 0x216ad4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x216AD4u;
    {
        const bool branch_taken_0x216ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ad4) {
            ctx->pc = 0x216AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216AD4u;
            // 0x216ad8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216AF4u;
            goto label_216af4;
        }
    }
    ctx->pc = 0x216ADCu;
    // 0x216adc: 0xc0ac91c  jal         func_2B2470
    ctx->pc = 0x216ADCu;
    SET_GPR_U32(ctx, 31, 0x216AE4u);
    ctx->pc = 0x216AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216ADCu;
    // 0x216ae0: 0x8c440224  lw          $a0, 0x224($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2470u, 0x216ADCu, 0x216AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AE4u;
label_216ae4:
    // 0x216ae4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x216ae4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ae8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x216AE8u;
    {
        const bool branch_taken_0x216ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AE8u;
        // 0x216aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ae8) {
            ctx->pc = 0x216AF4u;
            goto label_216af4;
        }
    }
    ctx->pc = 0x216AF0u;
label_216af0:
    // 0x216af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216af4:
    // 0x216af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216af8: 0x3e00008  jr          $ra
    ctx->pc = 0x216AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216AF8u;
        // 0x216afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216B00u;
}
