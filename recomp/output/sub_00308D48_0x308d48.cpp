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

// Function: sub_00308D48
// Address: 0x308d48 - 0x308dc0
void sub_00308D48_0x308d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308D48_0x308d48");
#endif

    switch (ctx->pc) {
        case 0x308d48u: goto label_308d48;
        case 0x308d4cu: goto label_308d4c;
        case 0x308d50u: goto label_308d50;
        case 0x308d54u: goto label_308d54;
        case 0x308d58u: goto label_308d58;
        case 0x308d5cu: goto label_308d5c;
        case 0x308d60u: goto label_308d60;
        case 0x308d64u: goto label_308d64;
        case 0x308d68u: goto label_308d68;
        case 0x308d6cu: goto label_308d6c;
        case 0x308d70u: goto label_308d70;
        case 0x308d74u: goto label_308d74;
        case 0x308d78u: goto label_308d78;
        case 0x308d7cu: goto label_308d7c;
        case 0x308d80u: goto label_308d80;
        case 0x308d84u: goto label_308d84;
        case 0x308d88u: goto label_308d88;
        case 0x308d8cu: goto label_308d8c;
        case 0x308d90u: goto label_308d90;
        case 0x308d94u: goto label_308d94;
        case 0x308d98u: goto label_308d98;
        case 0x308d9cu: goto label_308d9c;
        case 0x308da0u: goto label_308da0;
        case 0x308da4u: goto label_308da4;
        case 0x308da8u: goto label_308da8;
        case 0x308dacu: goto label_308dac;
        case 0x308db0u: goto label_308db0;
        case 0x308db4u: goto label_308db4;
        case 0x308db8u: goto label_308db8;
        case 0x308dbcu: goto label_308dbc;
        default: break;
    }

    ctx->pc = 0x308d48u;

label_308d48:
    // 0x308d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_308d4c:
    // 0x308d4c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x308d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_308d50:
    // 0x308d50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_308d54:
    // 0x308d54: 0x244467f0  addiu       $a0, $v0, 0x67F0
    ctx->pc = 0x308d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26608));
label_308d58:
    // 0x308d58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x308d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_308d5c:
    // 0x308d5c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x308d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_308d60:
    // 0x308d60: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x308d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_308d64:
    // 0x308d64: 0x10000005  b           . + 4 + (0x5 << 2)
label_308d68:
    if (ctx->pc == 0x308D68u) {
        ctx->pc = 0x308D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D64u;
        // 0x308d68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D6Cu;
        goto label_308d6c;
    }
    ctx->pc = 0x308D64u;
    {
        const bool branch_taken_0x308d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D64u;
        // 0x308d68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d64) {
            ctx->pc = 0x308D7Cu;
            goto label_308d7c;
        }
    }
    ctx->pc = 0x308D6Cu;
label_308d6c:
    // 0x308d6c: 0x0  nop
    ctx->pc = 0x308d6cu;
    // NOP
label_308d70:
    // 0x308d70: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x308d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_308d74:
    // 0x308d74: 0x60f809  jalr        $v1
label_308d78:
    if (ctx->pc == 0x308D78u) {
        ctx->pc = 0x308D7Cu;
        goto label_308d7c;
    }
    ctx->pc = 0x308D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x308D7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308D74u, 0x308D7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308D7Cu;
label_308d7c:
    // 0x308d7c: 0x260567f0  addiu       $a1, $s0, 0x67F0
    ctx->pc = 0x308d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26608));
label_308d80:
    // 0x308d80: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x308d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_308d84:
    // 0x308d84: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_308d88:
    if (ctx->pc == 0x308D88u) {
        ctx->pc = 0x308D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D84u;
        // 0x308d88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D8Cu;
        goto label_308d8c;
    }
    ctx->pc = 0x308D84u;
    {
        const bool branch_taken_0x308d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D84u;
        // 0x308d88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d84) {
            ctx->pc = 0x308D90u;
            goto label_308d90;
        }
    }
    ctx->pc = 0x308D8Cu;
label_308d8c:
    // 0x308d8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x308d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_308d90:
    // 0x308d90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_308d94:
    if (ctx->pc == 0x308D94u) {
        ctx->pc = 0x308D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D90u;
        // 0x308d94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D98u;
        goto label_308d98;
    }
    ctx->pc = 0x308D90u;
    {
        const bool branch_taken_0x308d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D90u;
        // 0x308d94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d90) {
            ctx->pc = 0x308DA0u;
            goto label_308da0;
        }
    }
    ctx->pc = 0x308D98u;
label_308d98:
    // 0x308d98: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x308d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_308d9c:
    // 0x308d9c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x308d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_308da0:
    // 0x308da0: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_308da4:
    if (ctx->pc == 0x308DA4u) {
        ctx->pc = 0x308DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DA0u;
        // 0x308da4: 0x8c620218  lw          $v0, 0x218($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308DA8u;
        goto label_308da8;
    }
    ctx->pc = 0x308DA0u;
    {
        const bool branch_taken_0x308da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x308da0) {
            ctx->pc = 0x308DA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308DA0u;
            // 0x308da4: 0x8c620218  lw          $v0, 0x218($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308d70;
        }
    }
    ctx->pc = 0x308DA8u;
label_308da8:
    // 0x308da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308dac:
    // 0x308dac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308db0:
    // 0x308db0: 0x3e00008  jr          $ra
label_308db4:
    if (ctx->pc == 0x308DB4u) {
        ctx->pc = 0x308DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DB0u;
        // 0x308db4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308DB8u;
        goto label_308db8;
    }
    ctx->pc = 0x308DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DB0u;
        // 0x308db4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308DB8u;
label_308db8:
    // 0x308db8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x308db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_308dbc:
    // 0x308dbc: 0x0  nop
    ctx->pc = 0x308dbcu;
    // NOP
    ctx->pc = 0x308dc0u;
}
