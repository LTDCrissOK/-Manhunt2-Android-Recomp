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

// Function: sub_003CA478
// Address: 0x3ca478 - 0x3ca4e0
void sub_003CA478_0x3ca478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA478_0x3ca478");
#endif

    switch (ctx->pc) {
        case 0x3ca4a8u: goto label_3ca4a8;
        case 0x3ca4b0u: goto label_3ca4b0;
        case 0x3ca4c8u: goto label_3ca4c8;
        default: break;
    }

    ctx->pc = 0x3ca478u;

    // 0x3ca478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ca478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3ca47c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3ca47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3ca480: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ca480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3ca484: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca484u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca488: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ca488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ca48c: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x3ca48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x3ca490: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3ca490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3ca494: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3ca494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3ca498: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CA498u;
    {
        const bool branch_taken_0x3ca498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ca498) {
            ctx->pc = 0x3CA4A8u;
            goto label_3ca4a8;
        }
    }
    ctx->pc = 0x3CA4A0u;
    // 0x3ca4a0: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3CA4A0u;
    SET_GPR_U32(ctx, 31, 0x3CA4A8u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3CA4A0u, 0x3CA4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA4A8u;
label_3ca4a8:
    // 0x3ca4a8: 0xc0f25c4  jal         func_3C9710
    ctx->pc = 0x3CA4A8u;
    SET_GPR_U32(ctx, 31, 0x3CA4B0u);
    ctx->pc = 0x3CA4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA4A8u;
    // 0x3ca4ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9710u, 0x3CA4A8u, 0x3CA4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA4B0u;
label_3ca4b0:
    // 0x3ca4b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ca4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca4b4: 0xf  sync
    ctx->pc = 0x3ca4b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3ca4b8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA4B8u;
    {
        const bool branch_taken_0x3ca4b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4B8u;
        // 0x3ca4bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca4b8) {
            ctx->pc = 0x3CA4CCu;
            goto label_3ca4cc;
        }
    }
    ctx->pc = 0x3CA4C0u;
    // 0x3ca4c0: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3CA4C0u;
    SET_GPR_U32(ctx, 31, 0x3CA4C8u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3CA4C0u, 0x3CA4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA4C8u;
label_3ca4c8:
    // 0x3ca4c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ca4c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ca4cc:
    // 0x3ca4cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ca4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca4d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3ca4d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ca4d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ca4d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ca4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA4D8u;
        // 0x3ca4dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA4E0u;
}
