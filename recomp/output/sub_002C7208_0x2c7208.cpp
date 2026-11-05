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

// Function: sub_002C7208
// Address: 0x2c7208 - 0x2c7260
void sub_002C7208_0x2c7208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7208_0x2c7208");
#endif

    ctx->pc = 0x2c7208u;

    // 0x2c7208: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x2c7208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2c720c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2c720cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2c7210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C7210u;
    {
        const bool branch_taken_0x2c7210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7210u;
        // 0x2c7214: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7210) {
            ctx->pc = 0x2C7224u;
            goto label_2c7224;
        }
    }
    ctx->pc = 0x2C7218u;
    // 0x2c7218: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2c7218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x2c721c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C721Cu;
    {
        const bool branch_taken_0x2c721c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C721Cu;
        // 0x2c7220: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c721c) {
            ctx->pc = 0x2C7228u;
            goto label_2c7228;
        }
    }
    ctx->pc = 0x2C7224u;
label_2c7224:
    // 0x2c7224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c7224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7228:
    // 0x2c7228: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x2c7228u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2c722c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2c722cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c7230: 0xace50018  sw          $a1, 0x18($a3)
    ctx->pc = 0x2c7230u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 5));
    // 0x2c7234: 0x34c30001  ori         $v1, $a2, 0x1
    ctx->pc = 0x2c7234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x2c7238: 0xace6000c  sw          $a2, 0xC($a3)
    ctx->pc = 0x2c7238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 6));
    // 0x2c723c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2c723cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2c7240: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2c7240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2c7244: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x2c7244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x2c7248: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2c7248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2c724c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2c724cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2c7250: 0x8c625b80  lw          $v0, 0x5B80($v1)
    ctx->pc = 0x2c7250u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x575B80u));
    // 0x2c7254: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7254u;
        // 0x2c7258: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C725Cu;
    // 0x2c725c: 0x0  nop
    ctx->pc = 0x2c725cu;
    // NOP
    ctx->pc = 0x2c7260u;
}
