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

// Function: sub_001775F8
// Address: 0x1775f8 - 0x177628
void sub_001775F8_0x1775f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001775F8_0x1775f8");
#endif

    switch (ctx->pc) {
        case 0x17760cu: goto label_17760c;
        case 0x177618u: goto label_177618;
        default: break;
    }

    ctx->pc = 0x1775f8u;

    // 0x1775f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1775f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1775fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1775fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177600: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x177600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x177604: 0xc05e128  jal         func_1784A0
    ctx->pc = 0x177604u;
    SET_GPR_U32(ctx, 31, 0x17760Cu);
    ctx->pc = 0x177608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177604u;
    // 0x177608: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1784A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1784A0u, 0x177604u, 0x17760Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17760Cu;
label_17760c:
    // 0x17760c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177610: 0xc05e3b4  jal         func_178ED0
    ctx->pc = 0x177610u;
    SET_GPR_U32(ctx, 31, 0x177618u);
    ctx->pc = 0x177614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177610u;
    // 0x177614: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178ED0u, 0x177610u, 0x177618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177618u;
label_177618:
    // 0x177618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17761c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17761cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177620: 0x3e00008  jr          $ra
    ctx->pc = 0x177620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177620u;
        // 0x177624: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177628u;
}
