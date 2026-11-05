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

// Function: sub_00168298
// Address: 0x168298 - 0x168300
void sub_00168298_0x168298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168298_0x168298");
#endif

    switch (ctx->pc) {
        case 0x1682bcu: goto label_1682bc;
        case 0x1682d0u: goto label_1682d0;
        default: break;
    }

    ctx->pc = 0x168298u;

    // 0x168298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16829c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16829cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1682a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1682a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1682a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1682a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682a8: 0x8e020210  lw          $v0, 0x210($s0)
    ctx->pc = 0x1682a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    // 0x1682ac: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1682ACu;
    {
        const bool branch_taken_0x1682ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1682ac) {
            ctx->pc = 0x1682B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1682ACu;
            // 0x1682b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1682F0u;
            goto label_1682f0;
        }
    }
    ctx->pc = 0x1682B4u;
    // 0x1682b4: 0xc04f03a  jal         func_13C0E8
    ctx->pc = 0x1682B4u;
    SET_GPR_U32(ctx, 31, 0x1682BCu);
    ctx->pc = 0x13C0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0E8u, 0x1682B4u, 0x1682BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682BCu;
label_1682bc:
    // 0x1682bc: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x1682bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x1682c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1682c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1682c4: 0xae000334  sw          $zero, 0x334($s0)
    ctx->pc = 0x1682c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 820), GPR_U32(ctx, 0));
    // 0x1682c8: 0xc05a31a  jal         func_168C68
    ctx->pc = 0x1682C8u;
    SET_GPR_U32(ctx, 31, 0x1682D0u);
    ctx->pc = 0x1682CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1682C8u;
    // 0x1682cc: 0xae000330  sw          $zero, 0x330($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168C68u, 0x1682C8u, 0x1682D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1682D0u;
label_1682d0:
    // 0x1682d0: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x1682d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    // 0x1682d4: 0xae000338  sw          $zero, 0x338($s0)
    ctx->pc = 0x1682d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 824), GPR_U32(ctx, 0));
    // 0x1682d8: 0xae00033c  sw          $zero, 0x33C($s0)
    ctx->pc = 0x1682d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 0));
    // 0x1682dc: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x1682dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x1682e0: 0xae000344  sw          $zero, 0x344($s0)
    ctx->pc = 0x1682e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 836), GPR_U32(ctx, 0));
    // 0x1682e4: 0xae000348  sw          $zero, 0x348($s0)
    ctx->pc = 0x1682e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 840), GPR_U32(ctx, 0));
    // 0x1682e8: 0xae00034c  sw          $zero, 0x34C($s0)
    ctx->pc = 0x1682e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 844), GPR_U32(ctx, 0));
    // 0x1682ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1682ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1682f0:
    // 0x1682f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1682f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1682f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1682F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1682F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1682F4u;
        // 0x1682f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1682F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1682FCu;
    // 0x1682fc: 0x0  nop
    ctx->pc = 0x1682fcu;
    // NOP
    ctx->pc = 0x168300u;
}
