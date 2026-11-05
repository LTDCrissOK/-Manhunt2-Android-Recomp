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

// Function: sub_0020A0B8
// Address: 0x20a0b8 - 0x20a1d0
void sub_0020A0B8_0x20a0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A0B8_0x20a0b8");
#endif

    switch (ctx->pc) {
        case 0x20a100u: goto label_20a100;
        case 0x20a19cu: goto label_20a19c;
        default: break;
    }

    ctx->pc = 0x20a0b8u;

    // 0x20a0b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20a0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20a0bc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20a0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20a0c0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20a0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20a0c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a0c8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20a0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20a0cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a0ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a0d0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x20a0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x20a0d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20a0d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a0d8: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x20a0d8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x20a0dc: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x20a0dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a0e0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x20a0e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20a0e4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x20a0e4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x20a0e8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x20a0e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20a0ec: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x20a0ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x20a0f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20a0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20a0f4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x20a0f4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20a0f8: 0xc0827c2  jal         func_209F08
    ctx->pc = 0x20A0F8u;
    SET_GPR_U32(ctx, 31, 0x20A100u);
    ctx->pc = 0x20A0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A0F8u;
    // 0x20a0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F08u, 0x20A0F8u, 0x20A100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A100u;
label_20a100:
    // 0x20a100: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x20a100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20a104: 0x54430028  bnel        $v0, $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x20A104u;
    {
        const bool branch_taken_0x20a104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a104) {
            ctx->pc = 0x20A108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A104u;
            // 0x20a108: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A1A8u;
            goto label_20a1a8;
        }
    }
    ctx->pc = 0x20A10Cu;
    // 0x20a10c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20a110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a114: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x20a114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x20a118: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x20a118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x20a11c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20a11cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x20a120: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x20a120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x20a124: 0x3c014496  lui         $at, 0x4496
    ctx->pc = 0x20a124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17558 << 16));
    // 0x20a128: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a12c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x20a12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x20a130: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20a130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20a134: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x20a134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x20a138: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20a138u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x20a13c: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x20a13cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x20a140: 0x4602a882  mul.s       $f2, $f21, $f2
    ctx->pc = 0x20a140u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x20a144: 0x46152036  c.le.s      $f4, $f21
    ctx->pc = 0x20a144u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a148: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a148u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x20a14c: 0x44081800  mfc1        $t0, $f3
    ctx->pc = 0x20a14cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x20a150: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20a154: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x20a154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x20a158: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a158u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x20a15c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20a15cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20a160: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20A160u;
    {
        const bool branch_taken_0x20a160 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a160) {
            ctx->pc = 0x20A164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A160u;
            // 0x20a164: 0x24630168  addiu       $v1, $v1, 0x168 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 360));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A168u;
            goto label_20a168;
        }
    }
    ctx->pc = 0x20A168u;
label_20a168:
    // 0x20a168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20a168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20a16c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a170: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x20a170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x20a174: 0x24054002  addiu       $a1, $zero, 0x4002
    ctx->pc = 0x20a174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16386));
    // 0x20a178: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20a178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20a17c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20a17cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a180: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x20a180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x20a184: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x20a184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20a188: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x20a188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x20a18c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x20a18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x20a190: 0xafa90014  sw          $t1, 0x14($sp)
    ctx->pc = 0x20a190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 9));
    // 0x20a194: 0xc08271e  jal         func_209C78
    ctx->pc = 0x20A194u;
    SET_GPR_U32(ctx, 31, 0x20A19Cu);
    ctx->pc = 0x20A198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A194u;
    // 0x20a198: 0xafb30018  sw          $s3, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C78u, 0x20A194u, 0x20A19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A19Cu;
label_20a19c:
    // 0x20a19c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x20a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x20a1a0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x20a1a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20a1a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20a1a8:
    // 0x20a1a8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20a1a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20a1ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20a1acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20a1b0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x20a1b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20a1b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20a1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20a1b8: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x20a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20a1bc: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x20a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20a1c0: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x20a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a1c4: 0x3e00008  jr          $ra
    ctx->pc = 0x20A1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1C4u;
        // 0x20a1c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A1C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A1CCu;
    // 0x20a1cc: 0x0  nop
    ctx->pc = 0x20a1ccu;
    // NOP
    ctx->pc = 0x20a1d0u;
}
