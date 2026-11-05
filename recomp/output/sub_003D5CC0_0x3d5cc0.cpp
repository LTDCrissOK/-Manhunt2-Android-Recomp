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

// Function: sub_003D5CC0
// Address: 0x3d5cc0 - 0x3d5d88
void sub_003D5CC0_0x3d5cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5CC0_0x3d5cc0");
#endif

    switch (ctx->pc) {
        case 0x3d5cc0u: goto label_3d5cc0;
        case 0x3d5cc4u: goto label_3d5cc4;
        case 0x3d5cc8u: goto label_3d5cc8;
        case 0x3d5cccu: goto label_3d5ccc;
        case 0x3d5cd0u: goto label_3d5cd0;
        case 0x3d5cd4u: goto label_3d5cd4;
        case 0x3d5cd8u: goto label_3d5cd8;
        case 0x3d5cdcu: goto label_3d5cdc;
        case 0x3d5ce0u: goto label_3d5ce0;
        case 0x3d5ce4u: goto label_3d5ce4;
        case 0x3d5ce8u: goto label_3d5ce8;
        case 0x3d5cecu: goto label_3d5cec;
        case 0x3d5cf0u: goto label_3d5cf0;
        case 0x3d5cf4u: goto label_3d5cf4;
        case 0x3d5cf8u: goto label_3d5cf8;
        case 0x3d5cfcu: goto label_3d5cfc;
        case 0x3d5d00u: goto label_3d5d00;
        case 0x3d5d04u: goto label_3d5d04;
        case 0x3d5d08u: goto label_3d5d08;
        case 0x3d5d0cu: goto label_3d5d0c;
        case 0x3d5d10u: goto label_3d5d10;
        case 0x3d5d14u: goto label_3d5d14;
        case 0x3d5d18u: goto label_3d5d18;
        case 0x3d5d1cu: goto label_3d5d1c;
        case 0x3d5d20u: goto label_3d5d20;
        case 0x3d5d24u: goto label_3d5d24;
        case 0x3d5d28u: goto label_3d5d28;
        case 0x3d5d2cu: goto label_3d5d2c;
        case 0x3d5d30u: goto label_3d5d30;
        case 0x3d5d34u: goto label_3d5d34;
        case 0x3d5d38u: goto label_3d5d38;
        case 0x3d5d3cu: goto label_3d5d3c;
        case 0x3d5d40u: goto label_3d5d40;
        case 0x3d5d44u: goto label_3d5d44;
        case 0x3d5d48u: goto label_3d5d48;
        case 0x3d5d4cu: goto label_3d5d4c;
        case 0x3d5d50u: goto label_3d5d50;
        case 0x3d5d54u: goto label_3d5d54;
        case 0x3d5d58u: goto label_3d5d58;
        case 0x3d5d5cu: goto label_3d5d5c;
        case 0x3d5d60u: goto label_3d5d60;
        case 0x3d5d64u: goto label_3d5d64;
        case 0x3d5d68u: goto label_3d5d68;
        case 0x3d5d6cu: goto label_3d5d6c;
        case 0x3d5d70u: goto label_3d5d70;
        case 0x3d5d74u: goto label_3d5d74;
        case 0x3d5d78u: goto label_3d5d78;
        case 0x3d5d7cu: goto label_3d5d7c;
        case 0x3d5d80u: goto label_3d5d80;
        case 0x3d5d84u: goto label_3d5d84;
        default: break;
    }

    ctx->pc = 0x3d5cc0u;

label_3d5cc0:
    // 0x3d5cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d5cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3d5cc4:
    // 0x3d5cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d5cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3d5cc8:
    // 0x3d5cc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d5cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3d5ccc:
    // 0x3d5ccc: 0xc0f5306  jal         func_3D4C18
label_3d5cd0:
    if (ctx->pc == 0x3D5CD0u) {
        ctx->pc = 0x3D5CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CCCu;
        // 0x3d5cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5CD4u;
        goto label_3d5cd4;
    }
    ctx->pc = 0x3D5CCCu;
    SET_GPR_U32(ctx, 31, 0x3D5CD4u);
    ctx->pc = 0x3D5CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5CCCu;
    // 0x3d5cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4C18u, 0x3D5CCCu, 0x3D5CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5CD4u;
label_3d5cd4:
    // 0x3d5cd4: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x3d5cd4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_3d5cd8:
    // 0x3d5cd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d5cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d5cdc:
    // 0x3d5cdc: 0x6463ffff  daddiu      $v1, $v1, -0x1
    ctx->pc = 0x3d5cdcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4294967295);
label_3d5ce0:
    // 0x3d5ce0: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
label_3d5ce4:
    if (ctx->pc == 0x3D5CE4u) {
        ctx->pc = 0x3D5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CE0u;
        // 0x3d5ce4: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5CE8u;
        goto label_3d5ce8;
    }
    ctx->pc = 0x3D5CE0u;
    {
        const bool branch_taken_0x3d5ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CE0u;
        // 0x3d5ce4: 0xfe030020  sd          $v1, 0x20($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5ce0) {
            ctx->pc = 0x3D5D74u;
            goto label_3d5d74;
        }
    }
    ctx->pc = 0x3D5CE8u;
label_3d5ce8:
    // 0x3d5ce8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3d5ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d5cec:
    // 0x3d5cec: 0x16030004  bne         $s0, $v1, . + 4 + (0x4 << 2)
label_3d5cf0:
    if (ctx->pc == 0x3D5CF0u) {
        ctx->pc = 0x3D5CF4u;
        goto label_3d5cf4;
    }
    ctx->pc = 0x3D5CECu;
    {
        const bool branch_taken_0x3d5cec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d5cec) {
            ctx->pc = 0x3D5D00u;
            goto label_3d5d00;
        }
    }
    ctx->pc = 0x3D5CF4u;
label_3d5cf4:
    // 0x3d5cf4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3d5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3d5cf8:
    // 0x3d5cf8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3d5cfc:
    if (ctx->pc == 0x3D5CFCu) {
        ctx->pc = 0x3D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CF8u;
        // 0x3d5cfc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D00u;
        goto label_3d5d00;
    }
    ctx->pc = 0x3D5CF8u;
    {
        const bool branch_taken_0x3d5cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5CF8u;
        // 0x3d5cfc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5cf8) {
            ctx->pc = 0x3D5D78u;
            goto label_3d5d78;
        }
    }
    ctx->pc = 0x3D5D00u;
label_3d5d00:
    // 0x3d5d00: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3d5d04:
    if (ctx->pc == 0x3D5D04u) {
        ctx->pc = 0x3D5D08u;
        goto label_3d5d08;
    }
    ctx->pc = 0x3D5D00u;
    {
        const bool branch_taken_0x3d5d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5d00) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5D08u;
label_3d5d08:
    // 0x3d5d08: 0x10700008  beq         $v1, $s0, . + 4 + (0x8 << 2)
label_3d5d0c:
    if (ctx->pc == 0x3D5D0Cu) {
        ctx->pc = 0x3D5D10u;
        goto label_3d5d10;
    }
    ctx->pc = 0x3D5D08u;
    {
        const bool branch_taken_0x3d5d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3d5d08) {
            ctx->pc = 0x3D5D2Cu;
            goto label_3d5d2c;
        }
    }
    ctx->pc = 0x3D5D10u;
label_3d5d10:
    // 0x3d5d10: 0x10000002  b           . + 4 + (0x2 << 2)
label_3d5d14:
    if (ctx->pc == 0x3D5D14u) {
        ctx->pc = 0x3D5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D10u;
        // 0x3d5d14: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D18u;
        goto label_3d5d18;
    }
    ctx->pc = 0x3D5D10u;
    {
        const bool branch_taken_0x3d5d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D10u;
        // 0x3d5d14: 0x8c620018  lw          $v0, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5d10) {
            ctx->pc = 0x3D5D1Cu;
            goto label_3d5d1c;
        }
    }
    ctx->pc = 0x3D5D18u;
label_3d5d18:
    // 0x3d5d18: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x3d5d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3d5d1c:
    // 0x3d5d1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3d5d20:
    if (ctx->pc == 0x3D5D20u) {
        ctx->pc = 0x3D5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D1Cu;
        // 0x3d5d20: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D24u;
        goto label_3d5d24;
    }
    ctx->pc = 0x3D5D1Cu;
    {
        const bool branch_taken_0x3d5d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D1Cu;
        // 0x3d5d20: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5d1c) {
            ctx->pc = 0x3D5D34u;
            goto label_3d5d34;
        }
    }
    ctx->pc = 0x3D5D24u;
label_3d5d24:
    // 0x3d5d24: 0x1450fffc  bne         $v0, $s0, . + 4 + (-0x4 << 2)
label_3d5d28:
    if (ctx->pc == 0x3D5D28u) {
        ctx->pc = 0x3D5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D24u;
        // 0x3d5d28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D2Cu;
        goto label_3d5d2c;
    }
    ctx->pc = 0x3D5D24u;
    {
        const bool branch_taken_0x3d5d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3D5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D24u;
        // 0x3d5d28: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5d24) {
            ctx->pc = 0x3D5D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d5d18;
        }
    }
    ctx->pc = 0x3D5D2Cu;
label_3d5d2c:
    // 0x3d5d2c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_3d5d30:
    if (ctx->pc == 0x3D5D30u) {
        ctx->pc = 0x3D5D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D2Cu;
        // 0x3d5d30: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D34u;
        goto label_3d5d34;
    }
    ctx->pc = 0x3D5D2Cu;
    {
        const bool branch_taken_0x3d5d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5d2c) {
            ctx->pc = 0x3D5D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D5D2Cu;
            // 0x3d5d30: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D5D3Cu;
            goto label_3d5d3c;
        }
    }
    ctx->pc = 0x3D5D34u;
label_3d5d34:
    // 0x3d5d34: 0xc0f56a6  jal         func_3D5A98
label_3d5d38:
    if (ctx->pc == 0x3D5D38u) {
        ctx->pc = 0x3D5D3Cu;
        goto label_3d5d3c;
    }
    ctx->pc = 0x3D5D34u;
    SET_GPR_U32(ctx, 31, 0x3D5D3Cu);
    ctx->pc = 0x3D5A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5A98u, 0x3D5D34u, 0x3D5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5D3Cu;
label_3d5d3c:
    // 0x3d5d3c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3d5d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3d5d40:
    // 0x3d5d40: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3d5d44:
    if (ctx->pc == 0x3D5D44u) {
        ctx->pc = 0x3D5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D40u;
        // 0x3d5d44: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D48u;
        goto label_3d5d48;
    }
    ctx->pc = 0x3D5D40u;
    {
        const bool branch_taken_0x3d5d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D40u;
        // 0x3d5d44: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5d40) {
            ctx->pc = 0x3D5D54u;
            goto label_3d5d54;
        }
    }
    ctx->pc = 0x3D5D48u;
label_3d5d48:
    // 0x3d5d48: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3d5d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3d5d4c:
    // 0x3d5d4c: 0x60f809  jalr        $v1
label_3d5d50:
    if (ctx->pc == 0x3D5D50u) {
        ctx->pc = 0x3D5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D4Cu;
        // 0x3d5d50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D54u;
        goto label_3d5d54;
    }
    ctx->pc = 0x3D5D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3D5D54u);
        ctx->pc = 0x3D5D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D4Cu;
        // 0x3d5d50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5D4Cu, 0x3D5D54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D5D54u;
label_3d5d54:
    // 0x3d5d54: 0xc0f5f7a  jal         func_3D7DE8
label_3d5d58:
    if (ctx->pc == 0x3D5D58u) {
        ctx->pc = 0x3D5D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D54u;
        // 0x3d5d58: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D5Cu;
        goto label_3d5d5c;
    }
    ctx->pc = 0x3D5D54u;
    SET_GPR_U32(ctx, 31, 0x3D5D5Cu);
    ctx->pc = 0x3D5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D54u;
    // 0x3d5d58: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D7DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D7DE8u, 0x3D5D54u, 0x3D5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5D5Cu;
label_3d5d5c:
    // 0x3d5d5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3d5d60:
    if (ctx->pc == 0x3D5D60u) {
        ctx->pc = 0x3D5D64u;
        goto label_3d5d64;
    }
    ctx->pc = 0x3D5D5Cu;
    {
        const bool branch_taken_0x3d5d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5d5c) {
            ctx->pc = 0x3D5D6Cu;
            goto label_3d5d6c;
        }
    }
    ctx->pc = 0x3D5D64u;
label_3d5d64:
    // 0x3d5d64: 0xc0f56e8  jal         func_3D5BA0
label_3d5d68:
    if (ctx->pc == 0x3D5D68u) {
        ctx->pc = 0x3D5D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D64u;
        // 0x3d5d68: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D6Cu;
        goto label_3d5d6c;
    }
    ctx->pc = 0x3D5D64u;
    SET_GPR_U32(ctx, 31, 0x3D5D6Cu);
    ctx->pc = 0x3D5D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D64u;
    // 0x3d5d68: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5BA0u, 0x3D5D64u, 0x3D5D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5D6Cu;
label_3d5d6c:
    // 0x3d5d6c: 0xc0f56e8  jal         func_3D5BA0
label_3d5d70:
    if (ctx->pc == 0x3D5D70u) {
        ctx->pc = 0x3D5D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D6Cu;
        // 0x3d5d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D74u;
        goto label_3d5d74;
    }
    ctx->pc = 0x3D5D6Cu;
    SET_GPR_U32(ctx, 31, 0x3D5D74u);
    ctx->pc = 0x3D5D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D5D6Cu;
    // 0x3d5d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D5BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D5BA0u, 0x3D5D6Cu, 0x3D5D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D5D74u;
label_3d5d74:
    // 0x3d5d74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d5d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3d5d78:
    // 0x3d5d78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d5d78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d5d7c:
    // 0x3d5d7c: 0x3e00008  jr          $ra
label_3d5d80:
    if (ctx->pc == 0x3D5D80u) {
        ctx->pc = 0x3D5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D7Cu;
        // 0x3d5d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D5D84u;
        goto label_3d5d84;
    }
    ctx->pc = 0x3D5D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D5D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D5D7Cu;
        // 0x3d5d80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D5D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D5D84u;
label_3d5d84:
    // 0x3d5d84: 0x0  nop
    ctx->pc = 0x3d5d84u;
    // NOP
    ctx->pc = 0x3d5d88u;
}
