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

// Function: sub_001591D0
// Address: 0x1591d0 - 0x159220
void sub_001591D0_0x1591d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001591D0_0x1591d0");
#endif

    switch (ctx->pc) {
        case 0x1591f4u: goto label_1591f4;
        default: break;
    }

    ctx->pc = 0x1591d0u;

    // 0x1591d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1591d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1591d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1591d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1591d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1591d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1591dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1591dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1591e0: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x1591e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1591e4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1591E4u;
    {
        const bool branch_taken_0x1591e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1591e4) {
            ctx->pc = 0x1591E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1591E4u;
            // 0x1591e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159214u;
            goto label_159214;
        }
    }
    ctx->pc = 0x1591ECu;
    // 0x1591ec: 0xc04f03a  jal         func_13C0E8
    ctx->pc = 0x1591ECu;
    SET_GPR_U32(ctx, 31, 0x1591F4u);
    ctx->pc = 0x13C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0E8u, 0x1591ECu, 0x1591F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1591F4u;
label_1591f4:
    // 0x1591f4: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x1591f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1591f8: 0xae0002f4  sw          $zero, 0x2F4($s0)
    ctx->pc = 0x1591f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 0));
    // 0x1591fc: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x1591fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x159200: 0xae0002e4  sw          $zero, 0x2E4($s0)
    ctx->pc = 0x159200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 0));
    // 0x159204: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x159204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x159208: 0xae0002ec  sw          $zero, 0x2EC($s0)
    ctx->pc = 0x159208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 748), GPR_U32(ctx, 0));
    // 0x15920c: 0xae0002f0  sw          $zero, 0x2F0($s0)
    ctx->pc = 0x15920cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 752), GPR_U32(ctx, 0));
    // 0x159210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159214:
    // 0x159214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x159214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x159218: 0x3e00008  jr          $ra
    ctx->pc = 0x159218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15921Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159218u;
        // 0x15921c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159220u;
}
