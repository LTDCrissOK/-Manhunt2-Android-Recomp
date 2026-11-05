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

// Function: sub_003E5EA0
// Address: 0x3e5ea0 - 0x3e6060
void sub_003E5EA0_0x3e5ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5EA0_0x3e5ea0");
#endif

    switch (ctx->pc) {
        case 0x3e5eecu: goto label_3e5eec;
        case 0x3e5f00u: goto label_3e5f00;
        case 0x3e5f18u: goto label_3e5f18;
        case 0x3e5f24u: goto label_3e5f24;
        case 0x3e5f68u: goto label_3e5f68;
        case 0x3e5fe0u: goto label_3e5fe0;
        case 0x3e5ff0u: goto label_3e5ff0;
        case 0x3e6000u: goto label_3e6000;
        case 0x3e600cu: goto label_3e600c;
        default: break;
    }

    ctx->pc = 0x3e5ea0u;

    // 0x3e5ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e5ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e5ea4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e5ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e5ea8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e5ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e5eac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e5eacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5eb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e5eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e5eb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e5eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5eb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e5eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e5ebc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e5ebcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e5ec0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e5ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e5ec4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e5ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e5ec8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e5ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e5ecc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e5eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e5ed0: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e5ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e5ed4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5ed8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5ED8u;
    {
        const bool branch_taken_0x3e5ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E5EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5ED8u;
        // 0x3e5edc: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5ed8) {
            ctx->pc = 0x3E5F50u;
            goto label_3e5f50;
        }
    }
    ctx->pc = 0x3E5EE0u;
    // 0x3e5ee0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5ee4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5EE4u;
    SET_GPR_U32(ctx, 31, 0x3E5EECu);
    ctx->pc = 0x3E5EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5EE4u;
    // 0x3e5ee8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5EE4u, 0x3E5EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5EECu;
label_3e5eec:
    // 0x3e5eec: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e5eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5ef0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e5ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5ef4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e5ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e5ef8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5EF8u;
    SET_GPR_U32(ctx, 31, 0x3E5F00u);
    ctx->pc = 0x3E5EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5EF8u;
    // 0x3e5efc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5EF8u, 0x3E5F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5F00u;
label_3e5f00:
    // 0x3e5f00: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e5f00u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5f04: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e5f04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e5f08: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E5F08u;
    {
        const bool branch_taken_0x3e5f08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F08u;
        // 0x3e5f0c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f08) {
            ctx->pc = 0x3E5F30u;
            goto label_3e5f30;
        }
    }
    ctx->pc = 0x3E5F10u;
    // 0x3e5f10: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5f10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5f14: 0x0  nop
    ctx->pc = 0x3e5f14u;
    // NOP
label_3e5f18:
    // 0x3e5f18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f1c: 0xc0afc56  jal         func_2BF158
    ctx->pc = 0x3E5F1Cu;
    SET_GPR_U32(ctx, 31, 0x3E5F24u);
    ctx->pc = 0x3E5F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5F1Cu;
    // 0x3e5f20: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF158u, 0x3E5F1Cu, 0x3E5F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5F24u;
label_3e5f24:
    // 0x3e5f24: 0x0  nop
    ctx->pc = 0x3e5f24u;
    // NOP
    // 0x3e5f28: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5F28u;
    {
        const bool branch_taken_0x3e5f28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F28u;
        // 0x3e5f2c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f28) {
            ctx->pc = 0x3E5F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5f18;
        }
    }
    ctx->pc = 0x3E5F30u;
label_3e5f30:
    // 0x3e5f30: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e5f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e5f34: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e5f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5f38: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e5f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e5f3c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e5f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5f40: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e5f40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e5f44: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e5f44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e5f48: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E5F48u;
    {
        const bool branch_taken_0x3e5f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F48u;
        // 0x3e5f4c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f48) {
            ctx->pc = 0x3E6038u;
            goto label_3e6038;
        }
    }
    ctx->pc = 0x3E5F50u;
label_3e5f50:
    // 0x3e5f50: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e5f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5f54: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E5F54u;
    {
        const bool branch_taken_0x3e5f54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F54u;
        // 0x3e5f58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f54) {
            ctx->pc = 0x3E5FD4u;
            goto label_3e5fd4;
        }
    }
    ctx->pc = 0x3E5F5Cu;
    // 0x3e5f5c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e5f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5f60: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e5f60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e5f64: 0x0  nop
    ctx->pc = 0x3e5f64u;
    // NOP
label_3e5f68:
    // 0x3e5f68: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e5f68u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e5f6c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e5f70: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e5f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e5f74: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E5F74u;
    {
        const bool branch_taken_0x3e5f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5f74) {
            ctx->pc = 0x3E5F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5F74u;
            // 0x3e5f78: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5FC8u;
            goto label_3e5fc8;
        }
    }
    ctx->pc = 0x3E5F7Cu;
    // 0x3e5f7c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E5F7Cu;
    {
        const bool branch_taken_0x3e5f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e5f7c) {
            ctx->pc = 0x3E5F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5F7Cu;
            // 0x3e5f80: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5FA8u;
            goto label_3e5fa8;
        }
    }
    ctx->pc = 0x3E5F84u;
    // 0x3e5f84: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5F84u;
    {
        const bool branch_taken_0x3e5f84 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F84u;
        // 0x3e5f88: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f84) {
            ctx->pc = 0x3E5F94u;
            goto label_3e5f94;
        }
    }
    ctx->pc = 0x3E5F8Cu;
    // 0x3e5f8c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E5F8Cu;
    {
        const bool branch_taken_0x3e5f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5F8Cu;
        // 0x3e5f90: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5f8c) {
            ctx->pc = 0x3E5F98u;
            goto label_3e5f98;
        }
    }
    ctx->pc = 0x3E5F94u;
label_3e5f94:
    // 0x3e5f94: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e5f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e5f98:
    // 0x3e5f98: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e5f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e5f9c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e5f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e5fa0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e5fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e5fa4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e5fa4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e5fa8:
    // 0x3e5fa8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e5fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e5fac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5fb0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e5fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e5fb4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e5fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e5fb8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e5fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5fbc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e5fbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e5fc0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5FC0u;
    {
        const bool branch_taken_0x3e5fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5FC0u;
        // 0x3e5fc4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5fc0) {
            ctx->pc = 0x3E6038u;
            goto label_3e6038;
        }
    }
    ctx->pc = 0x3E5FC8u;
label_3e5fc8:
    // 0x3e5fc8: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e5fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e5fcc: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E5FCCu;
    {
        const bool branch_taken_0x3e5fcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5fcc) {
            ctx->pc = 0x3E5FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5FCCu;
            // 0x3e5fd0: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5f68;
        }
    }
    ctx->pc = 0x3E5FD4u;
label_3e5fd4:
    // 0x3e5fd4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5fd8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5FD8u;
    SET_GPR_U32(ctx, 31, 0x3E5FE0u);
    ctx->pc = 0x3E5FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FD8u;
    // 0x3e5fdc: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5FD8u, 0x3E5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FE0u;
label_3e5fe0:
    // 0x3e5fe0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5fe0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5fe4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e5fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5fe8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5FE8u;
    SET_GPR_U32(ctx, 31, 0x3E5FF0u);
    ctx->pc = 0x3E5FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5FE8u;
    // 0x3e5fec: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5FE8u, 0x3E5FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5FF0u;
label_3e5ff0:
    // 0x3e5ff0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5ff4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e5ff4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5ff8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e5ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e5ffc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e5ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e6000:
    // 0x3e6000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6004: 0xc0afc56  jal         func_2BF158
    ctx->pc = 0x3E6004u;
    SET_GPR_U32(ctx, 31, 0x3E600Cu);
    ctx->pc = 0x3E6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6004u;
    // 0x3e6008: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF158u, 0x3E6004u, 0x3E600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E600Cu;
label_3e600c:
    // 0x3e600c: 0x0  nop
    ctx->pc = 0x3e600cu;
    // NOP
    // 0x3e6010: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E6010u;
    {
        const bool branch_taken_0x3e6010 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6010u;
        // 0x3e6014: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6010) {
            ctx->pc = 0x3E6000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6000;
        }
    }
    ctx->pc = 0x3E6018u;
    // 0x3e6018: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e6018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e601c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e601cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6020: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e6020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e6024: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e6024u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6028: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e6028u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e602c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e602cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6030: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e6030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e6034: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e6034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e6038:
    // 0x3e6038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e6038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e603c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e603cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e6040: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e6040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e6044: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e6044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e6048: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e6048u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e604c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e604cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e6050: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e6050u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6054: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e6054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e6058: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6058u;
        // 0x3e605c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6060u;
}
