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

// Function: sub_003AF980
// Address: 0x3af980 - 0x3afae0
void sub_003AF980_0x3af980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AF980_0x3af980");
#endif

    switch (ctx->pc) {
        case 0x3af9e0u: goto label_3af9e0;
        case 0x3afa18u: goto label_3afa18;
        case 0x3afa34u: goto label_3afa34;
        case 0x3afa70u: goto label_3afa70;
        default: break;
    }

    ctx->pc = 0x3af980u;

    // 0x3af980: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3af980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3af984: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x3af984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x3af988: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3af988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3af98c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3af98cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3af990: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x3af990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3af994: 0x0  nop
    ctx->pc = 0x3af994u;
    // NOP
    // 0x3af998: 0x0  nop
    ctx->pc = 0x3af998u;
    // NOP
    // 0x3af99c: 0x46160504  c1          0x160504
    ctx->pc = 0x3af99cu;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x3af9a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3af9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3af9a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3af9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3af9a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3af9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3af9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3af9b0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3af9b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3af9b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3af9b8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3af9b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9bc: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x3af9bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x3af9c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3af9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3af9c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3af9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3af9c8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3af9c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3af9cc: 0x4614a032  c.eq.s      $f20, $f20
    ctx->pc = 0x3af9ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3af9d0: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3AF9D0u;
    {
        const bool branch_taken_0x3af9d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AF9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AF9D0u;
        // 0x3af9d4: 0x4600a546  mov.s       $f21, $f20 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3af9d0) {
            ctx->pc = 0x3AF9E4u;
            goto label_3af9e4;
        }
    }
    ctx->pc = 0x3AF9D8u;
    // 0x3af9d8: 0xc0ef9da  jal         func_3BE768
    ctx->pc = 0x3AF9D8u;
    SET_GPR_U32(ctx, 31, 0x3AF9E0u);
    ctx->pc = 0x3BE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE768u, 0x3AF9D8u, 0x3AF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AF9E0u;
label_3af9e0:
    // 0x3af9e0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3af9e0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3af9e4:
    // 0x3af9e4: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x3af9e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3af9e8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3af9e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3af9ec: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x3af9ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x3af9f0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x3af9f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x3af9f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3af9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3af9f8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3af9f8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3af9fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3af9fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3afa00: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x3afa00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3afa04: 0x0  nop
    ctx->pc = 0x3afa04u;
    // NOP
    // 0x3afa08: 0x0  nop
    ctx->pc = 0x3afa08u;
    // NOP
    // 0x3afa0c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x3afa0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x3afa10: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x3AFA10u;
    SET_GPR_U32(ctx, 31, 0x3AFA18u);
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x3AFA10u, 0x3AFA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFA18u;
label_3afa18:
    // 0x3afa18: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x3afa18u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x3afa1c: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x3afa1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x3afa20: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x3afa20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3afa24: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFA24u;
    {
        const bool branch_taken_0x3afa24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3AFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFA24u;
        // 0x3afa28: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3afa24) {
            ctx->pc = 0x3AFA38u;
            goto label_3afa38;
        }
    }
    ctx->pc = 0x3AFA2Cu;
    // 0x3afa2c: 0xc0ef9da  jal         func_3BE768
    ctx->pc = 0x3AFA2Cu;
    SET_GPR_U32(ctx, 31, 0x3AFA34u);
    ctx->pc = 0x3BE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE768u, 0x3AFA2Cu, 0x3AFA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFA34u;
label_3afa34:
    // 0x3afa34: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3afa34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_3afa38:
    // 0x3afa38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3afa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3afa3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3afa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3afa40: 0x46000d01  sub.s       $f20, $f1, $f0
    ctx->pc = 0x3afa40u;
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3afa44: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x3afa44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x3afa48: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x3afa48u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x3afa4c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x3afa4cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3afa50: 0x0  nop
    ctx->pc = 0x3afa50u;
    // NOP
    // 0x3afa54: 0x0  nop
    ctx->pc = 0x3afa54u;
    // NOP
    // 0x3afa58: 0x460c0004  c1          0xC0004
    ctx->pc = 0x3afa58u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3afa5c: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x3afa5cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3afa60: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3AFA60u;
    {
        const bool branch_taken_0x3afa60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3afa60) {
            ctx->pc = 0x3AFA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AFA60u;
            // 0x3afa64: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AFA74u;
            goto label_3afa74;
        }
    }
    ctx->pc = 0x3AFA68u;
    // 0x3afa68: 0xc0ef9da  jal         func_3BE768
    ctx->pc = 0x3AFA68u;
    SET_GPR_U32(ctx, 31, 0x3AFA70u);
    ctx->pc = 0x3BE768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE768u, 0x3AFA68u, 0x3AFA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AFA70u;
label_3afa70:
    // 0x3afa70: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x3afa70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3afa74:
    // 0x3afa74: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x3afa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3afa78: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x3afa78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x3afa7c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3afa7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3afa80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3afa80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3afa84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3afa84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3afa88: 0x0  nop
    ctx->pc = 0x3afa88u;
    // NOP
    // 0x3afa8c: 0x0  nop
    ctx->pc = 0x3afa8cu;
    // NOP
    // 0x3afa90: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x3afa90u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x3afa94: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x3afa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3afa98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3afa98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3afa9c: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x3afa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3afaa0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3afaa0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x3afaa4: 0x46000080  add.s       $f2, $f0, $f0
    ctx->pc = 0x3afaa4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3afaa8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3afaa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3afaac: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3afaacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x3afab0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3afab0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x3afab4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3afab4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3afab8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3afab8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3afabc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3afabcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3afac0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3afac0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3afac4: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x3afac4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3afac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3afac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3afacc: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x3afaccu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x3afad0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3afad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3afad4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AFAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AFAD4u;
        // 0x3afad8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AFAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AFADCu;
    // 0x3afadc: 0x0  nop
    ctx->pc = 0x3afadcu;
    // NOP
    ctx->pc = 0x3afae0u;
}
