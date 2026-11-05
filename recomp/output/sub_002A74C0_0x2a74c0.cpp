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

// Function: sub_002A74C0
// Address: 0x2a74c0 - 0x2a7620
void sub_002A74C0_0x2a74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A74C0_0x2a74c0");
#endif

    switch (ctx->pc) {
        case 0x2a7550u: goto label_2a7550;
        case 0x2a757cu: goto label_2a757c;
        case 0x2a75a0u: goto label_2a75a0;
        case 0x2a75d0u: goto label_2a75d0;
        case 0x2a75fcu: goto label_2a75fc;
        case 0x2a760cu: goto label_2a760c;
        default: break;
    }

    ctx->pc = 0x2a74c0u;

    // 0x2a74c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a74c4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a74c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a74c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a74c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a74cc: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x2a74ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a74d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a74d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a74d4: 0x24423750  addiu       $v0, $v0, 0x3750
    ctx->pc = 0x2a74d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14160));
    // 0x2a74d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a74d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a74dc: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2a74dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2a74e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a74e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a74e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a74e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a74e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74ec: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2a74ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2a74f0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2a74f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2a74f4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2a74f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a74f8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2a74f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a74fc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2a74fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a7500: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x2a7500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x2a7504: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2a7504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2a7508: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x2a7508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x2a750c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2a750cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2a7510: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x2a7510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x2a7514: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2a7514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2a7518: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x2a7518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x2a751c: 0x6a020013  ldl         $v0, 0x13($s0)
    ctx->pc = 0x2a751cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a7520: 0x6e02000c  ldr         $v0, 0xC($s0)
    ctx->pc = 0x2a7520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a7524: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2a7524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7528: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2a7528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a752c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2a752cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a7530: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2a7530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a7534: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x2a7534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7538: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x2a7538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a753c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2a753cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a7540: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a7540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7544: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A7544u;
    {
        const bool branch_taken_0x2a7544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A7548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7544u;
        // 0x2a7548: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7544) {
            ctx->pc = 0x2A7568u;
            goto label_2a7568;
        }
    }
    ctx->pc = 0x2A754Cu;
    // 0x2a754c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2a754cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2a7550:
    // 0x2a7550: 0x0  nop
    ctx->pc = 0x2a7550u;
    // NOP
    // 0x2a7554: 0x0  nop
    ctx->pc = 0x2a7554u;
    // NOP
    // 0x2a7558: 0x0  nop
    ctx->pc = 0x2a7558u;
    // NOP
    // 0x2a755c: 0x0  nop
    ctx->pc = 0x2a755cu;
    // NOP
    // 0x2a7560: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7560u;
    {
        const bool branch_taken_0x2a7560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A7564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7560u;
        // 0x2a7564: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7560) {
            ctx->pc = 0x2A7550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7550;
        }
    }
    ctx->pc = 0x2A7568u;
label_2a7568:
    // 0x2a7568: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2a7568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a756c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A756Cu;
    {
        const bool branch_taken_0x2a756c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A756Cu;
        // 0x2a7570: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a756c) {
            ctx->pc = 0x2A757Cu;
            goto label_2a757c;
        }
    }
    ctx->pc = 0x2A7574u;
    // 0x2a7574: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A7574u;
    SET_GPR_U32(ctx, 31, 0x2A757Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A7574u, 0x2A757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A757Cu;
label_2a757c:
    // 0x2a757c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2a757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2a7580: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x2a7580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x2a7584: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2a7584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a7588: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2A7588u;
    {
        const bool branch_taken_0x2a7588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7588u;
        // 0x2a758c: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7588) {
            ctx->pc = 0x2A75B8u;
            goto label_2a75b8;
        }
    }
    ctx->pc = 0x2A7590u;
    // 0x2a7590: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A7590u;
    {
        const bool branch_taken_0x2a7590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a7590) {
            ctx->pc = 0x2A7594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7590u;
            // 0x2a7594: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A75BCu;
            goto label_2a75bc;
        }
    }
    ctx->pc = 0x2A7598u;
    // 0x2a7598: 0x2442ffe4  addiu       $v0, $v0, -0x1C
    ctx->pc = 0x2a7598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
    // 0x2a759c: 0x0  nop
    ctx->pc = 0x2a759cu;
    // NOP
label_2a75a0:
    // 0x2a75a0: 0x0  nop
    ctx->pc = 0x2a75a0u;
    // NOP
    // 0x2a75a4: 0x0  nop
    ctx->pc = 0x2a75a4u;
    // NOP
    // 0x2a75a8: 0x0  nop
    ctx->pc = 0x2a75a8u;
    // NOP
    // 0x2a75ac: 0x0  nop
    ctx->pc = 0x2a75acu;
    // NOP
    // 0x2a75b0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A75B0u;
    {
        const bool branch_taken_0x2a75b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A75B0u;
        // 0x2a75b4: 0x2442ffe4  addiu       $v0, $v0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a75b0) {
            ctx->pc = 0x2A75A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a75a0;
        }
    }
    ctx->pc = 0x2A75B8u;
label_2a75b8:
    // 0x2a75b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2a75b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2a75bc:
    // 0x2a75bc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2a75bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a75c0: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2A75C0u;
    {
        const bool branch_taken_0x2a75c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2a75c0) {
            ctx->pc = 0x2A75C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A75C0u;
            // 0x2a75c4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A75ECu;
            goto label_2a75ec;
        }
    }
    ctx->pc = 0x2A75C8u;
    // 0x2a75c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2a75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2a75cc: 0x0  nop
    ctx->pc = 0x2a75ccu;
    // NOP
label_2a75d0:
    // 0x2a75d0: 0x0  nop
    ctx->pc = 0x2a75d0u;
    // NOP
    // 0x2a75d4: 0x0  nop
    ctx->pc = 0x2a75d4u;
    // NOP
    // 0x2a75d8: 0x0  nop
    ctx->pc = 0x2a75d8u;
    // NOP
    // 0x2a75dc: 0x0  nop
    ctx->pc = 0x2a75dcu;
    // NOP
    // 0x2a75e0: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A75E0u;
    {
        const bool branch_taken_0x2a75e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a75e0) {
            ctx->pc = 0x2A75E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A75E0u;
            // 0x2a75e4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A75D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a75d0;
        }
    }
    ctx->pc = 0x2A75E8u;
    // 0x2a75e8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2a75e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2a75ec:
    // 0x2a75ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A75ECu;
    {
        const bool branch_taken_0x2a75ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a75ec) {
            ctx->pc = 0x2A75FCu;
            goto label_2a75fc;
        }
    }
    ctx->pc = 0x2A75F4u;
    // 0x2a75f4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A75F4u;
    SET_GPR_U32(ctx, 31, 0x2A75FCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A75F4u, 0x2A75FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A75FCu;
label_2a75fc:
    // 0x2a75fc: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A75FCu;
    {
        const bool branch_taken_0x2a75fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a75fc) {
            ctx->pc = 0x2A7600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A75FCu;
            // 0x2a7600: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7610u;
            goto label_2a7610;
        }
    }
    ctx->pc = 0x2A7604u;
    // 0x2a7604: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A7604u;
    SET_GPR_U32(ctx, 31, 0x2A760Cu);
    ctx->pc = 0x2A7608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7604u;
    // 0x2a7608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A7604u, 0x2A760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A760Cu;
label_2a760c:
    // 0x2a760c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a760cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a7610:
    // 0x2a7610: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2a7610u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a7614: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a7614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a7618: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7618u;
        // 0x2a761c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7620u;
}
