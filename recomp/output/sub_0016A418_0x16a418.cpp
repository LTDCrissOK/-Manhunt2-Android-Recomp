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

// Function: sub_0016A418
// Address: 0x16a418 - 0x16a470
void sub_0016A418_0x16a418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A418_0x16a418");
#endif

    switch (ctx->pc) {
        case 0x16a43cu: goto label_16a43c;
        case 0x16a44cu: goto label_16a44c;
        case 0x16a45cu: goto label_16a45c;
        default: break;
    }

    ctx->pc = 0x16a418u;

    // 0x16a418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a424: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16a424u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a42c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A42Cu;
    {
        const bool branch_taken_0x16a42c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A42Cu;
        // 0x16a430: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a42c) {
            ctx->pc = 0x16A45Cu;
            goto label_16a45c;
        }
    }
    ctx->pc = 0x16A434u;
    // 0x16a434: 0xc05ae88  jal         func_16BA20
    ctx->pc = 0x16A434u;
    SET_GPR_U32(ctx, 31, 0x16A43Cu);
    ctx->pc = 0x16A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A434u;
    // 0x16a438: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BA20u, 0x16A434u, 0x16A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A43Cu;
label_16a43c:
    // 0x16a43c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A43Cu;
    {
        const bool branch_taken_0x16a43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A43Cu;
        // 0x16a440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a43c) {
            ctx->pc = 0x16A454u;
            goto label_16a454;
        }
    }
    ctx->pc = 0x16A444u;
    // 0x16a444: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x16A444u;
    SET_GPR_U32(ctx, 31, 0x16A44Cu);
    ctx->pc = 0x16A448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A444u;
    // 0x16a448: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x16A444u, 0x16A44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A44Cu;
label_16a44c:
    // 0x16a44c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16A44Cu;
    {
        const bool branch_taken_0x16a44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A44Cu;
        // 0x16a450: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a44c) {
            ctx->pc = 0x16A460u;
            goto label_16a460;
        }
    }
    ctx->pc = 0x16A454u;
label_16a454:
    // 0x16a454: 0xc05aeb6  jal         func_16BAD8
    ctx->pc = 0x16A454u;
    SET_GPR_U32(ctx, 31, 0x16A45Cu);
    ctx->pc = 0x16A458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A454u;
    // 0x16a458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BAD8u, 0x16A454u, 0x16A45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A45Cu;
label_16a45c:
    // 0x16a45c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a45cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a460:
    // 0x16a460: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a460u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a464: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a468: 0x3e00008  jr          $ra
    ctx->pc = 0x16A468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A468u;
        // 0x16a46c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A470u;
}
