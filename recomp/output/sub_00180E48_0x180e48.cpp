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

// Function: sub_00180E48
// Address: 0x180e48 - 0x180f00
void sub_00180E48_0x180e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E48_0x180e48");
#endif

    ctx->pc = 0x180e48u;

    // 0x180e48: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x180e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x180e4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x180e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e50: 0x90830139  lbu         $v1, 0x139($a0)
    ctx->pc = 0x180e50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 313)));
    // 0x180e54: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x180e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x180e58: 0xc4830140  lwc1        $f3, 0x140($a0)
    ctx->pc = 0x180e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180e5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180e60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180e64: 0x0  nop
    ctx->pc = 0x180e64u;
    // NOP
    // 0x180e68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x180e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x180e6c: 0x10c50012  beq         $a2, $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x180E6Cu;
    {
        const bool branch_taken_0x180e6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x180E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E6Cu;
        // 0x180e70: 0x46030082  mul.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e6c) {
            ctx->pc = 0x180EB8u;
            goto label_180eb8;
        }
    }
    ctx->pc = 0x180E74u;
    // 0x180e74: 0x28c20009  slti        $v0, $a2, 0x9
    ctx->pc = 0x180e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x180e78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180E78u;
    {
        const bool branch_taken_0x180e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E78u;
        // 0x180e7c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e78) {
            ctx->pc = 0x180E90u;
            goto label_180e90;
        }
    }
    ctx->pc = 0x180E80u;
    // 0x180e80: 0x50c2000a  beql        $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x180E80u;
    {
        const bool branch_taken_0x180e80 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x180e80) {
            ctx->pc = 0x180E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E80u;
            // 0x180e84: 0xc4e0000c  lwc1        $f0, 0xC($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x180EACu;
            goto label_180eac;
        }
    }
    ctx->pc = 0x180E88u;
    // 0x180e88: 0x3e00008  jr          $ra
    ctx->pc = 0x180E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E90u;
label_180e90:
    // 0x180e90: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x180e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x180e94: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x180E94u;
    {
        const bool branch_taken_0x180e94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x180E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E94u;
        // 0x180e98: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180e94) {
            ctx->pc = 0x180ED4u;
            goto label_180ed4;
        }
    }
    ctx->pc = 0x180E9Cu;
    // 0x180e9c: 0x50c20014  beql        $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x180E9Cu;
    {
        const bool branch_taken_0x180e9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x180e9c) {
            ctx->pc = 0x180EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E9Cu;
            // 0x180ea0: 0xc4e00004  lwc1        $f0, 0x4($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x180EF0u;
            goto label_180ef0;
        }
    }
    ctx->pc = 0x180EA4u;
    // 0x180ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x180EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180EACu;
label_180eac:
    // 0x180eac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x180eacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x180eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x180EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EB0u;
        // 0x180eb4: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180EB8u;
label_180eb8:
    // 0x180eb8: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x180eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ebc: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x180ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180ec0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x180ec0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x180ec4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x180ec4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x180ec8: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x180ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x180ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x180ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180ECCu;
        // 0x180ed0: 0xe4e10004  swc1        $f1, 0x4($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180ED4u;
label_180ed4:
    // 0x180ed4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x180ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180ed8: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x180ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180edc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x180edcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x180ee0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x180ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x180ee4: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x180ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x180ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x180EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EE8u;
        // 0x180eec: 0xe4e1000c  swc1        $f1, 0xC($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180EF0u;
label_180ef0:
    // 0x180ef0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x180ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x180ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x180EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180EF4u;
        // 0x180ef8: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180EFCu;
    // 0x180efc: 0x0  nop
    ctx->pc = 0x180efcu;
    // NOP
    ctx->pc = 0x180f00u;
}
