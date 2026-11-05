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

// Function: sub_0016C3B8
// Address: 0x16c3b8 - 0x16c420
void sub_0016C3B8_0x16c3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C3B8_0x16c3b8");
#endif

    switch (ctx->pc) {
        case 0x16c3ecu: goto label_16c3ec;
        case 0x16c408u: goto label_16c408;
        default: break;
    }

    ctx->pc = 0x16c3b8u;

    // 0x16c3b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c3bc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16c3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x16c3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c3c4: 0x24420e10  addiu       $v0, $v0, 0xE10
    ctx->pc = 0x16c3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3600));
    // 0x16c3c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c3cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c3d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c3d4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x16c3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x16c3d8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x16c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x16c3dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C3DCu;
    {
        const bool branch_taken_0x16c3dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3DCu;
        // 0x16c3e0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3dc) {
            ctx->pc = 0x16C3ECu;
            goto label_16c3ec;
        }
    }
    ctx->pc = 0x16C3E4u;
    // 0x16c3e4: 0xc05b122  jal         func_16C488
    ctx->pc = 0x16C3E4u;
    SET_GPR_U32(ctx, 31, 0x16C3ECu);
    ctx->pc = 0x16C488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C488u, 0x16C3E4u, 0x16C3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C3ECu;
label_16c3ec:
    // 0x16c3ec: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x16c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x16c3f0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x16c3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x16c3f4: 0x24420638  addiu       $v0, $v0, 0x638
    ctx->pc = 0x16c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1592));
    // 0x16c3f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16C3F8u;
    {
        const bool branch_taken_0x16c3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C3F8u;
        // 0x16c3fc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c3f8) {
            ctx->pc = 0x16C408u;
            goto label_16c408;
        }
    }
    ctx->pc = 0x16C400u;
    // 0x16c400: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x16C400u;
    SET_GPR_U32(ctx, 31, 0x16C408u);
    ctx->pc = 0x16C404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C400u;
    // 0x16c404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x16C400u, 0x16C408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C408u;
label_16c408:
    // 0x16c408: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c40c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c414: 0x3e00008  jr          $ra
    ctx->pc = 0x16C414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C414u;
        // 0x16c418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C41Cu;
    // 0x16c41c: 0x0  nop
    ctx->pc = 0x16c41cu;
    // NOP
    ctx->pc = 0x16c420u;
}
