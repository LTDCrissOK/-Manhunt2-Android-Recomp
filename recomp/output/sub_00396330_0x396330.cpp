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

// Function: sub_00396330
// Address: 0x396330 - 0x3963a0
void sub_00396330_0x396330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396330_0x396330");
#endif

    switch (ctx->pc) {
        case 0x396378u: goto label_396378;
        case 0x396390u: goto label_396390;
        default: break;
    }

    ctx->pc = 0x396330u;

    // 0x396330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x396334: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x396334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39633c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39633cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x396340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x396344: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x396344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39634c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x39634cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396350: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x396350u;
    {
        const bool branch_taken_0x396350 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x396354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396350u;
        // 0x396354: 0x8c820094  lw          $v0, 0x94($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396350) {
            ctx->pc = 0x396370u;
            goto label_396370;
        }
    }
    ctx->pc = 0x396358u;
    // 0x396358: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x396358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39635c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39635cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396360: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x396360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396364: 0x2484ae18  addiu       $a0, $a0, -0x51E8
    ctx->pc = 0x396364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946328));
    // 0x396368: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x396368u;
    ctx->pc = 0x39636Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396368u;
    // 0x39636c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x396370u;
label_396370:
    // 0x396370: 0xc0e9b98  jal         func_3A6E60
    ctx->pc = 0x396370u;
    SET_GPR_U32(ctx, 31, 0x396378u);
    ctx->pc = 0x396374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396370u;
    // 0x396374: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E60u, 0x396370u, 0x396378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396378u;
label_396378:
    // 0x396378: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x396378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39637c: 0x2484ae48  addiu       $a0, $a0, -0x51B8
    ctx->pc = 0x39637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946376));
    // 0x396380: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x396380u;
    {
        const bool branch_taken_0x396380 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x396384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396380u;
        // 0x396384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396380) {
            ctx->pc = 0x396390u;
            goto label_396390;
        }
    }
    ctx->pc = 0x396388u;
    // 0x396388: 0xc0ec11c  jal         func_3B0470
    ctx->pc = 0x396388u;
    SET_GPR_U32(ctx, 31, 0x396390u);
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x396388u, 0x396390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396390u;
label_396390:
    // 0x396390: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396394: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x396394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396398: 0x3e00008  jr          $ra
    ctx->pc = 0x396398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396398u;
        // 0x39639c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3963A0u;
}
