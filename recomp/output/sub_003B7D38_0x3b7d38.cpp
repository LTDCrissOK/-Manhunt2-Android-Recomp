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

// Function: sub_003B7D38
// Address: 0x3b7d38 - 0x3b7df0
void sub_003B7D38_0x3b7d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B7D38_0x3b7d38");
#endif

    switch (ctx->pc) {
        case 0x3b7d68u: goto label_3b7d68;
        case 0x3b7dc0u: goto label_3b7dc0;
        default: break;
    }

    ctx->pc = 0x3b7d38u;

    // 0x3b7d38: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x3b7d38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x3b7d3c: 0x853825  or          $a3, $a0, $a1
    ctx->pc = 0x3b7d3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3b7d40: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3b7d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b7d44: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B7D44u;
    {
        const bool branch_taken_0x3b7d44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B7D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D44u;
        // 0x3b7d48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d44) {
            ctx->pc = 0x3B7D98u;
            goto label_3b7d98;
        }
    }
    ctx->pc = 0x3B7D4Cu;
    // 0x3b7d4c: 0x8ce90008  lw          $t1, 0x8($a3)
    ctx->pc = 0x3b7d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3b7d50: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B7D50u;
    {
        const bool branch_taken_0x3b7d50 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3B7D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D50u;
        // 0x3b7d54: 0x1255025  or          $t2, $t1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d50) {
            ctx->pc = 0x3B7D98u;
            goto label_3b7d98;
        }
    }
    ctx->pc = 0x3B7D58u;
    // 0x3b7d58: 0x24e80010  addiu       $t0, $a3, 0x10
    ctx->pc = 0x3b7d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3b7d5c: 0x3c0b0043  lui         $t3, 0x43
    ctx->pc = 0x3b7d5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)67 << 16));
    // 0x3b7d60: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3b7d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3b7d64: 0x0  nop
    ctx->pc = 0x3b7d64u;
    // NOP
label_3b7d68:
    // 0x3b7d68: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3b7d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3b7d6c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b7d6cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7d70: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x3b7d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3b7d74: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b7d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b7d78: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3b7d78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b7d7c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3b7d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b7d80: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3b7d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3b7d84: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3b7d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b7d88: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B7D88u;
    {
        const bool branch_taken_0x3b7d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D88u;
        // 0x3b7d8c: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d88) {
            ctx->pc = 0x3B7D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7d68;
        }
    }
    ctx->pc = 0x3B7D90u;
    // 0x3b7d90: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7D90u;
    {
        const bool branch_taken_0x3b7d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7D90u;
        // 0x3b7d94: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7d90) {
            ctx->pc = 0x3B7DA0u;
            goto label_3b7da0;
        }
    }
    ctx->pc = 0x3B7D98u;
label_3b7d98:
    // 0x3b7d98: 0x3c0b0043  lui         $t3, 0x43
    ctx->pc = 0x3b7d98u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)67 << 16));
    // 0x3b7d9c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3b7d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3b7da0:
    // 0x3b7da0: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B7DA0u;
    {
        const bool branch_taken_0x3b7da0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B7DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DA0u;
        // 0x3b7da4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7da0) {
            ctx->pc = 0x3B7DE8u;
            goto label_3b7de8;
        }
    }
    ctx->pc = 0x3B7DA8u;
    // 0x3b7da8: 0x8ce9000c  lw          $t1, 0xC($a3)
    ctx->pc = 0x3b7da8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x3b7dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b7dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7db0: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3B7DB0u;
    {
        const bool branch_taken_0x3b7db0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3B7DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DB0u;
        // 0x3b7db4: 0x1225025  or          $t2, $t1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7db0) {
            ctx->pc = 0x3B7DE8u;
            goto label_3b7de8;
        }
    }
    ctx->pc = 0x3B7DB8u;
    // 0x3b7db8: 0x24e80050  addiu       $t0, $a3, 0x50
    ctx->pc = 0x3b7db8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
    // 0x3b7dbc: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3b7dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_3b7dc0:
    // 0x3b7dc0: 0x1462821  addu        $a1, $t2, $a2
    ctx->pc = 0x3b7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x3b7dc4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3b7dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b7dc8: 0x1262021  addu        $a0, $t1, $a2
    ctx->pc = 0x3b7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x3b7dcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3b7dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3b7dd0: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x3b7dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b7dd4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3b7dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3b7dd8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x3b7dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x3b7ddc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3b7ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3b7de0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3B7DE0u;
    {
        const bool branch_taken_0x3b7de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B7DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7DE0u;
        // 0x3b7de4: 0x1061021  addu        $v0, $t0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7de0) {
            ctx->pc = 0x3B7DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b7dc0;
        }
    }
    ctx->pc = 0x3B7DE8u;
label_3b7de8:
    // 0x3b7de8: 0x80edf24  j           func_3B7C90
    ctx->pc = 0x3B7DE8u;
    ctx->pc = 0x3B7DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7DE8u;
    // 0x3b7dec: 0x2564ace0  addiu       $a0, $t3, -0x5320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294946016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7C90u, 0x3B7DE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B7DF0u;
}
