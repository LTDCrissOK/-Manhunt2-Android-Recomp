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

// Function: sub_003E8FB8
// Address: 0x3e8fb8 - 0x3e90f0
void sub_003E8FB8_0x3e8fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8FB8_0x3e8fb8");
#endif

    switch (ctx->pc) {
        case 0x3e8ff0u: goto label_3e8ff0;
        case 0x3e8ffcu: goto label_3e8ffc;
        case 0x3e9030u: goto label_3e9030;
        case 0x3e90a4u: goto label_3e90a4;
        case 0x3e90b0u: goto label_3e90b0;
        default: break;
    }

    ctx->pc = 0x3e8fb8u;

    // 0x3e8fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8fbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e8fc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e8fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e8fc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8fc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e8fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8fcc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e8fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8fd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e8fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e8fd4: 0x2a430200  slti        $v1, $s2, 0x200
    ctx->pc = 0x3e8fd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3e8fd8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e8fdc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e8fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e8fe0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E8FE0u;
    {
        const bool branch_taken_0x3e8fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FE0u;
        // 0x3e8fe4: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8fe0) {
            ctx->pc = 0x3E901Cu;
            goto label_3e901c;
        }
    }
    ctx->pc = 0x3E8FE8u;
    // 0x3e8fe8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E8FE8u;
    SET_GPR_U32(ctx, 31, 0x3E8FF0u);
    ctx->pc = 0x3E8FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8FE8u;
    // 0x3e8fec: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E8FE8u, 0x3E8FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8FF0u;
label_3e8ff0:
    // 0x3e8ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e8ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8ff4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E8FF4u;
    SET_GPR_U32(ctx, 31, 0x3E8FFCu);
    ctx->pc = 0x3E8FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8FF4u;
    // 0x3e8ff8: 0x122040  sll         $a0, $s2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E8FF4u, 0x3E8FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8FFCu;
label_3e8ffc:
    // 0x3e8ffc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e8ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9000: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e9000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9004: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3e9004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3e9008: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x3e9008u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e900c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e900cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3e9010: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e9010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e9014: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3E9014u;
    {
        const bool branch_taken_0x3e9014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9014u;
        // 0x3e9018: 0xa6120006  sh          $s2, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9014) {
            ctx->pc = 0x3E90D0u;
            goto label_3e90d0;
        }
    }
    ctx->pc = 0x3E901Cu;
label_3e901c:
    // 0x3e901c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e901cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9020: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E9020u;
    {
        const bool branch_taken_0x3e9020 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9020u;
        // 0x3e9024: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9020) {
            ctx->pc = 0x3E909Cu;
            goto label_3e909c;
        }
    }
    ctx->pc = 0x3E9028u;
    // 0x3e9028: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3e9028u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3e902c: 0x0  nop
    ctx->pc = 0x3e902cu;
    // NOP
label_3e9030:
    // 0x3e9030: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e9030u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e9034: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3e9034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3e9038: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e9038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e903c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E903Cu;
    {
        const bool branch_taken_0x3e903c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e903c) {
            ctx->pc = 0x3E9040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E903Cu;
            // 0x3e9040: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9090u;
            goto label_3e9090;
        }
    }
    ctx->pc = 0x3E9044u;
    // 0x3e9044: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E9044u;
    {
        const bool branch_taken_0x3e9044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e9044) {
            ctx->pc = 0x3E9048u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9044u;
            // 0x3e9048: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9070u;
            goto label_3e9070;
        }
    }
    ctx->pc = 0x3E904Cu;
    // 0x3e904c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E904Cu;
    {
        const bool branch_taken_0x3e904c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E904Cu;
        // 0x3e9050: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e904c) {
            ctx->pc = 0x3E905Cu;
            goto label_3e905c;
        }
    }
    ctx->pc = 0x3E9054u;
    // 0x3e9054: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E9054u;
    {
        const bool branch_taken_0x3e9054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9054u;
        // 0x3e9058: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9054) {
            ctx->pc = 0x3E9060u;
            goto label_3e9060;
        }
    }
    ctx->pc = 0x3E905Cu;
label_3e905c:
    // 0x3e905c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e905cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3e9060:
    // 0x3e9060: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9064: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e9064u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e9068: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3e9068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3e906c: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3e906cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3e9070:
    // 0x3e9070: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e9070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e9074: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e9074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e9078: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3e9078u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e907c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e907cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e9080: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3e9080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e9084: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3e9084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3e9088: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E9088u;
    {
        const bool branch_taken_0x3e9088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9088u;
        // 0x3e908c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9088) {
            ctx->pc = 0x3E90D0u;
            goto label_3e90d0;
        }
    }
    ctx->pc = 0x3E9090u;
label_3e9090:
    // 0x3e9090: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3e9090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e9094: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E9094u;
    {
        const bool branch_taken_0x3e9094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e9094) {
            ctx->pc = 0x3E9098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9094u;
            // 0x3e9098: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9030;
        }
    }
    ctx->pc = 0x3E909Cu;
label_3e909c:
    // 0x3e909c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E909Cu;
    SET_GPR_U32(ctx, 31, 0x3E90A4u);
    ctx->pc = 0x3E90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E909Cu;
    // 0x3e90a0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E909Cu, 0x3E90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E90A4u;
label_3e90a4:
    // 0x3e90a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e90a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e90a8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E90A8u;
    SET_GPR_U32(ctx, 31, 0x3E90B0u);
    ctx->pc = 0x3E90ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E90A8u;
    // 0x3e90ac: 0x24040400  addiu       $a0, $zero, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E90A8u, 0x3E90B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E90B0u;
label_3e90b0:
    // 0x3e90b0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3e90b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e90b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e90b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e90b8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3e90b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3e90bc: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3e90bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3e90c0: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x3e90c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e90c4: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3e90c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e90c8: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3e90c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3e90cc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3e90ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3e90d0:
    // 0x3e90d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e90d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e90d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e90d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e90d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e90d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e90dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e90dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e90e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E90E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E90E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E90E0u;
        // 0x3e90e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E90E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E90E8u;
    // 0x3e90e8: 0x0  nop
    ctx->pc = 0x3e90e8u;
    // NOP
    // 0x3e90ec: 0x0  nop
    ctx->pc = 0x3e90ecu;
    // NOP
    ctx->pc = 0x3e90f0u;
}
