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

// Function: sub_00205778
// Address: 0x205778 - 0x2057e0
void sub_00205778_0x205778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205778_0x205778");
#endif

    switch (ctx->pc) {
        case 0x2057acu: goto label_2057ac;
        case 0x2057c0u: goto label_2057c0;
        case 0x2057ccu: goto label_2057cc;
        default: break;
    }

    ctx->pc = 0x205778u;

    // 0x205778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20577c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x205780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205784: 0x24421568  addiu       $v0, $v0, 0x1568
    ctx->pc = 0x205784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5480));
    // 0x205788: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x205788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20578c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20578cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x205790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x205794: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x205794u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x205798: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x205798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20579c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20579Cu;
    {
        const bool branch_taken_0x20579c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2057A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20579Cu;
        // 0x2057a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20579c) {
            ctx->pc = 0x2057C0u;
            goto label_2057c0;
        }
    }
    ctx->pc = 0x2057A4u;
    // 0x2057a4: 0xc0e7c64  jal         func_39F190
    ctx->pc = 0x2057A4u;
    SET_GPR_U32(ctx, 31, 0x2057ACu);
    ctx->pc = 0x39F190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F190u, 0x2057A4u, 0x2057ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2057ACu;
label_2057ac:
    // 0x2057ac: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x2057acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2057b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2057B0u;
    {
        const bool branch_taken_0x2057b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2057b0) {
            ctx->pc = 0x2057B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2057B0u;
            // 0x2057b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2057C4u;
            goto label_2057c4;
        }
    }
    ctx->pc = 0x2057B8u;
    // 0x2057b8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2057B8u;
    SET_GPR_U32(ctx, 31, 0x2057C0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2057B8u, 0x2057C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2057C0u;
label_2057c0:
    // 0x2057c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2057c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2057c4:
    // 0x2057c4: 0xc08184a  jal         func_206128
    ctx->pc = 0x2057C4u;
    SET_GPR_U32(ctx, 31, 0x2057CCu);
    ctx->pc = 0x2057C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2057C4u;
    // 0x2057c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x206128u, 0x2057C4u, 0x2057CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2057CCu;
label_2057cc:
    // 0x2057cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2057ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2057d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2057d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2057d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2057d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2057d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2057D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2057DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2057D8u;
        // 0x2057dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2057D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2057E0u;
}
