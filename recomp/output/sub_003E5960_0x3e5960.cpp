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

// Function: sub_003E5960
// Address: 0x3e5960 - 0x3e5b20
void sub_003E5960_0x3e5960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E5960_0x3e5960");
#endif

    switch (ctx->pc) {
        case 0x3e59acu: goto label_3e59ac;
        case 0x3e59c0u: goto label_3e59c0;
        case 0x3e59d8u: goto label_3e59d8;
        case 0x3e59e4u: goto label_3e59e4;
        case 0x3e5a28u: goto label_3e5a28;
        case 0x3e5aa0u: goto label_3e5aa0;
        case 0x3e5ab0u: goto label_3e5ab0;
        case 0x3e5ac0u: goto label_3e5ac0;
        case 0x3e5accu: goto label_3e5acc;
        default: break;
    }

    ctx->pc = 0x3e5960u;

    // 0x3e5960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e5960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e5964: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e5964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e5968: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e5968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e596c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e596cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e5970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e5974: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e5974u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5978: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e5978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e597c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e597cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e5980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e5980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e5984: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e5984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e5988: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e5988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e598c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e598cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e5990: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e5990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e5994: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5998: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5998u;
    {
        const bool branch_taken_0x3e5998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5998u;
        // 0x3e599c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5998) {
            ctx->pc = 0x3E5A10u;
            goto label_3e5a10;
        }
    }
    ctx->pc = 0x3E59A0u;
    // 0x3e59a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e59a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e59a4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E59A4u;
    SET_GPR_U32(ctx, 31, 0x3E59ACu);
    ctx->pc = 0x3E59A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E59A4u;
    // 0x3e59a8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E59A4u, 0x3E59ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E59ACu;
label_3e59ac:
    // 0x3e59ac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e59acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e59b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e59b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e59b4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e59b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e59b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E59B8u;
    SET_GPR_U32(ctx, 31, 0x3E59C0u);
    ctx->pc = 0x3E59BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E59B8u;
    // 0x3e59bc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E59B8u, 0x3E59C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E59C0u;
label_3e59c0:
    // 0x3e59c0: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e59c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e59c4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e59c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e59c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E59C8u;
    {
        const bool branch_taken_0x3e59c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59C8u;
        // 0x3e59cc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e59c8) {
            ctx->pc = 0x3E59F0u;
            goto label_3e59f0;
        }
    }
    ctx->pc = 0x3E59D0u;
    // 0x3e59d0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e59d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e59d4: 0x0  nop
    ctx->pc = 0x3e59d4u;
    // NOP
label_3e59d8:
    // 0x3e59d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e59d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e59dc: 0xc0afb4c  jal         func_2BED30
    ctx->pc = 0x3E59DCu;
    SET_GPR_U32(ctx, 31, 0x3E59E4u);
    ctx->pc = 0x3E59E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E59DCu;
    // 0x3e59e0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED30u, 0x3E59DCu, 0x3E59E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E59E4u;
label_3e59e4:
    // 0x3e59e4: 0x0  nop
    ctx->pc = 0x3e59e4u;
    // NOP
    // 0x3e59e8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E59E8u;
    {
        const bool branch_taken_0x3e59e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E59ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E59E8u;
        // 0x3e59ec: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e59e8) {
            ctx->pc = 0x3E59D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e59d8;
        }
    }
    ctx->pc = 0x3E59F0u;
label_3e59f0:
    // 0x3e59f0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e59f4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e59f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e59f8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e59f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e59fc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e59fcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5a00: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e5a00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e5a04: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e5a04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e5a08: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E5A08u;
    {
        const bool branch_taken_0x3e5a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A08u;
        // 0x3e5a0c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a08) {
            ctx->pc = 0x3E5AF8u;
            goto label_3e5af8;
        }
    }
    ctx->pc = 0x3E5A10u;
label_3e5a10:
    // 0x3e5a10: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e5a10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5a14: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E5A14u;
    {
        const bool branch_taken_0x3e5a14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A14u;
        // 0x3e5a18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a14) {
            ctx->pc = 0x3E5A94u;
            goto label_3e5a94;
        }
    }
    ctx->pc = 0x3E5A1Cu;
    // 0x3e5a1c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e5a20: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e5a20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e5a24: 0x0  nop
    ctx->pc = 0x3e5a24u;
    // NOP
label_3e5a28:
    // 0x3e5a28: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e5a28u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e5a2c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e5a30: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e5a30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e5a34: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E5A34u;
    {
        const bool branch_taken_0x3e5a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5a34) {
            ctx->pc = 0x3E5A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A34u;
            // 0x3e5a38: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5A88u;
            goto label_3e5a88;
        }
    }
    ctx->pc = 0x3E5A3Cu;
    // 0x3e5a3c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E5A3Cu;
    {
        const bool branch_taken_0x3e5a3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e5a3c) {
            ctx->pc = 0x3E5A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A3Cu;
            // 0x3e5a40: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5A68u;
            goto label_3e5a68;
        }
    }
    ctx->pc = 0x3E5A44u;
    // 0x3e5a44: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E5A44u;
    {
        const bool branch_taken_0x3e5a44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A44u;
        // 0x3e5a48: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a44) {
            ctx->pc = 0x3E5A54u;
            goto label_3e5a54;
        }
    }
    ctx->pc = 0x3E5A4Cu;
    // 0x3e5a4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E5A4Cu;
    {
        const bool branch_taken_0x3e5a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A4Cu;
        // 0x3e5a50: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a4c) {
            ctx->pc = 0x3E5A58u;
            goto label_3e5a58;
        }
    }
    ctx->pc = 0x3E5A54u;
label_3e5a54:
    // 0x3e5a54: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e5a58:
    // 0x3e5a58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e5a5c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e5a60: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e5a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e5a64: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e5a64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e5a68:
    // 0x3e5a68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e5a6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5a70: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e5a70u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e5a74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e5a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e5a78: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e5a7c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e5a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e5a80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E5A80u;
    {
        const bool branch_taken_0x3e5a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E5A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5A80u;
        // 0x3e5a84: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5a80) {
            ctx->pc = 0x3E5AF8u;
            goto label_3e5af8;
        }
    }
    ctx->pc = 0x3E5A88u;
label_3e5a88:
    // 0x3e5a88: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e5a88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e5a8c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E5A8Cu;
    {
        const bool branch_taken_0x3e5a8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e5a8c) {
            ctx->pc = 0x3E5A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E5A8Cu;
            // 0x3e5a90: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E5A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5a28;
        }
    }
    ctx->pc = 0x3E5A94u;
label_3e5a94:
    // 0x3e5a94: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e5a98: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E5A98u;
    SET_GPR_U32(ctx, 31, 0x3E5AA0u);
    ctx->pc = 0x3E5A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5A98u;
    // 0x3e5a9c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E5A98u, 0x3E5AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5AA0u;
label_3e5aa0:
    // 0x3e5aa0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e5aa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e5aa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e5aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5aa8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E5AA8u;
    SET_GPR_U32(ctx, 31, 0x3E5AB0u);
    ctx->pc = 0x3E5AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5AA8u;
    // 0x3e5aac: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E5AA8u, 0x3E5AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5AB0u;
label_3e5ab0:
    // 0x3e5ab0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5ab4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e5ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e5ab8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e5ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e5abc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e5abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e5ac0:
    // 0x3e5ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e5ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5ac4: 0xc0afb4c  jal         func_2BED30
    ctx->pc = 0x3E5AC4u;
    SET_GPR_U32(ctx, 31, 0x3E5ACCu);
    ctx->pc = 0x3E5AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E5AC4u;
    // 0x3e5ac8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BED30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED30u, 0x3E5AC4u, 0x3E5ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E5ACCu;
label_3e5acc:
    // 0x3e5acc: 0x0  nop
    ctx->pc = 0x3e5accu;
    // NOP
    // 0x3e5ad0: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E5AD0u;
    {
        const bool branch_taken_0x3e5ad0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E5AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5AD0u;
        // 0x3e5ad4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e5ad0) {
            ctx->pc = 0x3E5AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e5ac0;
        }
    }
    ctx->pc = 0x3E5AD8u;
    // 0x3e5ad8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e5ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e5adc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e5adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e5ae0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e5ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e5ae4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e5ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e5ae8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e5ae8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e5aec: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e5aecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e5af0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e5af0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e5af4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e5af8:
    // 0x3e5af8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e5af8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e5afc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e5afcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e5b00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e5b00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e5b04: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e5b04u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e5b08: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e5b08u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e5b0c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e5b0cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e5b10: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e5b10u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e5b14: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e5b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e5b18: 0x3e00008  jr          $ra
    ctx->pc = 0x3E5B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E5B18u;
        // 0x3e5b1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E5B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E5B20u;
}
