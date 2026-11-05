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

// Function: sub_0029C158
// Address: 0x29c158 - 0x29c258
void sub_0029C158_0x29c158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C158_0x29c158");
#endif

    switch (ctx->pc) {
        case 0x29c170u: goto label_29c170;
        case 0x29c1ecu: goto label_29c1ec;
        case 0x29c248u: goto label_29c248;
        default: break;
    }

    ctx->pc = 0x29c158u;

    // 0x29c158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29c15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29c160: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29c160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29c164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29c164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29c168: 0xc0a7bca  jal         func_29EF28
    ctx->pc = 0x29C168u;
    SET_GPR_U32(ctx, 31, 0x29C170u);
    ctx->pc = 0x29C16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C168u;
    // 0x29c16c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EF28u, 0x29C168u, 0x29C170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C170u;
label_29c170:
    // 0x29c170: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x29C170u;
    {
        const bool branch_taken_0x29c170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c170) {
            ctx->pc = 0x29C174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C170u;
            // 0x29c174: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C24Cu;
            goto label_29c24c;
        }
    }
    ctx->pc = 0x29C178u;
    // 0x29c178: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x29c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x29c17c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x29c17cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x29c180: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29C180u;
    {
        const bool branch_taken_0x29c180 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C180u;
        // 0x29c184: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c180) {
            ctx->pc = 0x29C19Cu;
            goto label_29c19c;
        }
    }
    ctx->pc = 0x29C188u;
    // 0x29c188: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29c188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29c18c: 0x0  nop
    ctx->pc = 0x29c18cu;
    // NOP
    // 0x29c190: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29c190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29c194: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29C194u;
    {
        const bool branch_taken_0x29c194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c194) {
            ctx->pc = 0x29C1B8u;
            goto label_29c1b8;
        }
    }
    ctx->pc = 0x29C19Cu;
label_29c19c:
    // 0x29c19c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x29c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x29c1a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29c1a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29c1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29c1a8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29c1a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29c1ac: 0x0  nop
    ctx->pc = 0x29c1acu;
    // NOP
    // 0x29c1b0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x29c1b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x29c1b4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x29c1b4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_29c1b8:
    // 0x29c1b8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x29c1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x29c1bc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x29c1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x29c1c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29c1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c1c4: 0xc60105c0  lwc1        $f1, 0x5C0($s0)
    ctx->pc = 0x29c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c1c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29c1c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x29c1cc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x29c1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29c1d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x29c1d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x29c1d4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x29c1d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c1d8: 0x0  nop
    ctx->pc = 0x29c1d8u;
    // NOP
    // 0x29c1dc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x29C1DCu;
    {
        const bool branch_taken_0x29c1dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C1DCu;
        // 0x29c1e0: 0xe60105c0  swc1        $f1, 0x5C0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1472), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c1dc) {
            ctx->pc = 0x29C214u;
            goto label_29c214;
        }
    }
    ctx->pc = 0x29C1E4u;
    // 0x29c1e4: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x29C1E4u;
    SET_GPR_U32(ctx, 31, 0x29C1ECu);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x29C1E4u, 0x29C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C1ECu;
label_29c1ec:
    // 0x29c1ec: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x29c1ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x29c1f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29c1f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29c1f4: 0xc60105c4  lwc1        $f1, 0x5C4($s0)
    ctx->pc = 0x29c1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c1f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x29c1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x29c1fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29c1fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29c200: 0x0  nop
    ctx->pc = 0x29c200u;
    // NOP
    // 0x29c204: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x29C204u;
    {
        const bool branch_taken_0x29c204 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C204u;
        // 0x29c208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29c204) {
            ctx->pc = 0x29C210u;
            goto label_29c210;
        }
    }
    ctx->pc = 0x29C20Cu;
    // 0x29c20c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29c20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29c210:
    // 0x29c210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29c210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29c214:
    // 0x29c214: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x29C214u;
    {
        const bool branch_taken_0x29c214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c214) {
            ctx->pc = 0x29C218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C214u;
            // 0x29c218: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C24Cu;
            goto label_29c24c;
        }
    }
    ctx->pc = 0x29C21Cu;
    // 0x29c21c: 0xc60005b4  lwc1        $f0, 0x5B4($s0)
    ctx->pc = 0x29c21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29c220: 0xc60d05b8  lwc1        $f13, 0x5B8($s0)
    ctx->pc = 0x29c220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29c224: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29c224u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x29c228: 0xc60105bc  lwc1        $f1, 0x5BC($s0)
    ctx->pc = 0x29c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29c22c: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x29c22cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x29c230: 0x8e0505b0  lw          $a1, 0x5B0($s0)
    ctx->pc = 0x29c230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x29c234: 0x8e0405a8  lw          $a0, 0x5A8($s0)
    ctx->pc = 0x29c234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1448)));
    // 0x29c238: 0x46000b86  mov.s       $f14, $f1
    ctx->pc = 0x29c238u;
    ctx->f[14] = FPU_MOV_S(ctx->f[1]);
    // 0x29c23c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29c23cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29c240: 0xc0d9c84  jal         func_367210
    ctx->pc = 0x29C240u;
    SET_GPR_U32(ctx, 31, 0x29C248u);
    ctx->pc = 0x29C244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C240u;
    // 0x29c244: 0xe60005c0  swc1        $f0, 0x5C0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1472), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x367210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367210u, 0x29C240u, 0x29C248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C248u;
label_29c248:
    // 0x29c248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29c248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c24c:
    // 0x29c24c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29c24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29c250: 0x3e00008  jr          $ra
    ctx->pc = 0x29C250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C250u;
        // 0x29c254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C258u;
}
