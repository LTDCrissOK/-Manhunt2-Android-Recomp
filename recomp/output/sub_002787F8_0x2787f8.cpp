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

// Function: sub_002787F8
// Address: 0x2787f8 - 0x278878
void sub_002787F8_0x2787f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002787F8_0x2787f8");
#endif

    switch (ctx->pc) {
        case 0x278850u: goto label_278850;
        default: break;
    }

    ctx->pc = 0x2787f8u;

    // 0x2787f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2787f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2787fc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2787fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x278800: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x278800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x278804: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x278804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278808: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x278808u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x27880c: 0x26070038  addiu       $a3, $s0, 0x38
    ctx->pc = 0x27880cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x278810: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x278810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x278814: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x278814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x278818: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x278818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x27881c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27881cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x278820: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x278820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x278824: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x278824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x278828: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x278828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27882c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x27882cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x278830: 0x26080018  addiu       $t0, $s0, 0x18
    ctx->pc = 0x278830u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x278834: 0x26090014  addiu       $t1, $s0, 0x14
    ctx->pc = 0x278834u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x278838: 0x260a0020  addiu       $t2, $s0, 0x20
    ctx->pc = 0x278838u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x27883c: 0x260b0028  addiu       $t3, $s0, 0x28
    ctx->pc = 0x27883cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x278840: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x278840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x278844: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x278844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x278848: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x278848u;
    SET_GPR_U32(ctx, 31, 0x278850u);
    ctx->pc = 0x27884Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278848u;
    // 0x27884c: 0x24a58398  addiu       $a1, $a1, -0x7C68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x278848u, 0x278850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278850u;
label_278850:
    // 0x278850: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x278850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x278854: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x278854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x278858: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x278858u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x27885c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27885cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x278860: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x278860u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x278864: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x278864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x278868: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x278868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x27886c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x27886cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278870: 0x3e00008  jr          $ra
    ctx->pc = 0x278870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278870u;
        // 0x278874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278878u;
}
