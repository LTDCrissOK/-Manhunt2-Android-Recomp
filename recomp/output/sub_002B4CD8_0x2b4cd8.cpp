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

// Function: sub_002B4CD8
// Address: 0x2b4cd8 - 0x2b4fd8
void sub_002B4CD8_0x2b4cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4CD8_0x2b4cd8");
#endif

    switch (ctx->pc) {
        case 0x2b4d2cu: goto label_2b4d2c;
        case 0x2b4d30u: goto label_2b4d30;
        case 0x2b4d40u: goto label_2b4d40;
        case 0x2b4d4cu: goto label_2b4d4c;
        case 0x2b4d60u: goto label_2b4d60;
        case 0x2b4d84u: goto label_2b4d84;
        case 0x2b4da0u: goto label_2b4da0;
        case 0x2b4dbcu: goto label_2b4dbc;
        case 0x2b4de8u: goto label_2b4de8;
        case 0x2b4dfcu: goto label_2b4dfc;
        case 0x2b4e0cu: goto label_2b4e0c;
        case 0x2b4e40u: goto label_2b4e40;
        case 0x2b4e6cu: goto label_2b4e6c;
        case 0x2b4e7cu: goto label_2b4e7c;
        case 0x2b4e94u: goto label_2b4e94;
        case 0x2b4eacu: goto label_2b4eac;
        case 0x2b4ec0u: goto label_2b4ec0;
        case 0x2b4ec8u: goto label_2b4ec8;
        case 0x2b4f0cu: goto label_2b4f0c;
        case 0x2b4f90u: goto label_2b4f90;
        case 0x2b4f98u: goto label_2b4f98;
        default: break;
    }

    ctx->pc = 0x2b4cd8u;

    // 0x2b4cd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b4cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b4cdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b4cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2b4ce0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b4ce0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4ce4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b4ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2b4ce8: 0x2642001c  addiu       $v0, $s2, 0x1C
    ctx->pc = 0x2b4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x2b4cec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b4cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2b4cf0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2b4cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2b4cf4: 0x26530040  addiu       $s3, $s2, 0x40
    ctx->pc = 0x2b4cf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2b4cf8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2b4cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2b4cfc: 0x26540880  addiu       $s4, $s2, 0x880
    ctx->pc = 0x2b4cfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 2176));
    // 0x2b4d00: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2b4d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x2b4d04: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b4d04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4d08: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2b4d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x2b4d0c: 0x3c160047  lui         $s6, 0x47
    ctx->pc = 0x2b4d0cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)71 << 16));
    // 0x2b4d10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b4d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2b4d14: 0x3c170057  lui         $s7, 0x57
    ctx->pc = 0x2b4d14u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)87 << 16));
    // 0x2b4d18: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2b4d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x2b4d1c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2b4d1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d20: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2b4d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2b4d24: 0xc082ea8  jal         func_20BAA0
    ctx->pc = 0x2B4D24u;
    SET_GPR_U32(ctx, 31, 0x2B4D2Cu);
    ctx->pc = 0x2B4D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D24u;
    // 0x2b4d28: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20BAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAA0u, 0x2B4D24u, 0x2B4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D2Cu;
label_2b4d2c:
    // 0x2b4d2c: 0xae35001c  sw          $s5, 0x1C($s1)
    ctx->pc = 0x2b4d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 21));
label_2b4d30:
    // 0x2b4d30: 0x26c5f950  addiu       $a1, $s6, -0x6B0
    ctx->pc = 0x2b4d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965584));
    // 0x2b4d34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b4d34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d38: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2B4D38u;
    SET_GPR_U32(ctx, 31, 0x2B4D40u);
    ctx->pc = 0x2B4D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D38u;
    // 0x2b4d3c: 0x26e44ec0  addiu       $a0, $s7, 0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 20160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2B4D38u, 0x2B4D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D40u;
label_2b4d40:
    // 0x2b4d40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4d40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d44: 0xc0aedb0  jal         func_2BB6C0
    ctx->pc = 0x2B4D44u;
    SET_GPR_U32(ctx, 31, 0x2B4D4Cu);
    ctx->pc = 0x2B4D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D44u;
    // 0x2b4d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6C0u, 0x2B4D44u, 0x2B4D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D4Cu;
label_2b4d4c:
    // 0x2b4d4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2b4d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d54: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b4d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d58: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2B4D58u;
    SET_GPR_U32(ctx, 31, 0x2B4D60u);
    ctx->pc = 0x2B4D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D58u;
    // 0x2b4d5c: 0x26730110  addiu       $s3, $s3, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2B4D58u, 0x2B4D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D60u;
label_2b4d60:
    // 0x2b4d60: 0xa2200020  sb          $zero, 0x20($s1)
    ctx->pc = 0x2b4d60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b4d64: 0x26310110  addiu       $s1, $s1, 0x110
    ctx->pc = 0x2b4d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x2b4d68: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x2b4d68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2b4d6c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2B4D6Cu;
    {
        const bool branch_taken_0x2b4d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4d6c) {
            ctx->pc = 0x2B4D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4D6Cu;
            // 0x2b4d70: 0xae35001c  sw          $s5, 0x1C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4d30;
        }
    }
    ctx->pc = 0x2B4D74u;
    // 0x2b4d74: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b4d74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2b4d78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4d7c: 0xc0acee4  jal         func_2B3B90
    ctx->pc = 0x2B4D7Cu;
    SET_GPR_U32(ctx, 31, 0x2B4D84u);
    ctx->pc = 0x2B4D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D7Cu;
    // 0x2b4d80: 0x24a5ac90  addiu       $a1, $a1, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B90u, 0x2B4D7Cu, 0x2B4D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D84u;
label_2b4d84:
    // 0x2b4d84: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b4d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b4d88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4D88u;
    {
        const bool branch_taken_0x2b4d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D88u;
        // 0x2b4d8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d88) {
            ctx->pc = 0x2B4D98u;
            goto label_2b4d98;
        }
    }
    ctx->pc = 0x2B4D90u;
    // 0x2b4d90: 0x14620085  bne         $v1, $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x2B4D90u;
    {
        const bool branch_taken_0x2b4d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B4D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D90u;
        // 0x2b4d94: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d90) {
            ctx->pc = 0x2B4FA8u;
            goto label_2b4fa8;
        }
    }
    ctx->pc = 0x2B4D98u;
label_2b4d98:
    // 0x2b4d98: 0xc0acff0  jal         func_2B3FC0
    ctx->pc = 0x2B4D98u;
    SET_GPR_U32(ctx, 31, 0x2B4DA0u);
    ctx->pc = 0x2B4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D98u;
    // 0x2b4d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3FC0u, 0x2B4D98u, 0x2B4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4DA0u;
label_2b4da0:
    // 0x2b4da0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x2b4da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b4da4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4DA4u;
    {
        const bool branch_taken_0x2b4da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DA4u;
        // 0x2b4da8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4da4) {
            ctx->pc = 0x2B4DC4u;
            goto label_2b4dc4;
        }
    }
    ctx->pc = 0x2B4DACu;
    // 0x2b4dac: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4DACu;
    {
        const bool branch_taken_0x2b4dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B4DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DACu;
        // 0x2b4db0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4dac) {
            ctx->pc = 0x2B4DC4u;
            goto label_2b4dc4;
        }
    }
    ctx->pc = 0x2B4DB4u;
    // 0x2b4db4: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2B4DB4u;
    {
        const bool branch_taken_0x2b4db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DB4u;
        // 0x2b4db8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4db4) {
            ctx->pc = 0x2B4FACu;
            goto label_2b4fac;
        }
    }
    ctx->pc = 0x2B4DBCu;
label_2b4dbc:
    // 0x2b4dbc: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2B4DBCu;
    {
        const bool branch_taken_0x2b4dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DBCu;
        // 0x2b4dc0: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4dbc) {
            ctx->pc = 0x2B4FA8u;
            goto label_2b4fa8;
        }
    }
    ctx->pc = 0x2B4DC4u;
label_2b4dc4:
    // 0x2b4dc4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2b4dc8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2b4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b4dcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b4dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4dd0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b4dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2b4dd4: 0x24845364  addiu       $a0, $a0, 0x5364
    ctx->pc = 0x2b4dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21348));
    // 0x2b4dd8: 0x241e0110  addiu       $fp, $zero, 0x110
    ctx->pc = 0x2b4dd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b4ddc: 0x2496fff4  addiu       $s6, $a0, -0xC
    ctx->pc = 0x2b4ddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x2b4de0: 0x26570a08  addiu       $s7, $s2, 0xA08
    ctx->pc = 0x2b4de0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 2568));
    // 0x2b4de4: 0x26530a20  addiu       $s3, $s2, 0xA20
    ctx->pc = 0x2b4de4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 2592));
label_2b4de8:
    // 0x2b4de8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2b4de8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b4dec: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2B4DECu;
    {
        const bool branch_taken_0x2b4dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DECu;
        // 0x2b4df0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4dec) {
            ctx->pc = 0x2B4F6Cu;
            goto label_2b4f6c;
        }
    }
    ctx->pc = 0x2B4DF4u;
    // 0x2b4df4: 0xc0ad280  jal         func_2B4A00
    ctx->pc = 0x2B4DF4u;
    SET_GPR_U32(ctx, 31, 0x2B4DFCu);
    ctx->pc = 0x2B4DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4DF4u;
    // 0x2b4df8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4A00u, 0x2B4DF4u, 0x2B4DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4DFCu;
label_2b4dfc:
    // 0x2b4dfc: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2B4DFCu;
    {
        const bool branch_taken_0x2b4dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4DFCu;
        // 0x2b4e00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4dfc) {
            ctx->pc = 0x2B4F6Cu;
            goto label_2b4f6c;
        }
    }
    ctx->pc = 0x2B4E04u;
    // 0x2b4e04: 0xc0ad3f6  jal         func_2B4FD8
    ctx->pc = 0x2B4E04u;
    SET_GPR_U32(ctx, 31, 0x2B4E0Cu);
    ctx->pc = 0x2B4E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E04u;
    // 0x2b4e08: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4FD8u, 0x2B4E04u, 0x2B4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E0Cu;
label_2b4e0c:
    // 0x2b4e0c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b4e0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e10: 0x9662fff4  lhu         $v0, -0xC($s3)
    ctx->pc = 0x2b4e10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967284)));
    // 0x2b4e14: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2b4e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2b4e18: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2B4E18u;
    {
        const bool branch_taken_0x2b4e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E18u;
        // 0x2b4e1c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e18) {
            ctx->pc = 0x2B4F58u;
            goto label_2b4f58;
        }
    }
    ctx->pc = 0x2B4E20u;
    // 0x2b4e20: 0x8e63fff0  lw          $v1, -0x10($s3)
    ctx->pc = 0x2b4e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967280)));
    // 0x2b4e24: 0x34420eab  ori         $v0, $v0, 0xEAB
    ctx->pc = 0x2b4e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3755);
    // 0x2b4e28: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2b4e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b4e2c: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B4E2Cu;
    {
        const bool branch_taken_0x2b4e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E2Cu;
        // 0x2b4e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e2c) {
            ctx->pc = 0x2B4F58u;
            goto label_2b4f58;
        }
    }
    ctx->pc = 0x2B4E34u;
    // 0x2b4e34: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e38: 0xc0ad114  jal         func_2B4450
    ctx->pc = 0x2B4E38u;
    SET_GPR_U32(ctx, 31, 0x2B4E40u);
    ctx->pc = 0x2B4E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E38u;
    // 0x2b4e3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4450u, 0x2B4E38u, 0x2B4E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E40u;
label_2b4e40:
    // 0x2b4e40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b4e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e44: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2b4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b4e48: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2B4E48u;
    {
        const bool branch_taken_0x2b4e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E48u;
        // 0x2b4e4c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e48) {
            ctx->pc = 0x2B4F70u;
            goto label_2b4f70;
        }
    }
    ctx->pc = 0x2B4E50u;
    // 0x2b4e50: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2b4e54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b4e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e58: 0x24555358  addiu       $s5, $v0, 0x5358
    ctx->pc = 0x2b4e58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 21336));
    // 0x2b4e5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b4e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e60: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2b4e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e64: 0xc0ad1e0  jal         func_2B4780
    ctx->pc = 0x2B4E64u;
    SET_GPR_U32(ctx, 31, 0x2B4E6Cu);
    ctx->pc = 0x2B4E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E64u;
    // 0x2b4e68: 0x240758f0  addiu       $a3, $zero, 0x58F0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4780u, 0x2B4E64u, 0x2B4E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E6Cu;
label_2b4e6c:
    // 0x2b4e6c: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2B4E6Cu;
    {
        const bool branch_taken_0x2b4e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4E6Cu;
        // 0x2b4e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4e6c) {
            ctx->pc = 0x2B4DBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4dbc;
        }
    }
    ctx->pc = 0x2B4E74u;
    // 0x2b4e74: 0xc0ad164  jal         func_2B4590
    ctx->pc = 0x2B4E74u;
    SET_GPR_U32(ctx, 31, 0x2B4E7Cu);
    ctx->pc = 0x2B4E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E74u;
    // 0x2b4e78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4590u, 0x2B4E74u, 0x2B4E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E7Cu;
label_2b4e7c:
    // 0x2b4e7c: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x2B4E7Cu;
    {
        const bool branch_taken_0x2b4e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4e7c) {
            ctx->pc = 0x2B4E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4E7Cu;
            // 0x2b4e80: 0x8e420014  lw          $v0, 0x14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4FA8u;
            goto label_2b4fa8;
        }
    }
    ctx->pc = 0x2B4E84u;
    // 0x2b4e84: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2b4e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2b4e88: 0x24845364  addiu       $a0, $a0, 0x5364
    ctx->pc = 0x2b4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21348));
    // 0x2b4e8c: 0xc0aedb0  jal         func_2BB6C0
    ctx->pc = 0x2B4E8Cu;
    SET_GPR_U32(ctx, 31, 0x2B4E94u);
    ctx->pc = 0x2B4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4E8Cu;
    // 0x2b4e90: 0x29e8018  mult        $s0, $s4, $fp (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB6C0u, 0x2B4E8Cu, 0x2B4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4E94u;
label_2b4e94:
    // 0x2b4e94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b4e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4e98: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2b4e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x2b4e9c: 0x24a55364  addiu       $a1, $a1, 0x5364
    ctx->pc = 0x2b4e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21348));
    // 0x2b4ea0: 0x2128821  addu        $s1, $s0, $s2
    ctx->pc = 0x2b4ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2b4ea4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2B4EA4u;
    SET_GPR_U32(ctx, 31, 0x2B4EACu);
    ctx->pc = 0x2B4EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EA4u;
    // 0x2b4ea8: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2B4EA4u, 0x2B4EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EACu;
label_2b4eac:
    // 0x2b4eac: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x2b4eacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2b4eb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b4eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4eb4: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x2b4eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2b4eb8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x2B4EB8u;
    SET_GPR_U32(ctx, 31, 0x2B4EC0u);
    ctx->pc = 0x2B4EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EB8u;
    // 0x2b4ebc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x2B4EB8u, 0x2B4EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EC0u;
label_2b4ec0:
    // 0x2b4ec0: 0xc0acdd0  jal         func_2B3740
    ctx->pc = 0x2B4EC0u;
    SET_GPR_U32(ctx, 31, 0x2B4EC8u);
    ctx->pc = 0x2B4EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4EC0u;
    // 0x2b4ec4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3740u, 0x2B4EC0u, 0x2B4EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4EC8u;
label_2b4ec8:
    // 0x2b4ec8: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x2b4ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
    // 0x2b4ecc: 0x24a5990c  addiu       $a1, $a1, -0x66F4
    ctx->pc = 0x2b4eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940940));
    // 0x2b4ed0: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x2b4ed0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x519912u));
    // 0x2b4ed4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B4ED4u;
    {
        const bool branch_taken_0x2b4ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b4ed4) {
            ctx->pc = 0x2B4EF4u;
            goto label_2b4ef4;
        }
    }
    ctx->pc = 0x2B4EDCu;
    // 0x2b4edc: 0x6a62ffef  ldl         $v0, -0x11($s3)
    ctx->pc = 0x2b4edcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294967279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b4ee0: 0x6e62ffe8  ldr         $v0, -0x18($s3)
    ctx->pc = 0x2b4ee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294967272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b4ee4: 0xb222011f  sdl         $v0, 0x11F($s1)
    ctx->pc = 0x2b4ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4ee8: 0xb6220118  sdr         $v0, 0x118($s1)
    ctx->pc = 0x2b4ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4eec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B4EECu;
    {
        const bool branch_taken_0x2b4eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4EECu;
        // 0x2b4ef0: 0x29e2018  mult        $a0, $s4, $fp (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4eec) {
            ctx->pc = 0x2B4F10u;
            goto label_2b4f10;
        }
    }
    ctx->pc = 0x2B4EF4u;
label_2b4ef4:
    // 0x2b4ef4: 0x6aa245bb  ldl         $v0, 0x45BB($s5)
    ctx->pc = 0x2b4ef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 17851); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2b4ef8: 0x6ea245b4  ldr         $v0, 0x45B4($s5)
    ctx->pc = 0x2b4ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 17844); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2b4efc: 0xb222011f  sdl         $v0, 0x11F($s1)
    ctx->pc = 0x2b4efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4f00: 0xb6220118  sdr         $v0, 0x118($s1)
    ctx->pc = 0x2b4f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2b4f04: 0xc0acdd0  jal         func_2B3740
    ctx->pc = 0x2B4F04u;
    SET_GPR_U32(ctx, 31, 0x2B4F0Cu);
    ctx->pc = 0x2B4F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F04u;
    // 0x2b4f08: 0x260400fc  addiu       $a0, $s0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3740u, 0x2B4F04u, 0x2B4F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F0Cu;
label_2b4f0c:
    // 0x2b4f0c: 0x29e2018  mult        $a0, $s4, $fp
    ctx->pc = 0x2b4f0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2b4f10:
    // 0x2b4f10: 0x8ec30094  lw          $v1, 0x94($s6)
    ctx->pc = 0x2b4f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2b4f14: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x2b4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2b4f18: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x2b4f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
    // 0x2b4f1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b4f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b4f20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f24: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b4f24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f28: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b4f28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4f2c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2b4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b4f30: 0x8ec20094  lw          $v0, 0x94($s6)
    ctx->pc = 0x2b4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 148)));
    // 0x2b4f34: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2b4f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b4f38: 0xacc200c4  sw          $v0, 0xC4($a2)
    ctx->pc = 0x2b4f38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 196), GPR_U32(ctx, 2));
    // 0x2b4f3c: 0xacb60120  sw          $s6, 0x120($a1)
    ctx->pc = 0x2b4f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 288), GPR_U32(ctx, 22));
    // 0x2b4f40: 0x8ec200e8  lw          $v0, 0xE8($s6)
    ctx->pc = 0x2b4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 232)));
    // 0x2b4f44: 0xace20124  sw          $v0, 0x124($a3)
    ctx->pc = 0x2b4f44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 292), GPR_U32(ctx, 2));
    // 0x2b4f48: 0x8ec30090  lw          $v1, 0x90($s6)
    ctx->pc = 0x2b4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 144)));
    // 0x2b4f4c: 0xad030128  sw          $v1, 0x128($t0)
    ctx->pc = 0x2b4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 296), GPR_U32(ctx, 3));
    // 0x2b4f50: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4F50u;
    {
        const bool branch_taken_0x2b4f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F50u;
        // 0x2b4f54: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f50) {
            ctx->pc = 0x2B4F6Cu;
            goto label_2b4f6c;
        }
    }
    ctx->pc = 0x2B4F58u;
label_2b4f58:
    // 0x2b4f58: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2b4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2b4f5c: 0x400013  mtlo        $v0
    ctx->pc = 0x2b4f5cu;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x2b4f60: 0x729e1800  madd        $v1, $s4, $fp
    ctx->pc = 0x2b4f60u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 30); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2b4f64: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b4f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b4f68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2b4f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2b4f6c:
    // 0x2b4f6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2b4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4f70:
    // 0x2b4f70: 0x26f70040  addiu       $s7, $s7, 0x40
    ctx->pc = 0x2b4f70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    // 0x2b4f74: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x2b4f74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x2b4f78: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b4f7c: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x2b4f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x2b4f80: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x2B4F80u;
    {
        const bool branch_taken_0x2b4f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4F80u;
        // 0x2b4f84: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4f80) {
            ctx->pc = 0x2B4DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b4de8;
        }
    }
    ctx->pc = 0x2B4F88u;
    // 0x2b4f88: 0xc0ad428  jal         func_2B50A0
    ctx->pc = 0x2B4F88u;
    SET_GPR_U32(ctx, 31, 0x2B4F90u);
    ctx->pc = 0x2B4F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F88u;
    // 0x2b4f8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B50A0u, 0x2B4F88u, 0x2B4F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F90u;
label_2b4f90:
    // 0x2b4f90: 0xc0ad446  jal         func_2B5118
    ctx->pc = 0x2B4F90u;
    SET_GPR_U32(ctx, 31, 0x2B4F98u);
    ctx->pc = 0x2B4F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4F90u;
    // 0x2b4f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5118u, 0x2B4F90u, 0x2B4F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4F98u;
label_2b4f98:
    // 0x2b4f98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b4f9c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2b4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x2b4fa0: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2b4fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x2b4fa4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b4fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b4fa8:
    // 0x2b4fa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b4fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b4fac:
    // 0x2b4fac: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b4facu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b4fb0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b4fb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b4fb4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b4fb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b4fb8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2b4fb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b4fbc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2b4fbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2b4fc0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2b4fc0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b4fc4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2b4fc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2b4fc8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2b4fc8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b4fcc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2b4fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2b4fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4FD0u;
        // 0x2b4fd4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4FD8u;
}
