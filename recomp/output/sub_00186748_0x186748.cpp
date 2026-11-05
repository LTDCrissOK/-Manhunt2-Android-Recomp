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

// Function: sub_00186748
// Address: 0x186748 - 0x1867d8
void sub_00186748_0x186748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186748_0x186748");
#endif

    ctx->pc = 0x186748u;

    // 0x186748: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x186748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x18674c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18674Cu;
    {
        const bool branch_taken_0x18674c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18674c) {
            ctx->pc = 0x186750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18674Cu;
            // 0x186750: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18675Cu;
            goto label_18675c;
        }
    }
    ctx->pc = 0x186754u;
    // 0x186754: 0x3e00008  jr          $ra
    ctx->pc = 0x186754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186754u;
        // 0x186758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18675Cu;
label_18675c:
    // 0x18675c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18675Cu;
    {
        const bool branch_taken_0x18675c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18675Cu;
        // 0x186760: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18675c) {
            ctx->pc = 0x18676Cu;
            goto label_18676c;
        }
    }
    ctx->pc = 0x186764u;
    // 0x186764: 0x3e00008  jr          $ra
    ctx->pc = 0x186764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186764u;
        // 0x186768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18676Cu;
label_18676c:
    // 0x18676c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x18676cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x186770: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x186770u;
    {
        const bool branch_taken_0x186770 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x186774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186770u;
        // 0x186774: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186770) {
            ctx->pc = 0x18678Cu;
            goto label_18678c;
        }
    }
    ctx->pc = 0x186778u;
    // 0x186778: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18677c: 0x0  nop
    ctx->pc = 0x18677cu;
    // NOP
    // 0x186780: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x186780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x186784: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x186784u;
    {
        const bool branch_taken_0x186784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x186784) {
            ctx->pc = 0x1867A4u;
            goto label_1867a4;
        }
    }
    ctx->pc = 0x18678Cu;
label_18678c:
    // 0x18678c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x186790: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x186790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x186794: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186798: 0x0  nop
    ctx->pc = 0x186798u;
    // NOP
    // 0x18679c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x18679cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1867a0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1867a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1867a4:
    // 0x1867a4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1867a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1867a8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1867a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1867ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1867acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867b0: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x1867b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1867b4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1867b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1867b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1867b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1867bc: 0x0  nop
    ctx->pc = 0x1867bcu;
    // NOP
    // 0x1867c0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1867C0u;
    {
        const bool branch_taken_0x1867c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1867C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867C0u;
        // 0x1867c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867c0) {
            ctx->pc = 0x1867CCu;
            goto label_1867cc;
        }
    }
    ctx->pc = 0x1867C8u;
    // 0x1867c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1867c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1867cc:
    // 0x1867cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1867CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1867CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1867D4u;
    // 0x1867d4: 0x0  nop
    ctx->pc = 0x1867d4u;
    // NOP
    ctx->pc = 0x1867d8u;
}
