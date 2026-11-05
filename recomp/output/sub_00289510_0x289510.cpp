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

// Function: sub_00289510
// Address: 0x289510 - 0x289590
void sub_00289510_0x289510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289510_0x289510");
#endif

    switch (ctx->pc) {
        case 0x289530u: goto label_289530;
        case 0x289548u: goto label_289548;
        case 0x289564u: goto label_289564;
        case 0x289574u: goto label_289574;
        case 0x28957cu: goto label_28957c;
        default: break;
    }

    ctx->pc = 0x289510u;

    // 0x289510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289514: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x289514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x289518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28951c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28951cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x289520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x289524: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289528: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x289528u;
    SET_GPR_U32(ctx, 31, 0x289530u);
    ctx->pc = 0x28952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289528u;
    // 0x28952c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x289528u, 0x289530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289530u;
label_289530:
    // 0x289530: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x289530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x289534: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289538: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x289538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x28953c: 0x24a5ae00  addiu       $a1, $a1, -0x5200
    ctx->pc = 0x28953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946304));
    // 0x289540: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x289540u;
    SET_GPR_U32(ctx, 31, 0x289548u);
    ctx->pc = 0x289544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289540u;
    // 0x289544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x289540u, 0x289548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289548u;
label_289548:
    // 0x289548: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x289548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x28954c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x28954cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x289550: 0x2610dce0  addiu       $s0, $s0, -0x2320
    ctx->pc = 0x289550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958304));
    // 0x289554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x289554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28955c: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x28955Cu;
    SET_GPR_U32(ctx, 31, 0x289564u);
    ctx->pc = 0x289560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28955Cu;
    // 0x289560: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x28955Cu, 0x289564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289564u;
label_289564:
    // 0x289564: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289568: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x289568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28956c: 0xc0b6bb8  jal         func_2DAEE0
    ctx->pc = 0x28956Cu;
    SET_GPR_U32(ctx, 31, 0x289574u);
    ctx->pc = 0x289570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28956Cu;
    // 0x289570: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAEE0u, 0x28956Cu, 0x289574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289574u;
label_289574:
    // 0x289574: 0xc0b6cd4  jal         func_2DB350
    ctx->pc = 0x289574u;
    SET_GPR_U32(ctx, 31, 0x28957Cu);
    ctx->pc = 0x289578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289574u;
    // 0x289578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB350u, 0x289574u, 0x28957Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28957Cu;
label_28957c:
    // 0x28957c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28957cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289580: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x289580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289584: 0x3e00008  jr          $ra
    ctx->pc = 0x289584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289584u;
        // 0x289588: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28958Cu;
    // 0x28958c: 0x0  nop
    ctx->pc = 0x28958cu;
    // NOP
    ctx->pc = 0x289590u;
}
