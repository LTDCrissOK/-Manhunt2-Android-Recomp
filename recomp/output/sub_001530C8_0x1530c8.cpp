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

// Function: sub_001530C8
// Address: 0x1530c8 - 0x153110
void sub_001530C8_0x1530c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001530C8_0x1530c8");
#endif

    switch (ctx->pc) {
        case 0x1530dcu: goto label_1530dc;
        case 0x1530fcu: goto label_1530fc;
        default: break;
    }

    ctx->pc = 0x1530c8u;

    // 0x1530c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1530c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1530cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1530ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1530d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1530d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1530d4: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x1530D4u;
    SET_GPR_U32(ctx, 31, 0x1530DCu);
    ctx->pc = 0x1530D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530D4u;
    // 0x1530d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x1530D4u, 0x1530DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530DCu;
label_1530dc:
    // 0x1530dc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1530dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1530e0: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x1530e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x1530e4: 0x24630b40  addiu       $v1, $v1, 0xB40
    ctx->pc = 0x1530e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2880));
    // 0x1530e8: 0xae000680  sw          $zero, 0x680($s0)
    ctx->pc = 0x1530e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1664), GPR_U32(ctx, 0));
    // 0x1530ec: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x1530ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x1530f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1530f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1530f4: 0xc054d4a  jal         func_153528
    ctx->pc = 0x1530F4u;
    SET_GPR_U32(ctx, 31, 0x1530FCu);
    ctx->pc = 0x1530F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1530F4u;
    // 0x1530f8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153528u, 0x1530F4u, 0x1530FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1530FCu;
label_1530fc:
    // 0x1530fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1530fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x153100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x153104: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x153104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153108: 0x3e00008  jr          $ra
    ctx->pc = 0x153108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153108u;
        // 0x15310c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153110u;
}
