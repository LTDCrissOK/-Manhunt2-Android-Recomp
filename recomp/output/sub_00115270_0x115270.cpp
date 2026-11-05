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

// Function: sub_00115270
// Address: 0x115270 - 0x1152a0
void sub_00115270_0x115270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115270_0x115270");
#endif

    switch (ctx->pc) {
        case 0x115284u: goto label_115284;
        default: break;
    }

    ctx->pc = 0x115270u;

    // 0x115270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115278: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11527c: 0xc045484  jal         func_115210
    ctx->pc = 0x11527Cu;
    SET_GPR_U32(ctx, 31, 0x115284u);
    ctx->pc = 0x115280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11527Cu;
    // 0x115280: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115210u, 0x11527Cu, 0x115284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115284u;
label_115284:
    // 0x115284: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x115284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115288: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x115288u;
    {
        const bool branch_taken_0x115288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115288) {
            ctx->pc = 0x11528Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115288u;
            // 0x11528c: 0xc60001d4  lwc1        $f0, 0x1D4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x115290u;
            goto label_115290;
        }
    }
    ctx->pc = 0x115290u;
label_115290:
    // 0x115290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115294: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115298: 0x3e00008  jr          $ra
    ctx->pc = 0x115298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115298u;
        // 0x11529c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1152A0u;
}
