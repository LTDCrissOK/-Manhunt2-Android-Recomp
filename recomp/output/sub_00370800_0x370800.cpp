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

// Function: sub_00370800
// Address: 0x370800 - 0x3708a8
void sub_00370800_0x370800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370800_0x370800");
#endif

    switch (ctx->pc) {
        case 0x370864u: goto label_370864;
        case 0x370894u: goto label_370894;
        default: break;
    }

    ctx->pc = 0x370800u;

    // 0x370800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x370800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x370804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370808: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x370808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37080c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37080cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370810: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x370814: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x370814u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370818: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x370818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37081c: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x37081Cu;
    {
        const bool branch_taken_0x37081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x370820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37081Cu;
        // 0x370820: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37081c) {
            ctx->pc = 0x37083Cu;
            goto label_37083c;
        }
    }
    ctx->pc = 0x370824u;
    // 0x370824: 0xc461f004  lwc1        $f1, -0xFFC($v1)
    ctx->pc = 0x370824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370828: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x370828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37082c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x37082cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370830: 0x0  nop
    ctx->pc = 0x370830u;
    // NOP
    // 0x370834: 0x45030018  bc1tl       . + 4 + (0x18 << 2)
    ctx->pc = 0x370834u;
    {
        const bool branch_taken_0x370834 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x370834) {
            ctx->pc = 0x370838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370834u;
            // 0x370838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370898u;
            goto label_370898;
        }
    }
    ctx->pc = 0x37083Cu;
label_37083c:
    // 0x37083c: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x37083cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x370840: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x370840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370844: 0xc461f004  lwc1        $f1, -0xFFC($v1)
    ctx->pc = 0x370844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x370848: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x370848u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37084c: 0x0  nop
    ctx->pc = 0x37084cu;
    // NOP
    // 0x370850: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
    ctx->pc = 0x370850u;
    {
        const bool branch_taken_0x370850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x370850) {
            ctx->pc = 0x370854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x370850u;
            // 0x370854: 0x8e060018  lw          $a2, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x370880u;
            goto label_370880;
        }
    }
    ctx->pc = 0x370858u;
    // 0x370858: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x370858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x37085c: 0xc0dd662  jal         func_375988
    ctx->pc = 0x37085Cu;
    SET_GPR_U32(ctx, 31, 0x370864u);
    ctx->pc = 0x370860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37085Cu;
    // 0x370860: 0xc46cf004  lwc1        $f12, -0xFFC($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x375988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375988u, 0x37085Cu, 0x370864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370864u;
label_370864:
    // 0x370864: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x370864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x370868: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x370868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37086c: 0x0  nop
    ctx->pc = 0x37086cu;
    // NOP
    // 0x370870: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x370870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x370874: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x370874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x370878: 0xe6010018  swc1        $f1, 0x18($s0)
    ctx->pc = 0x370878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x37087c: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x37087cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_370880:
    // 0x370880: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x370880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370884: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x370884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370888: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x370888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37088c: 0xc0dd636  jal         func_3758D8
    ctx->pc = 0x37088Cu;
    SET_GPR_U32(ctx, 31, 0x370894u);
    ctx->pc = 0x370890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37088Cu;
    // 0x370890: 0x2263021  addu        $a2, $s1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3758D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3758D8u, 0x37088Cu, 0x370894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370894u;
label_370894:
    // 0x370894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_370898:
    // 0x370898: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x370898u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37089c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37089cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3708a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3708A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3708A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3708A0u;
        // 0x3708a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3708A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3708A8u;
}
