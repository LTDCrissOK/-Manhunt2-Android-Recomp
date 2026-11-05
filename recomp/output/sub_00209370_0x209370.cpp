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

// Function: sub_00209370
// Address: 0x209370 - 0x2093b0
void sub_00209370_0x209370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209370_0x209370");
#endif

    switch (ctx->pc) {
        case 0x209394u: goto label_209394;
        default: break;
    }

    ctx->pc = 0x209370u;

    // 0x209370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x209374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x209378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x209378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20937c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20937cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209380: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209384: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x209384u;
    {
        const bool branch_taken_0x209384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x209388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209384u;
        // 0x209388: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209384) {
            ctx->pc = 0x209398u;
            goto label_209398;
        }
    }
    ctx->pc = 0x20938Cu;
    // 0x20938c: 0xc076100  jal         func_1D8400
    ctx->pc = 0x20938Cu;
    SET_GPR_U32(ctx, 31, 0x209394u);
    ctx->pc = 0x209390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20938Cu;
    // 0x209390: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x20938Cu, 0x209394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209394u;
label_209394:
    // 0x209394: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x209394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_209398:
    // 0x209398: 0xa2110000  sb          $s1, 0x0($s0)
    ctx->pc = 0x209398u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x20939c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20939cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2093a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2093a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2093a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2093a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2093a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2093A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2093ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2093A8u;
        // 0x2093ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2093A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2093B0u;
}
