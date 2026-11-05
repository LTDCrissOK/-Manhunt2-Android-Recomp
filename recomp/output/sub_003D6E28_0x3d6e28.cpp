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

// Function: sub_003D6E28
// Address: 0x3d6e28 - 0x3d7000
void sub_003D6E28_0x3d6e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D6E28_0x3d6e28");
#endif

    switch (ctx->pc) {
        case 0x3d6e5cu: goto label_3d6e5c;
        case 0x3d6e70u: goto label_3d6e70;
        case 0x3d6e94u: goto label_3d6e94;
        case 0x3d6ed0u: goto label_3d6ed0;
        case 0x3d6ee0u: goto label_3d6ee0;
        case 0x3d6f20u: goto label_3d6f20;
        case 0x3d6f58u: goto label_3d6f58;
        case 0x3d6f68u: goto label_3d6f68;
        case 0x3d6f8cu: goto label_3d6f8c;
        default: break;
    }

    ctx->pc = 0x3d6e28u;

    // 0x3d6e28: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x3d6e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x3d6e2c: 0xffb60390  sd          $s6, 0x390($sp)
    ctx->pc = 0x3d6e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 22));
    // 0x3d6e30: 0xffb703a0  sd          $s7, 0x3A0($sp)
    ctx->pc = 0x3d6e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 23));
    // 0x3d6e34: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3d6e34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e38: 0xffb20350  sd          $s2, 0x350($sp)
    ctx->pc = 0x3d6e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 18));
    // 0x3d6e3c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x3d6e3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e40: 0xffbf03b0  sd          $ra, 0x3B0($sp)
    ctx->pc = 0x3d6e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 31));
    // 0x3d6e44: 0xffb50380  sd          $s5, 0x380($sp)
    ctx->pc = 0x3d6e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 21));
    // 0x3d6e48: 0xffb40370  sd          $s4, 0x370($sp)
    ctx->pc = 0x3d6e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 20));
    // 0x3d6e4c: 0xffb30360  sd          $s3, 0x360($sp)
    ctx->pc = 0x3d6e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 864), GPR_U64(ctx, 19));
    // 0x3d6e50: 0xffb10340  sd          $s1, 0x340($sp)
    ctx->pc = 0x3d6e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 17));
    // 0x3d6e54: 0xc0f5a00  jal         func_3D6800
    ctx->pc = 0x3D6E54u;
    SET_GPR_U32(ctx, 31, 0x3D6E5Cu);
    ctx->pc = 0x3D6E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E54u;
    // 0x3d6e58: 0xffb00330  sd          $s0, 0x330($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6800u, 0x3D6E54u, 0x3D6E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E5Cu;
label_3d6e5c:
    // 0x3d6e5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3d6e5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e60: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D6E60u;
    {
        const bool branch_taken_0x3d6e60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E60u;
        // 0x3d6e64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6e60) {
            ctx->pc = 0x3D6E7Cu;
            goto label_3d6e7c;
        }
    }
    ctx->pc = 0x3D6E68u;
    // 0x3d6e68: 0xc0f5a3a  jal         func_3D68E8
    ctx->pc = 0x3D6E68u;
    SET_GPR_U32(ctx, 31, 0x3D6E70u);
    ctx->pc = 0x3D6E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E68u;
    // 0x3d6e6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D68E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D68E8u, 0x3D6E68u, 0x3D6E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E70u;
label_3d6e70:
    // 0x3d6e70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e74: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D6E74u;
    {
        const bool branch_taken_0x3d6e74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E74u;
        // 0x3d6e78: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6e74) {
            ctx->pc = 0x3D6E84u;
            goto label_3d6e84;
        }
    }
    ctx->pc = 0x3D6E7Cu;
label_3d6e7c:
    // 0x3d6e7c: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x3D6E7Cu;
    {
        const bool branch_taken_0x3d6e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6E7Cu;
        // 0x3d6e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6e7c) {
            ctx->pc = 0x3D6FD4u;
            goto label_3d6fd4;
        }
    }
    ctx->pc = 0x3D6E84u;
label_3d6e84:
    // 0x3d6e84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d6e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e88: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6e8c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3D6E8Cu;
    SET_GPR_U32(ctx, 31, 0x3D6E94u);
    ctx->pc = 0x3D6E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6E8Cu;
    // 0x3d6e90: 0x240602f8  addiu       $a2, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3D6E8Cu, 0x3D6E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6E94u;
label_3d6e94:
    // 0x3d6e94: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3d6e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3d6e98: 0x97a40010  lhu         $a0, 0x10($sp)
    ctx->pc = 0x3d6e98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d6e9c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3d6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3d6ea0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x3d6ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d6ea4: 0xa7a402ba  sh          $a0, 0x2BA($sp)
    ctx->pc = 0x3d6ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 698), (uint16_t)GPR_U32(ctx, 4));
    // 0x3d6ea8: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x3d6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3d6eac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3d6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d6eb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3d6eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3d6eb4: 0x24710004  addiu       $s1, $v1, 0x4
    ctx->pc = 0x3d6eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x3d6eb8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3d6eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d6ebc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3D6EBCu;
    {
        const bool branch_taken_0x3d6ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EBCu;
        // 0x3d6ec0: 0xafa50024  sw          $a1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ebc) {
            ctx->pc = 0x3D6EF8u;
            goto label_3d6ef8;
        }
    }
    ctx->pc = 0x3D6EC4u;
    // 0x3d6ec4: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x3d6ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3d6ec8: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x3d6ec8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3d6ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6ed0:
    // 0x3d6ed0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d6ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6ed4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d6ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6ed8: 0xc0f5a7c  jal         func_3D69F0
    ctx->pc = 0x3D6ED8u;
    SET_GPR_U32(ctx, 31, 0x3D6EE0u);
    ctx->pc = 0x3D6EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6ED8u;
    // 0x3d6edc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D69F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D69F0u, 0x3D6ED8u, 0x3D6EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6EE0u;
label_3d6ee0:
    // 0x3d6ee0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6ee4: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3d6ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d6ee8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D6EE8u;
    {
        const bool branch_taken_0x3d6ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EE8u;
        // 0x3d6eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ee8) {
            ctx->pc = 0x3D6ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6ed0;
        }
    }
    ctx->pc = 0x3D6EF0u;
    // 0x3d6ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6EF0u;
    {
        const bool branch_taken_0x3d6ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6EF0u;
        // 0x3d6ef4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6ef0) {
            ctx->pc = 0x3D6F04u;
            goto label_3d6f04;
        }
    }
    ctx->pc = 0x3D6EF8u;
label_3d6ef8:
    // 0x3d6ef8: 0x26530010  addiu       $s3, $s2, 0x10
    ctx->pc = 0x3d6ef8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3d6efc: 0x27b50300  addiu       $s5, $sp, 0x300
    ctx->pc = 0x3d6efcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
    // 0x3d6f00: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d6f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d6f04:
    // 0x3d6f04: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x3d6f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x3d6f08: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x3d6f08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d6f0c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D6F0Cu;
    {
        const bool branch_taken_0x3d6f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3D6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F0Cu;
        // 0x3d6f10: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f0c) {
            ctx->pc = 0x3D6F28u;
            goto label_3d6f28;
        }
    }
    ctx->pc = 0x3D6F14u;
    // 0x3d6f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6f18: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6F18u;
    SET_GPR_U32(ctx, 31, 0x3D6F20u);
    ctx->pc = 0x3D6F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6F18u;
    // 0x3d6f1c: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6F18u, 0x3D6F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6F20u;
label_3d6f20:
    // 0x3d6f20: 0x8fa30320  lw          $v1, 0x320($sp)
    ctx->pc = 0x3d6f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x3d6f24: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3d6f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d6f28:
    // 0x3d6f28: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3d6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3d6f2c: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x3d6f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3d6f30: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3d6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3d6f34: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x3d6f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3d6f38: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3d6f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d6f3c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D6F3Cu;
    {
        const bool branch_taken_0x3d6f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F3Cu;
        // 0x3d6f40: 0xafa50324  sw          $a1, 0x324($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 804), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f3c) {
            ctx->pc = 0x3D6F84u;
            goto label_3d6f84;
        }
    }
    ctx->pc = 0x3D6F44u;
    // 0x3d6f44: 0x2c5102b  sltu        $v0, $s6, $a1
    ctx->pc = 0x3d6f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3d6f48: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3D6F48u;
    {
        const bool branch_taken_0x3d6f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F48u;
        // 0x3d6f4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f48) {
            ctx->pc = 0x3D6F88u;
            goto label_3d6f88;
        }
    }
    ctx->pc = 0x3D6F50u;
    // 0x3d6f50: 0x27b20324  addiu       $s2, $sp, 0x324
    ctx->pc = 0x3d6f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
    // 0x3d6f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f58:
    // 0x3d6f58: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3d6f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6f5c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3d6f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6f60: 0xc0f5a7c  jal         func_3D69F0
    ctx->pc = 0x3D6F60u;
    SET_GPR_U32(ctx, 31, 0x3D6F68u);
    ctx->pc = 0x3D6F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6F60u;
    // 0x3d6f64: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D69F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D69F0u, 0x3D6F60u, 0x3D6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6F68u;
label_3d6f68:
    // 0x3d6f68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d6f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6f6c: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x3d6f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d6f70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D6F70u;
    {
        const bool branch_taken_0x3d6f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F70u;
        // 0x3d6f74: 0x8fa20324  lw          $v0, 0x324($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 804)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f70) {
            ctx->pc = 0x3D6F84u;
            goto label_3d6f84;
        }
    }
    ctx->pc = 0x3D6F78u;
    // 0x3d6f78: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x3d6f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d6f7c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3D6F7Cu;
    {
        const bool branch_taken_0x3d6f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6F7Cu;
        // 0x3d6f80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6f7c) {
            ctx->pc = 0x3D6F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6f58;
        }
    }
    ctx->pc = 0x3D6F84u;
label_3d6f84:
    // 0x3d6f84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3d6f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f88:
    // 0x3d6f88: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x3d6f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6f8c:
    // 0x3d6f8c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3d6f8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d6f90: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x3d6f90u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d6f94: 0xdc860010  ld          $a2, 0x10($a0)
    ctx->pc = 0x3d6f94u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d6f98: 0xdc870018  ld          $a3, 0x18($a0)
    ctx->pc = 0x3d6f98u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3d6f9c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3d6f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3d6fa0: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x3d6fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x3d6fa4: 0xfc460010  sd          $a2, 0x10($v0)
    ctx->pc = 0x3d6fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 6));
    // 0x3d6fa8: 0xfc470018  sd          $a3, 0x18($v0)
    ctx->pc = 0x3d6fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 7));
    // 0x3d6fac: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3d6facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3d6fb0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3d6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3d6fb4: 0x0  nop
    ctx->pc = 0x3d6fb4u;
    // NOP
    // 0x3d6fb8: 0x1495fff4  bne         $a0, $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x3D6FB8u;
    {
        const bool branch_taken_0x3d6fb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x3d6fb8) {
            ctx->pc = 0x3D6F8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d6f8c;
        }
    }
    ctx->pc = 0x3D6FC0u;
    // 0x3d6fc0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x3d6fc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d6fc4: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x3d6fc4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3d6fc8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3d6fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3d6fcc: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x3d6fccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
    // 0x3d6fd0: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x3d6fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d6fd4:
    // 0x3d6fd4: 0xdfbf03b0  ld          $ra, 0x3B0($sp)
    ctx->pc = 0x3d6fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x3d6fd8: 0xdfb703a0  ld          $s7, 0x3A0($sp)
    ctx->pc = 0x3d6fd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x3d6fdc: 0xdfb60390  ld          $s6, 0x390($sp)
    ctx->pc = 0x3d6fdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x3d6fe0: 0xdfb50380  ld          $s5, 0x380($sp)
    ctx->pc = 0x3d6fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x3d6fe4: 0xdfb40370  ld          $s4, 0x370($sp)
    ctx->pc = 0x3d6fe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x3d6fe8: 0xdfb30360  ld          $s3, 0x360($sp)
    ctx->pc = 0x3d6fe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x3d6fec: 0xdfb20350  ld          $s2, 0x350($sp)
    ctx->pc = 0x3d6fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x3d6ff0: 0xdfb10340  ld          $s1, 0x340($sp)
    ctx->pc = 0x3d6ff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x3d6ff4: 0xdfb00330  ld          $s0, 0x330($sp)
    ctx->pc = 0x3d6ff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x3d6ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D6FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6FF8u;
        // 0x3d6ffc: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D6FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7000u;
}
