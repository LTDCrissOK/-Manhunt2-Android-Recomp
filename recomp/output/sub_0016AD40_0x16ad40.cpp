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

// Function: sub_0016AD40
// Address: 0x16ad40 - 0x16ad98
void sub_0016AD40_0x16ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AD40_0x16ad40");
#endif

    ctx->pc = 0x16ad40u;

    // 0x16ad40: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16ad40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad44: 0x90c2002c  lbu         $v0, 0x2C($a2)
    ctx->pc = 0x16ad44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x16ad48: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x16ad48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x16ad4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ad50: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x16ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x16ad54: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x16ad54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x16ad58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ad5c: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16AD5Cu;
    {
        const bool branch_taken_0x16ad5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x16ad5c) {
            ctx->pc = 0x16AD60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AD5Cu;
            // 0x16ad60: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AD74u;
            goto label_16ad74;
        }
    }
    ctx->pc = 0x16AD64u;
    // 0x16ad64: 0x90c2002d  lbu         $v0, 0x2D($a2)
    ctx->pc = 0x16ad64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 45)));
    // 0x16ad68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ad6c: 0xa0c2002d  sb          $v0, 0x2D($a2)
    ctx->pc = 0x16ad6cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x16ad70: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x16ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_16ad74:
    // 0x16ad74: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x16ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16ad78: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AD78u;
    {
        const bool branch_taken_0x16ad78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16ad78) {
            ctx->pc = 0x16AD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AD78u;
            // 0x16ad7c: 0x90c2002c  lbu         $v0, 0x2C($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16AD8Cu;
            goto label_16ad8c;
        }
    }
    ctx->pc = 0x16AD80u;
    // 0x16ad80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ad84: 0xacc201a8  sw          $v0, 0x1A8($a2)
    ctx->pc = 0x16ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 424), GPR_U32(ctx, 2));
    // 0x16ad88: 0x90c2002c  lbu         $v0, 0x2C($a2)
    ctx->pc = 0x16ad88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 44)));
label_16ad8c:
    // 0x16ad8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ad90: 0x3e00008  jr          $ra
    ctx->pc = 0x16AD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16AD90u;
        // 0x16ad94: 0xa0c2002c  sb          $v0, 0x2C($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 44), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16AD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16AD98u;
}
