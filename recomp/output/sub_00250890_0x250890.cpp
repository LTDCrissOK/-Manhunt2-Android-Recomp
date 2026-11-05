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

// Function: sub_00250890
// Address: 0x250890 - 0x2508d8
void sub_00250890_0x250890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250890_0x250890");
#endif

    switch (ctx->pc) {
        case 0x2508ccu: goto label_2508cc;
        default: break;
    }

    ctx->pc = 0x250890u;

    // 0x250890: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x250890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x250894: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x250894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x250898: 0xc440537c  lwc1        $f0, 0x537C($v0)
    ctx->pc = 0x250898u;
    { uint32_t bits = FAST_READ32(0x46537Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25089c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x25089cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2508a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2508a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2508a4: 0xac6000f0  sw          $zero, 0xF0($v1)
    ctx->pc = 0x2508a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 0));
    // 0x2508a8: 0xe46000fc  swc1        $f0, 0xFC($v1)
    ctx->pc = 0x2508a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 252), bits); }
    // 0x2508ac: 0xac6000f4  sw          $zero, 0xF4($v1)
    ctx->pc = 0x2508acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 0));
    // 0x2508b0: 0xac6000f8  sw          $zero, 0xF8($v1)
    ctx->pc = 0x2508b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 0));
    // 0x2508b4: 0xa06001c0  sb          $zero, 0x1C0($v1)
    ctx->pc = 0x2508b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 448), (uint8_t)GPR_U32(ctx, 0));
    // 0x2508b8: 0xa06001c8  sb          $zero, 0x1C8($v1)
    ctx->pc = 0x2508b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 456), (uint8_t)GPR_U32(ctx, 0));
    // 0x2508bc: 0xa06001c9  sb          $zero, 0x1C9($v1)
    ctx->pc = 0x2508bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 457), (uint8_t)GPR_U32(ctx, 0));
    // 0x2508c0: 0xa06001ca  sb          $zero, 0x1CA($v1)
    ctx->pc = 0x2508c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 458), (uint8_t)GPR_U32(ctx, 0));
    // 0x2508c4: 0xc094372  jal         func_250DC8
    ctx->pc = 0x2508C4u;
    SET_GPR_U32(ctx, 31, 0x2508CCu);
    ctx->pc = 0x2508C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2508C4u;
    // 0x2508c8: 0xa06001cb  sb          $zero, 0x1CB($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 459), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250DC8u, 0x2508C4u, 0x2508CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2508CCu;
label_2508cc:
    // 0x2508cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2508ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2508d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2508D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2508D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2508D0u;
        // 0x2508d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2508D8u;
}
