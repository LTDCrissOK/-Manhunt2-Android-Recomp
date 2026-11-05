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

// Function: sub_003711C8
// Address: 0x3711c8 - 0x371210
void sub_003711C8_0x3711c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003711C8_0x3711c8");
#endif

    switch (ctx->pc) {
        case 0x3711ecu: goto label_3711ec;
        case 0x371200u: goto label_371200;
        default: break;
    }

    ctx->pc = 0x3711c8u;

    // 0x3711c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3711c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3711cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3711ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3711d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3711d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3711d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3711d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3711d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x3711d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3711dc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x3711DCu;
    {
        const bool branch_taken_0x3711dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3711dc) {
            ctx->pc = 0x3711E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3711DCu;
            // 0x3711e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371204u;
            goto label_371204;
        }
    }
    ctx->pc = 0x3711E4u;
    // 0x3711e4: 0xc0dc346  jal         func_370D18
    ctx->pc = 0x3711E4u;
    SET_GPR_U32(ctx, 31, 0x3711ECu);
    ctx->pc = 0x3711E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3711E4u;
    // 0x3711e8: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370D18u, 0x3711E4u, 0x3711ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3711ECu;
label_3711ec:
    // 0x3711ec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3711ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3711f0: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3711F0u;
    {
        const bool branch_taken_0x3711f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3711f0) {
            ctx->pc = 0x3711F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3711F0u;
            // 0x3711f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x371204u;
            goto label_371204;
        }
    }
    ctx->pc = 0x3711F8u;
    // 0x3711f8: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3711F8u;
    SET_GPR_U32(ctx, 31, 0x371200u);
    ctx->pc = 0x3711FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3711F8u;
    // 0x3711fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3711F8u, 0x371200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371200u;
label_371200:
    // 0x371200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_371204:
    // 0x371204: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371208: 0x3e00008  jr          $ra
    ctx->pc = 0x371208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371208u;
        // 0x37120c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371210u;
}
