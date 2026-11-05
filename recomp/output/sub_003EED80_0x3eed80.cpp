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

// Function: sub_003EED80
// Address: 0x3eed80 - 0x3eef00
void sub_003EED80_0x3eed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EED80_0x3eed80");
#endif

    switch (ctx->pc) {
        case 0x3eedc4u: goto label_3eedc4;
        case 0x3eedd8u: goto label_3eedd8;
        case 0x3eede4u: goto label_3eede4;
        case 0x3eee10u: goto label_3eee10;
        case 0x3eee28u: goto label_3eee28;
        case 0x3eee34u: goto label_3eee34;
        case 0x3eee60u: goto label_3eee60;
        case 0x3eee8cu: goto label_3eee8c;
        case 0x3eeeb8u: goto label_3eeeb8;
        case 0x3eeec4u: goto label_3eeec4;
        default: break;
    }

    ctx->pc = 0x3eed80u;

    // 0x3eed80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3eed80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3eed84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3eed84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3eed88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3eed88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3eed8c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3eed8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eed90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eed90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3eed94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eed94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3eed98: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eed98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3eed9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3eed9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3eeda0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3eeda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3eeda4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x3eeda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x3eeda8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3eeda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3eedac: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x3eedacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3eedb0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3EEDB0u;
    {
        const bool branch_taken_0x3eedb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EEDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDB0u;
        // 0x3eedb4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eedb0) {
            ctx->pc = 0x3EEE04u;
            goto label_3eee04;
        }
    }
    ctx->pc = 0x3EEDB8u;
    // 0x3eedb8: 0x240400a8  addiu       $a0, $zero, 0xA8
    ctx->pc = 0x3eedb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x3eedbc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EEDBCu;
    SET_GPR_U32(ctx, 31, 0x3EEDC4u);
    ctx->pc = 0x3EEDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDBCu;
    // 0x3eedc0: 0x24120007  addiu       $s2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EEDBCu, 0x3EEDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDC4u;
label_3eedc4:
    // 0x3eedc4: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x3eedc4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eedc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eedc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eedcc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3eedccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3eedd0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3eedd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eedd4: 0x0  nop
    ctx->pc = 0x3eedd4u;
    // NOP
label_3eedd8:
    // 0x3eedd8: 0xae160000  sw          $s6, 0x0($s0)
    ctx->pc = 0x3eedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 22));
    // 0x3eeddc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x3EEDDCu;
    SET_GPR_U32(ctx, 31, 0x3EEDE4u);
    ctx->pc = 0x3EEDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEDDCu;
    // 0x3eede0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x3EEDDCu, 0x3EEDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEDE4u;
label_3eede4:
    // 0x3eede4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eede4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3eede8: 0x1654fffb  bne         $s2, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3EEDE8u;
    {
        const bool branch_taken_0x3eede8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x3EEDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDE8u;
        // 0x3eedec: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eede8) {
            ctx->pc = 0x3EEDD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eedd8;
        }
    }
    ctx->pc = 0x3EEDF0u;
    // 0x3eedf0: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x3eedf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x3eedf4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x3eedf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x3eedf8: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x3eedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x3eedfc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3EEDFCu;
    {
        const bool branch_taken_0x3eedfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEDFCu;
        // 0x3eee00: 0xae710008  sw          $s1, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eedfc) {
            ctx->pc = 0x3EEE50u;
            goto label_3eee50;
        }
    }
    ctx->pc = 0x3EEE04u;
label_3eee04:
    // 0x3eee04: 0x8e760008  lw          $s6, 0x8($s3)
    ctx->pc = 0x3eee04u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3eee08: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3EEE08u;
    SET_GPR_U32(ctx, 31, 0x3EEE10u);
    ctx->pc = 0x3EEE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEE08u;
    // 0x3eee0c: 0x240400a8  addiu       $a0, $zero, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3EEE08u, 0x3EEE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEE10u;
label_3eee10:
    // 0x3eee10: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x3eee10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3eee14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3eee14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eee18: 0x24170003  addiu       $s7, $zero, 0x3
    ctx->pc = 0x3eee18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3eee1c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3eee1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eee20: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3eee20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3eee24: 0x0  nop
    ctx->pc = 0x3eee24u;
    // NOP
label_3eee28:
    // 0x3eee28: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x3eee28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
    // 0x3eee2c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x3EEE2Cu;
    SET_GPR_U32(ctx, 31, 0x3EEE34u);
    ctx->pc = 0x3EEE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEE2Cu;
    // 0x3eee30: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x3EEE2Cu, 0x3EEE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEE34u;
label_3eee34:
    // 0x3eee34: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eee34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3eee38: 0x1654fffb  bne         $s2, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3EEE38u;
    {
        const bool branch_taken_0x3eee38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x3EEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE38u;
        // 0x3eee3c: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee38) {
            ctx->pc = 0x3EEE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eee28;
        }
    }
    ctx->pc = 0x3EEE40u;
    // 0x3eee40: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x3eee40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x3eee44: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x3eee44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
    // 0x3eee48: 0xae3600a0  sw          $s6, 0xA0($s1)
    ctx->pc = 0x3eee48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 22));
    // 0x3eee4c: 0xaed100a4  sw          $s1, 0xA4($s6)
    ctx->pc = 0x3eee4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 164), GPR_U32(ctx, 17));
label_3eee50:
    // 0x3eee50: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x3eee50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3eee54: 0x24120007  addiu       $s2, $zero, 0x7
    ctx->pc = 0x3eee54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3eee58: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3eee58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eee5c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3eee5cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3eee60:
    // 0x3eee60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3eee60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3eee64: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x3eee64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3eee68: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x3eee68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x3eee6c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3eee6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3eee70: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3eee70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3eee74: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3eee78: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x3eee78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x3eee7c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x3eee7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3eee80: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x3eee80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3eee84: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x3EEE84u;
    SET_GPR_U32(ctx, 31, 0x3EEE8Cu);
    ctx->pc = 0x3EEE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEE84u;
    // 0x3eee88: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x3EEE84u, 0x3EEE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEE8Cu;
label_3eee8c:
    // 0x3eee8c: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x3EEE8Cu;
    {
        const bool branch_taken_0x3eee8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x3EEE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEE8Cu;
        // 0x3eee90: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eee8c) {
            ctx->pc = 0x3EEE60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eee60;
        }
    }
    ctx->pc = 0x3EEE94u;
    // 0x3eee94: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x3eee94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3eee98: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x3eee98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3eee9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eee9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3eeea0: 0x12a0000b  beqz        $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x3EEEA0u;
    {
        const bool branch_taken_0x3eeea0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EEEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEEA0u;
        // 0x3eeea4: 0xa6620000  sh          $v0, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeea0) {
            ctx->pc = 0x3EEED0u;
            goto label_3eeed0;
        }
    }
    ctx->pc = 0x3EEEA8u;
    // 0x3eeea8: 0x26b000a0  addiu       $s0, $s5, 0xA0
    ctx->pc = 0x3eeea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 160));
    // 0x3eeeac: 0x12b00009  beq         $s5, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3EEEACu;
    {
        const bool branch_taken_0x3eeeac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        ctx->pc = 0x3EEEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEEACu;
        // 0x3eeeb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeeac) {
            ctx->pc = 0x3EEED4u;
            goto label_3eeed4;
        }
    }
    ctx->pc = 0x3EEEB4u;
    // 0x3eeeb4: 0x2610ffec  addiu       $s0, $s0, -0x14
    ctx->pc = 0x3eeeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_3eeeb8:
    // 0x3eeeb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3eeeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3eeebc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3EEEBCu;
    SET_GPR_U32(ctx, 31, 0x3EEEC4u);
    ctx->pc = 0x3EEEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EEEBCu;
    // 0x3eeec0: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3EEEBCu, 0x3EEEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EEEC4u;
label_3eeec4:
    // 0x3eeec4: 0x0  nop
    ctx->pc = 0x3eeec4u;
    // NOP
    // 0x3eeec8: 0x16b0fffb  bne         $s5, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3EEEC8u;
    {
        const bool branch_taken_0x3eeec8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EEECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEEC8u;
        // 0x3eeecc: 0x2610ffec  addiu       $s0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eeec8) {
            ctx->pc = 0x3EEEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eeeb8;
        }
    }
    ctx->pc = 0x3EEED0u;
label_3eeed0:
    // 0x3eeed0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3eeed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3eeed4:
    // 0x3eeed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eeed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3eeed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eeed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3eeedc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eeedcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3eeee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3eeee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3eeee4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3eeee4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3eeee8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3eeee8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3eeeec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3eeeecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3eeef0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3eeef0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3eeef4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3eeef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3eeef8: 0x3e00008  jr          $ra
    ctx->pc = 0x3EEEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EEEF8u;
        // 0x3eeefc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EEEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EEF00u;
}
