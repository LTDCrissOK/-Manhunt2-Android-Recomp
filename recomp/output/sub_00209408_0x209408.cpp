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

// Function: sub_00209408
// Address: 0x209408 - 0x209470
void sub_00209408_0x209408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209408_0x209408");
#endif

    switch (ctx->pc) {
        case 0x209458u: goto label_209458;
        default: break;
    }

    ctx->pc = 0x209408u;

    // 0x209408: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x209408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20940c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20940cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209410: 0xffa50058  sd          $a1, 0x58($sp)
    ctx->pc = 0x209410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 5));
    // 0x209414: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x209414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x209418: 0xffa60060  sd          $a2, 0x60($sp)
    ctx->pc = 0x209418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 6));
    // 0x20941c: 0x2484bcd0  addiu       $a0, $a0, -0x4330
    ctx->pc = 0x20941cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950096));
    // 0x209420: 0xffa70068  sd          $a3, 0x68($sp)
    ctx->pc = 0x209420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 7));
    // 0x209424: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x209424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20942c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x20942cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x209430: 0xffa80070  sd          $t0, 0x70($sp)
    ctx->pc = 0x209430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 8));
    // 0x209434: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x209434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x209438: 0xffa90078  sd          $t1, 0x78($sp)
    ctx->pc = 0x209438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 9));
    // 0x20943c: 0xffaa0080  sd          $t2, 0x80($sp)
    ctx->pc = 0x20943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 10));
    // 0x209440: 0xffab0088  sd          $t3, 0x88($sp)
    ctx->pc = 0x209440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 11));
    // 0x209444: 0xe7ac0048  swc1        $f12, 0x48($sp)
    ctx->pc = 0x209444u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x209448: 0xe7ae004c  swc1        $f14, 0x4C($sp)
    ctx->pc = 0x209448u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x20944c: 0xe7b00050  swc1        $f16, 0x50($sp)
    ctx->pc = 0x20944cu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x209450: 0xc0f0258  jal         func_3C0960
    ctx->pc = 0x209450u;
    SET_GPR_U32(ctx, 31, 0x209458u);
    ctx->pc = 0x209454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209450u;
    // 0x209454: 0xe7b20054  swc1        $f18, 0x54($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0960u, 0x209450u, 0x209458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209458u;
label_209458:
    // 0x209458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20945c: 0x3e00008  jr          $ra
    ctx->pc = 0x20945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20945Cu;
        // 0x209460: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20945Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209464u;
    // 0x209464: 0x0  nop
    ctx->pc = 0x209464u;
    // NOP
    // 0x209468: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x209468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x20946c: 0x0  nop
    ctx->pc = 0x20946cu;
    // NOP
    ctx->pc = 0x209470u;
}
