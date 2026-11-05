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

// Function: sub_00180DB8
// Address: 0x180db8 - 0x180e48
void sub_00180DB8_0x180db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180DB8_0x180db8");
#endif

    ctx->pc = 0x180db8u;

    // 0x180db8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x180db8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x180dbc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x180dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180dc0: 0x90830138  lbu         $v1, 0x138($a0)
    ctx->pc = 0x180dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x180dc4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x180dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x180dc8: 0xc483013c  lwc1        $f3, 0x13C($a0)
    ctx->pc = 0x180dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x180dcc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x180dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180dd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x180dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x180dd4: 0x0  nop
    ctx->pc = 0x180dd4u;
    // NOP
    // 0x180dd8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x180dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x180ddc: 0x10c50010  beq         $a2, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x180DDCu;
    {
        const bool branch_taken_0x180ddc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x180DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DDCu;
        // 0x180de0: 0x46030082  mul.s       $f2, $f0, $f3 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ddc) {
            ctx->pc = 0x180E20u;
            goto label_180e20;
        }
    }
    ctx->pc = 0x180DE4u;
    // 0x180de4: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x180de4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x180de8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180DE8u;
    {
        const bool branch_taken_0x180de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180DE8u;
        // 0x180dec: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180de8) {
            ctx->pc = 0x180E00u;
            goto label_180e00;
        }
    }
    ctx->pc = 0x180DF0u;
    // 0x180df0: 0x50c20008  beql        $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x180DF0u;
    {
        const bool branch_taken_0x180df0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x180df0) {
            ctx->pc = 0x180DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180DF0u;
            // 0x180df4: 0xc4e0000c  lwc1        $f0, 0xC($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E14u;
            goto label_180e14;
        }
    }
    ctx->pc = 0x180DF8u;
    // 0x180df8: 0x3e00008  jr          $ra
    ctx->pc = 0x180DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E00u;
label_180e00:
    // 0x180e00: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x180e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x180e04: 0x50c2000d  beql        $a2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x180E04u;
    {
        const bool branch_taken_0x180e04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x180e04) {
            ctx->pc = 0x180E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180E04u;
            // 0x180e08: 0xc4e00004  lwc1        $f0, 0x4($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x180E3Cu;
            goto label_180e3c;
        }
    }
    ctx->pc = 0x180E0Cu;
    // 0x180e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x180E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E14u;
label_180e14:
    // 0x180e14: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x180e14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x180e18: 0x3e00008  jr          $ra
    ctx->pc = 0x180E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E18u;
        // 0x180e1c: 0xe4e0000c  swc1        $f0, 0xC($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E20u;
label_180e20:
    // 0x180e20: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x180e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180e24: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x180e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x180e28: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x180e28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x180e2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x180e2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x180e30: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x180e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x180e34: 0x3e00008  jr          $ra
    ctx->pc = 0x180E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E34u;
        // 0x180e38: 0xe4e10008  swc1        $f1, 0x8($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E3Cu;
label_180e3c:
    // 0x180e3c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x180e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x180e40: 0x3e00008  jr          $ra
    ctx->pc = 0x180E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180E40u;
        // 0x180e44: 0xe4e00004  swc1        $f0, 0x4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E48u;
}
