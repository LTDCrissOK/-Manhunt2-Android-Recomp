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

// Function: sub_00356728
// Address: 0x356728 - 0x3567a0
void sub_00356728_0x356728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356728_0x356728");
#endif

    switch (ctx->pc) {
        case 0x356770u: goto label_356770;
        case 0x356780u: goto label_356780;
        default: break;
    }

    ctx->pc = 0x356728u;

    // 0x356728: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35672c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35672cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x356730: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356734: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x356734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x356738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x356738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35673c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x356740: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x356740u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x356744: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x356744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x356748: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x356748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x35674c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x35674cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x356750: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x356750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x356754: 0x0  nop
    ctx->pc = 0x356754u;
    // NOP
    // 0x356758: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x356758u;
    {
        const bool branch_taken_0x356758 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356758u;
        // 0x35675c: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x356758) {
            ctx->pc = 0x35678Cu;
            goto label_35678c;
        }
    }
    ctx->pc = 0x356760u;
    // 0x356760: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x356760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x356764: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x356764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x356768: 0xc0c773a  jal         func_31DCE8
    ctx->pc = 0x356768u;
    SET_GPR_U32(ctx, 31, 0x356770u);
    ctx->pc = 0x35676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356768u;
    // 0x35676c: 0x248421e8  addiu       $a0, $a0, 0x21E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DCE8u, 0x356768u, 0x356770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356770u;
label_356770:
    // 0x356770: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x356770u;
    {
        const bool branch_taken_0x356770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356770u;
        // 0x356774: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356770) {
            ctx->pc = 0x356788u;
            goto label_356788;
        }
    }
    ctx->pc = 0x356778u;
    // 0x356778: 0xc083062  jal         func_20C188
    ctx->pc = 0x356778u;
    SET_GPR_U32(ctx, 31, 0x356780u);
    ctx->pc = 0x35677Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356778u;
    // 0x35677c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C188u, 0x356778u, 0x356780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356780u;
label_356780:
    // 0x356780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x356780u;
    {
        const bool branch_taken_0x356780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356780u;
        // 0x356784: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x356780) {
            ctx->pc = 0x35678Cu;
            goto label_35678c;
        }
    }
    ctx->pc = 0x356788u;
label_356788:
    // 0x356788: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x356788u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_35678c:
    // 0x35678c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35678cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356790: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x356790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356794: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x356794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x356798: 0x3e00008  jr          $ra
    ctx->pc = 0x356798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356798u;
        // 0x35679c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3567A0u;
}
