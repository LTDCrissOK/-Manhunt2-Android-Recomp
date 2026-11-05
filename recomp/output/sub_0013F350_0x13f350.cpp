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

// Function: sub_0013F350
// Address: 0x13f350 - 0x13f380
void sub_0013F350_0x13f350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F350_0x13f350");
#endif

    switch (ctx->pc) {
        case 0x13f364u: goto label_13f364;
        default: break;
    }

    ctx->pc = 0x13f350u;

    // 0x13f350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f354: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f358: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13f358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13f35c: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x13F35Cu;
    SET_GPR_U32(ctx, 31, 0x13F364u);
    ctx->pc = 0x13F360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F35Cu;
    // 0x13f360: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x13F35Cu, 0x13F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F364u;
label_13f364:
    // 0x13f364: 0xae000624  sw          $zero, 0x624($s0)
    ctx->pc = 0x13f364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1572), GPR_U32(ctx, 0));
    // 0x13f368: 0xae000620  sw          $zero, 0x620($s0)
    ctx->pc = 0x13f368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1568), GPR_U32(ctx, 0));
    // 0x13f36c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13f370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f374: 0x3e00008  jr          $ra
    ctx->pc = 0x13F374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F374u;
        // 0x13f378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F37Cu;
    // 0x13f37c: 0x0  nop
    ctx->pc = 0x13f37cu;
    // NOP
    ctx->pc = 0x13f380u;
}
