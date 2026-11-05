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

// Function: sub_003E8E88
// Address: 0x3e8e88 - 0x3e8fb8
void sub_003E8E88_0x3e8e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8E88_0x3e8e88");
#endif

    switch (ctx->pc) {
        case 0x3e8ec0u: goto label_3e8ec0;
        case 0x3e8eccu: goto label_3e8ecc;
        case 0x3e8f00u: goto label_3e8f00;
        case 0x3e8f74u: goto label_3e8f74;
        case 0x3e8f80u: goto label_3e8f80;
        default: break;
    }

    ctx->pc = 0x3e8e88u;

    // 0x3e8e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e8e90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e8e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3e8e94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e8e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e8e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8e9c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e8e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8ea0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e8ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3e8ea4: 0x2a430200  slti        $v1, $s2, 0x200
    ctx->pc = 0x3e8ea4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x3e8ea8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x3e8ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x3e8eac: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e8eb0: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3E8EB0u;
    {
        const bool branch_taken_0x3e8eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E8EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EB0u;
        // 0x3e8eb4: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8eb0) {
            ctx->pc = 0x3E8EECu;
            goto label_3e8eec;
        }
    }
    ctx->pc = 0x3E8EB8u;
    // 0x3e8eb8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E8EB8u;
    SET_GPR_U32(ctx, 31, 0x3E8EC0u);
    ctx->pc = 0x3E8EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8EB8u;
    // 0x3e8ebc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E8EB8u, 0x3E8EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8EC0u;
label_3e8ec0:
    // 0x3e8ec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e8ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8ec4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E8EC4u;
    SET_GPR_U32(ctx, 31, 0x3E8ECCu);
    ctx->pc = 0x3E8EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8EC4u;
    // 0x3e8ec8: 0x122080  sll         $a0, $s2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E8EC4u, 0x3E8ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8ECCu;
label_3e8ecc:
    // 0x3e8ecc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3e8eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e8ed0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e8ed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8ed4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x3e8ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x3e8ed8: 0xa6120004  sh          $s2, 0x4($s0)
    ctx->pc = 0x3e8ed8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e8edc: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x3e8edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x3e8ee0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3e8ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3e8ee4: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3E8EE4u;
    {
        const bool branch_taken_0x3e8ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EE4u;
        // 0x3e8ee8: 0xa6120006  sh          $s2, 0x6($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ee4) {
            ctx->pc = 0x3E8FA0u;
            goto label_3e8fa0;
        }
    }
    ctx->pc = 0x3E8EECu;
label_3e8eec:
    // 0x3e8eec: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3e8eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e8ef0: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E8EF0u;
    {
        const bool branch_taken_0x3e8ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8EF0u;
        // 0x3e8ef4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8ef0) {
            ctx->pc = 0x3E8F6Cu;
            goto label_3e8f6c;
        }
    }
    ctx->pc = 0x3E8EF8u;
    // 0x3e8ef8: 0x94830006  lhu         $v1, 0x6($a0)
    ctx->pc = 0x3e8ef8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x3e8efc: 0x0  nop
    ctx->pc = 0x3e8efcu;
    // NOP
label_3e8f00:
    // 0x3e8f00: 0x94850004  lhu         $a1, 0x4($a0)
    ctx->pc = 0x3e8f00u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3e8f04: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x3e8f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3e8f08: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x3e8f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3e8f0c: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E8F0Cu;
    {
        const bool branch_taken_0x3e8f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8f0c) {
            ctx->pc = 0x3E8F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8F0Cu;
            // 0x3e8f10: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8F60u;
            goto label_3e8f60;
        }
    }
    ctx->pc = 0x3E8F14u;
    // 0x3e8f14: 0x5465000a  bnel        $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x3E8F14u;
    {
        const bool branch_taken_0x3e8f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x3e8f14) {
            ctx->pc = 0x3E8F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8F14u;
            // 0x3e8f18: 0x94820006  lhu         $v0, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8F40u;
            goto label_3e8f40;
        }
    }
    ctx->pc = 0x3E8F1Cu;
    // 0x3e8f1c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E8F1Cu;
    {
        const bool branch_taken_0x3e8f1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F1Cu;
        // 0x3e8f20: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f1c) {
            ctx->pc = 0x3E8F2Cu;
            goto label_3e8f2c;
        }
    }
    ctx->pc = 0x3E8F24u;
    // 0x3e8f24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3E8F24u;
    {
        const bool branch_taken_0x3e8f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F24u;
        // 0x3e8f28: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f24) {
            ctx->pc = 0x3E8F30u;
            goto label_3e8f30;
        }
    }
    ctx->pc = 0x3E8F2Cu;
label_3e8f2c:
    // 0x3e8f2c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3e8f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3e8f30:
    // 0x3e8f30: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e8f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e8f34: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3e8f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x3e8f38: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x3e8f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x3e8f3c: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x3e8f3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_3e8f40:
    // 0x3e8f40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e8f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e8f44: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x3e8f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e8f48: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x3e8f48u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3e8f4c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3e8f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3e8f50: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x3e8f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x3e8f54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3e8f54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3e8f58: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3E8F58u;
    {
        const bool branch_taken_0x3e8f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8F58u;
        // 0x3e8f5c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e8f58) {
            ctx->pc = 0x3E8FA0u;
            goto label_3e8fa0;
        }
    }
    ctx->pc = 0x3E8F60u;
label_3e8f60:
    // 0x3e8f60: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x3e8f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e8f64: 0x5480ffe6  bnel        $a0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3E8F64u;
    {
        const bool branch_taken_0x3e8f64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e8f64) {
            ctx->pc = 0x3E8F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E8F64u;
            // 0x3e8f68: 0x94830006  lhu         $v1, 0x6($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E8F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e8f00;
        }
    }
    ctx->pc = 0x3E8F6Cu;
label_3e8f6c:
    // 0x3e8f6c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E8F6Cu;
    SET_GPR_U32(ctx, 31, 0x3E8F74u);
    ctx->pc = 0x3E8F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8F6Cu;
    // 0x3e8f70: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E8F6Cu, 0x3E8F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8F74u;
label_3e8f74:
    // 0x3e8f74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3e8f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8f78: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E8F78u;
    SET_GPR_U32(ctx, 31, 0x3E8F80u);
    ctx->pc = 0x3E8F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8F78u;
    // 0x3e8f7c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E8F78u, 0x3E8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8F80u;
label_3e8f80:
    // 0x3e8f80: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3e8f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e8f84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e8f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8f88: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x3e8f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x3e8f8c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3e8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3e8f90: 0xa6120006  sh          $s2, 0x6($s0)
    ctx->pc = 0x3e8f90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 18));
    // 0x3e8f94: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x3e8f94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x3e8f98: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3e8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3e8f9c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3e8f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3e8fa0:
    // 0x3e8fa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8fa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8fa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e8fa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8fa8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e8fa8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8fac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e8facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3e8fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8FB0u;
        // 0x3e8fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8FB8u;
}
