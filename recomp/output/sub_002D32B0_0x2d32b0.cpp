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

// Function: sub_002D32B0
// Address: 0x2d32b0 - 0x2d3318
void sub_002D32B0_0x2d32b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D32B0_0x2d32b0");
#endif

    switch (ctx->pc) {
        case 0x2d32e4u: goto label_2d32e4;
        case 0x2d32f0u: goto label_2d32f0;
        case 0x2d3304u: goto label_2d3304;
        default: break;
    }

    ctx->pc = 0x2d32b0u;

    // 0x2d32b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d32b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d32b4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d32b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d32b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d32b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d32bc: 0x24423da8  addiu       $v0, $v0, 0x3DA8
    ctx->pc = 0x2d32bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15784));
    // 0x2d32c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d32c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d32c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d32c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d32c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d32c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d32cc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2d32ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2d32d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d32d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d32d4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D32D4u;
    {
        const bool branch_taken_0x2d32d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D32D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D32D4u;
        // 0x2d32d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d32d4) {
            ctx->pc = 0x2D32E4u;
            goto label_2d32e4;
        }
    }
    ctx->pc = 0x2D32DCu;
    // 0x2d32dc: 0xc0b4cf8  jal         func_2D33E0
    ctx->pc = 0x2D32DCu;
    SET_GPR_U32(ctx, 31, 0x2D32E4u);
    ctx->pc = 0x2D33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D33E0u, 0x2D32DCu, 0x2D32E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32E4u;
label_2d32e4:
    // 0x2d32e4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d32e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d32e8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2D32E8u;
    SET_GPR_U32(ctx, 31, 0x2D32F0u);
    ctx->pc = 0x2D32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D32E8u;
    // 0x2d32ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D32E8u, 0x2D32F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D32F0u;
label_2d32f0:
    // 0x2d32f0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2d32f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2d32f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D32F4u;
    {
        const bool branch_taken_0x2d32f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d32f4) {
            ctx->pc = 0x2D32F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D32F4u;
            // 0x2d32f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D3308u;
            goto label_2d3308;
        }
    }
    ctx->pc = 0x2D32FCu;
    // 0x2d32fc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2D32FCu;
    SET_GPR_U32(ctx, 31, 0x2D3304u);
    ctx->pc = 0x2D3300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D32FCu;
    // 0x2d3300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2D32FCu, 0x2D3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3304u;
label_2d3304:
    // 0x2d3304: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d3304u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d3308:
    // 0x2d3308: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3308u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d330c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d330cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3310: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3310u;
        // 0x2d3314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3318u;
}
