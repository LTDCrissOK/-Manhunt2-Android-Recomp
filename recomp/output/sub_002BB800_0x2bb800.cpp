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

// Function: sub_002BB800
// Address: 0x2bb800 - 0x2bb848
void sub_002BB800_0x2bb800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB800_0x2bb800");
#endif

    switch (ctx->pc) {
        case 0x2bb824u: goto label_2bb824;
        case 0x2bb830u: goto label_2bb830;
        default: break;
    }

    ctx->pc = 0x2bb800u;

    // 0x2bb800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb804: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bb808: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2bb808u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2bb80c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bb80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bb810: 0x26104f20  addiu       $s0, $s0, 0x4F20
    ctx->pc = 0x2bb810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20256));
    // 0x2bb814: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb818: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb81c: 0xc0b064c  jal         func_2C1930
    ctx->pc = 0x2BB81Cu;
    SET_GPR_U32(ctx, 31, 0x2BB824u);
    ctx->pc = 0x2BB820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB81Cu;
    // 0x2bb820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1930u, 0x2BB81Cu, 0x2BB824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB824u;
label_2bb824:
    // 0x2bb824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb828: 0xc0b09cc  jal         func_2C2730
    ctx->pc = 0x2BB828u;
    SET_GPR_U32(ctx, 31, 0x2BB830u);
    ctx->pc = 0x2BB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB828u;
    // 0x2bb82c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2730u, 0x2BB828u, 0x2BB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB830u;
label_2bb830:
    // 0x2bb830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bb834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bb838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bb838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb83c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb840: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB840u;
        // 0x2bb844: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB848u;
}
