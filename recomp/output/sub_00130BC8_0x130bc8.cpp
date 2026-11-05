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

// Function: sub_00130BC8
// Address: 0x130bc8 - 0x130cb0
void sub_00130BC8_0x130bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130BC8_0x130bc8");
#endif

    switch (ctx->pc) {
        case 0x130c08u: goto label_130c08;
        case 0x130c18u: goto label_130c18;
        case 0x130c3cu: goto label_130c3c;
        case 0x130c48u: goto label_130c48;
        case 0x130c5cu: goto label_130c5c;
        case 0x130c74u: goto label_130c74;
        case 0x130c84u: goto label_130c84;
        default: break;
    }

    ctx->pc = 0x130bc8u;

    // 0x130bc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130bcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130bd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130bd4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130bd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130bd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130bdc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130be0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x130be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x130be4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x130be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x130be8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x130be8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x130bec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x130becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130bf0: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130bf4: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x130BF4u;
    {
        const bool branch_taken_0x130bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130BF4u;
        // 0x130bf8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130bf4) {
            ctx->pc = 0x130C84u;
            goto label_130c84;
        }
    }
    ctx->pc = 0x130BFCu;
    // 0x130bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c00: 0xc046044  jal         func_118110
    ctx->pc = 0x130C00u;
    SET_GPR_U32(ctx, 31, 0x130C08u);
    ctx->pc = 0x130C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C00u;
    // 0x130c04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x130C00u, 0x130C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C08u;
label_130c08:
    // 0x130c08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x130c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x130c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c10: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x130C10u;
    SET_GPR_U32(ctx, 31, 0x130C18u);
    ctx->pc = 0x130C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C10u;
    // 0x130c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x130C10u, 0x130C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C18u;
label_130c18:
    // 0x130c18: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x130c18u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x130c1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x130c1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x130c20: 0x0  nop
    ctx->pc = 0x130c20u;
    // NOP
    // 0x130c24: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x130c24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130c28: 0x0  nop
    ctx->pc = 0x130c28u;
    // NOP
    // 0x130c2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x130C2Cu;
    {
        const bool branch_taken_0x130c2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C2Cu;
        // 0x130c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c2c) {
            ctx->pc = 0x130C40u;
            goto label_130c40;
        }
    }
    ctx->pc = 0x130C34u;
    // 0x130c34: 0xc046002  jal         func_118008
    ctx->pc = 0x130C34u;
    SET_GPR_U32(ctx, 31, 0x130C3Cu);
    ctx->pc = 0x130C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C34u;
    // 0x130c38: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x130C34u, 0x130C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C3Cu;
label_130c3c:
    // 0x130c3c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x130c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_130c40:
    // 0x130c40: 0xc043920  jal         func_10E480
    ctx->pc = 0x130C40u;
    SET_GPR_U32(ctx, 31, 0x130C48u);
    ctx->pc = 0x130C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C40u;
    // 0x130c44: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130C40u, 0x130C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C48u;
label_130c48:
    // 0x130c48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c4c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x130C4Cu;
    {
        const bool branch_taken_0x130c4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C4Cu;
        // 0x130c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c4c) {
            ctx->pc = 0x130C84u;
            goto label_130c84;
        }
    }
    ctx->pc = 0x130C54u;
    // 0x130c54: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130C54u;
    SET_GPR_U32(ctx, 31, 0x130C5Cu);
    ctx->pc = 0x130C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C54u;
    // 0x130c58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130C54u, 0x130C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C5Cu;
label_130c5c:
    // 0x130c5c: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x130C5Cu;
    {
        const bool branch_taken_0x130c5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C5Cu;
        // 0x130c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c5c) {
            ctx->pc = 0x130C7Cu;
            goto label_130c7c;
        }
    }
    ctx->pc = 0x130C64u;
    // 0x130c64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x130c64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c68: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x130c68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130c6c: 0xc095156  jal         func_254558
    ctx->pc = 0x130C6Cu;
    SET_GPR_U32(ctx, 31, 0x130C74u);
    ctx->pc = 0x130C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C6Cu;
    // 0x130c70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254558u, 0x130C6Cu, 0x130C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C74u;
label_130c74:
    // 0x130c74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130C74u;
    {
        const bool branch_taken_0x130c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130C74u;
        // 0x130c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130c74) {
            ctx->pc = 0x130C88u;
            goto label_130c88;
        }
    }
    ctx->pc = 0x130C7Cu;
label_130c7c:
    // 0x130c7c: 0xc09513e  jal         func_2544F8
    ctx->pc = 0x130C7Cu;
    SET_GPR_U32(ctx, 31, 0x130C84u);
    ctx->pc = 0x130C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130C7Cu;
    // 0x130c80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544F8u, 0x130C7Cu, 0x130C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130C84u;
label_130c84:
    // 0x130c84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130c88:
    // 0x130c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130c8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130c90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130c94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130c94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130c98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130c98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130c9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x130c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x130ca0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x130ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x130CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130CA4u;
        // 0x130ca8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130CACu;
    // 0x130cac: 0x0  nop
    ctx->pc = 0x130cacu;
    // NOP
    ctx->pc = 0x130cb0u;
}
