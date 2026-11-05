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

// Function: sub_00136688
// Address: 0x136688 - 0x1366e0
void sub_00136688_0x136688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136688_0x136688");
#endif

    switch (ctx->pc) {
        case 0x1366a8u: goto label_1366a8;
        case 0x1366b4u: goto label_1366b4;
        case 0x1366ccu: goto label_1366cc;
        default: break;
    }

    ctx->pc = 0x136688u;

    // 0x136688: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13668c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x136690: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x136690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x136694: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x136694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13669c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13669cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366a0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1366A0u;
    SET_GPR_U32(ctx, 31, 0x1366A8u);
    ctx->pc = 0x1366A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366A0u;
    // 0x1366a4: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1366A0u, 0x1366A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366A8u;
label_1366a8:
    // 0x1366a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1366a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366ac: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1366ACu;
    SET_GPR_U32(ctx, 31, 0x1366B4u);
    ctx->pc = 0x1366B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366ACu;
    // 0x1366b0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1366ACu, 0x1366B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366B4u;
label_1366b4:
    // 0x1366b4: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x1366b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1366b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1366b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1366bc: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1366bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1366c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1366c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1366c4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1366C4u;
    SET_GPR_U32(ctx, 31, 0x1366CCu);
    ctx->pc = 0x1366C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1366C4u;
    // 0x1366c8: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1366C4u, 0x1366CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1366CCu;
label_1366cc:
    // 0x1366cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1366ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1366d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1366d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1366d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1366d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1366d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1366D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1366DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1366D8u;
        // 0x1366dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1366D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1366E0u;
}
