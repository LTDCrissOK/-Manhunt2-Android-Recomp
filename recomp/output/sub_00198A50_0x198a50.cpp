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

// Function: sub_00198A50
// Address: 0x198a50 - 0x198af0
void sub_00198A50_0x198a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198A50_0x198a50");
#endif

    switch (ctx->pc) {
        case 0x198a50u: goto label_198a50;
        case 0x198a54u: goto label_198a54;
        case 0x198a58u: goto label_198a58;
        case 0x198a5cu: goto label_198a5c;
        case 0x198a60u: goto label_198a60;
        case 0x198a64u: goto label_198a64;
        case 0x198a68u: goto label_198a68;
        case 0x198a6cu: goto label_198a6c;
        case 0x198a70u: goto label_198a70;
        case 0x198a74u: goto label_198a74;
        case 0x198a78u: goto label_198a78;
        case 0x198a7cu: goto label_198a7c;
        case 0x198a80u: goto label_198a80;
        case 0x198a84u: goto label_198a84;
        case 0x198a88u: goto label_198a88;
        case 0x198a8cu: goto label_198a8c;
        case 0x198a90u: goto label_198a90;
        case 0x198a94u: goto label_198a94;
        case 0x198a98u: goto label_198a98;
        case 0x198a9cu: goto label_198a9c;
        case 0x198aa0u: goto label_198aa0;
        case 0x198aa4u: goto label_198aa4;
        case 0x198aa8u: goto label_198aa8;
        case 0x198aacu: goto label_198aac;
        case 0x198ab0u: goto label_198ab0;
        case 0x198ab4u: goto label_198ab4;
        case 0x198ab8u: goto label_198ab8;
        case 0x198abcu: goto label_198abc;
        case 0x198ac0u: goto label_198ac0;
        case 0x198ac4u: goto label_198ac4;
        case 0x198ac8u: goto label_198ac8;
        case 0x198accu: goto label_198acc;
        case 0x198ad0u: goto label_198ad0;
        case 0x198ad4u: goto label_198ad4;
        case 0x198ad8u: goto label_198ad8;
        case 0x198adcu: goto label_198adc;
        case 0x198ae0u: goto label_198ae0;
        case 0x198ae4u: goto label_198ae4;
        case 0x198ae8u: goto label_198ae8;
        case 0x198aecu: goto label_198aec;
        default: break;
    }

    ctx->pc = 0x198a50u;

label_198a50:
    // 0x198a50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x198a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_198a54:
    // 0x198a54: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x198a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_198a58:
    // 0x198a58: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x198a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_198a5c:
    // 0x198a5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198a60:
    // 0x198a60: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x198a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_198a64:
    // 0x198a64: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x198a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_198a68:
    // 0x198a68: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x198a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_198a6c:
    // 0x198a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x198a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_198a70:
    // 0x198a70: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x198a70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_198a74:
    // 0x198a74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x198a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_198a78:
    // 0x198a78: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x198a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_198a7c:
    // 0x198a7c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x198a7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_198a80:
    // 0x198a80: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x198a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_198a84:
    // 0x198a84: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x198a84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_198a88:
    // 0x198a88: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x198a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_198a8c:
    // 0x198a8c: 0xc06fad8  jal         func_1BEB60
label_198a90:
    if (ctx->pc == 0x198A90u) {
        ctx->pc = 0x198A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198A8Cu;
        // 0x198a90: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198A94u;
        goto label_198a94;
    }
    ctx->pc = 0x198A8Cu;
    SET_GPR_U32(ctx, 31, 0x198A94u);
    ctx->pc = 0x198A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198A8Cu;
    // 0x198a90: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEB60u, 0x198A8Cu, 0x198A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198A94u;
label_198a94:
    // 0x198a94: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x198a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_198a98:
    // 0x198a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198a9c:
    // 0x198a9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x198a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198aa0:
    // 0x198aa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x198aa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_198aa4:
    // 0x198aa4: 0x8c69002c  lw          $t1, 0x2C($v1)
    ctx->pc = 0x198aa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_198aa8:
    // 0x198aa8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x198aa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_198aac:
    // 0x198aac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x198aacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_198ab0:
    // 0x198ab0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x198ab0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_198ab4:
    // 0x198ab4: 0x120f809  jalr        $t1
label_198ab8:
    if (ctx->pc == 0x198AB8u) {
        ctx->pc = 0x198AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AB4u;
        // 0x198ab8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198ABCu;
        goto label_198abc;
    }
    ctx->pc = 0x198AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x198ABCu);
        ctx->pc = 0x198AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AB4u;
        // 0x198ab8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198AB4u, 0x198ABCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198ABCu;
label_198abc:
    // 0x198abc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x198abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_198ac0:
    // 0x198ac0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x198ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_198ac4:
    // 0x198ac4: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x198ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_198ac8:
    // 0x198ac8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x198ac8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_198acc:
    // 0x198acc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x198accu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_198ad0:
    // 0x198ad0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x198ad0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_198ad4:
    // 0x198ad4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x198ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_198ad8:
    // 0x198ad8: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x198ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_198adc:
    // 0x198adc: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x198adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_198ae0:
    // 0x198ae0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x198ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_198ae4:
    // 0x198ae4: 0x3e00008  jr          $ra
label_198ae8:
    if (ctx->pc == 0x198AE8u) {
        ctx->pc = 0x198AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE4u;
        // 0x198ae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198AECu;
        goto label_198aec;
    }
    ctx->pc = 0x198AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198AE4u;
        // 0x198ae8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198AECu;
label_198aec:
    // 0x198aec: 0x0  nop
    ctx->pc = 0x198aecu;
    // NOP
    ctx->pc = 0x198af0u;
}
