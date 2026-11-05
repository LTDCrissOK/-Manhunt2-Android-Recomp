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

// Function: sub_002A7740
// Address: 0x2a7740 - 0x2a7860
void sub_002A7740_0x2a7740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7740_0x2a7740");
#endif

    switch (ctx->pc) {
        case 0x2a7780u: goto label_2a7780;
        case 0x2a77bcu: goto label_2a77bc;
        case 0x2a77e4u: goto label_2a77e4;
        case 0x2a7808u: goto label_2a7808;
        case 0x2a781cu: goto label_2a781c;
        default: break;
    }

    ctx->pc = 0x2a7740u;

    // 0x2a7740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a7740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a7744: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a7744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7748: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a7748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a774c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a774cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7750: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a7750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7754: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a7758: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2a7758u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a775c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a775cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a7760: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2a7760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2a7764: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a7764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a7768: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2a7768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a776c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2a776cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x2a7770: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2A7770u;
    {
        const bool branch_taken_0x2a7770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7770u;
        // 0x2a7774: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7770) {
            ctx->pc = 0x2A7840u;
            goto label_2a7840;
        }
    }
    ctx->pc = 0x2A7778u;
    // 0x2a7778: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A7778u;
    SET_GPR_U32(ctx, 31, 0x2A7780u);
    ctx->pc = 0x2A777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7778u;
    // 0x2a777c: 0x2450ffff  addiu       $s0, $v0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A7778u, 0x2A7780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7780u;
label_2a7780:
    // 0x2a7780: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A7780u;
    {
        const bool branch_taken_0x2a7780 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2A7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7780u;
        // 0x2a7784: 0x101842  srl         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7780) {
            ctx->pc = 0x2A779Cu;
            goto label_2a779c;
        }
    }
    ctx->pc = 0x2A7788u;
    // 0x2a7788: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x2a7788u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a778c: 0x0  nop
    ctx->pc = 0x2a778cu;
    // NOP
    // 0x2a7790: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a7790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a7794: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7794u;
    {
        const bool branch_taken_0x2a7794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a7794) {
            ctx->pc = 0x2A77B4u;
            goto label_2a77b4;
        }
    }
    ctx->pc = 0x2A779Cu;
label_2a779c:
    // 0x2a779c: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2a779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2a77a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a77a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a77a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a77a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a77a8: 0x0  nop
    ctx->pc = 0x2a77a8u;
    // NOP
    // 0x2a77ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2a77acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2a77b0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2a77b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2a77b4:
    // 0x2a77b4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x2A77B4u;
    SET_GPR_U32(ctx, 31, 0x2A77BCu);
    ctx->pc = 0x2A77B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A77B4u;
    // 0x2a77b8: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x2A77B4u, 0x2A77BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77BCu;
label_2a77bc:
    // 0x2a77bc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2a77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2a77c0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2a77c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2a77c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a77c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a77c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2a77c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a77cc: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2a77ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2a77d0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2a77d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a77d4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x2a77d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x2a77d8: 0xc63500a0  lwc1        $f21, 0xA0($s1)
    ctx->pc = 0x2a77d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a77dc: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A77DCu;
    SET_GPR_U32(ctx, 31, 0x2A77E4u);
    ctx->pc = 0x2A77E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A77DCu;
    // 0x2a77e0: 0xc63400a4  lwc1        $f20, 0xA4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A77DCu, 0x2A77E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A77E4u;
label_2a77e4:
    // 0x2a77e4: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x2a77e4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2a77e8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a77e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a77ec: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2a77ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2a77f0: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x2a77f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2a77f4: 0xc62000b0  lwc1        $f0, 0xB0($s1)
    ctx->pc = 0x2a77f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a77f8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2a77f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2a77fc: 0xc63500a8  lwc1        $f21, 0xA8($s1)
    ctx->pc = 0x2a77fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a7800: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A7800u;
    SET_GPR_U32(ctx, 31, 0x2A7808u);
    ctx->pc = 0x2A7804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7800u;
    // 0x2a7804: 0xc63400ac  lwc1        $f20, 0xAC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A7800u, 0x2A7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7808u;
label_2a7808:
    // 0x2a7808: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x2a7808u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x2a780c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2a780cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2a7810: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x2a7810u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x2a7814: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x2A7814u;
    SET_GPR_U32(ctx, 31, 0x2A781Cu);
    ctx->pc = 0x2A7818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7814u;
    // 0x2a7818: 0xe6540014  swc1        $f20, 0x14($s2) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x2A7814u, 0x2A781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A781Cu;
label_2a781c:
    // 0x2a781c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a781cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a7820: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a7820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a7824: 0x0  nop
    ctx->pc = 0x2a7824u;
    // NOP
    // 0x2a7828: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2a7828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a782c: 0x0  nop
    ctx->pc = 0x2a782cu;
    // NOP
    // 0x2a7830: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2A7830u;
    {
        const bool branch_taken_0x2a7830 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7830u;
        // 0x2a7834: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7830) {
            ctx->pc = 0x2A783Cu;
            goto label_2a783c;
        }
    }
    ctx->pc = 0x2A7838u;
    // 0x2a7838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a783c:
    // 0x2a783c: 0xa2420018  sb          $v0, 0x18($s2)
    ctx->pc = 0x2a783cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 24), (uint8_t)GPR_U32(ctx, 2));
label_2a7840:
    // 0x2a7840: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7844: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a7844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7848: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a7848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a784c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a784cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7850: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2a7850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a7854: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2a7854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7858: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7858u;
        // 0x2a785c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7860u;
}
