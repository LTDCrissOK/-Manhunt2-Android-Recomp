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

// Function: sub_001D9178
// Address: 0x1d9178 - 0x1d91d8
void sub_001D9178_0x1d9178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9178_0x1d9178");
#endif

    switch (ctx->pc) {
        case 0x1d91acu: goto label_1d91ac;
        case 0x1d91c0u: goto label_1d91c0;
        default: break;
    }

    ctx->pc = 0x1d9178u;

    // 0x1d9178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d917c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d917cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d9180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9184: 0x244214e0  addiu       $v0, $v0, 0x14E0
    ctx->pc = 0x1d9184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5344));
    // 0x1d9188: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d918c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d918cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d9190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d9194: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1d9194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1d9198: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1d9198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d919c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D919Cu;
    {
        const bool branch_taken_0x1d919c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D919Cu;
        // 0x1d91a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d919c) {
            ctx->pc = 0x1D91ACu;
            goto label_1d91ac;
        }
    }
    ctx->pc = 0x1D91A4u;
    // 0x1d91a4: 0xc07624c  jal         func_1D8930
    ctx->pc = 0x1D91A4u;
    SET_GPR_U32(ctx, 31, 0x1D91ACu);
    ctx->pc = 0x1D91A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91A4u;
    // 0x1d91a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8930u, 0x1D91A4u, 0x1D91ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91ACu;
label_1d91ac:
    // 0x1d91ac: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1d91acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1d91b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D91B0u;
    {
        const bool branch_taken_0x1d91b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91B0u;
        // 0x1d91b4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d91b0) {
            ctx->pc = 0x1D91C0u;
            goto label_1d91c0;
        }
    }
    ctx->pc = 0x1D91B8u;
    // 0x1d91b8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D91B8u;
    SET_GPR_U32(ctx, 31, 0x1D91C0u);
    ctx->pc = 0x1D91BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D91B8u;
    // 0x1d91bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D91B8u, 0x1D91C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D91C0u;
label_1d91c0:
    // 0x1d91c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d91c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d91c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d91c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d91c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d91c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d91cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D91CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D91D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D91CCu;
        // 0x1d91d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D91CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D91D4u;
    // 0x1d91d4: 0x0  nop
    ctx->pc = 0x1d91d4u;
    // NOP
    ctx->pc = 0x1d91d8u;
}
