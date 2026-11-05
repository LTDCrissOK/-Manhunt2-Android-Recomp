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

// Function: sub_0028A4F8
// Address: 0x28a4f8 - 0x28a560
void sub_0028A4F8_0x28a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A4F8_0x28a4f8");
#endif

    switch (ctx->pc) {
        case 0x28a518u: goto label_28a518;
        case 0x28a534u: goto label_28a534;
        case 0x28a544u: goto label_28a544;
        case 0x28a54cu: goto label_28a54c;
        default: break;
    }

    ctx->pc = 0x28a4f8u;

    // 0x28a4f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a4fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x28a4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28a500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28a504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a50c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28a50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a510: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x28A510u;
    SET_GPR_U32(ctx, 31, 0x28A518u);
    ctx->pc = 0x28A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A510u;
    // 0x28a514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x28A510u, 0x28A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A518u;
label_28a518:
    // 0x28a518: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x28a518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28a51c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a520: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x28a520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x28a524: 0x24a5af00  addiu       $a1, $a1, -0x5100
    ctx->pc = 0x28a524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946560));
    // 0x28a528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a52c: 0xc0b6e0e  jal         func_2DB838
    ctx->pc = 0x28A52Cu;
    SET_GPR_U32(ctx, 31, 0x28A534u);
    ctx->pc = 0x28A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A52Cu;
    // 0x28a530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB838u, 0x28A52Cu, 0x28A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A534u;
label_28a534:
    // 0x28a534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a538: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28a538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28a53c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28A53Cu;
    SET_GPR_U32(ctx, 31, 0x28A544u);
    ctx->pc = 0x28A540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A53Cu;
    // 0x28a540: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28A53Cu, 0x28A544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A544u;
label_28a544:
    // 0x28a544: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x28A544u;
    SET_GPR_U32(ctx, 31, 0x28A54Cu);
    ctx->pc = 0x28A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A544u;
    // 0x28a548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x28A544u, 0x28A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A54Cu;
label_28a54c:
    // 0x28a54c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a54cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a550: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a554: 0x3e00008  jr          $ra
    ctx->pc = 0x28A554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A554u;
        // 0x28a558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A55Cu;
    // 0x28a55c: 0x0  nop
    ctx->pc = 0x28a55cu;
    // NOP
    ctx->pc = 0x28a560u;
}
