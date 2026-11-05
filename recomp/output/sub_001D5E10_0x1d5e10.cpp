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

// Function: sub_001D5E10
// Address: 0x1d5e10 - 0x1d5f00
void sub_001D5E10_0x1d5e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5E10_0x1d5e10");
#endif

    switch (ctx->pc) {
        case 0x1d5e48u: goto label_1d5e48;
        case 0x1d5e70u: goto label_1d5e70;
        case 0x1d5ea8u: goto label_1d5ea8;
        case 0x1d5ec4u: goto label_1d5ec4;
        case 0x1d5ed8u: goto label_1d5ed8;
        default: break;
    }

    ctx->pc = 0x1d5e10u;

    // 0x1d5e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d5e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d5e14: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d5e14u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1d5e18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5e1c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1d5e1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1d5e20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d5e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d5e24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5e24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e28: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1d5e28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d5e2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1d5e2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5e30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d5e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d5e34: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1d5e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d5e38: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d5e3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d5e3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1d5e40: 0xc07421a  jal         func_1D0868
    ctx->pc = 0x1D5E40u;
    SET_GPR_U32(ctx, 31, 0x1D5E48u);
    ctx->pc = 0x1D5E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5E40u;
    // 0x1d5e44: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0868u, 0x1D5E40u, 0x1D5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5E48u;
label_1d5e48:
    // 0x1d5e48: 0x9623002a  lhu         $v1, 0x2A($s1)
    ctx->pc = 0x1d5e48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1d5e4c: 0xe6340018  swc1        $f20, 0x18($s1)
    ctx->pc = 0x1d5e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x1d5e50: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1d5e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1d5e54: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x1d5e54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5e58: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x1d5e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x1d5e5c: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1d5e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d5e60: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D5E60u;
    {
        const bool branch_taken_0x1d5e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E60u;
        // 0x1d5e64: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e60) {
            ctx->pc = 0x1D5ECCu;
            goto label_1d5ecc;
        }
    }
    ctx->pc = 0x1D5E68u;
    // 0x1d5e68: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d5e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d5e6c: 0x0  nop
    ctx->pc = 0x1d5e6cu;
    // NOP
label_1d5e70:
    // 0x1d5e70: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D5E70u;
    {
        const bool branch_taken_0x1d5e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e70) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E78u;
    // 0x1d5e78: 0x0  nop
    ctx->pc = 0x1d5e78u;
    // NOP
    // 0x1d5e7c: 0x0  nop
    ctx->pc = 0x1d5e7cu;
    // NOP
    // 0x1d5e80: 0x50b1fffb  beql        $a1, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5E80u;
    {
        const bool branch_taken_0x1d5e80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        if (branch_taken_0x1d5e80) {
            ctx->pc = 0x1D5E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E80u;
            // 0x1d5e84: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5e70;
        }
    }
    ctx->pc = 0x1D5E88u;
    // 0x1d5e88: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1d5e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1d5e8c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d5e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d5e90: 0x5040fff7  beql        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5E90u;
    {
        const bool branch_taken_0x1d5e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e90) {
            ctx->pc = 0x1D5E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5E90u;
            // 0x1d5e94: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5e70;
        }
    }
    ctx->pc = 0x1D5E98u;
    // 0x1d5e98: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5E98u;
    {
        const bool branch_taken_0x1d5e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e98) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5EA0u;
    // 0x1d5ea0: 0xc073ee8  jal         func_1CFBA0
    ctx->pc = 0x1D5EA0u;
    SET_GPR_U32(ctx, 31, 0x1D5EA8u);
    ctx->pc = 0x1D5EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EA0u;
    // 0x1d5ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBA0u, 0x1D5EA0u, 0x1D5EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EA8u;
label_1d5ea8:
    // 0x1d5ea8: 0x9622002a  lhu         $v0, 0x2A($s1)
    ctx->pc = 0x1d5ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x1d5eac: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d5eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1d5eb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5EB0u;
    {
        const bool branch_taken_0x1d5eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EB0u;
        // 0x1d5eb4: 0xa622002a  sh          $v0, 0x2A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5eb0) {
            ctx->pc = 0x1D5ED8u;
            goto label_1d5ed8;
        }
    }
    ctx->pc = 0x1D5EB8u;
label_1d5eb8:
    // 0x1d5eb8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d5eb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1d5ebc: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1D5EBCu;
    SET_GPR_U32(ctx, 31, 0x1D5EC4u);
    ctx->pc = 0x1D5EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5EBCu;
    // 0x1d5ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1D5EBCu, 0x1D5EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5EC4u;
label_1d5ec4:
    // 0x1d5ec4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5EC4u;
    {
        const bool branch_taken_0x1d5ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EC4u;
        // 0x1d5ec8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ec4) {
            ctx->pc = 0x1D5EDCu;
            goto label_1d5edc;
        }
    }
    ctx->pc = 0x1D5ECCu;
label_1d5ecc:
    // 0x1d5ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d5eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ed0: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1D5ED0u;
    SET_GPR_U32(ctx, 31, 0x1D5ED8u);
    ctx->pc = 0x1D5ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ED0u;
    // 0x1d5ed4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1D5ED0u, 0x1D5ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5ED8u;
label_1d5ed8:
    // 0x1d5ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d5ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d5edc:
    // 0x1d5edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d5edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d5ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d5ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ee4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1d5ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d5ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5EE8u;
        // 0x1d5eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5EF0u;
    // 0x1d5ef0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d5ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d5ef4: 0x0  nop
    ctx->pc = 0x1d5ef4u;
    // NOP
    // 0x1d5ef8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d5efc: 0x0  nop
    ctx->pc = 0x1d5efcu;
    // NOP
    ctx->pc = 0x1d5f00u;
}
