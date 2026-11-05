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

// Function: sub_001CC3D8
// Address: 0x1cc3d8 - 0x1cc458
void sub_001CC3D8_0x1cc3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC3D8_0x1cc3d8");
#endif

    switch (ctx->pc) {
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc444u: goto label_1cc444;
        default: break;
    }

    ctx->pc = 0x1cc3d8u;

    // 0x1cc3d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cc3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc3dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cc3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cc3e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cc3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cc3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cc3e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cc3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cc3ec: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1cc3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1cc3f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CC3F0u;
    {
        const bool branch_taken_0x1cc3f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC3F0u;
        // 0x1cc3f4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3f0) {
            ctx->pc = 0x1CC400u;
            goto label_1cc400;
        }
    }
    ctx->pc = 0x1CC3F8u;
    // 0x1cc3f8: 0xc076e7c  jal         func_1DB9F0
    ctx->pc = 0x1CC3F8u;
    SET_GPR_U32(ctx, 31, 0x1CC400u);
    ctx->pc = 0x1CC3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC3F8u;
    // 0x1cc3fc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB9F0u, 0x1CC3F8u, 0x1CC400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC400u;
label_1cc400:
    // 0x1cc400: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x1cc400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1cc404: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC404u;
    {
        const bool branch_taken_0x1cc404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc404) {
            ctx->pc = 0x1CC408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC404u;
            // 0x1cc408: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC41Cu;
            goto label_1cc41c;
        }
    }
    ctx->pc = 0x1CC40Cu;
    // 0x1cc40c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1cc40cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1cc410: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x1CC410u;
    SET_GPR_U32(ctx, 31, 0x1CC418u);
    ctx->pc = 0x1CC414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC410u;
    // 0x1cc414: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x1CC410u, 0x1CC418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC418u;
label_1cc418:
    // 0x1cc418: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1cc418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1cc41c:
    // 0x1cc41c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CC41Cu;
    {
        const bool branch_taken_0x1cc41c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC41Cu;
        // 0x1cc420: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc41c) {
            ctx->pc = 0x1CC434u;
            goto label_1cc434;
        }
    }
    ctx->pc = 0x1CC424u;
    // 0x1cc424: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1cc424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1cc428: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x1CC428u;
    SET_GPR_U32(ctx, 31, 0x1CC430u);
    ctx->pc = 0x1CC42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC428u;
    // 0x1cc42c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x1CC428u, 0x1CC430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC430u;
label_1cc430:
    // 0x1cc430: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1cc430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1cc434:
    // 0x1cc434: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CC434u;
    {
        const bool branch_taken_0x1cc434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc434) {
            ctx->pc = 0x1CC438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CC434u;
            // 0x1cc438: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CC448u;
            goto label_1cc448;
        }
    }
    ctx->pc = 0x1CC43Cu;
    // 0x1cc43c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1CC43Cu;
    SET_GPR_U32(ctx, 31, 0x1CC444u);
    ctx->pc = 0x1CC440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CC43Cu;
    // 0x1cc440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1CC43Cu, 0x1CC444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC444u;
label_1cc444:
    // 0x1cc444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cc444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc448:
    // 0x1cc448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cc448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cc44c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cc44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc450: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC450u;
        // 0x1cc454: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC458u;
}
