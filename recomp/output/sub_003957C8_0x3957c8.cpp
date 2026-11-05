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

// Function: sub_003957C8
// Address: 0x3957c8 - 0x395820
void sub_003957C8_0x3957c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003957C8_0x3957c8");
#endif

    switch (ctx->pc) {
        case 0x3957ecu: goto label_3957ec;
        case 0x3957fcu: goto label_3957fc;
        case 0x395804u: goto label_395804;
        default: break;
    }

    ctx->pc = 0x3957c8u;

    // 0x3957c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3957c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3957cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3957ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3957d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3957d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3957d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3957d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3957d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3957d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3957dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3957dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3957e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3957e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3957e4: 0xc0e5796  jal         func_395E58
    ctx->pc = 0x3957E4u;
    SET_GPR_U32(ctx, 31, 0x3957ECu);
    ctx->pc = 0x3957E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3957E4u;
    // 0x3957e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E58u, 0x3957E4u, 0x3957ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3957ECu;
label_3957ec:
    // 0x3957ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3957ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3957f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3957f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3957f4: 0xc0e5608  jal         func_395820
    ctx->pc = 0x3957F4u;
    SET_GPR_U32(ctx, 31, 0x3957FCu);
    ctx->pc = 0x3957F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3957F4u;
    // 0x3957f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395820u, 0x3957F4u, 0x3957FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3957FCu;
label_3957fc:
    // 0x3957fc: 0xc0e579c  jal         func_395E70
    ctx->pc = 0x3957FCu;
    SET_GPR_U32(ctx, 31, 0x395804u);
    ctx->pc = 0x395800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3957FCu;
    // 0x395800: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395E70u, 0x3957FCu, 0x395804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395804u;
label_395804:
    // 0x395804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x395804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x395808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x395808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39580c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39580cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395814: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x395814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x395818: 0x3e00008  jr          $ra
    ctx->pc = 0x395818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395818u;
        // 0x39581c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395820u;
}
