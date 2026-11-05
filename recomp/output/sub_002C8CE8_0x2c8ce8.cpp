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

// Function: sub_002C8CE8
// Address: 0x2c8ce8 - 0x2c9068
void sub_002C8CE8_0x2c8ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8CE8_0x2c8ce8");
#endif

    switch (ctx->pc) {
        case 0x2c8d88u: goto label_2c8d88;
        case 0x2c8e14u: goto label_2c8e14;
        case 0x2c8e48u: goto label_2c8e48;
        case 0x2c8e4cu: goto label_2c8e4c;
        case 0x2c8e8cu: goto label_2c8e8c;
        case 0x2c8f00u: goto label_2c8f00;
        case 0x2c8f4cu: goto label_2c8f4c;
        case 0x2c8f7cu: goto label_2c8f7c;
        case 0x2c8f84u: goto label_2c8f84;
        case 0x2c9024u: goto label_2c9024;
        case 0x2c904cu: goto label_2c904c;
        default: break;
    }

    ctx->pc = 0x2c8ce8u;

    // 0x2c8ce8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c8cec: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2c8cecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c8cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c8cf4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2c8cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2c8cf8: 0x34c6fffc  ori         $a2, $a2, 0xFFFC
    ctx->pc = 0x2c8cf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65532);
    // 0x2c8cfc: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x2c8cfcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x2c8d00: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x2c8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c8d04: 0x356bfffc  ori         $t3, $t3, 0xFFFC
    ctx->pc = 0x2c8d04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65532);
    // 0x2c8d08: 0x31023  negu        $v0, $v1
    ctx->pc = 0x2c8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x2c8d0c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c8d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c8d10: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c8d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c8d14: 0x32302  srl         $a0, $v1, 12
    ctx->pc = 0x2c8d14u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x2c8d18: 0x30840010  andi        $a0, $a0, 0x10
    ctx->pc = 0x2c8d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x2c8d1c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c8d1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d20: 0x431806  srlv        $v1, $v1, $v0
    ctx->pc = 0x2c8d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c8d24: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x2c8d24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2c8d28: 0x30840008  andi        $a0, $a0, 0x8
    ctx->pc = 0x2c8d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2c8d2c: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2c8d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8d30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8d34: 0x32082  srl         $a0, $v1, 2
    ctx->pc = 0x2c8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x2c8d38: 0x30840004  andi        $a0, $a0, 0x4
    ctx->pc = 0x2c8d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2c8d3c: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2c8d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8d40: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8d44: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2c8d44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c8d48: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x2c8d48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2c8d4c: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2c8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8d50: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8d54: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x2c8d54u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c8d58: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2c8d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2c8d5c: 0x831806  srlv        $v1, $v1, $a0
    ctx->pc = 0x2c8d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8d60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2c8d64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8d68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8d6c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2c8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2c8d70: 0x8c47012c  lw          $a3, 0x12C($v0)
    ctx->pc = 0x2c8d70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x2c8d74: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2c8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2c8d78: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2c8d78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8d7c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2c8d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2c8d80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2C8D80u;
    {
        const bool branch_taken_0x2c8d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8D80u;
        // 0x2c8d84: 0x655023  subu        $t2, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d80) {
            ctx->pc = 0x2C8DA8u;
            goto label_2c8da8;
        }
    }
    ctx->pc = 0x2C8D88u;
label_2c8d88:
    // 0x2c8d88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2c8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2c8d8c: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x2c8d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
    // 0x2c8d90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2c8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c8d94: 0x4a182b  sltu        $v1, $v0, $t2
    ctx->pc = 0x2c8d94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2c8d98: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8D98u;
    {
        const bool branch_taken_0x2c8d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d98) {
            ctx->pc = 0x2C8D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8D98u;
            // 0x2c8d9c: 0x8d040010  lw          $a0, 0x10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8DACu;
            goto label_2c8dac;
        }
    }
    ctx->pc = 0x2C8DA0u;
    // 0x2c8da0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2c8da0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8da4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c8da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8da8:
    // 0x2c8da8: 0x8d040010  lw          $a0, 0x10($t0)
    ctx->pc = 0x2c8da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
label_2c8dac:
    // 0x2c8dac: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C8DACu;
    {
        const bool branch_taken_0x2c8dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8dac) {
            ctx->pc = 0x2C8DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8DACu;
            // 0x2c8db0: 0x8d040014  lw          $a0, 0x14($t0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8DB4u;
            goto label_2c8db4;
        }
    }
    ctx->pc = 0x2C8DB4u;
label_2c8db4:
    // 0x2c8db4: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C8DB4u;
    {
        const bool branch_taken_0x2c8db4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DB4u;
        // 0x2c8db8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8db4) {
            ctx->pc = 0x2C8D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8d88;
        }
    }
    ctx->pc = 0x2C8DBCu;
    // 0x2c8dbc: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2c8dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c8dc0: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x2c8dc0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8dc4: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2c8dc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8dc8: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2C8DC8u;
    {
        const bool branch_taken_0x2c8dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DC8u;
        // 0x2c8dcc: 0xe56821  addu        $t5, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8dc8) {
            ctx->pc = 0x2C9044u;
            goto label_2c9044;
        }
    }
    ctx->pc = 0x2C8DD0u;
    // 0x2c8dd0: 0xed102b  sltu        $v0, $a3, $t5
    ctx->pc = 0x2c8dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x2c8dd4: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2C8DD4u;
    {
        const bool branch_taken_0x2c8dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8dd4) {
            ctx->pc = 0x2C9044u;
            goto label_2c9044;
        }
    }
    ctx->pc = 0x2C8DDCu;
    // 0x2c8ddc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2c8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x2c8de0: 0x1047000c  beq         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8DE0u;
    {
        const bool branch_taken_0x2c8de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2C8DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DE0u;
        // 0x2c8de4: 0x8ce80018  lw          $t0, 0x18($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8de0) {
            ctx->pc = 0x2C8E14u;
            goto label_2c8e14;
        }
    }
    ctx->pc = 0x2C8DE8u;
    // 0x2c8de8: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x2c8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2c8dec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8decu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8df0: 0x6c102b  sltu        $v0, $v1, $t4
    ctx->pc = 0x2c8df0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2c8df4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8DF4u;
    {
        const bool branch_taken_0x2c8df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8DF4u;
        // 0x2c8df8: 0x2d4b0010  sltiu       $t3, $t2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8df4) {
            ctx->pc = 0x2C8E0Cu;
            goto label_2c8e0c;
        }
    }
    ctx->pc = 0x2C8DFCu;
    // 0x2c8dfc: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2c8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2c8e00: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2c8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x2c8e04: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2C8E04u;
    {
        const bool branch_taken_0x2c8e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E04u;
        // 0x2c8e08: 0x24ee0008  addiu       $t6, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e04) {
            ctx->pc = 0x2C8E8Cu;
            goto label_2c8e8c;
        }
    }
    ctx->pc = 0x2C8E0Cu;
label_2c8e0c:
    // 0x2c8e0c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8E0Cu;
    SET_GPR_U32(ctx, 31, 0x2C8E14u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8E0Cu, 0x2C8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E14u;
label_2c8e14:
    // 0x2c8e14: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x2c8e14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x2c8e18: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8E18u;
    {
        const bool branch_taken_0x2c8e18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E18u;
        // 0x2c8e1c: 0x24e40014  addiu       $a0, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e18) {
            ctx->pc = 0x2C8E34u;
            goto label_2c8e34;
        }
    }
    ctx->pc = 0x2C8E20u;
    // 0x2c8e20: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x2c8e20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c8e24: 0x24e40010  addiu       $a0, $a3, 0x10
    ctx->pc = 0x2c8e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x2c8e28: 0x2d4b0010  sltiu       $t3, $t2, 0x10
    ctx->pc = 0x2c8e28u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c8e2c: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C8E2Cu;
    {
        const bool branch_taken_0x2c8e2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E2Cu;
        // 0x2c8e30: 0x24ee0008  addiu       $t6, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e2c) {
            ctx->pc = 0x2C8E8Cu;
            goto label_2c8e8c;
        }
    }
    ctx->pc = 0x2C8E34u;
label_2c8e34:
    // 0x2c8e34: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2c8e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c8e38: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x2c8e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x2c8e3c: 0x2d4b0010  sltiu       $t3, $t2, 0x10
    ctx->pc = 0x2c8e3cu;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c8e40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8E40u;
    {
        const bool branch_taken_0x2c8e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E40u;
        // 0x2c8e44: 0x24ee0008  addiu       $t6, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e40) {
            ctx->pc = 0x2C8E58u;
            goto label_2c8e58;
        }
    }
    ctx->pc = 0x2C8E48u;
label_2c8e48:
    // 0x2c8e48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c8e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e4c:
    // 0x2c8e4c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2c8e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8e50: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2c8e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c8e54: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x2c8e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
label_2c8e58:
    // 0x2c8e58: 0x0  nop
    ctx->pc = 0x2c8e58u;
    // NOP
    // 0x2c8e5c: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C8E5Cu;
    {
        const bool branch_taken_0x2c8e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e5c) {
            ctx->pc = 0x2C8E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8E5Cu;
            // 0x2c8e60: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8E4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8e4c;
        }
    }
    ctx->pc = 0x2C8E64u;
    // 0x2c8e64: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2c8e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2c8e68: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C8E68u;
    {
        const bool branch_taken_0x2c8e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E68u;
        // 0x2c8e6c: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e68) {
            ctx->pc = 0x2C8E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8e48;
        }
    }
    ctx->pc = 0x2C8E70u;
    // 0x2c8e70: 0x8c102b  sltu        $v0, $a0, $t4
    ctx->pc = 0x2c8e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x2c8e74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8E74u;
    {
        const bool branch_taken_0x2c8e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e74) {
            ctx->pc = 0x2C8E84u;
            goto label_2c8e84;
        }
    }
    ctx->pc = 0x2C8E7Cu;
    // 0x2c8e7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8E7Cu;
    {
        const bool branch_taken_0x2c8e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8E7Cu;
        // 0x2c8e80: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e7c) {
            ctx->pc = 0x2C8E8Cu;
            goto label_2c8e8c;
        }
    }
    ctx->pc = 0x2C8E84u;
label_2c8e84:
    // 0x2c8e84: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8E84u;
    SET_GPR_U32(ctx, 31, 0x2C8E8Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8E84u, 0x2C8E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E8Cu;
label_2c8e8c:
    // 0x2c8e8c: 0x1100003d  beqz        $t0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2C8E8Cu;
    {
        const bool branch_taken_0x2c8e8c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e8c) {
            ctx->pc = 0x2C8F84u;
            goto label_2c8f84;
        }
    }
    ctx->pc = 0x2C8E94u;
    // 0x2c8e94: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2c8e98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8e9c: 0x2442012c  addiu       $v0, $v0, 0x12C
    ctx->pc = 0x2c8e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
    // 0x2c8ea0: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2c8ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2c8ea4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c8ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8ea8: 0x54e3000b  bnel        $a3, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8EA8u;
    {
        const bool branch_taken_0x2c8ea8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c8ea8) {
            ctx->pc = 0x2C8EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8EA8u;
            // 0x2c8eac: 0x8d220010  lw          $v0, 0x10($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8ED8u;
            goto label_2c8ed8;
        }
    }
    ctx->pc = 0x2C8EB0u;
    // 0x2c8eb0: 0x14c00015  bnez        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2C8EB0u;
    {
        const bool branch_taken_0x2c8eb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EB0u;
        // 0x2c8eb4: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8eb0) {
            ctx->pc = 0x2C8F08u;
            goto label_2c8f08;
        }
    }
    ctx->pc = 0x2C8EB8u;
    // 0x2c8eb8: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x2c8eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x2c8ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8ec0: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x2c8ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2c8ec4: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x2c8ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2c8ec8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2c8ec8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2c8ecc: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2c8eccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c8ed0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2C8ED0u;
    {
        const bool branch_taken_0x2c8ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8ED0u;
        // 0x2c8ed4: 0xad240004  sw          $a0, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ed0) {
            ctx->pc = 0x2C8F00u;
            goto label_2c8f00;
        }
    }
    ctx->pc = 0x2C8ED8u;
label_2c8ed8:
    // 0x2c8ed8: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x2c8ed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8edc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8EDCu;
    {
        const bool branch_taken_0x2c8edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8edc) {
            ctx->pc = 0x2C8EF8u;
            goto label_2c8ef8;
        }
    }
    ctx->pc = 0x2C8EE4u;
    // 0x2c8ee4: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x2c8ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2c8ee8: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8EE8u;
    {
        const bool branch_taken_0x2c8ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2c8ee8) {
            ctx->pc = 0x2C8EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8EE8u;
            // 0x2c8eec: 0xad060014  sw          $a2, 0x14($t0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F00u;
            goto label_2c8f00;
        }
    }
    ctx->pc = 0x2C8EF0u;
    // 0x2c8ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8EF0u;
    {
        const bool branch_taken_0x2c8ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8EF0u;
        // 0x2c8ef4: 0xad060010  sw          $a2, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8ef0) {
            ctx->pc = 0x2C8F00u;
            goto label_2c8f00;
        }
    }
    ctx->pc = 0x2C8EF8u;
label_2c8ef8:
    // 0x2c8ef8: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8EF8u;
    SET_GPR_U32(ctx, 31, 0x2C8F00u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8EF8u, 0x2C8F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F00u;
label_2c8f00:
    // 0x2c8f00: 0x10c00020  beqz        $a2, . + 4 + (0x20 << 2)
    ctx->pc = 0x2C8F00u;
    {
        const bool branch_taken_0x2c8f00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f00) {
            ctx->pc = 0x2C8F84u;
            goto label_2c8f84;
        }
    }
    ctx->pc = 0x2C8F08u;
label_2c8f08:
    // 0x2c8f08: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2c8f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c8f0c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x2c8f0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8f10: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2C8F10u;
    {
        const bool branch_taken_0x2c8f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f10) {
            ctx->pc = 0x2C8F7Cu;
            goto label_2c8f7c;
        }
    }
    ctx->pc = 0x2C8F18u;
    // 0x2c8f18: 0xacc80018  sw          $t0, 0x18($a2)
    ctx->pc = 0x2c8f18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 8));
    // 0x2c8f1c: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x2c8f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2c8f20: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8F20u;
    {
        const bool branch_taken_0x2c8f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f20) {
            ctx->pc = 0x2C8F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8F20u;
            // 0x2c8f24: 0x8ce30014  lw          $v1, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8F50u;
            goto label_2c8f50;
        }
    }
    ctx->pc = 0x2C8F28u;
    // 0x2c8f28: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2c8f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c8f2c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c8f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8f30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8F30u;
    {
        const bool branch_taken_0x2c8f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f30) {
            ctx->pc = 0x2C8F44u;
            goto label_2c8f44;
        }
    }
    ctx->pc = 0x2C8F38u;
    // 0x2c8f38: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x2c8f38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x2c8f3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C8F3Cu;
    {
        const bool branch_taken_0x2c8f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F3Cu;
        // 0x2c8f40: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f3c) {
            ctx->pc = 0x2C8F4Cu;
            goto label_2c8f4c;
        }
    }
    ctx->pc = 0x2C8F44u;
label_2c8f44:
    // 0x2c8f44: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8F44u;
    SET_GPR_U32(ctx, 31, 0x2C8F4Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8F44u, 0x2C8F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F4Cu;
label_2c8f4c:
    // 0x2c8f4c: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x2c8f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_2c8f50:
    // 0x2c8f50: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2C8F50u;
    {
        const bool branch_taken_0x2c8f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f50) {
            ctx->pc = 0x2C8F84u;
            goto label_2c8f84;
        }
    }
    ctx->pc = 0x2C8F58u;
    // 0x2c8f58: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2c8f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c8f5c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c8f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c8f60: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C8F60u;
    {
        const bool branch_taken_0x2c8f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f60) {
            ctx->pc = 0x2C8F74u;
            goto label_2c8f74;
        }
    }
    ctx->pc = 0x2C8F68u;
    // 0x2c8f68: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x2c8f68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    // 0x2c8f6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8F6Cu;
    {
        const bool branch_taken_0x2c8f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F6Cu;
        // 0x2c8f70: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f6c) {
            ctx->pc = 0x2C8F84u;
            goto label_2c8f84;
        }
    }
    ctx->pc = 0x2C8F74u;
label_2c8f74:
    // 0x2c8f74: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8F74u;
    SET_GPR_U32(ctx, 31, 0x2C8F7Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8F74u, 0x2C8F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F7Cu;
label_2c8f7c:
    // 0x2c8f7c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C8F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C8F84u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C8F7Cu, 0x2C8F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F84u;
label_2c8f84:
    // 0x2c8f84: 0x11600008  beqz        $t3, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8F84u;
    {
        const bool branch_taken_0x2c8f84 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8F84u;
        // 0x2c8f88: 0x1451021  addu        $v0, $t2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f84) {
            ctx->pc = 0x2C8FA8u;
            goto label_2c8fa8;
        }
    }
    ctx->pc = 0x2C8F8Cu;
    // 0x2c8f8c: 0x34440003  ori         $a0, $v0, 0x3
    ctx->pc = 0x2c8f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2c8f90: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x2c8f90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x2c8f94: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x2c8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c8f98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2c8f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c8f9c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c8f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2c8fa0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2C8FA0u;
    {
        const bool branch_taken_0x2c8fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FA0u;
        // 0x2c8fa4: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fa0) {
            ctx->pc = 0x2C903Cu;
            goto label_2c903c;
        }
    }
    ctx->pc = 0x2C8FA8u;
label_2c8fa8:
    // 0x2c8fa8: 0x34a20003  ori         $v0, $a1, 0x3
    ctx->pc = 0x2c8fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x2c8fac: 0x35440001  ori         $a0, $t2, 0x1
    ctx->pc = 0x2c8facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1);
    // 0x2c8fb0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x2c8fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x2c8fb4: 0x1aa1821  addu        $v1, $t5, $t2
    ctx->pc = 0x2c8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x2c8fb8: 0xada40004  sw          $a0, 0x4($t5)
    ctx->pc = 0x2c8fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 4));
    // 0x2c8fbc: 0xac6a0000  sw          $t2, 0x0($v1)
    ctx->pc = 0x2c8fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
    // 0x2c8fc0: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x2c8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2c8fc4: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x2C8FC4u;
    {
        const bool branch_taken_0x2c8fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FC4u;
        // 0x2c8fc8: 0x320c2  srl         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fc4) {
            ctx->pc = 0x2C9034u;
            goto label_2c9034;
        }
    }
    ctx->pc = 0x2C8FCCu;
    // 0x2c8fcc: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x2c8fccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2c8fd0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x2c8fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2c8fd4: 0x8d260014  lw          $a2, 0x14($t1)
    ctx->pc = 0x2c8fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x2c8fd8: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x2c8fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
    // 0x2c8fdc: 0x871006  srlv        $v0, $a3, $a0
    ctx->pc = 0x2c8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8fe0: 0x1232821  addu        $a1, $t1, $v1
    ctx->pc = 0x2c8fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x2c8fe4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c8fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c8fe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c8fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c8fec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C8FECu;
    {
        const bool branch_taken_0x2c8fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8FECu;
        // 0x2c8ff0: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fec) {
            ctx->pc = 0x2C9008u;
            goto label_2c9008;
        }
    }
    ctx->pc = 0x2C8FF4u;
    // 0x2c8ff4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8ff8: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2c8ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2c8ffc: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x2c8ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x2c9000: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C9000u;
    {
        const bool branch_taken_0x2c9000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9000u;
        // 0x2c9004: 0xad220000  sw          $v0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9000) {
            ctx->pc = 0x2C9024u;
            goto label_2c9024;
        }
    }
    ctx->pc = 0x2C9008u;
label_2c9008:
    // 0x2c9008: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2c9008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2c900c: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x2c900cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x2c9010: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2c9010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2c9014: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C9014u;
    {
        const bool branch_taken_0x2c9014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9014) {
            ctx->pc = 0x2C9018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C9014u;
            // 0x2c9018: 0xaca60008  sw          $a2, 0x8($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C9028u;
            goto label_2c9028;
        }
    }
    ctx->pc = 0x2C901Cu;
    // 0x2c901c: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C901Cu;
    SET_GPR_U32(ctx, 31, 0x2C9024u);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C901Cu, 0x2C9024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9024u;
label_2c9024:
    // 0x2c9024: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x2c9024u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
label_2c9028:
    // 0x2c9028: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x2c9028u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x2c902c: 0xacc5000c  sw          $a1, 0xC($a2)
    ctx->pc = 0x2c902cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 5));
    // 0x2c9030: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2c9030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_2c9034:
    // 0x2c9034: 0xad2d0014  sw          $t5, 0x14($t1)
    ctx->pc = 0x2c9034u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 13));
    // 0x2c9038: 0xad2a0008  sw          $t2, 0x8($t1)
    ctx->pc = 0x2c9038u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 10));
label_2c903c:
    // 0x2c903c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2C903Cu;
    {
        const bool branch_taken_0x2c903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C903Cu;
        // 0x2c9040: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c903c) {
            ctx->pc = 0x2C904Cu;
            goto label_2c904c;
        }
    }
    ctx->pc = 0x2C9044u;
label_2c9044:
    // 0x2c9044: 0xc0f0274  jal         func_3C09D0
    ctx->pc = 0x2C9044u;
    SET_GPR_U32(ctx, 31, 0x2C904Cu);
    ctx->pc = 0x3C09D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09D0u, 0x2C9044u, 0x2C904Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C904Cu;
label_2c904c:
    // 0x2c904c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c904cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9050: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9050u;
        // 0x2c9054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9058u;
    // 0x2c9058: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c9058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c905c: 0x0  nop
    ctx->pc = 0x2c905cu;
    // NOP
    // 0x2c9060: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2c9060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c9064: 0x0  nop
    ctx->pc = 0x2c9064u;
    // NOP
    ctx->pc = 0x2c9068u;
}
