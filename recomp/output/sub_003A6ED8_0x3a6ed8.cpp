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

// Function: sub_003A6ED8
// Address: 0x3a6ed8 - 0x3a7070
void sub_003A6ED8_0x3a6ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6ED8_0x3a6ed8");
#endif

    switch (ctx->pc) {
        case 0x3a6f20u: goto label_3a6f20;
        case 0x3a6f4cu: goto label_3a6f4c;
        case 0x3a6fb8u: goto label_3a6fb8;
        case 0x3a6fc8u: goto label_3a6fc8;
        default: break;
    }

    ctx->pc = 0x3a6ed8u;

    // 0x3a6ed8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a6ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a6edc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a6edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a6ee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a6ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a6ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a6ee8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a6ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6eec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a6eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a6ef0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3a6ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ef4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a6ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a6ef8: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3a6ef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6efc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3a6efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3a6f00: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x3a6f00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6f08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a6f0c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6F0Cu;
    {
        const bool branch_taken_0x3a6f0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F0Cu;
        // 0x3a6f10: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f0c) {
            ctx->pc = 0x3A6F28u;
            goto label_3a6f28;
        }
    }
    ctx->pc = 0x3A6F14u;
    // 0x3a6f14: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a6f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a6f18: 0xc0e9d40  jal         func_3A7500
    ctx->pc = 0x3A6F18u;
    SET_GPR_U32(ctx, 31, 0x3A6F20u);
    ctx->pc = 0x3A6F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F18u;
    // 0x3a6f1c: 0x2484e088  addiu       $a0, $a0, -0x1F78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7500u, 0x3A6F18u, 0x3A6F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F20u;
label_3a6f20:
    // 0x3a6f20: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x3A6F20u;
    {
        const bool branch_taken_0x3a6f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F20u;
        // 0x3a6f24: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f20) {
            ctx->pc = 0x3A7048u;
            goto label_3a7048;
        }
    }
    ctx->pc = 0x3A6F28u;
label_3a6f28:
    // 0x3a6f28: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3a6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3a6f2c: 0x28630010  slti        $v1, $v1, 0x10
    ctx->pc = 0x3a6f2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a6f30: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3A6F30u;
    {
        const bool branch_taken_0x3a6f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F30u;
        // 0x3a6f34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f30) {
            ctx->pc = 0x3A7048u;
            goto label_3a7048;
        }
    }
    ctx->pc = 0x3A6F38u;
    // 0x3a6f38: 0x56400007  bnel        $s2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6F38u;
    {
        const bool branch_taken_0x3a6f38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6f38) {
            ctx->pc = 0x3A6F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6F38u;
            // 0x3a6f3c: 0x8e23001c  lw          $v1, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6F58u;
            goto label_3a6f58;
        }
    }
    ctx->pc = 0x3A6F40u;
    // 0x3a6f40: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a6f40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a6f44: 0xc0e9d40  jal         func_3A7500
    ctx->pc = 0x3A6F44u;
    SET_GPR_U32(ctx, 31, 0x3A6F4Cu);
    ctx->pc = 0x3A6F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F44u;
    // 0x3a6f48: 0x2484e0b8  addiu       $a0, $a0, -0x1F48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7500u, 0x3A6F44u, 0x3A6F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F4Cu;
label_3a6f4c:
    // 0x3a6f4c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x3A6F4Cu;
    {
        const bool branch_taken_0x3a6f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F4Cu;
        // 0x3a6f50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f4c) {
            ctx->pc = 0x3A7048u;
            goto label_3a7048;
        }
    }
    ctx->pc = 0x3A6F54u;
    // 0x3a6f54: 0x0  nop
    ctx->pc = 0x3a6f54u;
    // NOP
label_3a6f58:
    // 0x3a6f58: 0x3c087fff  lui         $t0, 0x7FFF
    ctx->pc = 0x3a6f58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32767 << 16));
    // 0x3a6f5c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x3a6f5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x3a6f60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a6f60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f64: 0x2466000f  addiu       $a2, $v1, 0xF
    ctx->pc = 0x3a6f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x3a6f68: 0x2467001e  addiu       $a3, $v1, 0x1E
    ctx->pc = 0x3a6f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 30));
    // 0x3a6f6c: 0x28c50000  slti        $a1, $a2, 0x0
    ctx->pc = 0x3a6f6cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a6f70: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3a6f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f74: 0xe5100b  movn        $v0, $a3, $a1
    ctx->pc = 0x3a6f74u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x3a6f78: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3a6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3a6f7c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3a6f7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3a6f80: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3a6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3a6f84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a6f84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a6f88: 0x24700038  addiu       $s0, $v1, 0x38
    ctx->pc = 0x3a6f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x3a6f8c: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x3a6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x3a6f90: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x3a6f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x3a6f94: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3a6f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3a6f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a6f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6f9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a6f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a6fa0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x3a6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x3a6fa4: 0x684026  xor         $t0, $v1, $t0
    ctx->pc = 0x3a6fa4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 8));
    // 0x3a6fa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3a6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a6fac: 0x68980b  movn        $s3, $v1, $t0
    ctx->pc = 0x3a6facu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x3a6fb0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A6FB0u;
    SET_GPR_U32(ctx, 31, 0x3A6FB8u);
    ctx->pc = 0x3A6FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6FB0u;
    // 0x3a6fb4: 0xae130000  sw          $s3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A6FB0u, 0x3A6FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6FB8u;
label_3a6fb8:
    // 0x3a6fb8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3a6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3a6fbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a6fbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6fc0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A6FC0u;
    {
        const bool branch_taken_0x3a6fc0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FC0u;
        // 0x3a6fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6fc0) {
            ctx->pc = 0x3A6FE8u;
            goto label_3a6fe8;
        }
    }
    ctx->pc = 0x3A6FC8u;
label_3a6fc8:
    // 0x3a6fc8: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x3a6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x3a6fcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a6fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a6fd0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a6fd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6fd4: 0xa6202b  sltu        $a0, $a1, $a2
    ctx->pc = 0x3a6fd4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3a6fd8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a6fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3a6fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a6fe0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A6FE0u;
    {
        const bool branch_taken_0x3a6fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FE0u;
        // 0x3a6fe4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6fe0) {
            ctx->pc = 0x3A6FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6fc8;
        }
    }
    ctx->pc = 0x3A6FE8u;
label_3a6fe8:
    // 0x3a6fe8: 0xae140010  sw          $s4, 0x10($s0)
    ctx->pc = 0x3a6fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 20));
    // 0x3a6fec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3a6fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6ff0: 0xae150014  sw          $s5, 0x14($s0)
    ctx->pc = 0x3a6ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 21));
    // 0x3a6ff4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x3a6ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x3a6ff8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x3a6ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x3a6ffc: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x3a6ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x3a7000: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x3a7000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3a7004: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x3a7004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3a7008: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x3a7008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3a700c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3a700cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3a7010: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x3a7010u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a7014: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a7014u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7018: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x3a7018u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x3a701c: 0x82270001  lb          $a3, 0x1($s1)
    ctx->pc = 0x3a701cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x3a7020: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3a7020u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3a7024: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3a7024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a7028: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a7028u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a702c: 0xae260024  sw          $a2, 0x24($s1)
    ctx->pc = 0x3a702cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 6));
    // 0x3a7030: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3a7030u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a7034: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7034u;
    {
        const bool branch_taken_0x3a7034 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x3A7038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7034u;
        // 0x3a7038: 0xae24001c  sw          $a0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7034) {
            ctx->pc = 0x3A7044u;
            goto label_3a7044;
        }
    }
    ctx->pc = 0x3A703Cu;
    // 0x3a703c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a7040: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x3a7040u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_3a7044:
    // 0x3a7044: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3a7044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3a7048:
    // 0x3a7048: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a704c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a704cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7050: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a7050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7054: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a7054u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a7058: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a7058u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a705c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a705cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a7060: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3a7060u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a7064: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3a7064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a7068: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7068u;
        // 0x3a706c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7070u;
}
