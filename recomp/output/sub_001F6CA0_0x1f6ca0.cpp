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

// Function: sub_001F6CA0
// Address: 0x1f6ca0 - 0x1f6e60
void sub_001F6CA0_0x1f6ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6CA0_0x1f6ca0");
#endif

    switch (ctx->pc) {
        case 0x1f6d48u: goto label_1f6d48;
        case 0x1f6d90u: goto label_1f6d90;
        case 0x1f6da8u: goto label_1f6da8;
        default: break;
    }

    ctx->pc = 0x1f6ca0u;

    // 0x1f6ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f6ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f6ca4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f6ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f6ca8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1f6ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1f6cac: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1f6cacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cb0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1f6cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f6cb4: 0x30d6ffff  andi        $s6, $a2, 0xFFFF
    ctx->pc = 0x1f6cb4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1f6cb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6cbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6cc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6cc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6cc8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f6ccc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1f6cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1f6cd0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f6cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f6cd4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x1f6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1f6cd8: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1F6CD8u;
    {
        const bool branch_taken_0x1f6cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CD8u;
        // 0x1f6cdc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6cd8) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6CE0u;
    // 0x1f6ce0: 0x4a00053  bltz        $a1, . + 4 + (0x53 << 2)
    ctx->pc = 0x1F6CE0u;
    {
        const bool branch_taken_0x1f6ce0 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1F6CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CE0u;
        // 0x1f6ce4: 0x28a200e6  slti        $v0, $a1, 0xE6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)230) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ce0) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6CE8u;
    // 0x1f6ce8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1F6CE8u;
    {
        const bool branch_taken_0x1f6ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CE8u;
        // 0x1f6cec: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ce8) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6CF0u;
    // 0x1f6cf0: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x1f6cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f6cf4: 0x2a41821  addu        $v1, $s5, $a0
    ctx->pc = 0x1f6cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1f6cf8: 0x8c624f98  lw          $v0, 0x4F98($v1)
    ctx->pc = 0x1f6cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20376)));
    // 0x1f6cfc: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x1F6CFCu;
    {
        const bool branch_taken_0x1f6cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6CFCu;
        // 0x1f6d00: 0x2ec20063  sltiu       $v0, $s6, 0x63 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6cfc) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6D04u;
    // 0x1f6d04: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1F6D04u;
    {
        const bool branch_taken_0x1f6d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D04u;
        // 0x1f6d08: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d04) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6D0Cu;
    // 0x1f6d0c: 0x90c24fb8  lbu         $v0, 0x4FB8($a2)
    ctx->pc = 0x1f6d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 20408)));
    // 0x1f6d10: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1F6D10u;
    {
        const bool branch_taken_0x1f6d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D10u;
        // 0x1f6d14: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d10) {
            ctx->pc = 0x1F6DECu;
            goto label_1f6dec;
        }
    }
    ctx->pc = 0x1F6D18u;
    // 0x1f6d18: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f6d18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f6d20: 0x24479298  addiu       $a3, $v0, -0x6D68
    ctx->pc = 0x1f6d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939288));
    // 0x1f6d24: 0x26634f90  addiu       $v1, $s3, 0x4F90
    ctx->pc = 0x1f6d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20368));
    // 0x1f6d28: 0x2c75021  addu        $t2, $s6, $a3
    ctx->pc = 0x1f6d28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x1f6d2c: 0x2a39021  addu        $s2, $s5, $v1
    ctx->pc = 0x1f6d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1f6d30: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1f6d30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d34: 0x26a84fa0  addiu       $t0, $s5, 0x4FA0
    ctx->pc = 0x1f6d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 20384));
    // 0x1f6d38: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x1f6d38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f6d3c: 0x26b74fa8  addiu       $s7, $s5, 0x4FA8
    ctx->pc = 0x1f6d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 20392));
    // 0x1f6d40: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x1f6d40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1f6d44: 0x0  nop
    ctx->pc = 0x1f6d44u;
    // NOP
label_1f6d48:
    // 0x1f6d48: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x1f6d48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1f6d4c: 0xd31821  addu        $v1, $a2, $s3
    ctx->pc = 0x1f6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x1f6d50: 0x103a021  addu        $s4, $t0, $v1
    ctx->pc = 0x1f6d50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1f6d54: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x1f6d54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1f6d58: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f6d5c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1f6d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6d60: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x1f6d60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f6d64: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1F6D64u;
    {
        const bool branch_taken_0x1f6d64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D64u;
        // 0x1f6d68: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d64) {
            ctx->pc = 0x1F6DD4u;
            goto label_1f6dd4;
        }
    }
    ctx->pc = 0x1F6D6Cu;
    // 0x1f6d6c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F6D6Cu;
    {
        const bool branch_taken_0x1f6d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D6Cu;
        // 0x1f6d70: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d6c) {
            ctx->pc = 0x1F6DA8u;
            goto label_1f6da8;
        }
    }
    ctx->pc = 0x1F6D74u;
    // 0x1f6d74: 0x1708023  subu        $s0, $t3, $s0
    ctx->pc = 0x1f6d74u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
    // 0x1f6d78: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x1f6d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1f6d7c: 0x24c40012  addiu       $a0, $a2, 0x12
    ctx->pc = 0x1f6d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 18));
    // 0x1f6d80: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1f6d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f6d84: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1f6d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1f6d88: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1F6D88u;
    SET_GPR_U32(ctx, 31, 0x1F6D90u);
    ctx->pc = 0x1F6D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D88u;
    // 0x1f6d8c: 0x103040  sll         $a2, $s0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1F6D88u, 0x1F6D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D90u;
label_1f6d90:
    // 0x1f6d90: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x1f6d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x1f6d94: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x1f6d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x1f6d98: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x1f6d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x1f6d9c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x1f6d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1f6da0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x1F6DA0u;
    SET_GPR_U32(ctx, 31, 0x1F6DA8u);
    ctx->pc = 0x1F6DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DA0u;
    // 0x1f6da4: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x1F6DA0u, 0x1F6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DA8u;
label_1f6da8:
    // 0x1f6da8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x1f6da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x1f6dac: 0xa6960000  sh          $s6, 0x0($s4)
    ctx->pc = 0x1f6dacu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 22));
    // 0x1f6db0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1f6db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f6db4: 0x2b31821  addu        $v1, $s5, $s3
    ctx->pc = 0x1f6db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x1f6db8: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x1f6db8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f6dbc: 0x90654fb8  lbu         $a1, 0x4FB8($v1)
    ctx->pc = 0x1f6dbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 20408)));
    // 0x1f6dc0: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x1f6dc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f6dc4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F6DC4u;
    {
        const bool branch_taken_0x1f6dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DC4u;
        // 0x1f6dc8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6dc4) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6DCCu;
    // 0x1f6dcc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F6DCCu;
    {
        const bool branch_taken_0x1f6dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DCCu;
        // 0x1f6dd0: 0xa0624fb8  sb          $v0, 0x4FB8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 20408), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6dcc) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6DD4u;
label_1f6dd4:
    // 0x1f6dd4: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1f6dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f6dd8: 0x91224fb8  lbu         $v0, 0x4FB8($t1)
    ctx->pc = 0x1f6dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 20408)));
    // 0x1f6ddc: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1f6ddcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1f6de0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1f6de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f6de4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x1F6DE4u;
    {
        const bool branch_taken_0x1f6de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DE4u;
        // 0x1f6de8: 0x103040  sll         $a2, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6de4) {
            ctx->pc = 0x1F6D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6d48;
        }
    }
    ctx->pc = 0x1F6DECu;
label_1f6dec:
    // 0x1f6dec: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x1f6decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x1f6df0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1f6df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1f6df4: 0x2a52021  addu        $a0, $s5, $a1
    ctx->pc = 0x1f6df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1f6df8: 0x90824fb8  lbu         $v0, 0x4FB8($a0)
    ctx->pc = 0x1f6df8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20408)));
    // 0x1f6dfc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1f6dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f6e00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6E00u;
    {
        const bool branch_taken_0x1f6e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E00u;
        // 0x1f6e04: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e00) {
            ctx->pc = 0x1F6E30u;
            goto label_1f6e30;
        }
    }
    ctx->pc = 0x1F6E08u;
    // 0x1f6e08: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1f6e08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1f6e0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1f6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1f6e10: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1f6e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f6e14: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1f6e18: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1f6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1f6e1c: 0xa4564fa0  sh          $s6, 0x4FA0($v0)
    ctx->pc = 0x1f6e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20384), (uint16_t)GPR_U32(ctx, 22));
    // 0x1f6e20: 0xe4744fa8  swc1        $f20, 0x4FA8($v1)
    ctx->pc = 0x1f6e20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20392), bits); }
    // 0x1f6e24: 0x90824fb8  lbu         $v0, 0x4FB8($a0)
    ctx->pc = 0x1f6e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20408)));
    // 0x1f6e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f6e2c: 0xa0824fb8  sb          $v0, 0x4FB8($a0)
    ctx->pc = 0x1f6e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20408), (uint8_t)GPR_U32(ctx, 2));
label_1f6e30:
    // 0x1f6e30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6e34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6e38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6e38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6e3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6e3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6e40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6e40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6e44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f6e44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6e48: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1f6e48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e4c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1f6e4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f6e50: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f6e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6e54: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1f6e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f6e58: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E58u;
        // 0x1f6e5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6E60u;
}
