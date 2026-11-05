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

// Function: sub_001418D8
// Address: 0x1418d8 - 0x141930
void sub_001418D8_0x1418d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001418D8_0x1418d8");
#endif

    switch (ctx->pc) {
        case 0x1418ecu: goto label_1418ec;
        default: break;
    }

    ctx->pc = 0x1418d8u;

    // 0x1418d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1418d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1418dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1418dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1418e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1418e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1418e4: 0xc04e572  jal         func_1395C8
    ctx->pc = 0x1418E4u;
    SET_GPR_U32(ctx, 31, 0x1418ECu);
    ctx->pc = 0x1418E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1418E4u;
    // 0x1418e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1395C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1395C8u, 0x1418E4u, 0x1418ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1418ECu;
label_1418ec:
    // 0x1418ec: 0xae000bd0  sw          $zero, 0xBD0($s0)
    ctx->pc = 0x1418ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3024), GPR_U32(ctx, 0));
    // 0x1418f0: 0x7e000be0  sq          $zero, 0xBE0($s0)
    ctx->pc = 0x1418f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 3040), GPR_VEC(ctx, 0));
    // 0x1418f4: 0xae000c14  sw          $zero, 0xC14($s0)
    ctx->pc = 0x1418f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3092), GPR_U32(ctx, 0));
    // 0x1418f8: 0xae000bf0  sw          $zero, 0xBF0($s0)
    ctx->pc = 0x1418f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3056), GPR_U32(ctx, 0));
    // 0x1418fc: 0xae000bf4  sw          $zero, 0xBF4($s0)
    ctx->pc = 0x1418fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3060), GPR_U32(ctx, 0));
    // 0x141900: 0xae000bf8  sw          $zero, 0xBF8($s0)
    ctx->pc = 0x141900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3064), GPR_U32(ctx, 0));
    // 0x141904: 0xae000bfc  sw          $zero, 0xBFC($s0)
    ctx->pc = 0x141904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3068), GPR_U32(ctx, 0));
    // 0x141908: 0xae000c00  sw          $zero, 0xC00($s0)
    ctx->pc = 0x141908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 0));
    // 0x14190c: 0xae000c04  sw          $zero, 0xC04($s0)
    ctx->pc = 0x14190cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 0));
    // 0x141910: 0xae000c08  sw          $zero, 0xC08($s0)
    ctx->pc = 0x141910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3080), GPR_U32(ctx, 0));
    // 0x141914: 0xae000c0c  sw          $zero, 0xC0C($s0)
    ctx->pc = 0x141914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3084), GPR_U32(ctx, 0));
    // 0x141918: 0xae000c10  sw          $zero, 0xC10($s0)
    ctx->pc = 0x141918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3088), GPR_U32(ctx, 0));
    // 0x14191c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14191cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141920: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141924: 0x3e00008  jr          $ra
    ctx->pc = 0x141924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141924u;
        // 0x141928: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14192Cu;
    // 0x14192c: 0x0  nop
    ctx->pc = 0x14192cu;
    // NOP
    ctx->pc = 0x141930u;
}
