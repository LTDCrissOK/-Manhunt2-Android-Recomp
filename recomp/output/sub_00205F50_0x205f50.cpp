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

// Function: sub_00205F50
// Address: 0x205f50 - 0x205fe8
void sub_00205F50_0x205f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205F50_0x205f50");
#endif

    switch (ctx->pc) {
        case 0x205f7cu: goto label_205f7c;
        case 0x205fc4u: goto label_205fc4;
        default: break;
    }

    ctx->pc = 0x205f50u;

    // 0x205f50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x205f54: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x205f54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x205f58: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x205f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x205f5c: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x205f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x205f60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x205f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x205f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205f68: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x205f68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x205f6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x205f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205f70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x205f74: 0xc0e4196  jal         func_390658
    ctx->pc = 0x205F74u;
    SET_GPR_U32(ctx, 31, 0x205F7Cu);
    ctx->pc = 0x205F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205F74u;
    // 0x205f78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390658u, 0x205F74u, 0x205F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205F7Cu;
label_205f7c:
    // 0x205f7c: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x205f7cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x205f80: 0x0  nop
    ctx->pc = 0x205f80u;
    // NOP
    // 0x205f84: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x205f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x205f88: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x205f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
    // 0x205f8c: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x205f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
    // 0x205f90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x205f90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x205f94: 0x3c01c470  lui         $at, 0xC470
    ctx->pc = 0x205f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50288 << 16));
    // 0x205f98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x205f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x205f9c: 0x46011b02  mul.s       $f12, $f3, $f1
    ctx->pc = 0x205f9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x205fa0: 0x0  nop
    ctx->pc = 0x205fa0u;
    // NOP
    // 0x205fa4: 0x0  nop
    ctx->pc = 0x205fa4u;
    // NOP
    // 0x205fa8: 0x46001543  div.s       $f21, $f2, $f0
    ctx->pc = 0x205fa8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x205fac: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x205facu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x205fb0: 0x0  nop
    ctx->pc = 0x205fb0u;
    // NOP
    // 0x205fb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x205FB4u;
    {
        const bool branch_taken_0x205fb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x205fb4) {
            ctx->pc = 0x205FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205FB4u;
            // 0x205fb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x205FBCu;
            goto label_205fbc;
        }
    }
    ctx->pc = 0x205FBCu;
label_205fbc:
    // 0x205fbc: 0xc0e4196  jal         func_390658
    ctx->pc = 0x205FBCu;
    SET_GPR_U32(ctx, 31, 0x205FC4u);
    ctx->pc = 0x390658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390658u, 0x205FBCu, 0x205FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205FC4u;
label_205fc4:
    // 0x205fc4: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x205fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x205fc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205fc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205fcc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205fd0: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x205fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x205fd4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x205fd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x205fd8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x205fd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x205fdc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x205fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x205fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x205FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205FE0u;
        // 0x205fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205FE8u;
}
