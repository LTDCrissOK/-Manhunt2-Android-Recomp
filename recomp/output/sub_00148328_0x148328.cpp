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

// Function: sub_00148328
// Address: 0x148328 - 0x148398
void sub_00148328_0x148328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148328_0x148328");
#endif

    switch (ctx->pc) {
        case 0x14834cu: goto label_14834c;
        case 0x148358u: goto label_148358;
        case 0x148364u: goto label_148364;
        case 0x148374u: goto label_148374;
        case 0x148380u: goto label_148380;
        default: break;
    }

    ctx->pc = 0x148328u;

    // 0x148328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x148328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14832c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14832cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x148330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x148330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x148334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x148334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x148338: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x148338u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14833c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14833cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x148340: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148344: 0xc052388  jal         func_148E20
    ctx->pc = 0x148344u;
    SET_GPR_U32(ctx, 31, 0x14834Cu);
    ctx->pc = 0x148348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148344u;
    // 0x148348: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148E20u, 0x148344u, 0x14834Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14834Cu;
label_14834c:
    // 0x14834c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148350: 0xc0523de  jal         func_148F78
    ctx->pc = 0x148350u;
    SET_GPR_U32(ctx, 31, 0x148358u);
    ctx->pc = 0x148354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148350u;
    // 0x148354: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F78u, 0x148350u, 0x148358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148358u;
label_148358:
    // 0x148358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14835c: 0xc05242e  jal         func_1490B8
    ctx->pc = 0x14835Cu;
    SET_GPR_U32(ctx, 31, 0x148364u);
    ctx->pc = 0x148360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14835Cu;
    // 0x148360: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B8u, 0x14835Cu, 0x148364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148364u;
label_148364:
    // 0x148364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148368: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x148368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14836c: 0xc04d88a  jal         func_136228
    ctx->pc = 0x14836Cu;
    SET_GPR_U32(ctx, 31, 0x148374u);
    ctx->pc = 0x148370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14836Cu;
    // 0x148370: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x14836Cu, 0x148374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148374u;
label_148374:
    // 0x148374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x148374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148378: 0xc05249a  jal         func_149268
    ctx->pc = 0x148378u;
    SET_GPR_U32(ctx, 31, 0x148380u);
    ctx->pc = 0x14837Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148378u;
    // 0x14837c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149268u, 0x148378u, 0x148380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148380u;
label_148380:
    // 0x148380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x148380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148384: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x148384u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x148388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14838c: 0x3e00008  jr          $ra
    ctx->pc = 0x14838Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14838Cu;
        // 0x148390: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14838Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148394u;
    // 0x148394: 0x0  nop
    ctx->pc = 0x148394u;
    // NOP
    ctx->pc = 0x148398u;
}
