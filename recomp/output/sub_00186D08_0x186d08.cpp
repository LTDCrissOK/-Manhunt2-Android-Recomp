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

// Function: sub_00186D08
// Address: 0x186d08 - 0x186dc8
void sub_00186D08_0x186d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186D08_0x186d08");
#endif

    switch (ctx->pc) {
        case 0x186d08u: goto label_186d08;
        case 0x186d0cu: goto label_186d0c;
        case 0x186d10u: goto label_186d10;
        case 0x186d14u: goto label_186d14;
        case 0x186d18u: goto label_186d18;
        case 0x186d1cu: goto label_186d1c;
        case 0x186d20u: goto label_186d20;
        case 0x186d24u: goto label_186d24;
        case 0x186d28u: goto label_186d28;
        case 0x186d2cu: goto label_186d2c;
        case 0x186d30u: goto label_186d30;
        case 0x186d34u: goto label_186d34;
        case 0x186d38u: goto label_186d38;
        case 0x186d3cu: goto label_186d3c;
        case 0x186d40u: goto label_186d40;
        case 0x186d44u: goto label_186d44;
        case 0x186d48u: goto label_186d48;
        case 0x186d4cu: goto label_186d4c;
        case 0x186d50u: goto label_186d50;
        case 0x186d54u: goto label_186d54;
        case 0x186d58u: goto label_186d58;
        case 0x186d5cu: goto label_186d5c;
        case 0x186d60u: goto label_186d60;
        case 0x186d64u: goto label_186d64;
        case 0x186d68u: goto label_186d68;
        case 0x186d6cu: goto label_186d6c;
        case 0x186d70u: goto label_186d70;
        case 0x186d74u: goto label_186d74;
        case 0x186d78u: goto label_186d78;
        case 0x186d7cu: goto label_186d7c;
        case 0x186d80u: goto label_186d80;
        case 0x186d84u: goto label_186d84;
        case 0x186d88u: goto label_186d88;
        case 0x186d8cu: goto label_186d8c;
        case 0x186d90u: goto label_186d90;
        case 0x186d94u: goto label_186d94;
        case 0x186d98u: goto label_186d98;
        case 0x186d9cu: goto label_186d9c;
        case 0x186da0u: goto label_186da0;
        case 0x186da4u: goto label_186da4;
        case 0x186da8u: goto label_186da8;
        case 0x186dacu: goto label_186dac;
        case 0x186db0u: goto label_186db0;
        case 0x186db4u: goto label_186db4;
        case 0x186db8u: goto label_186db8;
        case 0x186dbcu: goto label_186dbc;
        case 0x186dc0u: goto label_186dc0;
        case 0x186dc4u: goto label_186dc4;
        default: break;
    }

    ctx->pc = 0x186d08u;

label_186d08:
    // 0x186d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_186d0c:
    // 0x186d0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186d10:
    // 0x186d10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186d14:
    // 0x186d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186d18:
    // 0x186d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x186d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_186d1c:
    // 0x186d1c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x186d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186d20:
    // 0x186d20: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186d24:
    // 0x186d24: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_186d28:
    if (ctx->pc == 0x186D28u) {
        ctx->pc = 0x186D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D24u;
        // 0x186d28: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D2Cu;
        goto label_186d2c;
    }
    ctx->pc = 0x186D24u;
    {
        const bool branch_taken_0x186d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x186D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D24u;
        // 0x186d28: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d24) {
            ctx->pc = 0x186D48u;
            goto label_186d48;
        }
    }
    ctx->pc = 0x186D2Cu;
label_186d2c:
    // 0x186d2c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x186d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_186d30:
    // 0x186d30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x186d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_186d34:
    // 0x186d34: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_186d38:
    if (ctx->pc == 0x186D38u) {
        ctx->pc = 0x186D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D34u;
        // 0x186d38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D3Cu;
        goto label_186d3c;
    }
    ctx->pc = 0x186D34u;
    {
        const bool branch_taken_0x186d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d34) {
            ctx->pc = 0x186D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D34u;
            // 0x186d38: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D4Cu;
            goto label_186d4c;
        }
    }
    ctx->pc = 0x186D3Cu;
label_186d3c:
    // 0x186d3c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x186d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_186d40:
    // 0x186d40: 0x5045001c  beql        $v0, $a1, . + 4 + (0x1C << 2)
label_186d44:
    if (ctx->pc == 0x186D44u) {
        ctx->pc = 0x186D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D40u;
        // 0x186d44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D48u;
        goto label_186d48;
    }
    ctx->pc = 0x186D40u;
    {
        const bool branch_taken_0x186d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x186d40) {
            ctx->pc = 0x186D44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D40u;
            // 0x186d44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186DB4u;
            goto label_186db4;
        }
    }
    ctx->pc = 0x186D48u;
label_186d48:
    // 0x186d48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x186d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186d4c:
    // 0x186d4c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_186d50:
    if (ctx->pc == 0x186D50u) {
        ctx->pc = 0x186D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D4Cu;
        // 0x186d50: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D54u;
        goto label_186d54;
    }
    ctx->pc = 0x186D4Cu;
    {
        const bool branch_taken_0x186d4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186d4c) {
            ctx->pc = 0x186D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D4Cu;
            // 0x186d50: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D68u;
            goto label_186d68;
        }
    }
    ctx->pc = 0x186D54u;
label_186d54:
    // 0x186d54: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186d58:
    // 0x186d58: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x186d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_186d5c:
    // 0x186d5c: 0x40f809  jalr        $v0
label_186d60:
    if (ctx->pc == 0x186D60u) {
        ctx->pc = 0x186D64u;
        goto label_186d64;
    }
    ctx->pc = 0x186D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186D64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186D5Cu, 0x186D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186D64u;
label_186d64:
    // 0x186d64: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186d68:
    // 0x186d68: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_186d6c:
    if (ctx->pc == 0x186D6Cu) {
        ctx->pc = 0x186D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D68u;
        // 0x186d6c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D70u;
        goto label_186d70;
    }
    ctx->pc = 0x186D68u;
    {
        const bool branch_taken_0x186d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186d68) {
            ctx->pc = 0x186D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186D68u;
            // 0x186d6c: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D8Cu;
            goto label_186d8c;
        }
    }
    ctx->pc = 0x186D70u;
label_186d70:
    // 0x186d70: 0xc0f5240  jal         func_3D4900
label_186d74:
    if (ctx->pc == 0x186D74u) {
        ctx->pc = 0x186D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D70u;
        // 0x186d74: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D78u;
        goto label_186d78;
    }
    ctx->pc = 0x186D70u;
    SET_GPR_U32(ctx, 31, 0x186D78u);
    ctx->pc = 0x186D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D70u;
    // 0x186d74: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x186D70u, 0x186D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D78u;
label_186d78:
    // 0x186d78: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x186d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186d7c:
    // 0x186d7c: 0xc0661b6  jal         func_1986D8
label_186d80:
    if (ctx->pc == 0x186D80u) {
        ctx->pc = 0x186D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D7Cu;
        // 0x186d80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D84u;
        goto label_186d84;
    }
    ctx->pc = 0x186D7Cu;
    SET_GPR_U32(ctx, 31, 0x186D84u);
    ctx->pc = 0x186D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D7Cu;
    // 0x186d80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1986D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1986D8u, 0x186D7Cu, 0x186D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D84u;
label_186d84:
    // 0x186d84: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x186d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_186d88:
    // 0x186d88: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x186d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_186d8c:
    // 0x186d8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186d90:
    // 0x186d90: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x186d90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186d94:
    // 0x186d94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x186d94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_186d98:
    // 0x186d98: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x186d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_186d9c:
    // 0x186d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x186d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_186da0:
    // 0x186da0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x186da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_186da4:
    // 0x186da4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x186da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_186da8:
    // 0x186da8: 0x40f809  jalr        $v0
label_186dac:
    if (ctx->pc == 0x186DACu) {
        ctx->pc = 0x186DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DA8u;
        // 0x186dac: 0x8d051004  lw          $a1, 0x1004($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DB0u;
        goto label_186db0;
    }
    ctx->pc = 0x186DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186DB0u);
        ctx->pc = 0x186DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DA8u;
        // 0x186dac: 0x8d051004  lw          $a1, 0x1004($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186DA8u, 0x186DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186DB0u;
label_186db0:
    // 0x186db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186db4:
    // 0x186db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186db8:
    // 0x186db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x186db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186dbc:
    // 0x186dbc: 0x3e00008  jr          $ra
label_186dc0:
    if (ctx->pc == 0x186DC0u) {
        ctx->pc = 0x186DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DBCu;
        // 0x186dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186DC4u;
        goto label_186dc4;
    }
    ctx->pc = 0x186DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186DBCu;
        // 0x186dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186DC4u;
label_186dc4:
    // 0x186dc4: 0x0  nop
    ctx->pc = 0x186dc4u;
    // NOP
    ctx->pc = 0x186dc8u;
}
