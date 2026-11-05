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

// Function: sub_003997E0
// Address: 0x3997e0 - 0x399850
void sub_003997E0_0x3997e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003997E0_0x3997e0");
#endif

    switch (ctx->pc) {
        case 0x399814u: goto label_399814;
        case 0x39982cu: goto label_39982c;
        default: break;
    }

    ctx->pc = 0x3997e0u;

    // 0x3997e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3997e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3997e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3997e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3997e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3997e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3997ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3997f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3997f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3997f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3997f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3997f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3997fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3997fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x399800: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x399800u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399804: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x399804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x399808: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x399808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x39980c: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x39980Cu;
    SET_GPR_U32(ctx, 31, 0x399814u);
    ctx->pc = 0x399810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39980Cu;
    // 0x399810: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x39980Cu, 0x399814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399814u;
label_399814:
    // 0x399814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x399814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x399818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39981c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39981cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399820: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x399820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399824: 0xc0e6614  jal         func_399850
    ctx->pc = 0x399824u;
    SET_GPR_U32(ctx, 31, 0x39982Cu);
    ctx->pc = 0x399828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399824u;
    // 0x399828: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399850u, 0x399824u, 0x39982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39982Cu;
label_39982c:
    // 0x39982c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39982cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x399830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399834: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x399834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399838: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x399838u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39983c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39983cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x399840: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x399840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x399844: 0x80e6a78  j           func_39A9E0
    ctx->pc = 0x399844u;
    ctx->pc = 0x399848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399844u;
    // 0x399848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    sub_0039A9E0_0x39a9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x39984Cu;
    // 0x39984c: 0x0  nop
    ctx->pc = 0x39984cu;
    // NOP
    ctx->pc = 0x399850u;
}
