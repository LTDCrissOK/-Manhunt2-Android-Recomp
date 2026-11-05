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

// Function: sub_001438C8
// Address: 0x1438c8 - 0x143920
void sub_001438C8_0x1438c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001438C8_0x1438c8");
#endif

    switch (ctx->pc) {
        case 0x1438fcu: goto label_1438fc;
        case 0x143908u: goto label_143908;
        default: break;
    }

    ctx->pc = 0x1438c8u;

    // 0x1438c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1438c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1438cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1438ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1438d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1438d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1438d4: 0x24420868  addiu       $v0, $v0, 0x868
    ctx->pc = 0x1438d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2152));
    // 0x1438d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1438d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1438dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1438dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1438e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1438e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1438e4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1438e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1438e8: 0x8e030460  lw          $v1, 0x460($s0)
    ctx->pc = 0x1438e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x1438ec: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1438ECu;
    {
        const bool branch_taken_0x1438ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1438F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1438ECu;
        // 0x1438f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1438ec) {
            ctx->pc = 0x1438FCu;
            goto label_1438fc;
        }
    }
    ctx->pc = 0x1438F4u;
    // 0x1438f4: 0xc050e5c  jal         func_143970
    ctx->pc = 0x1438F4u;
    SET_GPR_U32(ctx, 31, 0x1438FCu);
    ctx->pc = 0x143970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143970u, 0x1438F4u, 0x1438FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1438FCu;
label_1438fc:
    // 0x1438fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1438fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143900: 0xc04e4c4  jal         func_139310
    ctx->pc = 0x143900u;
    SET_GPR_U32(ctx, 31, 0x143908u);
    ctx->pc = 0x143904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143900u;
    // 0x143904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139310u, 0x143900u, 0x143908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143908u;
label_143908:
    // 0x143908: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143908u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14390c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14390cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143910: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143914: 0x3e00008  jr          $ra
    ctx->pc = 0x143914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143914u;
        // 0x143918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14391Cu;
    // 0x14391c: 0x0  nop
    ctx->pc = 0x14391cu;
    // NOP
    ctx->pc = 0x143920u;
}
