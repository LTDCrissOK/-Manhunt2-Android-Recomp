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

// Function: sub_0020A510
// Address: 0x20a510 - 0x20a570
void sub_0020A510_0x20a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A510_0x20a510");
#endif

    switch (ctx->pc) {
        case 0x20a534u: goto label_20a534;
        case 0x20a554u: goto label_20a554;
        case 0x20a55cu: goto label_20a55c;
        default: break;
    }

    ctx->pc = 0x20a510u;

    // 0x20a510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a514: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x20a514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x20a518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20a51c: 0x24a5d970  addiu       $a1, $a1, -0x2690
    ctx->pc = 0x20a51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957424));
    // 0x20a520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20a520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a524: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20a524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20a528: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x20a528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x20a52c: 0xc0e0f88  jal         func_383E20
    ctx->pc = 0x20A52Cu;
    SET_GPR_U32(ctx, 31, 0x20A534u);
    ctx->pc = 0x20A530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A52Cu;
    // 0x20a530: 0x2484d950  addiu       $a0, $a0, -0x26B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383E20u, 0x20A52Cu, 0x20A534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A534u;
label_20a534:
    // 0x20a534: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a538: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20a538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20a53c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20a53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x20a540: 0x2406010a  addiu       $a2, $zero, 0x10A
    ctx->pc = 0x20a540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 266));
    // 0x20a544: 0x2484e268  addiu       $a0, $a0, -0x1D98
    ctx->pc = 0x20a544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959720));
    // 0x20a548: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20a548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20a54c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x20A54Cu;
    SET_GPR_U32(ctx, 31, 0x20A554u);
    ctx->pc = 0x20A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A54Cu;
    // 0x20a550: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x20A54Cu, 0x20A554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A554u;
label_20a554:
    // 0x20a554: 0xc08296e  jal         func_20A5B8
    ctx->pc = 0x20A554u;
    SET_GPR_U32(ctx, 31, 0x20A55Cu);
    ctx->pc = 0x20A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A554u;
    // 0x20a558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A5B8u, 0x20A554u, 0x20A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A55Cu;
label_20a55c:
    // 0x20a55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20a55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20a560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20a564: 0x3e00008  jr          $ra
    ctx->pc = 0x20A564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A564u;
        // 0x20a568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A56Cu;
    // 0x20a56c: 0x0  nop
    ctx->pc = 0x20a56cu;
    // NOP
    ctx->pc = 0x20a570u;
}
