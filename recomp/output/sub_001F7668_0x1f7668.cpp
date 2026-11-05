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

// Function: sub_001F7668
// Address: 0x1f7668 - 0x1f7750
void sub_001F7668_0x1f7668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7668_0x1f7668");
#endif

    switch (ctx->pc) {
        case 0x1f769cu: goto label_1f769c;
        default: break;
    }

    ctx->pc = 0x1f7668u;

    // 0x1f7668: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f7668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f766c: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x1f766cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x1f7670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7674: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1f7674u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f7678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f767c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f767cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f7680: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x1F7680u;
    {
        const bool branch_taken_0x1f7680 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7680u;
        // 0x1f7684: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7680) {
            ctx->pc = 0x1F773Cu;
            goto label_1f773c;
        }
    }
    ctx->pc = 0x1F7688u;
    // 0x1f7688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f7688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f768c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f768cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7690: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f7690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7694: 0xc07dd88  jal         func_1F7620
    ctx->pc = 0x1F7694u;
    SET_GPR_U32(ctx, 31, 0x1F769Cu);
    ctx->pc = 0x1F7698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7694u;
    // 0x1f7698: 0x460c0b00  add.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7620u, 0x1F7694u, 0x1F769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F769Cu;
label_1f769c:
    // 0x1f769c: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x1f769cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x1f76a0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1f76a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1f76a4: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1f76a4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f76a8: 0x0  nop
    ctx->pc = 0x1f76a8u;
    // NOP
    // 0x1f76ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1f76acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1f76b0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1f76b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1f76b4: 0x8d079300  lw          $a3, -0x6D00($t0)
    ctx->pc = 0x1f76b4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3F9300u));
    // 0x1f76b8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1f76b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1f76bc: 0x340495cc  ori         $a0, $zero, 0x95CC
    ctx->pc = 0x1f76bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38348);
    // 0x1f76c0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F76C0u;
    {
        const bool branch_taken_0x1f76c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f76c0) {
            ctx->pc = 0x1F76C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F76C0u;
            // 0x1f76c4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F76C8u;
            goto label_1f76c8;
        }
    }
    ctx->pc = 0x1F76C8u;
label_1f76c8:
    // 0x1f76c8: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x1f76c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1f76cc: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1f76ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1f76d0: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x1f76d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x1f76d4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f76d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1f76d8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1f76d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f76dc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1f76dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f76e0: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1f76e0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f76e4: 0x1810  mfhi        $v1
    ctx->pc = 0x1f76e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f76e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f76e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f76ec: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1f76ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1f76f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f76f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f76f4: 0x46001b  divu        $zero, $v0, $a2
    ctx->pc = 0x1f76f4u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f76f8: 0x1810  mfhi        $v1
    ctx->pc = 0x1f76f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1f76fc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1f76fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7700: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x1f7700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1f7704: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1f7704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1f7708: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7708u;
    {
        const bool branch_taken_0x1f7708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7708u;
        // 0x1f770c: 0xad079300  sw          $a3, -0x6D00($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294939392), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7708) {
            ctx->pc = 0x1F771Cu;
            goto label_1f771c;
        }
    }
    ctx->pc = 0x1F7710u;
    // 0x1f7710: 0x8d2292fc  lw          $v0, -0x6D04($t1)
    ctx->pc = 0x1f7710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939388)));
    // 0x1f7714: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1f7714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1f7718: 0xad2292fc  sw          $v0, -0x6D04($t1)
    ctx->pc = 0x1f7718u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294939388), GPR_U32(ctx, 2));
label_1f771c:
    // 0x1f771c: 0x8d2392fc  lw          $v1, -0x6D04($t1)
    ctx->pc = 0x1f771cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294939388)));
    // 0x1f7720: 0x41023  negu        $v0, $a0
    ctx->pc = 0x1f7720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1f7724: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x1f7724u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1f7728: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f7728u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f772c: 0x0  nop
    ctx->pc = 0x1f772cu;
    // NOP
    // 0x1f7730: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f7730u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f7734: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1f7734u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1f7738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f773c:
    // 0x1f773c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f773cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f7740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7744: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7744u;
        // 0x1f7748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F774Cu;
    // 0x1f774c: 0x0  nop
    ctx->pc = 0x1f774cu;
    // NOP
    ctx->pc = 0x1f7750u;
}
