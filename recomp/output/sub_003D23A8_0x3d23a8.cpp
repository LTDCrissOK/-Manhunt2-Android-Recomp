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

// Function: sub_003D23A8
// Address: 0x3d23a8 - 0x3d2408
void sub_003D23A8_0x3d23a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D23A8_0x3d23a8");
#endif

    switch (ctx->pc) {
        case 0x3d23c8u: goto label_3d23c8;
        case 0x3d23d8u: goto label_3d23d8;
        case 0x3d23e0u: goto label_3d23e0;
        case 0x3d23f0u: goto label_3d23f0;
        default: break;
    }

    ctx->pc = 0x3d23a8u;

    // 0x3d23a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3d23a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3d23ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3d23acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3d23b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d23b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d23b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d23b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d23b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3d23b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d23bc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3d23bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3d23c0: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x3D23C0u;
    SET_GPR_U32(ctx, 31, 0x3D23C8u);
    ctx->pc = 0x3D23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23C0u;
    // 0x3d23c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x3D23C0u, 0x3D23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23C8u;
label_3d23c8:
    // 0x3d23c8: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D23C8u;
    {
        const bool branch_taken_0x3d23c8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3D23CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23C8u;
        // 0x3d23cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d23c8) {
            ctx->pc = 0x3D23E8u;
            goto label_3d23e8;
        }
    }
    ctx->pc = 0x3D23D0u;
    // 0x3d23d0: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x3D23D0u;
    SET_GPR_U32(ctx, 31, 0x3D23D8u);
    ctx->pc = 0x3D23D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23D0u;
    // 0x3d23d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x3D23D0u, 0x3D23D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23D8u;
label_3d23d8:
    // 0x3d23d8: 0xc0f4912  jal         func_3D2448
    ctx->pc = 0x3D23D8u;
    SET_GPR_U32(ctx, 31, 0x3D23E0u);
    ctx->pc = 0x3D23DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23D8u;
    // 0x3d23dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2448u, 0x3D23D8u, 0x3D23E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23E0u;
label_3d23e0:
    // 0x3d23e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3D23E0u;
    {
        const bool branch_taken_0x3d23e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23E0u;
        // 0x3d23e4: 0x2102f  dsubu       $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d23e0) {
            ctx->pc = 0x3D23F0u;
            goto label_3d23f0;
        }
    }
    ctx->pc = 0x3D23E8u;
label_3d23e8:
    // 0x3d23e8: 0xc0f4912  jal         func_3D2448
    ctx->pc = 0x3D23E8u;
    SET_GPR_U32(ctx, 31, 0x3D23F0u);
    ctx->pc = 0x3D23ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D23E8u;
    // 0x3d23ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2448u, 0x3D23E8u, 0x3D23F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D23F0u;
label_3d23f0:
    // 0x3d23f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3d23f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d23f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3d23f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d23f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d23f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d23fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D23FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D23FCu;
        // 0x3d2400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D23FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2404u;
    // 0x3d2404: 0x0  nop
    ctx->pc = 0x3d2404u;
    // NOP
    ctx->pc = 0x3d2408u;
}
