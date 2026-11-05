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

// Function: sub_001317B8
// Address: 0x1317b8 - 0x131808
void sub_001317B8_0x1317b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001317B8_0x1317b8");
#endif

    switch (ctx->pc) {
        case 0x1317e0u: goto label_1317e0;
        case 0x1317f4u: goto label_1317f4;
        default: break;
    }

    ctx->pc = 0x1317b8u;

    // 0x1317b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1317b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1317bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1317bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1317c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1317c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1317c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1317c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1317c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1317c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1317cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1317ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1317d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1317D0u;
    {
        const bool branch_taken_0x1317d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1317D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1317D0u;
        // 0x1317d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1317d0) {
            ctx->pc = 0x1317E0u;
            goto label_1317e0;
        }
    }
    ctx->pc = 0x1317D8u;
    // 0x1317d8: 0xc04c626  jal         func_131898
    ctx->pc = 0x1317D8u;
    SET_GPR_U32(ctx, 31, 0x1317E0u);
    ctx->pc = 0x131898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131898u, 0x1317D8u, 0x1317E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317E0u;
label_1317e0:
    // 0x1317e0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1317e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1317e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1317E4u;
    {
        const bool branch_taken_0x1317e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1317e4) {
            ctx->pc = 0x1317E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1317E4u;
            // 0x1317e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1317F8u;
            goto label_1317f8;
        }
    }
    ctx->pc = 0x1317ECu;
    // 0x1317ec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1317ECu;
    SET_GPR_U32(ctx, 31, 0x1317F4u);
    ctx->pc = 0x1317F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1317ECu;
    // 0x1317f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1317ECu, 0x1317F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1317F4u;
label_1317f4:
    // 0x1317f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1317f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1317f8:
    // 0x1317f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1317f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1317fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1317fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131800: 0x3e00008  jr          $ra
    ctx->pc = 0x131800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131800u;
        // 0x131804: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131808u;
}
