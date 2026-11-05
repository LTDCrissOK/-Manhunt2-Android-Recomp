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

// Function: sub_002D6BF0
// Address: 0x2d6bf0 - 0x2d6e90
void sub_002D6BF0_0x2d6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6BF0_0x2d6bf0");
#endif

    switch (ctx->pc) {
        case 0x2d6bf0u: goto label_2d6bf0;
        case 0x2d6bf4u: goto label_2d6bf4;
        case 0x2d6bf8u: goto label_2d6bf8;
        case 0x2d6bfcu: goto label_2d6bfc;
        case 0x2d6c00u: goto label_2d6c00;
        case 0x2d6c04u: goto label_2d6c04;
        case 0x2d6c08u: goto label_2d6c08;
        case 0x2d6c0cu: goto label_2d6c0c;
        case 0x2d6c10u: goto label_2d6c10;
        case 0x2d6c14u: goto label_2d6c14;
        case 0x2d6c18u: goto label_2d6c18;
        case 0x2d6c1cu: goto label_2d6c1c;
        case 0x2d6c20u: goto label_2d6c20;
        case 0x2d6c24u: goto label_2d6c24;
        case 0x2d6c28u: goto label_2d6c28;
        case 0x2d6c2cu: goto label_2d6c2c;
        case 0x2d6c30u: goto label_2d6c30;
        case 0x2d6c34u: goto label_2d6c34;
        case 0x2d6c38u: goto label_2d6c38;
        case 0x2d6c3cu: goto label_2d6c3c;
        case 0x2d6c40u: goto label_2d6c40;
        case 0x2d6c44u: goto label_2d6c44;
        case 0x2d6c48u: goto label_2d6c48;
        case 0x2d6c4cu: goto label_2d6c4c;
        case 0x2d6c50u: goto label_2d6c50;
        case 0x2d6c54u: goto label_2d6c54;
        case 0x2d6c58u: goto label_2d6c58;
        case 0x2d6c5cu: goto label_2d6c5c;
        case 0x2d6c60u: goto label_2d6c60;
        case 0x2d6c64u: goto label_2d6c64;
        case 0x2d6c68u: goto label_2d6c68;
        case 0x2d6c6cu: goto label_2d6c6c;
        case 0x2d6c70u: goto label_2d6c70;
        case 0x2d6c74u: goto label_2d6c74;
        case 0x2d6c78u: goto label_2d6c78;
        case 0x2d6c7cu: goto label_2d6c7c;
        case 0x2d6c80u: goto label_2d6c80;
        case 0x2d6c84u: goto label_2d6c84;
        case 0x2d6c88u: goto label_2d6c88;
        case 0x2d6c8cu: goto label_2d6c8c;
        case 0x2d6c90u: goto label_2d6c90;
        case 0x2d6c94u: goto label_2d6c94;
        case 0x2d6c98u: goto label_2d6c98;
        case 0x2d6c9cu: goto label_2d6c9c;
        case 0x2d6ca0u: goto label_2d6ca0;
        case 0x2d6ca4u: goto label_2d6ca4;
        case 0x2d6ca8u: goto label_2d6ca8;
        case 0x2d6cacu: goto label_2d6cac;
        case 0x2d6cb0u: goto label_2d6cb0;
        case 0x2d6cb4u: goto label_2d6cb4;
        case 0x2d6cb8u: goto label_2d6cb8;
        case 0x2d6cbcu: goto label_2d6cbc;
        case 0x2d6cc0u: goto label_2d6cc0;
        case 0x2d6cc4u: goto label_2d6cc4;
        case 0x2d6cc8u: goto label_2d6cc8;
        case 0x2d6cccu: goto label_2d6ccc;
        case 0x2d6cd0u: goto label_2d6cd0;
        case 0x2d6cd4u: goto label_2d6cd4;
        case 0x2d6cd8u: goto label_2d6cd8;
        case 0x2d6cdcu: goto label_2d6cdc;
        case 0x2d6ce0u: goto label_2d6ce0;
        case 0x2d6ce4u: goto label_2d6ce4;
        case 0x2d6ce8u: goto label_2d6ce8;
        case 0x2d6cecu: goto label_2d6cec;
        case 0x2d6cf0u: goto label_2d6cf0;
        case 0x2d6cf4u: goto label_2d6cf4;
        case 0x2d6cf8u: goto label_2d6cf8;
        case 0x2d6cfcu: goto label_2d6cfc;
        case 0x2d6d00u: goto label_2d6d00;
        case 0x2d6d04u: goto label_2d6d04;
        case 0x2d6d08u: goto label_2d6d08;
        case 0x2d6d0cu: goto label_2d6d0c;
        case 0x2d6d10u: goto label_2d6d10;
        case 0x2d6d14u: goto label_2d6d14;
        case 0x2d6d18u: goto label_2d6d18;
        case 0x2d6d1cu: goto label_2d6d1c;
        case 0x2d6d20u: goto label_2d6d20;
        case 0x2d6d24u: goto label_2d6d24;
        case 0x2d6d28u: goto label_2d6d28;
        case 0x2d6d2cu: goto label_2d6d2c;
        case 0x2d6d30u: goto label_2d6d30;
        case 0x2d6d34u: goto label_2d6d34;
        case 0x2d6d38u: goto label_2d6d38;
        case 0x2d6d3cu: goto label_2d6d3c;
        case 0x2d6d40u: goto label_2d6d40;
        case 0x2d6d44u: goto label_2d6d44;
        case 0x2d6d48u: goto label_2d6d48;
        case 0x2d6d4cu: goto label_2d6d4c;
        case 0x2d6d50u: goto label_2d6d50;
        case 0x2d6d54u: goto label_2d6d54;
        case 0x2d6d58u: goto label_2d6d58;
        case 0x2d6d5cu: goto label_2d6d5c;
        case 0x2d6d60u: goto label_2d6d60;
        case 0x2d6d64u: goto label_2d6d64;
        case 0x2d6d68u: goto label_2d6d68;
        case 0x2d6d6cu: goto label_2d6d6c;
        case 0x2d6d70u: goto label_2d6d70;
        case 0x2d6d74u: goto label_2d6d74;
        case 0x2d6d78u: goto label_2d6d78;
        case 0x2d6d7cu: goto label_2d6d7c;
        case 0x2d6d80u: goto label_2d6d80;
        case 0x2d6d84u: goto label_2d6d84;
        case 0x2d6d88u: goto label_2d6d88;
        case 0x2d6d8cu: goto label_2d6d8c;
        case 0x2d6d90u: goto label_2d6d90;
        case 0x2d6d94u: goto label_2d6d94;
        case 0x2d6d98u: goto label_2d6d98;
        case 0x2d6d9cu: goto label_2d6d9c;
        case 0x2d6da0u: goto label_2d6da0;
        case 0x2d6da4u: goto label_2d6da4;
        case 0x2d6da8u: goto label_2d6da8;
        case 0x2d6dacu: goto label_2d6dac;
        case 0x2d6db0u: goto label_2d6db0;
        case 0x2d6db4u: goto label_2d6db4;
        case 0x2d6db8u: goto label_2d6db8;
        case 0x2d6dbcu: goto label_2d6dbc;
        case 0x2d6dc0u: goto label_2d6dc0;
        case 0x2d6dc4u: goto label_2d6dc4;
        case 0x2d6dc8u: goto label_2d6dc8;
        case 0x2d6dccu: goto label_2d6dcc;
        case 0x2d6dd0u: goto label_2d6dd0;
        case 0x2d6dd4u: goto label_2d6dd4;
        case 0x2d6dd8u: goto label_2d6dd8;
        case 0x2d6ddcu: goto label_2d6ddc;
        case 0x2d6de0u: goto label_2d6de0;
        case 0x2d6de4u: goto label_2d6de4;
        case 0x2d6de8u: goto label_2d6de8;
        case 0x2d6decu: goto label_2d6dec;
        case 0x2d6df0u: goto label_2d6df0;
        case 0x2d6df4u: goto label_2d6df4;
        case 0x2d6df8u: goto label_2d6df8;
        case 0x2d6dfcu: goto label_2d6dfc;
        case 0x2d6e00u: goto label_2d6e00;
        case 0x2d6e04u: goto label_2d6e04;
        case 0x2d6e08u: goto label_2d6e08;
        case 0x2d6e0cu: goto label_2d6e0c;
        case 0x2d6e10u: goto label_2d6e10;
        case 0x2d6e14u: goto label_2d6e14;
        case 0x2d6e18u: goto label_2d6e18;
        case 0x2d6e1cu: goto label_2d6e1c;
        case 0x2d6e20u: goto label_2d6e20;
        case 0x2d6e24u: goto label_2d6e24;
        case 0x2d6e28u: goto label_2d6e28;
        case 0x2d6e2cu: goto label_2d6e2c;
        case 0x2d6e30u: goto label_2d6e30;
        case 0x2d6e34u: goto label_2d6e34;
        case 0x2d6e38u: goto label_2d6e38;
        case 0x2d6e3cu: goto label_2d6e3c;
        case 0x2d6e40u: goto label_2d6e40;
        case 0x2d6e44u: goto label_2d6e44;
        case 0x2d6e48u: goto label_2d6e48;
        case 0x2d6e4cu: goto label_2d6e4c;
        case 0x2d6e50u: goto label_2d6e50;
        case 0x2d6e54u: goto label_2d6e54;
        case 0x2d6e58u: goto label_2d6e58;
        case 0x2d6e5cu: goto label_2d6e5c;
        case 0x2d6e60u: goto label_2d6e60;
        case 0x2d6e64u: goto label_2d6e64;
        case 0x2d6e68u: goto label_2d6e68;
        case 0x2d6e6cu: goto label_2d6e6c;
        case 0x2d6e70u: goto label_2d6e70;
        case 0x2d6e74u: goto label_2d6e74;
        case 0x2d6e78u: goto label_2d6e78;
        case 0x2d6e7cu: goto label_2d6e7c;
        case 0x2d6e80u: goto label_2d6e80;
        case 0x2d6e84u: goto label_2d6e84;
        case 0x2d6e88u: goto label_2d6e88;
        case 0x2d6e8cu: goto label_2d6e8c;
        default: break;
    }

    ctx->pc = 0x2d6bf0u;

label_2d6bf0:
    // 0x2d6bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d6bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d6bf4:
    // 0x2d6bf4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2d6bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2d6bf8:
    // 0x2d6bf8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d6bf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d6bfc:
    // 0x2d6bfc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2d6bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2d6c00:
    // 0x2d6c00: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2d6c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c04:
    // 0x2d6c04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2d6c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2d6c08:
    // 0x2d6c08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2d6c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2d6c0c:
    // 0x2d6c0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d6c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6c10:
    // 0x2d6c10: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2d6c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2d6c14:
    // 0x2d6c14: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2d6c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2d6c18:
    // 0x2d6c18: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2d6c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2d6c1c:
    // 0x2d6c1c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d6c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2d6c20:
    // 0x2d6c20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d6c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2d6c24:
    // 0x2d6c24: 0xc09dcc6  jal         func_277318
label_2d6c28:
    if (ctx->pc == 0x2D6C28u) {
        ctx->pc = 0x2D6C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C24u;
        // 0x2d6c28: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C2Cu;
        goto label_2d6c2c;
    }
    ctx->pc = 0x2D6C24u;
    SET_GPR_U32(ctx, 31, 0x2D6C2Cu);
    ctx->pc = 0x2D6C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C24u;
    // 0x2d6c28: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x2D6C24u, 0x2D6C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C2Cu;
label_2d6c2c:
    // 0x2d6c2c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d6c2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c30:
    // 0x2d6c30: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_2d6c34:
    if (ctx->pc == 0x2D6C34u) {
        ctx->pc = 0x2D6C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C30u;
        // 0x2d6c34: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C38u;
        goto label_2d6c38;
    }
    ctx->pc = 0x2D6C30u;
    {
        const bool branch_taken_0x2d6c30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6c30) {
            ctx->pc = 0x2D6C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6C30u;
            // 0x2d6c34: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6C40u;
            goto label_2d6c40;
        }
    }
    ctx->pc = 0x2D6C38u;
label_2d6c38:
    // 0x2d6c38: 0x1000008a  b           . + 4 + (0x8A << 2)
label_2d6c3c:
    if (ctx->pc == 0x2D6C3Cu) {
        ctx->pc = 0x2D6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C38u;
        // 0x2d6c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C40u;
        goto label_2d6c40;
    }
    ctx->pc = 0x2D6C38u;
    {
        const bool branch_taken_0x2d6c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C38u;
        // 0x2d6c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c38) {
            ctx->pc = 0x2D6E64u;
            goto label_2d6e64;
        }
    }
    ctx->pc = 0x2D6C40u;
label_2d6c40:
    // 0x2d6c40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c44:
    // 0x2d6c44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d6c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c48:
    // 0x2d6c48: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6c4c:
    // 0x2d6c4c: 0x40f809  jalr        $v0
label_2d6c50:
    if (ctx->pc == 0x2D6C50u) {
        ctx->pc = 0x2D6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C4Cu;
        // 0x2d6c50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C54u;
        goto label_2d6c54;
    }
    ctx->pc = 0x2D6C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6C54u);
        ctx->pc = 0x2D6C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C4Cu;
        // 0x2d6c50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6C4Cu, 0x2D6C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6C54u;
label_2d6c54:
    // 0x2d6c54: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2d6c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d6c58:
    // 0x2d6c58: 0xc0b5af8  jal         func_2D6BE0
label_2d6c5c:
    if (ctx->pc == 0x2D6C5Cu) {
        ctx->pc = 0x2D6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C58u;
        // 0x2d6c5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C60u;
        goto label_2d6c60;
    }
    ctx->pc = 0x2D6C58u;
    SET_GPR_U32(ctx, 31, 0x2D6C60u);
    ctx->pc = 0x2D6C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6C58u;
    // 0x2d6c5c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6BE0u, 0x2D6C58u, 0x2D6C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6C60u;
label_2d6c60:
    // 0x2d6c60: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2d6c64:
    if (ctx->pc == 0x2D6C64u) {
        ctx->pc = 0x2D6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C60u;
        // 0x2d6c64: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C68u;
        goto label_2d6c68;
    }
    ctx->pc = 0x2D6C60u;
    {
        const bool branch_taken_0x2d6c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C60u;
        // 0x2d6c64: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c60) {
            ctx->pc = 0x2D6C7Cu;
            goto label_2d6c7c;
        }
    }
    ctx->pc = 0x2D6C68u;
label_2d6c68:
    // 0x2d6c68: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2d6c6c:
    // 0x2d6c6c: 0x40f809  jalr        $v0
label_2d6c70:
    if (ctx->pc == 0x2D6C70u) {
        ctx->pc = 0x2D6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C6Cu;
        // 0x2d6c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C74u;
        goto label_2d6c74;
    }
    ctx->pc = 0x2D6C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6C74u);
        ctx->pc = 0x2D6C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C6Cu;
        // 0x2d6c70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6C6Cu, 0x2D6C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6C74u;
label_2d6c74:
    // 0x2d6c74: 0x1000007b  b           . + 4 + (0x7B << 2)
label_2d6c78:
    if (ctx->pc == 0x2D6C78u) {
        ctx->pc = 0x2D6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C74u;
        // 0x2d6c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C7Cu;
        goto label_2d6c7c;
    }
    ctx->pc = 0x2D6C74u;
    {
        const bool branch_taken_0x2d6c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C74u;
        // 0x2d6c78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6c74) {
            ctx->pc = 0x2D6E64u;
            goto label_2d6e64;
        }
    }
    ctx->pc = 0x2D6C7Cu;
label_2d6c7c:
    // 0x2d6c7c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x2d6c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_2d6c80:
    // 0x2d6c80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c84:
    // 0x2d6c84: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d6c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6c88:
    // 0x2d6c88: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6c8c:
    // 0x2d6c8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d6c8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d6c90:
    // 0x2d6c90: 0x40f809  jalr        $v0
label_2d6c94:
    if (ctx->pc == 0x2D6C94u) {
        ctx->pc = 0x2D6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C90u;
        // 0x2d6c94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6C98u;
        goto label_2d6c98;
    }
    ctx->pc = 0x2D6C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6C98u);
        ctx->pc = 0x2D6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6C90u;
        // 0x2d6c94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6C90u, 0x2D6C98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6C98u;
label_2d6c98:
    // 0x2d6c98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6c9c:
    // 0x2d6c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6ca0:
    // 0x2d6ca0: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x2d6ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_2d6ca4:
    // 0x2d6ca4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6ca8:
    // 0x2d6ca8: 0x40f809  jalr        $v0
label_2d6cac:
    if (ctx->pc == 0x2D6CACu) {
        ctx->pc = 0x2D6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CA8u;
        // 0x2d6cac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6CB0u;
        goto label_2d6cb0;
    }
    ctx->pc = 0x2D6CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6CB0u);
        ctx->pc = 0x2D6CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CA8u;
        // 0x2d6cac: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6CA8u, 0x2D6CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6CB0u;
label_2d6cb0:
    // 0x2d6cb0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d6cb4:
    // 0x2d6cb4: 0x18600032  blez        $v1, . + 4 + (0x32 << 2)
label_2d6cb8:
    if (ctx->pc == 0x2D6CB8u) {
        ctx->pc = 0x2D6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CB4u;
        // 0x2d6cb8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6CBCu;
        goto label_2d6cbc;
    }
    ctx->pc = 0x2D6CB4u;
    {
        const bool branch_taken_0x2d6cb4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CB4u;
        // 0x2d6cb8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6cb4) {
            ctx->pc = 0x2D6D80u;
            goto label_2d6d80;
        }
    }
    ctx->pc = 0x2D6CBCu;
label_2d6cbc:
    // 0x2d6cbc: 0x26960034  addiu       $s6, $s4, 0x34
    ctx->pc = 0x2d6cbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_2d6cc0:
    // 0x2d6cc0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6cc4:
    // 0x2d6cc4: 0x0  nop
    ctx->pc = 0x2d6cc4u;
    // NOP
label_2d6cc8:
    // 0x2d6cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6ccc:
    // 0x2d6ccc: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x2d6cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_2d6cd0:
    // 0x2d6cd0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d6cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6cd4:
    // 0x2d6cd4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6cd8:
    // 0x2d6cd8: 0x26150001  addiu       $s5, $s0, 0x1
    ctx->pc = 0x2d6cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d6cdc:
    // 0x2d6cdc: 0x40f809  jalr        $v0
label_2d6ce0:
    if (ctx->pc == 0x2D6CE0u) {
        ctx->pc = 0x2D6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CDCu;
        // 0x2d6ce0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6CE4u;
        goto label_2d6ce4;
    }
    ctx->pc = 0x2D6CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6CE4u);
        ctx->pc = 0x2D6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CDCu;
        // 0x2d6ce0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6CDCu, 0x2D6CE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6CE4u;
label_2d6ce4:
    // 0x2d6ce4: 0x0  nop
    ctx->pc = 0x2d6ce4u;
    // NOP
label_2d6ce8:
    // 0x2d6ce8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2d6ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2d6cec:
    // 0x2d6cec: 0x1380c0  sll         $s0, $s3, 3
    ctx->pc = 0x2d6cecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_2d6cf0:
    // 0x2d6cf0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6cf4:
    // 0x2d6cf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6cf8:
    // 0x2d6cf8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d6cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d6cfc:
    // 0x2d6cfc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6d00:
    // 0x2d6d00: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2d6d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2d6d04:
    // 0x2d6d04: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6d08:
    // 0x2d6d08: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2d6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2d6d0c:
    // 0x2d6d0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d6d0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2d6d10:
    // 0x2d6d10: 0x40f809  jalr        $v0
label_2d6d14:
    if (ctx->pc == 0x2D6D14u) {
        ctx->pc = 0x2D6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D10u;
        // 0x2d6d14: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6D18u;
        goto label_2d6d18;
    }
    ctx->pc = 0x2D6D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6D18u);
        ctx->pc = 0x2D6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D10u;
        // 0x2d6d14: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6D10u, 0x2D6D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6D18u;
label_2d6d18:
    // 0x2d6d18: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2d6d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2d6d1c:
    // 0x2d6d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6d20:
    // 0x2d6d20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6d24:
    // 0x2d6d24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d6d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6d28:
    // 0x2d6d28: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d6d28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d6d2c:
    // 0x2d6d2c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2d6d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2d6d30:
    // 0x2d6d30: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6d34:
    // 0x2d6d34: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x2d6d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2d6d38:
    // 0x2d6d38: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2d6d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2d6d3c:
    // 0x2d6d3c: 0x40f809  jalr        $v0
label_2d6d40:
    if (ctx->pc == 0x2D6D40u) {
        ctx->pc = 0x2D6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D3Cu;
        // 0x2d6d40: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6D44u;
        goto label_2d6d44;
    }
    ctx->pc = 0x2D6D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6D44u);
        ctx->pc = 0x2D6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D3Cu;
        // 0x2d6d40: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6D3Cu, 0x2D6D44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6D44u;
label_2d6d44:
    // 0x2d6d44: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2d6d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2d6d48:
    // 0x2d6d48: 0x2a640004  slti        $a0, $s3, 0x4
    ctx->pc = 0x2d6d48u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_2d6d4c:
    // 0x2d6d4c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2d6d50:
    // 0x2d6d50: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2d6d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2d6d54:
    // 0x2d6d54: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x2d6d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2d6d58:
    // 0x2d6d58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d6d5c:
    // 0x2d6d5c: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x2d6d5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2d6d60:
    // 0x2d6d60: 0x1480ffe1  bnez        $a0, . + 4 + (-0x1F << 2)
label_2d6d64:
    if (ctx->pc == 0x2D6D64u) {
        ctx->pc = 0x2D6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D60u;
        // 0x2d6d64: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6D68u;
        goto label_2d6d68;
    }
    ctx->pc = 0x2D6D60u;
    {
        const bool branch_taken_0x2d6d60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D60u;
        // 0x2d6d64: 0x43900b  movn        $s2, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d60) {
            ctx->pc = 0x2D6CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6ce8;
        }
    }
    ctx->pc = 0x2D6D68u;
label_2d6d68:
    // 0x2d6d68: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d6d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d6d6c:
    // 0x2d6d6c: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x2d6d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d6d70:
    // 0x2d6d70: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2d6d70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2d6d74:
    // 0x2d6d74: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
label_2d6d78:
    if (ctx->pc == 0x2D6D78u) {
        ctx->pc = 0x2D6D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D74u;
        // 0x2d6d78: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6D7Cu;
        goto label_2d6d7c;
    }
    ctx->pc = 0x2D6D74u;
    {
        const bool branch_taken_0x2d6d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d6d74) {
            ctx->pc = 0x2D6D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6D74u;
            // 0x2d6d78: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6CC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6cc8;
        }
    }
    ctx->pc = 0x2D6D7Cu;
label_2d6d7c:
    // 0x2d6d7c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2d6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d6d80:
    // 0x2d6d80: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
label_2d6d84:
    if (ctx->pc == 0x2D6D84u) {
        ctx->pc = 0x2D6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D80u;
        // 0x2d6d84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6D88u;
        goto label_2d6d88;
    }
    ctx->pc = 0x2D6D80u;
    {
        const bool branch_taken_0x2d6d80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D6D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6D80u;
        // 0x2d6d84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6d80) {
            ctx->pc = 0x2D6E18u;
            goto label_2d6e18;
        }
    }
    ctx->pc = 0x2D6D88u;
label_2d6d88:
    // 0x2d6d88: 0x26930034  addiu       $s3, $s4, 0x34
    ctx->pc = 0x2d6d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
label_2d6d8c:
    // 0x2d6d8c: 0x0  nop
    ctx->pc = 0x2d6d8cu;
    // NOP
label_2d6d90:
    // 0x2d6d90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6d94:
    // 0x2d6d94: 0x27a5000c  addiu       $a1, $sp, 0xC
    ctx->pc = 0x2d6d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_2d6d98:
    // 0x2d6d98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6d9c:
    // 0x2d6d9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d6d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6da0:
    // 0x2d6da0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6da4:
    // 0x2d6da4: 0x40f809  jalr        $v0
label_2d6da8:
    if (ctx->pc == 0x2D6DA8u) {
        ctx->pc = 0x2D6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DA4u;
        // 0x2d6da8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6DACu;
        goto label_2d6dac;
    }
    ctx->pc = 0x2D6DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6DACu);
        ctx->pc = 0x2D6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DA4u;
        // 0x2d6da8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6DA4u, 0x2D6DACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6DACu;
label_2d6dac:
    // 0x2d6dac: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2d6dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2d6db0:
    // 0x2d6db0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6db4:
    // 0x2d6db4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6db8:
    // 0x2d6db8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d6db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6dbc:
    // 0x2d6dbc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d6dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d6dc0:
    // 0x2d6dc0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x2d6dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_2d6dc4:
    // 0x2d6dc4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6dc8:
    // 0x2d6dc8: 0x40f809  jalr        $v0
label_2d6dcc:
    if (ctx->pc == 0x2D6DCCu) {
        ctx->pc = 0x2D6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DC8u;
        // 0x2d6dcc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6DD0u;
        goto label_2d6dd0;
    }
    ctx->pc = 0x2D6DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6DD0u);
        ctx->pc = 0x2D6DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DC8u;
        // 0x2d6dcc: 0x2852821  addu        $a1, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6DC8u, 0x2D6DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6DD0u;
label_2d6dd0:
    // 0x2d6dd0: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2d6dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2d6dd4:
    // 0x2d6dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d6dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6dd8:
    // 0x2d6dd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6ddc:
    // 0x2d6ddc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2d6ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2d6de0:
    // 0x2d6de0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2d6de0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_2d6de4:
    // 0x2d6de4: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x2d6de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
label_2d6de8:
    // 0x2d6de8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2d6de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2d6dec:
    // 0x2d6dec: 0x40f809  jalr        $v0
label_2d6df0:
    if (ctx->pc == 0x2D6DF0u) {
        ctx->pc = 0x2D6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DECu;
        // 0x2d6df0: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6DF4u;
        goto label_2d6df4;
    }
    ctx->pc = 0x2D6DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6DF4u);
        ctx->pc = 0x2D6DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6DECu;
        // 0x2d6df0: 0x24a50034  addiu       $a1, $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6DECu, 0x2D6DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6DF4u;
label_2d6df4:
    // 0x2d6df4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2d6df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2d6df8:
    // 0x2d6df8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2d6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2d6dfc:
    // 0x2d6dfc: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2d6dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2d6e00:
    // 0x2d6e00: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x2d6e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_2d6e04:
    // 0x2d6e04: 0x205282a  slt         $a1, $s0, $a1
    ctx->pc = 0x2d6e04u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2d6e08:
    // 0x2d6e08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2d6e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d6e0c:
    // 0x2d6e0c: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x2d6e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2d6e10:
    // 0x2d6e10: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
label_2d6e14:
    if (ctx->pc == 0x2D6E14u) {
        ctx->pc = 0x2D6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E10u;
        // 0x2d6e14: 0x82900b  movn        $s2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E18u;
        goto label_2d6e18;
    }
    ctx->pc = 0x2D6E10u;
    {
        const bool branch_taken_0x2d6e10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E10u;
        // 0x2d6e14: 0x82900b  movn        $s2, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e10) {
            ctx->pc = 0x2D6D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6d90;
        }
    }
    ctx->pc = 0x2D6E18u;
label_2d6e18:
    // 0x2d6e18: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2d6e1c:
    if (ctx->pc == 0x2D6E1Cu) {
        ctx->pc = 0x2D6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E18u;
        // 0x2d6e1c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E20u;
        goto label_2d6e20;
    }
    ctx->pc = 0x2D6E18u;
    {
        const bool branch_taken_0x2d6e18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E18u;
        // 0x2d6e1c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e18) {
            ctx->pc = 0x2D6E50u;
            goto label_2d6e50;
        }
    }
    ctx->pc = 0x2D6E20u;
label_2d6e20:
    // 0x2d6e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d6e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e24:
    // 0x2d6e24: 0x26532000  addiu       $s3, $s2, 0x2000
    ctx->pc = 0x2d6e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8192));
label_2d6e28:
    // 0x2d6e28: 0x8c44bd2c  lw          $a0, -0x42D4($v0)
    ctx->pc = 0x2d6e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950188)));
label_2d6e2c:
    // 0x2d6e2c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2d6e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e30:
    // 0x2d6e30: 0xc0b4de0  jal         func_2D3780
label_2d6e34:
    if (ctx->pc == 0x2D6E34u) {
        ctx->pc = 0x2D6E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E30u;
        // 0x2d6e34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E38u;
        goto label_2d6e38;
    }
    ctx->pc = 0x2D6E30u;
    SET_GPR_U32(ctx, 31, 0x2D6E38u);
    ctx->pc = 0x2D6E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E30u;
    // 0x2d6e34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3780u, 0x2D6E30u, 0x2D6E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E38u;
label_2d6e38:
    // 0x2d6e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d6e3c:
    // 0x2d6e3c: 0xc0b5a02  jal         func_2D6808
label_2d6e40:
    if (ctx->pc == 0x2D6E40u) {
        ctx->pc = 0x2D6E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E3Cu;
        // 0x2d6e40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E44u;
        goto label_2d6e44;
    }
    ctx->pc = 0x2D6E3Cu;
    SET_GPR_U32(ctx, 31, 0x2D6E44u);
    ctx->pc = 0x2D6E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E3Cu;
    // 0x2d6e40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6808u, 0x2D6E3Cu, 0x2D6E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6E44u;
label_2d6e44:
    // 0x2d6e44: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x2d6e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_2d6e48:
    // 0x2d6e48: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
label_2d6e4c:
    if (ctx->pc == 0x2D6E4Cu) {
        ctx->pc = 0x2D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E48u;
        // 0x2d6e4c: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E50u;
        goto label_2d6e50;
    }
    ctx->pc = 0x2D6E48u;
    {
        const bool branch_taken_0x2d6e48 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x2D6E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E48u;
        // 0x2d6e4c: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6e48) {
            ctx->pc = 0x2D6E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6e38;
        }
    }
    ctx->pc = 0x2D6E50u;
label_2d6e50:
    // 0x2d6e50: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2d6e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2d6e54:
    // 0x2d6e54: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2d6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_2d6e58:
    // 0x2d6e58: 0x40f809  jalr        $v0
label_2d6e5c:
    if (ctx->pc == 0x2D6E5Cu) {
        ctx->pc = 0x2D6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E58u;
        // 0x2d6e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E60u;
        goto label_2d6e60;
    }
    ctx->pc = 0x2D6E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D6E60u);
        ctx->pc = 0x2D6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E58u;
        // 0x2d6e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6E58u, 0x2D6E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D6E60u;
label_2d6e60:
    // 0x2d6e60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d6e64:
    // 0x2d6e64: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2d6e64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d6e68:
    // 0x2d6e68: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2d6e68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d6e6c:
    // 0x2d6e6c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2d6e6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d6e70:
    // 0x2d6e70: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2d6e70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d6e74:
    // 0x2d6e74: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2d6e74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d6e78:
    // 0x2d6e78: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2d6e78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d6e7c:
    // 0x2d6e7c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2d6e7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d6e80:
    // 0x2d6e80: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d6e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d6e84:
    // 0x2d6e84: 0x3e00008  jr          $ra
label_2d6e88:
    if (ctx->pc == 0x2D6E88u) {
        ctx->pc = 0x2D6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E84u;
        // 0x2d6e88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D6E8Cu;
        goto label_2d6e8c;
    }
    ctx->pc = 0x2D6E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6E84u;
        // 0x2d6e88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6E8Cu;
label_2d6e8c:
    // 0x2d6e8c: 0x0  nop
    ctx->pc = 0x2d6e8cu;
    // NOP
    ctx->pc = 0x2d6e90u;
}
