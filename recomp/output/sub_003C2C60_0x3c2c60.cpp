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

// Function: sub_003C2C60
// Address: 0x3c2c60 - 0x3c2cd8
void sub_003C2C60_0x3c2c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C2C60_0x3c2c60");
#endif

    switch (ctx->pc) {
        case 0x3c2c78u: goto label_3c2c78;
        case 0x3c2ca8u: goto label_3c2ca8;
        default: break;
    }

    ctx->pc = 0x3c2c60u;

    // 0x3c2c60: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3c2c60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2c64: 0x81220000  lb          $v0, 0x0($t1)
    ctx->pc = 0x3c2c64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3c2c68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C2C68u;
    {
        const bool branch_taken_0x3c2c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C2C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C68u;
        // 0x3c2c6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2c68) {
            ctx->pc = 0x3C2C90u;
            goto label_3c2c90;
        }
    }
    ctx->pc = 0x3C2C70u;
    // 0x3c2c70: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3c2c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3c2c74: 0x0  nop
    ctx->pc = 0x3c2c74u;
    // NOP
label_3c2c78:
    // 0x3c2c78: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x3c2c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x3c2c7c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3c2c7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c2c80: 0x0  nop
    ctx->pc = 0x3c2c80u;
    // NOP
    // 0x3c2c84: 0x0  nop
    ctx->pc = 0x3c2c84u;
    // NOP
    // 0x3c2c88: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C2C88u;
    {
        const bool branch_taken_0x3c2c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c2c88) {
            ctx->pc = 0x3C2C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C2C88u;
            // 0x3c2c8c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C2C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2c78;
        }
    }
    ctx->pc = 0x3C2C90u;
label_3c2c90:
    // 0x3c2c90: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c2c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3c2c94: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x3C2C94u;
    {
        const bool branch_taken_0x3c2c94 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x3C2C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2C94u;
        // 0x3c2c98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2c94) {
            ctx->pc = 0x3C2CD0u;
            goto label_3c2cd0;
        }
    }
    ctx->pc = 0x3C2C9Cu;
    // 0x3c2c9c: 0xe93021  addu        $a2, $a3, $t1
    ctx->pc = 0x3c2c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3c2ca0: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x3c2ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c2ca4: 0x0  nop
    ctx->pc = 0x3c2ca4u;
    // NOP
label_3c2ca8:
    // 0x3c2ca8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3c2ca8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3c2cac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3c2cacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3c2cb0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3c2cb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3c2cb4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3c2cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3c2cb8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3c2cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3c2cbc: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x3c2cbcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c2cc0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3c2cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3c2cc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3c2cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3c2cc8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3C2CC8u;
    {
        const bool branch_taken_0x3c2cc8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CC8u;
        // 0x3c2ccc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c2cc8) {
            ctx->pc = 0x3C2CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c2ca8;
        }
    }
    ctx->pc = 0x3C2CD0u;
label_3c2cd0:
    // 0x3c2cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3C2CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C2CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C2CD0u;
        // 0x3c2cd4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C2CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C2CD8u;
}
