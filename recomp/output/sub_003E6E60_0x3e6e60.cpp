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

// Function: sub_003E6E60
// Address: 0x3e6e60 - 0x3e7020
void sub_003E6E60_0x3e6e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6E60_0x3e6e60");
#endif

    switch (ctx->pc) {
        case 0x3e6eacu: goto label_3e6eac;
        case 0x3e6ec0u: goto label_3e6ec0;
        case 0x3e6ed8u: goto label_3e6ed8;
        case 0x3e6ee4u: goto label_3e6ee4;
        case 0x3e6f28u: goto label_3e6f28;
        case 0x3e6fa0u: goto label_3e6fa0;
        case 0x3e6fb0u: goto label_3e6fb0;
        case 0x3e6fc0u: goto label_3e6fc0;
        case 0x3e6fccu: goto label_3e6fcc;
        default: break;
    }

    ctx->pc = 0x3e6e60u;

    // 0x3e6e60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e6e64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e6e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e6e68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3e6e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3e6e6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e6e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6e70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e6e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e6e74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e6e74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6e78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e6e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e6e7c: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x3e6e7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3e6e80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3e6e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3e6e84: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3e6e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3e6e88: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x3e6e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x3e6e8c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x3e6e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x3e6e90: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x3e6e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x3e6e94: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6e98: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6E98u;
    {
        const bool branch_taken_0x3e6e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E6E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6E98u;
        // 0x3e6e9c: 0xae620048  sw          $v0, 0x48($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6e98) {
            ctx->pc = 0x3E6F10u;
            goto label_3e6f10;
        }
    }
    ctx->pc = 0x3E6EA0u;
    // 0x3e6ea0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6ea4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6EA4u;
    SET_GPR_U32(ctx, 31, 0x3E6EACu);
    ctx->pc = 0x3E6EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6EA4u;
    // 0x3e6ea8: 0x2632ffff  addiu       $s2, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6EA4u, 0x3E6EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6EACu;
label_3e6eac:
    // 0x3e6eac: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e6eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6eb0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3e6eb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6eb4: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3e6eb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e6eb8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E6EB8u;
    SET_GPR_U32(ctx, 31, 0x3E6EC0u);
    ctx->pc = 0x3E6EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6EB8u;
    // 0x3e6ebc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E6EB8u, 0x3E6EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6EC0u;
label_3e6ec0:
    // 0x3e6ec0: 0x24550010  addiu       $s5, $v0, 0x10
    ctx->pc = 0x3e6ec0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e6ec4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3e6ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3e6ec8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E6EC8u;
    {
        const bool branch_taken_0x3e6ec8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6EC8u;
        // 0x3e6ecc: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ec8) {
            ctx->pc = 0x3E6EF0u;
            goto label_3e6ef0;
        }
    }
    ctx->pc = 0x3E6ED0u;
    // 0x3e6ed0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e6ed0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e6ed4: 0x0  nop
    ctx->pc = 0x3e6ed4u;
    // NOP
label_3e6ed8:
    // 0x3e6ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6edc: 0xc0afeb4  jal         func_2BFAD0
    ctx->pc = 0x3E6EDCu;
    SET_GPR_U32(ctx, 31, 0x3E6EE4u);
    ctx->pc = 0x3E6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6EDCu;
    // 0x3e6ee0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFAD0u, 0x3E6EDCu, 0x3E6EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6EE4u;
label_3e6ee4:
    // 0x3e6ee4: 0x0  nop
    ctx->pc = 0x3e6ee4u;
    // NOP
    // 0x3e6ee8: 0x1656fffb  bne         $s2, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E6EE8u;
    {
        const bool branch_taken_0x3e6ee8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6EE8u;
        // 0x3e6eec: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6ee8) {
            ctx->pc = 0x3E6ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6ed8;
        }
    }
    ctx->pc = 0x3E6EF0u;
label_3e6ef0:
    // 0x3e6ef0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3e6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e6ef4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x3e6ef4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6ef8: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x3e6ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x3e6efc: 0xa6910004  sh          $s1, 0x4($s4)
    ctx->pc = 0x3e6efcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6f00: 0xae830008  sw          $v1, 0x8($s4)
    ctx->pc = 0x3e6f00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 3));
    // 0x3e6f04: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x3e6f04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x3e6f08: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x3E6F08u;
    {
        const bool branch_taken_0x3e6f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F08u;
        // 0x3e6f0c: 0xa6910006  sh          $s1, 0x6($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f08) {
            ctx->pc = 0x3E6FF8u;
            goto label_3e6ff8;
        }
    }
    ctx->pc = 0x3E6F10u;
label_3e6f10:
    // 0x3e6f10: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x3e6f10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6f14: 0x10c0001f  beqz        $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x3E6F14u;
    {
        const bool branch_taken_0x3e6f14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F14u;
        // 0x3e6f18: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f14) {
            ctx->pc = 0x3E6F94u;
            goto label_3e6f94;
        }
    }
    ctx->pc = 0x3E6F1Cu;
    // 0x3e6f1c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3e6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x3e6f20: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x3e6f20u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x3e6f24: 0x0  nop
    ctx->pc = 0x3e6f24u;
    // NOP
label_3e6f28:
    // 0x3e6f28: 0x94c70004  lhu         $a3, 0x4($a2)
    ctx->pc = 0x3e6f28u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3e6f2c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3e6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3e6f30: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x3e6f30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e6f34: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E6F34u;
    {
        const bool branch_taken_0x3e6f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6f34) {
            ctx->pc = 0x3E6F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6F34u;
            // 0x3e6f38: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6F88u;
            goto label_3e6f88;
        }
    }
    ctx->pc = 0x3E6F3Cu;
    // 0x3e6f3c: 0x5467000a  bnel        $v1, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x3E6F3Cu;
    {
        const bool branch_taken_0x3e6f3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x3e6f3c) {
            ctx->pc = 0x3E6F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6F3Cu;
            // 0x3e6f40: 0x94c20006  lhu         $v0, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6F68u;
            goto label_3e6f68;
        }
    }
    ctx->pc = 0x3E6F44u;
    // 0x3e6f44: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E6F44u;
    {
        const bool branch_taken_0x3e6f44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F44u;
        // 0x3e6f48: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f44) {
            ctx->pc = 0x3E6F54u;
            goto label_3e6f54;
        }
    }
    ctx->pc = 0x3E6F4Cu;
    // 0x3e6f4c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E6F4Cu;
    {
        const bool branch_taken_0x3e6f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F4Cu;
        // 0x3e6f50: 0xad020008  sw          $v0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f4c) {
            ctx->pc = 0x3E6F58u;
            goto label_3e6f58;
        }
    }
    ctx->pc = 0x3E6F54u;
label_3e6f54:
    // 0x3e6f54: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x3e6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_3e6f58:
    // 0x3e6f58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3e6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3e6f5c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3e6f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3e6f60: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x3e6f60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x3e6f64: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x3e6f64u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_3e6f68:
    // 0x3e6f68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3e6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3e6f6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3e6f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6f70: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x3e6f70u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e6f74: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e6f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e6f78: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3e6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3e6f7c: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3e6f7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3e6f80: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3E6F80u;
    {
        const bool branch_taken_0x3e6f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6F80u;
        // 0x3e6f84: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6f80) {
            ctx->pc = 0x3E6FF8u;
            goto label_3e6ff8;
        }
    }
    ctx->pc = 0x3E6F88u;
label_3e6f88:
    // 0x3e6f88: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x3e6f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3e6f8c: 0x54c0ffe6  bnel        $a2, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E6F8Cu;
    {
        const bool branch_taken_0x3e6f8c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e6f8c) {
            ctx->pc = 0x3E6F90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E6F8Cu;
            // 0x3e6f90: 0x94c30006  lhu         $v1, 0x6($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E6F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6f28;
        }
    }
    ctx->pc = 0x3E6F94u;
label_3e6f94:
    // 0x3e6f94: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3e6f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e6f98: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E6F98u;
    SET_GPR_U32(ctx, 31, 0x3E6FA0u);
    ctx->pc = 0x3E6F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6F98u;
    // 0x3e6f9c: 0x2415000f  addiu       $s5, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E6F98u, 0x3E6FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6FA0u;
label_3e6fa0:
    // 0x3e6fa0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x3e6fa0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e6fa4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e6fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6fa8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E6FA8u;
    SET_GPR_U32(ctx, 31, 0x3E6FB0u);
    ctx->pc = 0x3E6FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6FA8u;
    // 0x3e6fac: 0x240401d0  addiu       $a0, $zero, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E6FA8u, 0x3E6FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6FB0u;
label_3e6fb0:
    // 0x3e6fb0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6fb4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x3e6fb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e6fb8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3e6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3e6fbc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x3e6fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3e6fc0:
    // 0x3e6fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6fc4: 0xc0afeb4  jal         func_2BFAD0
    ctx->pc = 0x3E6FC4u;
    SET_GPR_U32(ctx, 31, 0x3E6FCCu);
    ctx->pc = 0x3E6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6FC4u;
    // 0x3e6fc8: 0x26b5ffff  addiu       $s5, $s5, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BFAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BFAD0u, 0x3E6FC4u, 0x3E6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6FCCu;
label_3e6fcc:
    // 0x3e6fcc: 0x0  nop
    ctx->pc = 0x3e6fccu;
    // NOP
    // 0x3e6fd0: 0x16b6fffb  bne         $s5, $s6, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E6FD0u;
    {
        const bool branch_taken_0x3e6fd0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 22));
        ctx->pc = 0x3E6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6FD0u;
        // 0x3e6fd4: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6fd0) {
            ctx->pc = 0x3E6FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e6fc0;
        }
    }
    ctx->pc = 0x3E6FD8u;
    // 0x3e6fd8: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3e6fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3e6fdc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3e6fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3e6fe0: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x3e6fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x3e6fe4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3e6fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6fe8: 0xa6510006  sh          $s1, 0x6($s2)
    ctx->pc = 0x3e6fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
    // 0x3e6fec: 0xa6430004  sh          $v1, 0x4($s2)
    ctx->pc = 0x3e6fecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e6ff0: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x3e6ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x3e6ff4: 0xae540000  sw          $s4, 0x0($s2)
    ctx->pc = 0x3e6ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 20));
label_3e6ff8:
    // 0x3e6ff8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e6ff8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6ffc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e6ffcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e7000: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e7000u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7004: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3e7004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e7008: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3e7008u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e700c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3e700cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3e7010: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3e7010u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e7014: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3e7014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3e7018: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7018u;
        // 0x3e701c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7020u;
}
