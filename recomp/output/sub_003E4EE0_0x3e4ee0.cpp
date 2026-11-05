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

// Function: sub_003E4EE0
// Address: 0x3e4ee0 - 0x3e50a0
void sub_003E4EE0_0x3e4ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E4EE0_0x3e4ee0");
#endif

    switch (ctx->pc) {
        case 0x3e4f2cu: goto label_3e4f2c;
        case 0x3e4f40u: goto label_3e4f40;
        case 0x3e4f58u: goto label_3e4f58;
        case 0x3e4f64u: goto label_3e4f64;
        case 0x3e4fa8u: goto label_3e4fa8;
        case 0x3e5020u: goto label_3e5020;
        case 0x3e5030u: goto label_3e5030;
        case 0x3e5040u: goto label_3e5040;
        case 0x3e504cu: goto label_3e504c;
        default: break;
    }

    ctx->pc = 0x3e4ee0u;

    // 0x3e4ee0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e4ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e4ee4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e4ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e4ee8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e4ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e4eec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e4eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ef0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e4ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e4ef4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e4ef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4ef8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e4ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e4efc: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e4efcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e4f00: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e4f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e4f04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e4f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e4f08: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e4f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e4f0c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e4f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e4f10: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e4f14: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e4f18: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E4F18u;
    {
        const bool branch_taken_0x3e4f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F18u;
        // 0x3e4f1c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f18) {
            ctx->pc = 0x3E4F90u;
            goto label_3e4f90;
        }
    }
    ctx->pc = 0x3E4F20u;
    // 0x3e4f20: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e4f24: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E4F24u;
    SET_GPR_U32(ctx, 31, 0x3E4F2Cu);
    ctx->pc = 0x3E4F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F24u;
    // 0x3e4f28: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E4F24u, 0x3E4F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F2Cu;
label_3e4f2c:
    // 0x3e4f2c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e4f30: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e4f30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f34: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e4f34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e4f38: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E4F38u;
    SET_GPR_U32(ctx, 31, 0x3E4F40u);
    ctx->pc = 0x3E4F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F38u;
    // 0x3e4f3c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E4F38u, 0x3E4F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F40u;
label_3e4f40:
    // 0x3e4f40: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e4f40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e4f44: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e4f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e4f48: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E4F48u;
    {
        const bool branch_taken_0x3e4f48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F48u;
        // 0x3e4f4c: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f48) {
            ctx->pc = 0x3E4F70u;
            goto label_3e4f70;
        }
    }
    ctx->pc = 0x3E4F50u;
    // 0x3e4f50: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e4f50u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e4f54: 0x0  nop
    ctx->pc = 0x3e4f54u;
    // NOP
label_3e4f58:
    // 0x3e4f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e4f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f5c: 0xc0afa22  jal         func_2BE888
    ctx->pc = 0x3E4F5Cu;
    SET_GPR_U32(ctx, 31, 0x3E4F64u);
    ctx->pc = 0x3E4F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E4F5Cu;
    // 0x3e4f60: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE888u, 0x3E4F5Cu, 0x3E4F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E4F64u;
label_3e4f64:
    // 0x3e4f64: 0x0  nop
    ctx->pc = 0x3e4f64u;
    // NOP
    // 0x3e4f68: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E4F68u;
    {
        const bool branch_taken_0x3e4f68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E4F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F68u;
        // 0x3e4f6c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f68) {
            ctx->pc = 0x3E4F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4f58;
        }
    }
    ctx->pc = 0x3E4F70u;
label_3e4f70:
    // 0x3e4f70: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e4f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e4f74: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e4f74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e4f78: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e4f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e4f7c: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e4f7cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e4f80: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e4f80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e4f84: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e4f84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e4f88: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E4F88u;
    {
        const bool branch_taken_0x3e4f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F88u;
        // 0x3e4f8c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f88) {
            ctx->pc = 0x3E5078u;
            goto label_3e5078;
        }
    }
    ctx->pc = 0x3E4F90u;
label_3e4f90:
    // 0x3e4f90: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e4f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e4f94: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E4F94u;
    {
        const bool branch_taken_0x3e4f94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4F94u;
        // 0x3e4f98: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4f94) {
            ctx->pc = 0x3E5014u;
            goto label_3e5014;
        }
    }
    ctx->pc = 0x3E4F9Cu;
    // 0x3e4f9c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e4f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e4fa0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e4fa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e4fa4: 0x0  nop
    ctx->pc = 0x3e4fa4u;
    // NOP
label_3e4fa8:
    // 0x3e4fa8: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e4fa8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e4fac: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e4facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e4fb0: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e4fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e4fb4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E4FB4u;
    {
        const bool branch_taken_0x3e4fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e4fb4) {
            ctx->pc = 0x3E4FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4FB4u;
            // 0x3e4fb8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5008u;
            goto label_3e5008;
        }
    }
    ctx->pc = 0x3E4FBCu;
    // 0x3e4fbc: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E4FBCu;
    {
        const bool branch_taken_0x3e4fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e4fbc) {
            ctx->pc = 0x3E4FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E4FBCu;
            // 0x3e4fc0: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4FE8u;
            goto label_3e4fe8;
        }
    }
    ctx->pc = 0x3E4FC4u;
    // 0x3e4fc4: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E4FC4u;
    {
        const bool branch_taken_0x3e4fc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4FC4u;
        // 0x3e4fc8: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4fc4) {
            ctx->pc = 0x3E4FD4u;
            goto label_3e4fd4;
        }
    }
    ctx->pc = 0x3E4FCCu;
    // 0x3e4fcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E4FCCu;
    {
        const bool branch_taken_0x3e4fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4FCCu;
        // 0x3e4fd0: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e4fcc) {
            ctx->pc = 0x3E4FD8u;
            goto label_3e4fd8;
        }
    }
    ctx->pc = 0x3E4FD4u;
label_3e4fd4:
    // 0x3e4fd4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e4fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e4fd8:
    // 0x3e4fd8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e4fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e4fdc: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e4fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e4fe0: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e4fe4: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e4fe4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e4fe8:
    // 0x3e4fe8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e4fec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e4ff0: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e4ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e4ff4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e4ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e4ff8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e4ffc: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e4ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e5000: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5000u;
    {
        const bool branch_taken_0x3e5000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5000u;
        // 0x3e5004: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5000) {
            ctx->pc = 0x3E5078u;
            goto label_3e5078;
        }
    }
    ctx->pc = 0x3E5008u;
label_3e5008:
    // 0x3e5008: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e5008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e500c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E500Cu;
    {
        const bool branch_taken_0x3e500c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e500c) {
            ctx->pc = 0x3E5010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E500Cu;
            // 0x3e5010: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E4FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e4fa8;
        }
    }
    ctx->pc = 0x3E5014u;
label_3e5014:
    // 0x3e5014: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5018: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5018u;
    SET_GPR_U32(ctx, 31, 0x3E5020u);
    ctx->pc = 0x3E501Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5018u;
    // 0x3e501c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5018u, 0x3E5020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5020u;
label_3e5020:
    // 0x3e5020: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5020u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e5024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5028: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5028u;
    SET_GPR_U32(ctx, 31, 0x3E5030u);
    ctx->pc = 0x3E502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5028u;
    // 0x3e502c: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5028u, 0x3E5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5030u;
label_3e5030:
    // 0x3e5030: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5034: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e5034u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5038: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e5038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e503c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e503cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e5040:
    // 0x3e5040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5044: 0xc0afa22  jal         func_2BE888
    ctx->pc = 0x3E5044u;
    SET_GPR_U32(ctx, 31, 0x3E504Cu);
    ctx->pc = 0x3E5048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5044u;
    // 0x3e5048: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE888u, 0x3E5044u, 0x3E504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E504Cu;
label_3e504c:
    // 0x3e504c: 0x0  nop
    ctx->pc = 0x3e504cu;
    // NOP
    // 0x3e5050: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5050u;
    {
        const bool branch_taken_0x3e5050 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5050u;
        // 0x3e5054: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5050) {
            ctx->pc = 0x3E5040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5040;
        }
    }
    ctx->pc = 0x3E5058u;
    // 0x3e5058: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e5058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e505c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5060: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e5060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e5064: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e5064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5068: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e5068u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e506c: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e506cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e5070: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e5070u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e5074: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e5074u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e5078:
    // 0x3e5078: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e5078u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e507c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e507cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e5080: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e5080u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5084: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e5084u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e5088: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e5088u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e508c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e508cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e5090: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e5090u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5094: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e5094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e5098: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5098u;
        // 0x3e509c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E50A0u;
}
