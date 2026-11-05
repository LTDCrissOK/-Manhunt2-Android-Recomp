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

// Function: sub_003C5CE0
// Address: 0x3c5ce0 - 0x3c6128
void sub_003C5CE0_0x3c5ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C5CE0_0x3c5ce0");
#endif

    switch (ctx->pc) {
        case 0x3c5d84u: goto label_3c5d84;
        case 0x3c5d94u: goto label_3c5d94;
        case 0x3c5da0u: goto label_3c5da0;
        case 0x3c5df8u: goto label_3c5df8;
        case 0x3c5e20u: goto label_3c5e20;
        case 0x3c5e70u: goto label_3c5e70;
        case 0x3c5ea0u: goto label_3c5ea0;
        case 0x3c5f70u: goto label_3c5f70;
        case 0x3c6000u: goto label_3c6000;
        default: break;
    }

    ctx->pc = 0x3c5ce0u;

    // 0x3c5ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c5ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c5ce4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c5ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c5ce8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c5ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c5cec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c5cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5cf0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3c5cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5cf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c5cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c5cf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c5cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c5cfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c5cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5d00: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x3c5d00u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c5d04: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x3c5d04u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x3c5d08: 0x2383f  dsra32      $a3, $v0, 0
    ctx->pc = 0x3c5d08u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c5d0c: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x3c5d0cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5d10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3c5d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5d14: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x3c5d14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c5d18: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x3c5d18u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x3c5d1c: 0x2483f  dsra32      $t1, $v0, 0
    ctx->pc = 0x3c5d1cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c5d20: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x3c5d20u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5d24: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3c5d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x3c5d28: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3c5d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3c5d2c: 0xe36824  and         $t5, $a3, $v1
    ctx->pc = 0x3c5d2cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x3c5d30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5d34: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x3c5d34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3c5d38: 0x12a1825  or          $v1, $t1, $t2
    ctx->pc = 0x3c5d38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x3c5d3c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3C5D3Cu;
    {
        const bool branch_taken_0x3c5d3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D3Cu;
        // 0x3c5d40: 0xed3826  xor         $a3, $a3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d3c) {
            ctx->pc = 0x3C5D78u;
            goto label_3c5d78;
        }
    }
    ctx->pc = 0x3C5D44u;
    // 0x3c5d44: 0x3c027fef  lui         $v0, 0x7FEF
    ctx->pc = 0x3c5d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
    // 0x3c5d48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5d4c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3c5d4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c5d50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C5D50u;
    {
        const bool branch_taken_0x3c5d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D50u;
        // 0x3c5d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d50) {
            ctx->pc = 0x3C5D7Cu;
            goto label_3c5d7c;
        }
    }
    ctx->pc = 0x3C5D58u;
    // 0x3c5d58: 0xa1023  negu        $v0, $t2
    ctx->pc = 0x3c5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x3c5d5c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x3c5d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x3c5d60: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x3c5d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x3c5d64: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3c5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3c5d68: 0x1221025  or          $v0, $t1, $v0
    ctx->pc = 0x3c5d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x3c5d6c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3c5d6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c5d70: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3C5D70u;
    {
        const bool branch_taken_0x3c5d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5D70u;
        // 0x3c5d74: 0x127102a  slt         $v0, $t1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5d70) {
            ctx->pc = 0x3C5DA8u;
            goto label_3c5da8;
        }
    }
    ctx->pc = 0x3C5D78u;
label_3c5d78:
    // 0x3c5d78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c5d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c5d7c:
    // 0x3c5d7c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C5D7Cu;
    SET_GPR_U32(ctx, 31, 0x3C5D84u);
    ctx->pc = 0x3C5D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D7Cu;
    // 0x3c5d80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C5D7Cu, 0x3C5D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D84u;
label_3c5d84:
    // 0x3c5d84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3c5d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c5d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5d8c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x3C5D8Cu;
    SET_GPR_U32(ctx, 31, 0x3C5D94u);
    ctx->pc = 0x3C5D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D8Cu;
    // 0x3c5d90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x3C5D8Cu, 0x3C5D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5D94u;
label_3c5d94:
    // 0x3c5d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c5d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5d98: 0xc0f5040  jal         func_3D4100
    ctx->pc = 0x3C5D98u;
    SET_GPR_U32(ctx, 31, 0x3C5DA0u);
    ctx->pc = 0x3C5D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C5D98u;
    // 0x3c5d9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4100u, 0x3C5D98u, 0x3C5DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5DA0u;
label_3c5da0:
    // 0x3c5da0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x3C5DA0u;
    {
        const bool branch_taken_0x3c5da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DA0u;
        // 0x3c5da4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5da0) {
            ctx->pc = 0x3C6110u;
            goto label_3c6110;
        }
    }
    ctx->pc = 0x3C5DA8u;
label_3c5da8:
    // 0x3c5da8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C5DA8u;
    {
        const bool branch_taken_0x3c5da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DA8u;
        // 0x3c5dac: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5da8) {
            ctx->pc = 0x3C5DD4u;
            goto label_3c5dd4;
        }
    }
    ctx->pc = 0x3C5DB0u;
    // 0x3c5db0: 0xe9102a  slt         $v0, $a3, $t1
    ctx->pc = 0x3c5db0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3c5db4: 0x144000d5  bnez        $v0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x3C5DB4u;
    {
        const bool branch_taken_0x3c5db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DB4u;
        // 0x3c5db8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5db4) {
            ctx->pc = 0x3C610Cu;
            goto label_3c610c;
        }
    }
    ctx->pc = 0x3C5DBCu;
    // 0x3c5dbc: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x3c5dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3c5dc0: 0x544000d2  bnel        $v0, $zero, . + 4 + (0xD2 << 2)
    ctx->pc = 0x3C5DC0u;
    {
        const bool branch_taken_0x3c5dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5dc0) {
            ctx->pc = 0x3C5DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5DC0u;
            // 0x3c5dc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C610Cu;
            goto label_3c610c;
        }
    }
    ctx->pc = 0x3C5DC8u;
    // 0x3c5dc8: 0x110a00ba  beq         $t0, $t2, . + 4 + (0xBA << 2)
    ctx->pc = 0x3C5DC8u;
    {
        const bool branch_taken_0x3c5dc8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 10));
        ctx->pc = 0x3C5DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DC8u;
        // 0x3c5dcc: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5dc8) {
            ctx->pc = 0x3C60B4u;
            goto label_3c60b4;
        }
    }
    ctx->pc = 0x3C5DD0u;
    // 0x3c5dd0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3c5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_3c5dd4:
    // 0x3c5dd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5dd8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3c5dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c5ddc: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C5DDCu;
    {
        const bool branch_taken_0x3c5ddc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c5ddc) {
            ctx->pc = 0x3C5DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C5DDCu;
            // 0x3c5de0: 0x71503  sra         $v0, $a3, 20 (Delay Slot)
            SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C5E40u;
            goto label_3c5e40;
        }
    }
    ctx->pc = 0x3C5DE4u;
    // 0x3c5de4: 0x14e0000c  bnez        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x3C5DE4u;
    {
        const bool branch_taken_0x3c5de4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DE4u;
        // 0x3c5de8: 0x712c0  sll         $v0, $a3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5de4) {
            ctx->pc = 0x3C5E18u;
            goto label_3c5e18;
        }
    }
    ctx->pc = 0x3C5DECu;
    // 0x3c5dec: 0x2405fbed  addiu       $a1, $zero, -0x413
    ctx->pc = 0x3c5decu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x3c5df0: 0x19c00014  blez        $t6, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C5DF0u;
    {
        const bool branch_taken_0x3c5df0 = (GPR_S32(ctx, 14) <= 0);
        ctx->pc = 0x3C5DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5DF0u;
        // 0x3c5df4: 0x1c0102d  daddu       $v0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5df0) {
            ctx->pc = 0x3C5E44u;
            goto label_3c5e44;
        }
    }
    ctx->pc = 0x3C5DF8u;
label_3c5df8:
    // 0x3c5df8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3c5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3c5dfc: 0x0  nop
    ctx->pc = 0x3c5dfcu;
    // NOP
    // 0x3c5e00: 0x0  nop
    ctx->pc = 0x3c5e00u;
    // NOP
    // 0x3c5e04: 0x0  nop
    ctx->pc = 0x3c5e04u;
    // NOP
    // 0x3c5e08: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C5E08u;
    {
        const bool branch_taken_0x3c5e08 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C5E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E08u;
        // 0x3c5e0c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e08) {
            ctx->pc = 0x3C5DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5df8;
        }
    }
    ctx->pc = 0x3C5E10u;
    // 0x3c5e10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C5E10u;
    {
        const bool branch_taken_0x3c5e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E10u;
        // 0x3c5e14: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e10) {
            ctx->pc = 0x3C5E48u;
            goto label_3c5e48;
        }
    }
    ctx->pc = 0x3C5E18u;
label_3c5e18:
    // 0x3c5e18: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3C5E18u;
    {
        const bool branch_taken_0x3c5e18 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C5E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E18u;
        // 0x3c5e1c: 0x2405fc02  addiu       $a1, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e18) {
            ctx->pc = 0x3C5E44u;
            goto label_3c5e44;
        }
    }
    ctx->pc = 0x3C5E20u;
label_3c5e20:
    // 0x3c5e20: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3c5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3c5e24: 0x0  nop
    ctx->pc = 0x3c5e24u;
    // NOP
    // 0x3c5e28: 0x0  nop
    ctx->pc = 0x3c5e28u;
    // NOP
    // 0x3c5e2c: 0x0  nop
    ctx->pc = 0x3c5e2cu;
    // NOP
    // 0x3c5e30: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C5E30u;
    {
        const bool branch_taken_0x3c5e30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C5E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E30u;
        // 0x3c5e34: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e30) {
            ctx->pc = 0x3C5E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5e20;
        }
    }
    ctx->pc = 0x3C5E38u;
    // 0x3c5e38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5E38u;
    {
        const bool branch_taken_0x3c5e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E38u;
        // 0x3c5e3c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e38) {
            ctx->pc = 0x3C5E48u;
            goto label_3c5e48;
        }
    }
    ctx->pc = 0x3C5E40u;
label_3c5e40:
    // 0x3c5e40: 0x2445fc01  addiu       $a1, $v0, -0x3FF
    ctx->pc = 0x3c5e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_3c5e44:
    // 0x3c5e44: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3c5e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_3c5e48:
    // 0x3c5e48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5e4c: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x3c5e4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x3c5e50: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3C5E50u;
    {
        const bool branch_taken_0x3c5e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E50u;
        // 0x3c5e54: 0x91503  sra         $v0, $t1, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e50) {
            ctx->pc = 0x3C5EC0u;
            goto label_3c5ec0;
        }
    }
    ctx->pc = 0x3C5E58u;
    // 0x3c5e58: 0x1520000d  bnez        $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x3C5E58u;
    {
        const bool branch_taken_0x3c5e58 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E58u;
        // 0x3c5e5c: 0x2404fc02  addiu       $a0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e58) {
            ctx->pc = 0x3C5E90u;
            goto label_3c5e90;
        }
    }
    ctx->pc = 0x3C5E60u;
    // 0x3c5e60: 0x2404fbed  addiu       $a0, $zero, -0x413
    ctx->pc = 0x3c5e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966253));
    // 0x3c5e64: 0x1e0102d  daddu       $v0, $t7, $zero
    ctx->pc = 0x3c5e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5e68: 0x19e00017  blez        $t7, . + 4 + (0x17 << 2)
    ctx->pc = 0x3C5E68u;
    {
        const bool branch_taken_0x3c5e68 = (GPR_S32(ctx, 15) <= 0);
        ctx->pc = 0x3C5E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E68u;
        // 0x3c5e6c: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e68) {
            ctx->pc = 0x3C5EC8u;
            goto label_3c5ec8;
        }
    }
    ctx->pc = 0x3C5E70u;
label_3c5e70:
    // 0x3c5e70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3c5e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3c5e74: 0x0  nop
    ctx->pc = 0x3c5e74u;
    // NOP
    // 0x3c5e78: 0x0  nop
    ctx->pc = 0x3c5e78u;
    // NOP
    // 0x3c5e7c: 0x0  nop
    ctx->pc = 0x3c5e7cu;
    // NOP
    // 0x3c5e80: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C5E80u;
    {
        const bool branch_taken_0x3c5e80 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C5E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E80u;
        // 0x3c5e84: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e80) {
            ctx->pc = 0x3C5E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5e70;
        }
    }
    ctx->pc = 0x3C5E88u;
    // 0x3c5e88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3C5E88u;
    {
        const bool branch_taken_0x3c5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5e88) {
            ctx->pc = 0x3C5EC8u;
            goto label_3c5ec8;
        }
    }
    ctx->pc = 0x3C5E90u;
label_3c5e90:
    // 0x3c5e90: 0x912c0  sll         $v0, $t1, 11
    ctx->pc = 0x3c5e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 11));
    // 0x3c5e94: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C5E94u;
    {
        const bool branch_taken_0x3c5e94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C5E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5E94u;
        // 0x3c5e98: 0x28a3fc02  slti        $v1, $a1, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5e94) {
            ctx->pc = 0x3C5EC8u;
            goto label_3c5ec8;
        }
    }
    ctx->pc = 0x3C5E9Cu;
    // 0x3c5e9c: 0x0  nop
    ctx->pc = 0x3c5e9cu;
    // NOP
label_3c5ea0:
    // 0x3c5ea0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3c5ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3c5ea4: 0x0  nop
    ctx->pc = 0x3c5ea4u;
    // NOP
    // 0x3c5ea8: 0x0  nop
    ctx->pc = 0x3c5ea8u;
    // NOP
    // 0x3c5eac: 0x0  nop
    ctx->pc = 0x3c5eacu;
    // NOP
    // 0x3c5eb0: 0x1c40fffb  bgtz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C5EB0u;
    {
        const bool branch_taken_0x3c5eb0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5EB0u;
        // 0x3c5eb4: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5eb0) {
            ctx->pc = 0x3C5EA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5ea0;
        }
    }
    ctx->pc = 0x3C5EB8u;
    // 0x3c5eb8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5EB8u;
    {
        const bool branch_taken_0x3c5eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c5eb8) {
            ctx->pc = 0x3C5EC8u;
            goto label_3c5ec8;
        }
    }
    ctx->pc = 0x3C5EC0u;
label_3c5ec0:
    // 0x3c5ec0: 0x28a3fc02  slti        $v1, $a1, -0x3FE
    ctx->pc = 0x3c5ec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x3c5ec4: 0x2444fc01  addiu       $a0, $v0, -0x3FF
    ctx->pc = 0x3c5ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
label_3c5ec8:
    // 0x3c5ec8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5EC8u;
    {
        const bool branch_taken_0x3c5ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5EC8u;
        // 0x3c5ecc: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ec8) {
            ctx->pc = 0x3C5EE8u;
            goto label_3c5ee8;
        }
    }
    ctx->pc = 0x3C5ED0u;
    // 0x3c5ed0: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3c5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3c5ed4: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3c5ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3c5ed8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5edc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x3c5edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3c5ee0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C5EE0u;
    {
        const bool branch_taken_0x3c5ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5EE0u;
        // 0x3c5ee4: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ee0) {
            ctx->pc = 0x3C5F14u;
            goto label_3c5f14;
        }
    }
    ctx->pc = 0x3C5EE8u;
label_3c5ee8:
    // 0x3c5ee8: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x3c5ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c5eec: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x3c5eecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3c5ef0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C5EF0u;
    {
        const bool branch_taken_0x3c5ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5EF0u;
        // 0x3c5ef4: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ef0) {
            ctx->pc = 0x3C5F0Cu;
            goto label_3c5f0c;
        }
    }
    ctx->pc = 0x3C5EF8u;
    // 0x3c5ef8: 0xc71804  sllv        $v1, $a3, $a2
    ctx->pc = 0x3c5ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c5efc: 0x4e1006  srlv        $v0, $t6, $v0
    ctx->pc = 0x3c5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c5f00: 0xce4004  sllv        $t0, $t6, $a2
    ctx->pc = 0x3c5f00u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c5f04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5F04u;
    {
        const bool branch_taken_0x3c5f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F04u;
        // 0x3c5f08: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f04) {
            ctx->pc = 0x3C5F14u;
            goto label_3c5f14;
        }
    }
    ctx->pc = 0x3C5F0Cu;
label_3c5f0c:
    // 0x3c5f0c: 0xce3804  sllv        $a3, $t6, $a2
    ctx->pc = 0x3c5f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c5f10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c5f10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5f14:
    // 0x3c5f14: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x3c5f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x3c5f18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5F18u;
    {
        const bool branch_taken_0x3c5f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F18u;
        // 0x3c5f1c: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f18) {
            ctx->pc = 0x3C5F38u;
            goto label_3c5f38;
        }
    }
    ctx->pc = 0x3C5F20u;
    // 0x3c5f20: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3c5f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3c5f24: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3c5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3c5f28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5f2c: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x3c5f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x3c5f30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3C5F30u;
    {
        const bool branch_taken_0x3c5f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F30u;
        // 0x3c5f34: 0x434825  or          $t1, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f30) {
            ctx->pc = 0x3C5F64u;
            goto label_3c5f64;
        }
    }
    ctx->pc = 0x3C5F38u;
label_3c5f38:
    // 0x3c5f38: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x3c5f38u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c5f3c: 0x28c30020  slti        $v1, $a2, 0x20
    ctx->pc = 0x3c5f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3c5f40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C5F40u;
    {
        const bool branch_taken_0x3c5f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F40u;
        // 0x3c5f44: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f40) {
            ctx->pc = 0x3C5F5Cu;
            goto label_3c5f5c;
        }
    }
    ctx->pc = 0x3C5F48u;
    // 0x3c5f48: 0xc91804  sllv        $v1, $t1, $a2
    ctx->pc = 0x3c5f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c5f4c: 0x4f1006  srlv        $v0, $t7, $v0
    ctx->pc = 0x3c5f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 15), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c5f50: 0xcf5004  sllv        $t2, $t7, $a2
    ctx->pc = 0x3c5f50u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c5f54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5F54u;
    {
        const bool branch_taken_0x3c5f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F54u;
        // 0x3c5f58: 0x624825  or          $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f54) {
            ctx->pc = 0x3C5F64u;
            goto label_3c5f64;
        }
    }
    ctx->pc = 0x3C5F5Cu;
label_3c5f5c:
    // 0x3c5f5c: 0xcf4804  sllv        $t1, $t7, $a2
    ctx->pc = 0x3c5f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 15), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c5f60: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3c5f60u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c5f64:
    // 0x3c5f64: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3C5F64u;
    {
        const bool branch_taken_0x3c5f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F64u;
        // 0x3c5f68: 0xa43023  subu        $a2, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f64) {
            ctx->pc = 0x3C5FB0u;
            goto label_3c5fb0;
        }
    }
    ctx->pc = 0x3C5F6Cu;
    // 0x3c5f6c: 0x0  nop
    ctx->pc = 0x3c5f6cu;
    // NOP
label_3c5f70:
    // 0x3c5f70: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3c5f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3c5f74: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x3c5f74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3c5f78: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3c5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5f7c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C5F7Cu;
    {
        const bool branch_taken_0x3c5f7c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3C5F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F7Cu;
        // 0x3c5f80: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f7c) {
            ctx->pc = 0x3C5F98u;
            goto label_3c5f98;
        }
    }
    ctx->pc = 0x3C5F84u;
    // 0x3c5f84: 0x817c2  srl         $v0, $t0, 31
    ctx->pc = 0x3c5f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x3c5f88: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x3c5f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3c5f8c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x3c5f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5f90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C5F90u;
    {
        const bool branch_taken_0x3c5f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F90u;
        // 0x3c5f94: 0x84040  sll         $t0, $t0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f90) {
            ctx->pc = 0x3C5FB0u;
            goto label_3c5fb0;
        }
    }
    ctx->pc = 0x3C5F98u;
label_3c5f98:
    // 0x3c5f98: 0x651025  or          $v0, $v1, $a1
    ctx->pc = 0x3c5f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3c5f9c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3C5F9Cu;
    {
        const bool branch_taken_0x3c5f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5F9Cu;
        // 0x3c5fa0: 0x31840  sll         $v1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5f9c) {
            ctx->pc = 0x3C60B0u;
            goto label_3c60b0;
        }
    }
    ctx->pc = 0x3C5FA4u;
    // 0x3c5fa4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x3c5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3c5fa8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x3c5fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5fac: 0x54040  sll         $t0, $a1, 1
    ctx->pc = 0x3c5facu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3c5fb0:
    // 0x3c5fb0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3c5fb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5fb4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3C5FB4u;
    {
        const bool branch_taken_0x3c5fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5FB4u;
        // 0x3c5fb8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5fb4) {
            ctx->pc = 0x3C5F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c5f70;
        }
    }
    ctx->pc = 0x3C5FBCu;
    // 0x3c5fbc: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x3c5fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x3c5fc0: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x3c5fc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3c5fc4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3c5fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c5fc8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C5FC8u;
    {
        const bool branch_taken_0x3c5fc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3C5FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5FC8u;
        // 0x3c5fcc: 0x10a2823  subu        $a1, $t0, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5fc8) {
            ctx->pc = 0x3C5FD8u;
            goto label_3c5fd8;
        }
    }
    ctx->pc = 0x3C5FD0u;
    // 0x3c5fd0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3c5fd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c5fd4: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3c5fd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c5fd8:
    // 0x3c5fd8: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x3c5fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3c5fdc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3C5FDCu;
    {
        const bool branch_taken_0x3c5fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5FDCu;
        // 0x3c5fe0: 0xd1fc2  srl         $v1, $t5, 31 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5fdc) {
            ctx->pc = 0x3C60B4u;
            goto label_3c60b4;
        }
    }
    ctx->pc = 0x3C5FE4u;
    // 0x3c5fe4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x3c5fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x3c5fe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c5fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3c5fec: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x3c5fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c5ff0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3C5FF0u;
    {
        const bool branch_taken_0x3c5ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C5FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5FF0u;
        // 0x3c5ff4: 0x2882fc02  slti        $v0, $a0, -0x3FE (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5ff0) {
            ctx->pc = 0x3C6020u;
            goto label_3c6020;
        }
    }
    ctx->pc = 0x3C5FF8u;
    // 0x3c5ff8: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x3c5ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x3c5ffc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x3c5ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_3c6000:
    // 0x3c6000: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x3c6000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x3c6004: 0x81fc2  srl         $v1, $t0, 31
    ctx->pc = 0x3c6004u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x3c6008: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x3c6008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c600c: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x3c600cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x3c6010: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x3c6010u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3c6014: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3C6014u;
    {
        const bool branch_taken_0x3c6014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6014u;
        // 0x3c6018: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6014) {
            ctx->pc = 0x3C6000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6000;
        }
    }
    ctx->pc = 0x3C601Cu;
    // 0x3c601c: 0x2882fc02  slti        $v0, $a0, -0x3FE
    ctx->pc = 0x3c601cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4294966274) ? 1 : 0);
label_3c6020:
    // 0x3c6020: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C6020u;
    {
        const bool branch_taken_0x3c6020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6020u;
        // 0x3c6024: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6020) {
            ctx->pc = 0x3C6070u;
            goto label_3c6070;
        }
    }
    ctx->pc = 0x3C6028u;
    // 0x3c6028: 0x248403ff  addiu       $a0, $a0, 0x3FF
    ctx->pc = 0x3c6028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1023));
    // 0x3c602c: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x3c602cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x3c6030: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3c6030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3c6034: 0x42500  sll         $a0, $a0, 20
    ctx->pc = 0x3c6034u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 20));
    // 0x3c6038: 0x643825  or          $a3, $v1, $a0
    ctx->pc = 0x3c6038u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3c603c: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x3c603cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x3c6040: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c6040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c6044: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3c6044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3c6048: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c6048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c604c: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x3c604cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x3c6050: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x3c6050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3c6054: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x3c6054u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x3c6058: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3c6058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c605c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3c605cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3c6060: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c6060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c6064: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x3c6064u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x3c6068: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x3C6068u;
    {
        const bool branch_taken_0x3c6068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6068u;
        // 0x3c606c: 0x1638825  or          $s1, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6068) {
            ctx->pc = 0x3C6108u;
            goto label_3c6108;
        }
    }
    ctx->pc = 0x3C6070u;
label_3c6070:
    // 0x3c6070: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x3c6070u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3c6074: 0x28c30015  slti        $v1, $a2, 0x15
    ctx->pc = 0x3c6074u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x3c6078: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C6078u;
    {
        const bool branch_taken_0x3c6078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C607Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6078u;
        // 0x3c607c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6078) {
            ctx->pc = 0x3C6094u;
            goto label_3c6094;
        }
    }
    ctx->pc = 0x3C6080u;
    // 0x3c6080: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x3c6080u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c6084: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x3c6084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c6088: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x3c6088u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3c608c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3C608Cu;
    {
        const bool branch_taken_0x3c608c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C608Cu;
        // 0x3c6090: 0xc73807  srav        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c608c) {
            ctx->pc = 0x3C60D4u;
            goto label_3c60d4;
        }
    }
    ctx->pc = 0x3C6094u;
label_3c6094:
    // 0x3c6094: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x3c6094u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3c6098: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C6098u;
    {
        const bool branch_taken_0x3c6098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C609Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6098u;
        // 0x3c609c: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6098) {
            ctx->pc = 0x3C60CCu;
            goto label_3c60cc;
        }
    }
    ctx->pc = 0x3C60A0u;
    // 0x3c60a0: 0xc81806  srlv        $v1, $t0, $a2
    ctx->pc = 0x3c60a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x3c60a4: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x3c60a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x3c60a8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C60A8u;
    {
        const bool branch_taken_0x3c60a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C60A8u;
        // 0x3c60ac: 0x434025  or          $t0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c60a8) {
            ctx->pc = 0x3C60D0u;
            goto label_3c60d0;
        }
    }
    ctx->pc = 0x3C60B0u;
label_3c60b0:
    // 0x3c60b0: 0xd1fc2  srl         $v1, $t5, 31
    ctx->pc = 0x3c60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
label_3c60b4:
    // 0x3c60b4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c60b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c60b8: 0x244217a8  addiu       $v0, $v0, 0x17A8
    ctx->pc = 0x3c60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6056));
    // 0x3c60bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3c60bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3c60c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c60c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c60c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3C60C4u;
    {
        const bool branch_taken_0x3c60c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C60C4u;
        // 0x3c60c8: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c60c4) {
            ctx->pc = 0x3C610Cu;
            goto label_3c610c;
        }
    }
    ctx->pc = 0x3C60CCu;
label_3c60cc:
    // 0x3c60cc: 0xc74007  srav        $t0, $a3, $a2
    ctx->pc = 0x3c60ccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
label_3c60d0:
    // 0x3c60d0: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x3c60d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_3c60d4:
    // 0x3c60d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3c60d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c60d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c60d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c60dc: 0xed1025  or          $v0, $a3, $t5
    ctx->pc = 0x3c60dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x3c60e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c60e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c60e4: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x3c60e4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x3c60e8: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x3c60e8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x3c60ec: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x3c60ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
    // 0x3c60f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c60f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3c60f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c60f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c60f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3c60f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3c60fc: 0x1826024  and         $t4, $t4, $v0
    ctx->pc = 0x3c60fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 2));
    // 0x3c6100: 0x1838825  or          $s1, $t4, $v1
    ctx->pc = 0x3c6100u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
    // 0x3c6104: 0x0  nop
    ctx->pc = 0x3c6104u;
    // NOP
label_3c6108:
    // 0x3c6108: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c6108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c610c:
    // 0x3c610c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c610cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6110:
    // 0x3c6110: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c6110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c6114: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c6114u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c6118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c6118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c611c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C611Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C611Cu;
        // 0x3c6120: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C611Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6124u;
    // 0x3c6124: 0x0  nop
    ctx->pc = 0x3c6124u;
    // NOP
    ctx->pc = 0x3c6128u;
}
