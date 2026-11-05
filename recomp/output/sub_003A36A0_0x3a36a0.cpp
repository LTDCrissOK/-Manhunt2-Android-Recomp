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

// Function: sub_003A36A0
// Address: 0x3a36a0 - 0x3a3708
void sub_003A36A0_0x3a36a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A36A0_0x3a36a0");
#endif

    switch (ctx->pc) {
        case 0x3a36bcu: goto label_3a36bc;
        case 0x3a36c8u: goto label_3a36c8;
        case 0x3a36e4u: goto label_3a36e4;
        case 0x3a36ecu: goto label_3a36ec;
        default: break;
    }

    ctx->pc = 0x3a36a0u;

    // 0x3a36a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a36a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a36a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a36a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a36a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a36a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a36acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a36b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a36b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a36b4: 0xc0e8d3e  jal         func_3A34F8
    ctx->pc = 0x3A36B4u;
    SET_GPR_U32(ctx, 31, 0x3A36BCu);
    ctx->pc = 0x3A36B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A36B4u;
    // 0x3a36b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A34F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A34F8u, 0x3A36B4u, 0x3A36BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A36BCu;
label_3a36bc:
    // 0x3a36bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a36bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36c0: 0xc0f3872  jal         func_3CE1C8
    ctx->pc = 0x3A36C0u;
    SET_GPR_U32(ctx, 31, 0x3A36C8u);
    ctx->pc = 0x3A36C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A36C0u;
    // 0x3a36c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CE1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CE1C8u, 0x3A36C0u, 0x3A36C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A36C8u;
label_3a36c8:
    // 0x3a36c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a36c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a36cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a36ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36d0: 0x2484d5a0  addiu       $a0, $a0, -0x2A60
    ctx->pc = 0x3a36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956448));
    // 0x3a36d4: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A36D4u;
    {
        const bool branch_taken_0x3a36d4 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3A36D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36D4u;
        // 0x3a36d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a36d4) {
            ctx->pc = 0x3A36E4u;
            goto label_3a36e4;
        }
    }
    ctx->pc = 0x3A36DCu;
    // 0x3a36dc: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A36DCu;
    SET_GPR_U32(ctx, 31, 0x3A36E4u);
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A36DCu, 0x3A36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A36E4u;
label_3a36e4:
    // 0x3a36e4: 0xc0e8d4c  jal         func_3A3530
    ctx->pc = 0x3A36E4u;
    SET_GPR_U32(ctx, 31, 0x3A36ECu);
    ctx->pc = 0x3A3530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3530u, 0x3A36E4u, 0x3A36ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A36ECu;
label_3a36ec:
    // 0x3a36ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a36ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a36f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a36f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a36f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a36f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a36f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a36f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a36fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3A36FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A36FCu;
        // 0x3a3700: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A36FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3704u;
    // 0x3a3704: 0x0  nop
    ctx->pc = 0x3a3704u;
    // NOP
    ctx->pc = 0x3a3708u;
}
