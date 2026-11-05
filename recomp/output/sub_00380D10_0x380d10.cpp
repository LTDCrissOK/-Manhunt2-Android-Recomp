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

// Function: sub_00380D10
// Address: 0x380d10 - 0x380f08
void sub_00380D10_0x380d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380D10_0x380d10");
#endif

    switch (ctx->pc) {
        case 0x380d10u: goto label_380d10;
        case 0x380d14u: goto label_380d14;
        case 0x380d18u: goto label_380d18;
        case 0x380d1cu: goto label_380d1c;
        case 0x380d20u: goto label_380d20;
        case 0x380d24u: goto label_380d24;
        case 0x380d28u: goto label_380d28;
        case 0x380d2cu: goto label_380d2c;
        case 0x380d30u: goto label_380d30;
        case 0x380d34u: goto label_380d34;
        case 0x380d38u: goto label_380d38;
        case 0x380d3cu: goto label_380d3c;
        case 0x380d40u: goto label_380d40;
        case 0x380d44u: goto label_380d44;
        case 0x380d48u: goto label_380d48;
        case 0x380d4cu: goto label_380d4c;
        case 0x380d50u: goto label_380d50;
        case 0x380d54u: goto label_380d54;
        case 0x380d58u: goto label_380d58;
        case 0x380d5cu: goto label_380d5c;
        case 0x380d60u: goto label_380d60;
        case 0x380d64u: goto label_380d64;
        case 0x380d68u: goto label_380d68;
        case 0x380d6cu: goto label_380d6c;
        case 0x380d70u: goto label_380d70;
        case 0x380d74u: goto label_380d74;
        case 0x380d78u: goto label_380d78;
        case 0x380d7cu: goto label_380d7c;
        case 0x380d80u: goto label_380d80;
        case 0x380d84u: goto label_380d84;
        case 0x380d88u: goto label_380d88;
        case 0x380d8cu: goto label_380d8c;
        case 0x380d90u: goto label_380d90;
        case 0x380d94u: goto label_380d94;
        case 0x380d98u: goto label_380d98;
        case 0x380d9cu: goto label_380d9c;
        case 0x380da0u: goto label_380da0;
        case 0x380da4u: goto label_380da4;
        case 0x380da8u: goto label_380da8;
        case 0x380dacu: goto label_380dac;
        case 0x380db0u: goto label_380db0;
        case 0x380db4u: goto label_380db4;
        case 0x380db8u: goto label_380db8;
        case 0x380dbcu: goto label_380dbc;
        case 0x380dc0u: goto label_380dc0;
        case 0x380dc4u: goto label_380dc4;
        case 0x380dc8u: goto label_380dc8;
        case 0x380dccu: goto label_380dcc;
        case 0x380dd0u: goto label_380dd0;
        case 0x380dd4u: goto label_380dd4;
        case 0x380dd8u: goto label_380dd8;
        case 0x380ddcu: goto label_380ddc;
        case 0x380de0u: goto label_380de0;
        case 0x380de4u: goto label_380de4;
        case 0x380de8u: goto label_380de8;
        case 0x380decu: goto label_380dec;
        case 0x380df0u: goto label_380df0;
        case 0x380df4u: goto label_380df4;
        case 0x380df8u: goto label_380df8;
        case 0x380dfcu: goto label_380dfc;
        case 0x380e00u: goto label_380e00;
        case 0x380e04u: goto label_380e04;
        case 0x380e08u: goto label_380e08;
        case 0x380e0cu: goto label_380e0c;
        case 0x380e10u: goto label_380e10;
        case 0x380e14u: goto label_380e14;
        case 0x380e18u: goto label_380e18;
        case 0x380e1cu: goto label_380e1c;
        case 0x380e20u: goto label_380e20;
        case 0x380e24u: goto label_380e24;
        case 0x380e28u: goto label_380e28;
        case 0x380e2cu: goto label_380e2c;
        case 0x380e30u: goto label_380e30;
        case 0x380e34u: goto label_380e34;
        case 0x380e38u: goto label_380e38;
        case 0x380e3cu: goto label_380e3c;
        case 0x380e40u: goto label_380e40;
        case 0x380e44u: goto label_380e44;
        case 0x380e48u: goto label_380e48;
        case 0x380e4cu: goto label_380e4c;
        case 0x380e50u: goto label_380e50;
        case 0x380e54u: goto label_380e54;
        case 0x380e58u: goto label_380e58;
        case 0x380e5cu: goto label_380e5c;
        case 0x380e60u: goto label_380e60;
        case 0x380e64u: goto label_380e64;
        case 0x380e68u: goto label_380e68;
        case 0x380e6cu: goto label_380e6c;
        case 0x380e70u: goto label_380e70;
        case 0x380e74u: goto label_380e74;
        case 0x380e78u: goto label_380e78;
        case 0x380e7cu: goto label_380e7c;
        case 0x380e80u: goto label_380e80;
        case 0x380e84u: goto label_380e84;
        case 0x380e88u: goto label_380e88;
        case 0x380e8cu: goto label_380e8c;
        case 0x380e90u: goto label_380e90;
        case 0x380e94u: goto label_380e94;
        case 0x380e98u: goto label_380e98;
        case 0x380e9cu: goto label_380e9c;
        case 0x380ea0u: goto label_380ea0;
        case 0x380ea4u: goto label_380ea4;
        case 0x380ea8u: goto label_380ea8;
        case 0x380eacu: goto label_380eac;
        case 0x380eb0u: goto label_380eb0;
        case 0x380eb4u: goto label_380eb4;
        case 0x380eb8u: goto label_380eb8;
        case 0x380ebcu: goto label_380ebc;
        case 0x380ec0u: goto label_380ec0;
        case 0x380ec4u: goto label_380ec4;
        case 0x380ec8u: goto label_380ec8;
        case 0x380eccu: goto label_380ecc;
        case 0x380ed0u: goto label_380ed0;
        case 0x380ed4u: goto label_380ed4;
        case 0x380ed8u: goto label_380ed8;
        case 0x380edcu: goto label_380edc;
        case 0x380ee0u: goto label_380ee0;
        case 0x380ee4u: goto label_380ee4;
        case 0x380ee8u: goto label_380ee8;
        case 0x380eecu: goto label_380eec;
        case 0x380ef0u: goto label_380ef0;
        case 0x380ef4u: goto label_380ef4;
        case 0x380ef8u: goto label_380ef8;
        case 0x380efcu: goto label_380efc;
        case 0x380f00u: goto label_380f00;
        case 0x380f04u: goto label_380f04;
        default: break;
    }

    ctx->pc = 0x380d10u;

label_380d10:
    // 0x380d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_380d14:
    // 0x380d14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x380d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_380d18:
    // 0x380d18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x380d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_380d1c:
    // 0x380d1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_380d20:
    // 0x380d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x380d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_380d24:
    // 0x380d24: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_380d28:
    if (ctx->pc == 0x380D28u) {
        ctx->pc = 0x380D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D24u;
        // 0x380d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380D2Cu;
        goto label_380d2c;
    }
    ctx->pc = 0x380D24u;
    {
        const bool branch_taken_0x380d24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x380D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D24u;
        // 0x380d28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380d24) {
            ctx->pc = 0x380D48u;
            goto label_380d48;
        }
    }
    ctx->pc = 0x380D2Cu;
label_380d2c:
    // 0x380d2c: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x380d2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_380d30:
    // 0x380d30: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x380d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_380d34:
    // 0x380d34: 0x1462006e  bne         $v1, $v0, . + 4 + (0x6E << 2)
label_380d38:
    if (ctx->pc == 0x380D38u) {
        ctx->pc = 0x380D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D34u;
        // 0x380d38: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380D3Cu;
        goto label_380d3c;
    }
    ctx->pc = 0x380D34u;
    {
        const bool branch_taken_0x380d34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x380D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D34u;
        // 0x380d38: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380d34) {
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380D3Cu;
label_380d3c:
    // 0x380d3c: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x380d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_380d40:
    // 0x380d40: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
label_380d44:
    if (ctx->pc == 0x380D44u) {
        ctx->pc = 0x380D48u;
        goto label_380d48;
    }
    ctx->pc = 0x380D40u;
    {
        const bool branch_taken_0x380d40 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x380d40) {
            ctx->pc = 0x380D50u;
            goto label_380d50;
        }
    }
    ctx->pc = 0x380D48u;
label_380d48:
    // 0x380d48: 0x10000069  b           . + 4 + (0x69 << 2)
label_380d4c:
    if (ctx->pc == 0x380D4Cu) {
        ctx->pc = 0x380D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D48u;
        // 0x380d4c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380D50u;
        goto label_380d50;
    }
    ctx->pc = 0x380D48u;
    {
        const bool branch_taken_0x380d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D48u;
        // 0x380d4c: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380d48) {
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380D50u;
label_380d50:
    // 0x380d50: 0x12000067  beqz        $s0, . + 4 + (0x67 << 2)
label_380d54:
    if (ctx->pc == 0x380D54u) {
        ctx->pc = 0x380D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D50u;
        // 0x380d54: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380D58u;
        goto label_380d58;
    }
    ctx->pc = 0x380D50u;
    {
        const bool branch_taken_0x380d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x380D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D50u;
        // 0x380d54: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380d50) {
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380D58u;
label_380d58:
    // 0x380d58: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x380d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_380d5c:
    // 0x380d5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_380d60:
    if (ctx->pc == 0x380D60u) {
        ctx->pc = 0x380D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D5Cu;
        // 0x380d60: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380D64u;
        goto label_380d64;
    }
    ctx->pc = 0x380D5Cu;
    {
        const bool branch_taken_0x380d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D5Cu;
        // 0x380d60: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380d5c) {
            ctx->pc = 0x380D74u;
            goto label_380d74;
        }
    }
    ctx->pc = 0x380D64u;
label_380d64:
    // 0x380d64: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x380d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_380d68:
    // 0x380d68: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x380d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_380d6c:
    // 0x380d6c: 0x24421538  addiu       $v0, $v0, 0x1538
    ctx->pc = 0x380d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5432));
label_380d70:
    // 0x380d70: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x380d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_380d74:
    // 0x380d74: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x380d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_380d78:
    // 0x380d78: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_380d7c:
    if (ctx->pc == 0x380D7Cu) {
        ctx->pc = 0x380D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D78u;
        // 0x380d7c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380D80u;
        goto label_380d80;
    }
    ctx->pc = 0x380D78u;
    {
        const bool branch_taken_0x380d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380d78) {
            ctx->pc = 0x380D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380D78u;
            // 0x380d7c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380D90u;
            goto label_380d90;
        }
    }
    ctx->pc = 0x380D80u;
label_380d80:
    // 0x380d80: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x380d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_380d84:
    // 0x380d84: 0x24421558  addiu       $v0, $v0, 0x1558
    ctx->pc = 0x380d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5464));
label_380d88:
    // 0x380d88: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x380d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_380d8c:
    // 0x380d8c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x380d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_380d90:
    // 0x380d90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x380d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_380d94:
    // 0x380d94: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_380d98:
    // 0x380d98: 0x40f809  jalr        $v0
label_380d9c:
    if (ctx->pc == 0x380D9Cu) {
        ctx->pc = 0x380D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D98u;
        // 0x380d9c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380DA0u;
        goto label_380da0;
    }
    ctx->pc = 0x380D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x380DA0u);
        ctx->pc = 0x380D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380D98u;
        // 0x380d9c: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380D98u, 0x380DA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x380DA0u;
label_380da0:
    // 0x380da0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_380da4:
    if (ctx->pc == 0x380DA4u) {
        ctx->pc = 0x380DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DA0u;
        // 0x380da4: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380DA8u;
        goto label_380da8;
    }
    ctx->pc = 0x380DA0u;
    {
        const bool branch_taken_0x380da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DA0u;
        // 0x380da4: 0xae020024  sw          $v0, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380da0) {
            ctx->pc = 0x380DB0u;
            goto label_380db0;
        }
    }
    ctx->pc = 0x380DA8u;
label_380da8:
    // 0x380da8: 0x10000051  b           . + 4 + (0x51 << 2)
label_380dac:
    if (ctx->pc == 0x380DACu) {
        ctx->pc = 0x380DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DA8u;
        // 0x380dac: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380DB0u;
        goto label_380db0;
    }
    ctx->pc = 0x380DA8u;
    {
        const bool branch_taken_0x380da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DA8u;
        // 0x380dac: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380da8) {
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380DB0u;
label_380db0:
    // 0x380db0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x380db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_380db4:
    // 0x380db4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x380db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_380db8:
    // 0x380db8: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
label_380dbc:
    if (ctx->pc == 0x380DBCu) {
        ctx->pc = 0x380DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DB8u;
        // 0x380dbc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380DC0u;
        goto label_380dc0;
    }
    ctx->pc = 0x380DB8u;
    {
        const bool branch_taken_0x380db8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x380DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DB8u;
        // 0x380dbc: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380db8) {
            ctx->pc = 0x380DD0u;
            goto label_380dd0;
        }
    }
    ctx->pc = 0x380DC0u;
label_380dc0:
    // 0x380dc0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x380dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_380dc4:
    // 0x380dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x380dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_380dc8:
    // 0x380dc8: 0x118823  negu        $s1, $s1
    ctx->pc = 0x380dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_380dcc:
    // 0x380dcc: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x380dccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
label_380dd0:
    // 0x380dd0: 0x2622fff8  addiu       $v0, $s1, -0x8
    ctx->pc = 0x380dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
label_380dd4:
    // 0x380dd4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x380dd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_380dd8:
    // 0x380dd8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
label_380ddc:
    if (ctx->pc == 0x380DDCu) {
        ctx->pc = 0x380DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DD8u;
        // 0x380ddc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380DE0u;
        goto label_380de0;
    }
    ctx->pc = 0x380DD8u;
    {
        const bool branch_taken_0x380dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x380dd8) {
            ctx->pc = 0x380DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380DD8u;
            // 0x380ddc: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380E28u;
            goto label_380e28;
        }
    }
    ctx->pc = 0x380DE0u;
label_380de0:
    // 0x380de0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_380de4:
    // 0x380de4: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_380de8:
    if (ctx->pc == 0x380DE8u) {
        ctx->pc = 0x380DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DE4u;
        // 0x380de8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380DECu;
        goto label_380dec;
    }
    ctx->pc = 0x380DE4u;
    {
        const bool branch_taken_0x380de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DE4u;
        // 0x380de8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380de4) {
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380DECu;
label_380dec:
    // 0x380dec: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x380decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_380df0:
    // 0x380df0: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_380df4:
    if (ctx->pc == 0x380DF4u) {
        ctx->pc = 0x380DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DF0u;
        // 0x380df4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380DF8u;
        goto label_380df8;
    }
    ctx->pc = 0x380DF0u;
    {
        const bool branch_taken_0x380df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380df0) {
            ctx->pc = 0x380DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380DF0u;
            // 0x380df4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380DF8u;
label_380df8:
    // 0x380df8: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x380df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_380dfc:
    // 0x380dfc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_380e00:
    if (ctx->pc == 0x380E00u) {
        ctx->pc = 0x380E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380DFCu;
        // 0x380e00: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E04u;
        goto label_380e04;
    }
    ctx->pc = 0x380DFCu;
    {
        const bool branch_taken_0x380dfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380dfc) {
            ctx->pc = 0x380E00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380DFCu;
            // 0x380e00: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380E14u;
            goto label_380e14;
        }
    }
    ctx->pc = 0x380E04u;
label_380e04:
    // 0x380e04: 0xc0e091c  jal         func_382470
label_380e08:
    if (ctx->pc == 0x380E08u) {
        ctx->pc = 0x380E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E04u;
        // 0x380e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E0Cu;
        goto label_380e0c;
    }
    ctx->pc = 0x380E04u;
    SET_GPR_U32(ctx, 31, 0x380E0Cu);
    ctx->pc = 0x380E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380E04u;
    // 0x380e08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382470u, 0x380E04u, 0x380E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380E0Cu;
label_380e0c:
    // 0x380e0c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x380e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_380e10:
    // 0x380e10: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_380e14:
    // 0x380e14: 0x40f809  jalr        $v0
label_380e18:
    if (ctx->pc == 0x380E18u) {
        ctx->pc = 0x380E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E14u;
        // 0x380e18: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E1Cu;
        goto label_380e1c;
    }
    ctx->pc = 0x380E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x380E1Cu);
        ctx->pc = 0x380E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E14u;
        // 0x380e18: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380E14u, 0x380E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x380E1Cu;
label_380e1c:
    // 0x380e1c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x380e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_380e20:
    // 0x380e20: 0x10000033  b           . + 4 + (0x33 << 2)
label_380e24:
    if (ctx->pc == 0x380E24u) {
        ctx->pc = 0x380E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E20u;
        // 0x380e24: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E28u;
        goto label_380e28;
    }
    ctx->pc = 0x380E20u;
    {
        const bool branch_taken_0x380e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E20u;
        // 0x380e24: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e20) {
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380E28u;
label_380e28:
    // 0x380e28: 0xac51001c  sw          $s1, 0x1C($v0)
    ctx->pc = 0x380e28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 17));
label_380e2c:
    // 0x380e2c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x380e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_380e30:
    // 0x380e30: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x380e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_380e34:
    // 0x380e34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_380e38:
    if (ctx->pc == 0x380E38u) {
        ctx->pc = 0x380E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E34u;
        // 0x380e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E3Cu;
        goto label_380e3c;
    }
    ctx->pc = 0x380E34u;
    {
        const bool branch_taken_0x380e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E34u;
        // 0x380e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e34) {
            ctx->pc = 0x380E44u;
            goto label_380e44;
        }
    }
    ctx->pc = 0x380E3Cu;
label_380e3c:
    // 0x380e3c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x380e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_380e40:
    // 0x380e40: 0x24451578  addiu       $a1, $v0, 0x1578
    ctx->pc = 0x380e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5496));
label_380e44:
    // 0x380e44: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x380e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_380e48:
    // 0x380e48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_380e4c:
    // 0x380e4c: 0xc0e05c2  jal         func_381708
label_380e50:
    if (ctx->pc == 0x380E50u) {
        ctx->pc = 0x380E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E4Cu;
        // 0x380e50: 0x2263004  sllv        $a2, $a2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E54u;
        goto label_380e54;
    }
    ctx->pc = 0x380E4Cu;
    SET_GPR_U32(ctx, 31, 0x380E54u);
    ctx->pc = 0x380E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380E4Cu;
    // 0x380e50: 0x2263004  sllv        $a2, $a2, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x381708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x381708u, 0x380E4Cu, 0x380E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380E54u;
label_380e54:
    // 0x380e54: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x380e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_380e58:
    // 0x380e58: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_380e5c:
    if (ctx->pc == 0x380E5Cu) {
        ctx->pc = 0x380E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E58u;
        // 0x380e5c: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E60u;
        goto label_380e60;
    }
    ctx->pc = 0x380E58u;
    {
        const bool branch_taken_0x380e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E58u;
        // 0x380e5c: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e58) {
            ctx->pc = 0x380EACu;
            goto label_380eac;
        }
    }
    ctx->pc = 0x380E60u;
label_380e60:
    // 0x380e60: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_380e64:
    if (ctx->pc == 0x380E64u) {
        ctx->pc = 0x380E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E60u;
        // 0x380e64: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E68u;
        goto label_380e68;
    }
    ctx->pc = 0x380E60u;
    {
        const bool branch_taken_0x380e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x380E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E60u;
        // 0x380e64: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380e60) {
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380E68u;
label_380e68:
    // 0x380e68: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_380e6c:
    // 0x380e6c: 0x50800021  beql        $a0, $zero, . + 4 + (0x21 << 2)
label_380e70:
    if (ctx->pc == 0x380E70u) {
        ctx->pc = 0x380E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E6Cu;
        // 0x380e70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E74u;
        goto label_380e74;
    }
    ctx->pc = 0x380E6Cu;
    {
        const bool branch_taken_0x380e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380e6c) {
            ctx->pc = 0x380E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380E6Cu;
            // 0x380e70: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380EF4u;
            goto label_380ef4;
        }
    }
    ctx->pc = 0x380E74u;
label_380e74:
    // 0x380e74: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x380e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_380e78:
    // 0x380e78: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_380e7c:
    if (ctx->pc == 0x380E7Cu) {
        ctx->pc = 0x380E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E78u;
        // 0x380e7c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E80u;
        goto label_380e80;
    }
    ctx->pc = 0x380E78u;
    {
        const bool branch_taken_0x380e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380e78) {
            ctx->pc = 0x380E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380E78u;
            // 0x380e7c: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380E80u;
label_380e80:
    // 0x380e80: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x380e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_380e84:
    // 0x380e84: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_380e88:
    if (ctx->pc == 0x380E88u) {
        ctx->pc = 0x380E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E84u;
        // 0x380e88: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E8Cu;
        goto label_380e8c;
    }
    ctx->pc = 0x380E84u;
    {
        const bool branch_taken_0x380e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x380e84) {
            ctx->pc = 0x380E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380E84u;
            // 0x380e88: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x380E9Cu;
            goto label_380e9c;
        }
    }
    ctx->pc = 0x380E8Cu;
label_380e8c:
    // 0x380e8c: 0xc0e091c  jal         func_382470
label_380e90:
    if (ctx->pc == 0x380E90u) {
        ctx->pc = 0x380E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E8Cu;
        // 0x380e90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380E94u;
        goto label_380e94;
    }
    ctx->pc = 0x380E8Cu;
    SET_GPR_U32(ctx, 31, 0x380E94u);
    ctx->pc = 0x380E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380E8Cu;
    // 0x380e90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382470u, 0x380E8Cu, 0x380E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380E94u;
label_380e94:
    // 0x380e94: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x380e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_380e98:
    // 0x380e98: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x380e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_380e9c:
    // 0x380e9c: 0x40f809  jalr        $v0
label_380ea0:
    if (ctx->pc == 0x380EA0u) {
        ctx->pc = 0x380EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E9Cu;
        // 0x380ea0: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380EA4u;
        goto label_380ea4;
    }
    ctx->pc = 0x380E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x380EA4u);
        ctx->pc = 0x380EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380E9Cu;
        // 0x380ea0: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380E9Cu, 0x380EA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x380EA4u;
label_380ea4:
    // 0x380ea4: 0x1000ffc0  b           . + 4 + (-0x40 << 2)
label_380ea8:
    if (ctx->pc == 0x380EA8u) {
        ctx->pc = 0x380EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EA4u;
        // 0x380ea8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380EACu;
        goto label_380eac;
    }
    ctx->pc = 0x380EA4u;
    {
        const bool branch_taken_0x380ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EA4u;
        // 0x380ea8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380ea4) {
            ctx->pc = 0x380DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380da8;
        }
    }
    ctx->pc = 0x380EACu;
label_380eac:
    // 0x380eac: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_380eb0:
    if (ctx->pc == 0x380EB0u) {
        ctx->pc = 0x380EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EACu;
        // 0x380eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380EB4u;
        goto label_380eb4;
    }
    ctx->pc = 0x380EACu;
    {
        const bool branch_taken_0x380eac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x380EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EACu;
        // 0x380eb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380eac) {
            ctx->pc = 0x380EF0u;
            goto label_380ef0;
        }
    }
    ctx->pc = 0x380EB4u;
label_380eb4:
    // 0x380eb4: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x380eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_380eb8:
    // 0x380eb8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_380ebc:
    if (ctx->pc == 0x380EBCu) {
        ctx->pc = 0x380EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EB8u;
        // 0x380ebc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380EC0u;
        goto label_380ec0;
    }
    ctx->pc = 0x380EB8u;
    {
        const bool branch_taken_0x380eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x380EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EB8u;
        // 0x380ebc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380eb8) {
            ctx->pc = 0x380EECu;
            goto label_380eec;
        }
    }
    ctx->pc = 0x380EC0u;
label_380ec0:
    // 0x380ec0: 0xfe000018  sd          $zero, 0x18($s0)
    ctx->pc = 0x380ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 0));
label_380ec4:
    // 0x380ec4: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x380ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
label_380ec8:
    // 0x380ec8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x380ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_380ecc:
    // 0x380ecc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x380eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_380ed0:
    // 0x380ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x380ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380ed4:
    // 0x380ed4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x380ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_380ed8:
    // 0x380ed8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x380ed8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_380edc:
    // 0x380edc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x380edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_380ee0:
    // 0x380ee0: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x380ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_380ee4:
    // 0x380ee4: 0xc0e08f0  jal         func_3823C0
label_380ee8:
    if (ctx->pc == 0x380EE8u) {
        ctx->pc = 0x380EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EE4u;
        // 0x380ee8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380EECu;
        goto label_380eec;
    }
    ctx->pc = 0x380EE4u;
    SET_GPR_U32(ctx, 31, 0x380EECu);
    ctx->pc = 0x380EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380EE4u;
    // 0x380ee8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3823C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3823C0u, 0x380EE4u, 0x380EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380EECu;
label_380eec:
    // 0x380eec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x380eecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_380ef0:
    // 0x380ef0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x380ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_380ef4:
    // 0x380ef4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x380ef4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_380ef8:
    // 0x380ef8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_380efc:
    // 0x380efc: 0x3e00008  jr          $ra
label_380f00:
    if (ctx->pc == 0x380F00u) {
        ctx->pc = 0x380F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EFCu;
        // 0x380f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x380F04u;
        goto label_380f04;
    }
    ctx->pc = 0x380EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380EFCu;
        // 0x380f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380EFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380F04u;
label_380f04:
    // 0x380f04: 0x0  nop
    ctx->pc = 0x380f04u;
    // NOP
    ctx->pc = 0x380f08u;
}
