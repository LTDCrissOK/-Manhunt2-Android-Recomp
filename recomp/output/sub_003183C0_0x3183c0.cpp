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

// Function: sub_003183C0
// Address: 0x3183c0 - 0x318408
void sub_003183C0_0x3183c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003183C0_0x3183c0");
#endif

    switch (ctx->pc) {
        case 0x3183d4u: goto label_3183d4;
        case 0x3183dcu: goto label_3183dc;
        case 0x3183ecu: goto label_3183ec;
        case 0x3183f4u: goto label_3183f4;
        default: break;
    }

    ctx->pc = 0x3183c0u;

    // 0x3183c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3183c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3183c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3183c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3183c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3183c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3183cc: 0xc0d4580  jal         func_351600
    ctx->pc = 0x3183CCu;
    SET_GPR_U32(ctx, 31, 0x3183D4u);
    ctx->pc = 0x3183D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183CCu;
    // 0x3183d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x351600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x351600u, 0x3183CCu, 0x3183D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183D4u;
label_3183d4:
    // 0x3183d4: 0xc0db198  jal         func_36C660
    ctx->pc = 0x3183D4u;
    SET_GPR_U32(ctx, 31, 0x3183DCu);
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x3183D4u, 0x3183DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183DCu;
label_3183dc:
    // 0x3183dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x3183dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x3183e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3183e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3183e4: 0xc0aee22  jal         func_2BB888
    ctx->pc = 0x3183E4u;
    SET_GPR_U32(ctx, 31, 0x3183ECu);
    ctx->pc = 0x3183E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3183E4u;
    // 0x3183e8: 0x24844f18  addiu       $a0, $a0, 0x4F18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB888u, 0x3183E4u, 0x3183ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183ECu;
label_3183ec:
    // 0x3183ec: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x3183ECu;
    SET_GPR_U32(ctx, 31, 0x3183F4u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x3183ECu, 0x3183F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3183F4u;
label_3183f4:
    // 0x3183f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3183f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3183f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3183f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3183fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3183FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3183FCu;
        // 0x318400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3183FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318404u;
    // 0x318404: 0x0  nop
    ctx->pc = 0x318404u;
    // NOP
    ctx->pc = 0x318408u;
}
