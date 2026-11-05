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

// Function: sub_00193780
// Address: 0x193780 - 0x1937c0
void sub_00193780_0x193780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193780_0x193780");
#endif

    switch (ctx->pc) {
        case 0x1937b4u: goto label_1937b4;
        default: break;
    }

    ctx->pc = 0x193780u;

    // 0x193780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193784: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x193784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x193788: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x193788u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x19378c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19378cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193790: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193794: 0x8c820ff8  lw          $v0, 0xFF8($a0)
    ctx->pc = 0x193794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x193798: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x193798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19379c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19379cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1937a0: 0x0  nop
    ctx->pc = 0x1937a0u;
    // NOP
    // 0x1937a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1937A4u;
    {
        const bool branch_taken_0x1937a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1937A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937A4u;
        // 0x1937a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1937a4) {
            ctx->pc = 0x1937B4u;
            goto label_1937b4;
        }
    }
    ctx->pc = 0x1937ACu;
    // 0x1937ac: 0xc064df0  jal         func_1937C0
    ctx->pc = 0x1937ACu;
    SET_GPR_U32(ctx, 31, 0x1937B4u);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x1937ACu, 0x1937B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1937B4u;
label_1937b4:
    // 0x1937b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1937b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1937b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1937B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1937BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1937B8u;
        // 0x1937bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1937B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1937C0u;
}
