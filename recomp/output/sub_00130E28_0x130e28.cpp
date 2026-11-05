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

// Function: sub_00130E28
// Address: 0x130e28 - 0x130ee8
void sub_00130E28_0x130e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130E28_0x130e28");
#endif

    switch (ctx->pc) {
        case 0x130e64u: goto label_130e64;
        case 0x130e70u: goto label_130e70;
        case 0x130e7cu: goto label_130e7c;
        case 0x130e88u: goto label_130e88;
        case 0x130e94u: goto label_130e94;
        case 0x130ea8u: goto label_130ea8;
        case 0x130ec0u: goto label_130ec0;
        default: break;
    }

    ctx->pc = 0x130e28u;

    // 0x130e28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130e34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130e38: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130e38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130e40: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x130e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x130e44: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x130e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x130e48: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x130e48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x130e4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x130e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130e50: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130e54: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x130E54u;
    {
        const bool branch_taken_0x130e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E54u;
        // 0x130e58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e54) {
            ctx->pc = 0x130EC0u;
            goto label_130ec0;
        }
    }
    ctx->pc = 0x130E5Cu;
    // 0x130e5c: 0xc046002  jal         func_118008
    ctx->pc = 0x130E5Cu;
    SET_GPR_U32(ctx, 31, 0x130E64u);
    ctx->pc = 0x130E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E5Cu;
    // 0x130e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x130E5Cu, 0x130E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E64u;
label_130e64:
    // 0x130e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e68: 0xc046086  jal         func_118218
    ctx->pc = 0x130E68u;
    SET_GPR_U32(ctx, 31, 0x130E70u);
    ctx->pc = 0x130E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E68u;
    // 0x130e6c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x130E68u, 0x130E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E70u;
label_130e70:
    // 0x130e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e74: 0xc0460bc  jal         func_1182F0
    ctx->pc = 0x130E74u;
    SET_GPR_U32(ctx, 31, 0x130E7Cu);
    ctx->pc = 0x130E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E74u;
    // 0x130e78: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1182F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1182F0u, 0x130E74u, 0x130E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E7Cu;
label_130e7c:
    // 0x130e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e80: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x130E80u;
    SET_GPR_U32(ctx, 31, 0x130E88u);
    ctx->pc = 0x130E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E80u;
    // 0x130e84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x130E80u, 0x130E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E88u;
label_130e88:
    // 0x130e88: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x130e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130e8c: 0xc043920  jal         func_10E480
    ctx->pc = 0x130E8Cu;
    SET_GPR_U32(ctx, 31, 0x130E94u);
    ctx->pc = 0x130E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130E8Cu;
    // 0x130e90: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130E8Cu, 0x130E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130E94u;
label_130e94:
    // 0x130e94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130e98: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x130E98u;
    {
        const bool branch_taken_0x130e98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130E98u;
        // 0x130e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e98) {
            ctx->pc = 0x130EC0u;
            goto label_130ec0;
        }
    }
    ctx->pc = 0x130EA0u;
    // 0x130ea0: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130EA0u;
    SET_GPR_U32(ctx, 31, 0x130EA8u);
    ctx->pc = 0x130EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EA0u;
    // 0x130ea4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130EA0u, 0x130EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EA8u;
label_130ea8:
    // 0x130ea8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x130eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eb0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x130eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eb4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x130eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130eb8: 0xc09508e  jal         func_254238
    ctx->pc = 0x130EB8u;
    SET_GPR_U32(ctx, 31, 0x130EC0u);
    ctx->pc = 0x130EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130EB8u;
    // 0x130ebc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254238u, 0x130EB8u, 0x130EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130EC0u;
label_130ec0:
    // 0x130ec0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x130ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130ec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130ecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130ed0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130ed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130ed4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130ed4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130ed8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x130ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x130edc: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x130edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130ee0: 0x3e00008  jr          $ra
    ctx->pc = 0x130EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130EE0u;
        // 0x130ee4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130EE8u;
}
