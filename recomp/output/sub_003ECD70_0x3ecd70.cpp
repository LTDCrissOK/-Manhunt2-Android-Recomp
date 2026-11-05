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

// Function: sub_003ECD70
// Address: 0x3ecd70 - 0x3ecf20
void sub_003ECD70_0x3ecd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECD70_0x3ecd70");
#endif

    switch (ctx->pc) {
        case 0x3ecdbcu: goto label_3ecdbc;
        case 0x3ecdccu: goto label_3ecdcc;
        case 0x3ecde0u: goto label_3ecde0;
        case 0x3ecdecu: goto label_3ecdec;
        case 0x3ece28u: goto label_3ece28;
        case 0x3ecea0u: goto label_3ecea0;
        case 0x3eceb0u: goto label_3eceb0;
        case 0x3ecec0u: goto label_3ecec0;
        case 0x3ececcu: goto label_3ececc;
        default: break;
    }

    ctx->pc = 0x3ecd70u;

    // 0x3ecd70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ecd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ecd74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ecd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ecd78: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ecd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3ecd7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ecd7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecd80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ecd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ecd84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ecd84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecd88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ecd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ecd8c: 0x2a430010  slti        $v1, $s2, 0x10
    ctx->pc = 0x3ecd8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ecd90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3ecd90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3ecd94: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3ecd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3ecd98: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3ecd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3ecd9c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3ecd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3ecda0: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3ecda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3ecda4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ecda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ecda8: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x3ECDA8u;
    {
        const bool branch_taken_0x3ecda8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDA8u;
        // 0x3ecdac: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecda8) {
            ctx->pc = 0x3ECE18u;
            goto label_3ece18;
        }
    }
    ctx->pc = 0x3ECDB0u;
    // 0x3ecdb0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3ecdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ecdb4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3ECDB4u;
    SET_GPR_U32(ctx, 31, 0x3ECDBCu);
    ctx->pc = 0x3ECDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECDB4u;
    // 0x3ecdb8: 0x2651ffff  addiu       $s1, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3ECDB4u, 0x3ECDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECDBCu;
label_3ecdbc:
    // 0x3ecdbc: 0x122140  sll         $a0, $s2, 5
    ctx->pc = 0x3ecdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x3ecdc0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ecdc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecdc4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3ECDC4u;
    SET_GPR_U32(ctx, 31, 0x3ECDCCu);
    ctx->pc = 0x3ECDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECDC4u;
    // 0x3ecdc8: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3ECDC4u, 0x3ECDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECDCCu;
label_3ecdcc:
    // 0x3ecdcc: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3ecdccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3ecdd0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x3ecdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x3ecdd4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x3ECDD4u;
    {
        const bool branch_taken_0x3ecdd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDD4u;
        // 0x3ecdd8: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecdd4) {
            ctx->pc = 0x3ECDF8u;
            goto label_3ecdf8;
        }
    }
    ctx->pc = 0x3ECDDCu;
    // 0x3ecddc: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3ecddcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ecde0:
    // 0x3ecde0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ecde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecde4: 0xc0b0d44  jal         func_2C3510
    ctx->pc = 0x3ECDE4u;
    SET_GPR_U32(ctx, 31, 0x3ECDECu);
    ctx->pc = 0x3ECDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECDE4u;
    // 0x3ecde8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x3ECDE4u, 0x3ECDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECDECu;
label_3ecdec:
    // 0x3ecdec: 0x0  nop
    ctx->pc = 0x3ecdecu;
    // NOP
    // 0x3ecdf0: 0x1636fffb  bne         $s1, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3ECDF0u;
    {
        const bool branch_taken_0x3ecdf0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 22));
        ctx->pc = 0x3ECDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECDF0u;
        // 0x3ecdf4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecdf0) {
            ctx->pc = 0x3ECDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecde0;
        }
    }
    ctx->pc = 0x3ECDF8u;
label_3ecdf8:
    // 0x3ecdf8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ecdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ecdfc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3ecdfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ece00: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3ece00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3ece04: 0xa6920004  sh          $s2, 0x4($s4)
    ctx->pc = 0x3ece04u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3ece08: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3ece08u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3ece0c: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3ece0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3ece10: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x3ECE10u;
    {
        const bool branch_taken_0x3ece10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE10u;
        // 0x3ece14: 0xa6920006  sh          $s2, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece10) {
            ctx->pc = 0x3ECEF8u;
            goto label_3ecef8;
        }
    }
    ctx->pc = 0x3ECE18u;
label_3ece18:
    // 0x3ece18: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3ece18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ece1c: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3ECE1Cu;
    {
        const bool branch_taken_0x3ece1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE1Cu;
        // 0x3ece20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece1c) {
            ctx->pc = 0x3ECE94u;
            goto label_3ece94;
        }
    }
    ctx->pc = 0x3ECE24u;
    // 0x3ece24: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3ece24u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3ece28:
    // 0x3ece28: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3ece28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3ece2c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3ece2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3ece30: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3ece30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ece34: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3ECE34u;
    {
        const bool branch_taken_0x3ece34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ece34) {
            ctx->pc = 0x3ECE38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECE34u;
            // 0x3ece38: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECE88u;
            goto label_3ece88;
        }
    }
    ctx->pc = 0x3ECE3Cu;
    // 0x3ece3c: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3ECE3Cu;
    {
        const bool branch_taken_0x3ece3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3ece3c) {
            ctx->pc = 0x3ECE40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECE3Cu;
            // 0x3ece40: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECE68u;
            goto label_3ece68;
        }
    }
    ctx->pc = 0x3ECE44u;
    // 0x3ece44: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECE44u;
    {
        const bool branch_taken_0x3ece44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE44u;
        // 0x3ece48: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece44) {
            ctx->pc = 0x3ECE54u;
            goto label_3ece54;
        }
    }
    ctx->pc = 0x3ECE4Cu;
    // 0x3ece4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3ECE4Cu;
    {
        const bool branch_taken_0x3ece4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE4Cu;
        // 0x3ece50: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece4c) {
            ctx->pc = 0x3ECE58u;
            goto label_3ece58;
        }
    }
    ctx->pc = 0x3ECE54u;
label_3ece54:
    // 0x3ece54: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3ece54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3ece58:
    // 0x3ece58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3ece58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ece5c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3ece5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3ece60: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x3ece60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x3ece64: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3ece64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3ece68:
    // 0x3ece68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3ece68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3ece6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3ece6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ece70: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3ece70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3ece74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3ece74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3ece78: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3ece78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3ece7c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x3ece7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x3ece80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3ECE80u;
    {
        const bool branch_taken_0x3ece80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECE80u;
        // 0x3ece84: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ece80) {
            ctx->pc = 0x3ECEF8u;
            goto label_3ecef8;
        }
    }
    ctx->pc = 0x3ECE88u;
label_3ece88:
    // 0x3ece88: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3ece88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3ece8c: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3ECE8Cu;
    {
        const bool branch_taken_0x3ece8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ece8c) {
            ctx->pc = 0x3ECE90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECE8Cu;
            // 0x3ece90: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ece28;
        }
    }
    ctx->pc = 0x3ECE94u;
label_3ece94:
    // 0x3ece94: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3ece94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ece98: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3ECE98u;
    SET_GPR_U32(ctx, 31, 0x3ECEA0u);
    ctx->pc = 0x3ECE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECE98u;
    // 0x3ece9c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3ECE98u, 0x3ECEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECEA0u;
label_3ecea0:
    // 0x3ecea0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3ecea0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ecea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ecea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecea8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3ECEA8u;
    SET_GPR_U32(ctx, 31, 0x3ECEB0u);
    ctx->pc = 0x3ECEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECEA8u;
    // 0x3eceac: 0x24040210  addiu       $a0, $zero, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3ECEA8u, 0x3ECEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECEB0u;
label_3eceb0:
    // 0x3eceb0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3eceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3eceb4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3eceb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3eceb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3eceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3ecebc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3ecebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ecec0:
    // 0x3ecec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ecec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecec4: 0xc0b0d44  jal         func_2C3510
    ctx->pc = 0x3ECEC4u;
    SET_GPR_U32(ctx, 31, 0x3ECECCu);
    ctx->pc = 0x3ECEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECEC4u;
    // 0x3ecec8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x3ECEC4u, 0x3ECECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECECCu;
label_3ececc:
    // 0x3ececc: 0x0  nop
    ctx->pc = 0x3ececcu;
    // NOP
    // 0x3eced0: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3ECED0u;
    {
        const bool branch_taken_0x3eced0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3ECED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECED0u;
        // 0x3eced4: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eced0) {
            ctx->pc = 0x3ECEC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecec0;
        }
    }
    ctx->pc = 0x3ECED8u;
    // 0x3eced8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3eced8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ecedc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ecedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ecee0: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x3ecee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x3ecee4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3ecee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecee8: 0xa6320006  sh          $s2, 0x6($s1)
    ctx->pc = 0x3ecee8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3eceec: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x3eceecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ecef0: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x3ecef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x3ecef4: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x3ecef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_3ecef8:
    // 0x3ecef8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ecef8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ecefc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ecefcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ecf00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ecf00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ecf04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ecf04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ecf08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3ecf08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ecf0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3ecf0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ecf10: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3ecf10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ecf14: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3ecf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3ecf18: 0x3e00008  jr          $ra
    ctx->pc = 0x3ECF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECF18u;
        // 0x3ecf1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECF20u;
}
