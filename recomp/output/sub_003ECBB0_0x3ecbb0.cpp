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

// Function: sub_003ECBB0
// Address: 0x3ecbb0 - 0x3ecd70
void sub_003ECBB0_0x3ecbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ECBB0_0x3ecbb0");
#endif

    switch (ctx->pc) {
        case 0x3ecbfcu: goto label_3ecbfc;
        case 0x3ecc10u: goto label_3ecc10;
        case 0x3ecc28u: goto label_3ecc28;
        case 0x3ecc34u: goto label_3ecc34;
        case 0x3ecc78u: goto label_3ecc78;
        case 0x3eccf0u: goto label_3eccf0;
        case 0x3ecd00u: goto label_3ecd00;
        case 0x3ecd10u: goto label_3ecd10;
        case 0x3ecd1cu: goto label_3ecd1c;
        default: break;
    }

    ctx->pc = 0x3ecbb0u;

    // 0x3ecbb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ecbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ecbb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ecbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ecbb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3ecbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3ecbbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ecbbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecbc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ecbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ecbc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ecbc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecbc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ecbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ecbcc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3ecbccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3ecbd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3ecbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3ecbd4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3ecbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3ecbd8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3ecbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3ecbdc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3ecbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3ecbe0: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3ecbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3ecbe4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3ecbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3ecbe8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3ECBE8u;
    {
        const bool branch_taken_0x3ecbe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ECBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECBE8u;
        // 0x3ecbec: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecbe8) {
            ctx->pc = 0x3ECC60u;
            goto label_3ecc60;
        }
    }
    ctx->pc = 0x3ECBF0u;
    // 0x3ecbf0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3ecbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ecbf4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3ECBF4u;
    SET_GPR_U32(ctx, 31, 0x3ECBFCu);
    ctx->pc = 0x3ECBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECBF4u;
    // 0x3ecbf8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3ECBF4u, 0x3ECBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECBFCu;
label_3ecbfc:
    // 0x3ecbfc: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x3ecbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3ecc00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ecc00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecc04: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3ecc04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3ecc08: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3ECC08u;
    SET_GPR_U32(ctx, 31, 0x3ECC10u);
    ctx->pc = 0x3ECC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECC08u;
    // 0x3ecc0c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3ECC08u, 0x3ECC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECC10u;
label_3ecc10:
    // 0x3ecc10: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3ecc10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3ecc14: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3ecc14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3ecc18: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3ECC18u;
    {
        const bool branch_taken_0x3ecc18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC18u;
        // 0x3ecc1c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc18) {
            ctx->pc = 0x3ECC40u;
            goto label_3ecc40;
        }
    }
    ctx->pc = 0x3ECC20u;
    // 0x3ecc20: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3ecc20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ecc24: 0x0  nop
    ctx->pc = 0x3ecc24u;
    // NOP
label_3ecc28:
    // 0x3ecc28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ecc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecc2c: 0xc0aeea6  jal         func_2BBA98
    ctx->pc = 0x3ECC2Cu;
    SET_GPR_U32(ctx, 31, 0x3ECC34u);
    ctx->pc = 0x3ECC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECC2Cu;
    // 0x3ecc30: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA98u, 0x3ECC2Cu, 0x3ECC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECC34u;
label_3ecc34:
    // 0x3ecc34: 0x0  nop
    ctx->pc = 0x3ecc34u;
    // NOP
    // 0x3ecc38: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3ECC38u;
    {
        const bool branch_taken_0x3ecc38 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3ECC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC38u;
        // 0x3ecc3c: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc38) {
            ctx->pc = 0x3ECC28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecc28;
        }
    }
    ctx->pc = 0x3ECC40u;
label_3ecc40:
    // 0x3ecc40: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ecc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3ecc44: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3ecc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecc48: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3ecc48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3ecc4c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3ecc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3ecc50: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3ecc50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3ecc54: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3ecc54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3ecc58: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3ECC58u;
    {
        const bool branch_taken_0x3ecc58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC58u;
        // 0x3ecc5c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc58) {
            ctx->pc = 0x3ECD48u;
            goto label_3ecd48;
        }
    }
    ctx->pc = 0x3ECC60u;
label_3ecc60:
    // 0x3ecc60: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3ecc60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ecc64: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3ECC64u;
    {
        const bool branch_taken_0x3ecc64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC64u;
        // 0x3ecc68: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc64) {
            ctx->pc = 0x3ECCE4u;
            goto label_3ecce4;
        }
    }
    ctx->pc = 0x3ECC6Cu;
    // 0x3ecc6c: 0x24040044  addiu       $a0, $zero, 0x44
    ctx->pc = 0x3ecc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3ecc70: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3ecc70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3ecc74: 0x0  nop
    ctx->pc = 0x3ecc74u;
    // NOP
label_3ecc78:
    // 0x3ecc78: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3ecc78u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3ecc7c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3ecc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3ecc80: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3ecc80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3ecc84: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3ECC84u;
    {
        const bool branch_taken_0x3ecc84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ecc84) {
            ctx->pc = 0x3ECC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECC84u;
            // 0x3ecc88: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECCD8u;
            goto label_3eccd8;
        }
    }
    ctx->pc = 0x3ECC8Cu;
    // 0x3ecc8c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3ECC8Cu;
    {
        const bool branch_taken_0x3ecc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3ecc8c) {
            ctx->pc = 0x3ECC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECC8Cu;
            // 0x3ecc90: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECCB8u;
            goto label_3eccb8;
        }
    }
    ctx->pc = 0x3ECC94u;
    // 0x3ecc94: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3ECC94u;
    {
        const bool branch_taken_0x3ecc94 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC94u;
        // 0x3ecc98: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc94) {
            ctx->pc = 0x3ECCA4u;
            goto label_3ecca4;
        }
    }
    ctx->pc = 0x3ECC9Cu;
    // 0x3ecc9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3ECC9Cu;
    {
        const bool branch_taken_0x3ecc9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECC9Cu;
        // 0x3ecca0: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecc9c) {
            ctx->pc = 0x3ECCA8u;
            goto label_3ecca8;
        }
    }
    ctx->pc = 0x3ECCA4u;
label_3ecca4:
    // 0x3ecca4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3ecca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3ecca8:
    // 0x3ecca8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3ecca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3eccac: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3eccacu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3eccb0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3eccb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3eccb4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3eccb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3eccb8:
    // 0x3eccb8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3eccb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3eccbc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3eccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3eccc0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3eccc0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3eccc4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3eccc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3eccc8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3eccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3ecccc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3eccccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3eccd0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3ECCD0u;
    {
        const bool branch_taken_0x3eccd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ECCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECCD0u;
        // 0x3eccd4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eccd0) {
            ctx->pc = 0x3ECD48u;
            goto label_3ecd48;
        }
    }
    ctx->pc = 0x3ECCD8u;
label_3eccd8:
    // 0x3eccd8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3eccd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3eccdc: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3ECCDCu;
    {
        const bool branch_taken_0x3eccdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eccdc) {
            ctx->pc = 0x3ECCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ECCDCu;
            // 0x3ecce0: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ECC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecc78;
        }
    }
    ctx->pc = 0x3ECCE4u;
label_3ecce4:
    // 0x3ecce4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3ecce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3ecce8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3ECCE8u;
    SET_GPR_U32(ctx, 31, 0x3ECCF0u);
    ctx->pc = 0x3ECCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECCE8u;
    // 0x3eccec: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3ECCE8u, 0x3ECCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECCF0u;
label_3eccf0:
    // 0x3eccf0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3eccf0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3eccf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3eccf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3eccf8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3ECCF8u;
    SET_GPR_U32(ctx, 31, 0x3ECD00u);
    ctx->pc = 0x3ECCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECCF8u;
    // 0x3eccfc: 0x24040450  addiu       $a0, $zero, 0x450 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3ECCF8u, 0x3ECD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECD00u;
label_3ecd00:
    // 0x3ecd00: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ecd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ecd04: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3ecd04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3ecd08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3ecd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3ecd0c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3ecd0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ecd10:
    // 0x3ecd10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ecd10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecd14: 0xc0aeea6  jal         func_2BBA98
    ctx->pc = 0x3ECD14u;
    SET_GPR_U32(ctx, 31, 0x3ECD1Cu);
    ctx->pc = 0x3ECD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ECD14u;
    // 0x3ecd18: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBA98u, 0x3ECD14u, 0x3ECD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ECD1Cu;
label_3ecd1c:
    // 0x3ecd1c: 0x0  nop
    ctx->pc = 0x3ecd1cu;
    // NOP
    // 0x3ecd20: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3ECD20u;
    {
        const bool branch_taken_0x3ecd20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3ECD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD20u;
        // 0x3ecd24: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ecd20) {
            ctx->pc = 0x3ECD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ecd10;
        }
    }
    ctx->pc = 0x3ECD28u;
    // 0x3ecd28: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3ecd28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3ecd2c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3ecd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3ecd30: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3ecd30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3ecd34: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3ecd34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ecd38: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3ecd38u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3ecd3c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3ecd3cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3ecd40: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3ecd40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3ecd44: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3ecd44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3ecd48:
    // 0x3ecd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ecd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ecd4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ecd4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ecd50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ecd50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ecd54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3ecd54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ecd58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3ecd58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ecd5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3ecd5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ecd60: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3ecd60u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ecd64: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3ecd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3ecd68: 0x3e00008  jr          $ra
    ctx->pc = 0x3ECD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ECD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ECD68u;
        // 0x3ecd6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ECD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ECD70u;
}
