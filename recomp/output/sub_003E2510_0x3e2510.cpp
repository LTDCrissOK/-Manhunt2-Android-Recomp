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

// Function: sub_003E2510
// Address: 0x3e2510 - 0x3e2598
void sub_003E2510_0x3e2510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2510_0x3e2510");
#endif

    switch (ctx->pc) {
        case 0x3e2540u: goto label_3e2540;
        case 0x3e2558u: goto label_3e2558;
        case 0x3e2564u: goto label_3e2564;
        case 0x3e2570u: goto label_3e2570;
        case 0x3e2584u: goto label_3e2584;
        default: break;
    }

    ctx->pc = 0x3e2510u;

    // 0x3e2510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2514: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2518: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e251c: 0x24422fb8  addiu       $v0, $v0, 0x2FB8
    ctx->pc = 0x3e251cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12216));
    // 0x3e2520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e2524: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e2524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e2528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e252c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e252cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e2530: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e2530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e2534: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x3e2534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    // 0x3e2538: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2538u;
    SET_GPR_U32(ctx, 31, 0x3E2540u);
    ctx->pc = 0x3E253Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2538u;
    // 0x3e253c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2538u, 0x3E2540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2540u;
label_3e2540:
    // 0x3e2540: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2544: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e2544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e2548: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e2548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e254c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3e254cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3e2550: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2550u;
    SET_GPR_U32(ctx, 31, 0x3E2558u);
    ctx->pc = 0x3E2554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2550u;
    // 0x3e2554: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2550u, 0x3E2558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2558u;
label_3e2558:
    // 0x3e2558: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e2558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e255c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E255Cu;
    SET_GPR_U32(ctx, 31, 0x3E2564u);
    ctx->pc = 0x3E2560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E255Cu;
    // 0x3e2560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E255Cu, 0x3E2564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2564u;
label_3e2564:
    // 0x3e2564: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e2564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2568: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2568u;
    SET_GPR_U32(ctx, 31, 0x3E2570u);
    ctx->pc = 0x3E256Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2568u;
    // 0x3e256c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2568u, 0x3E2570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2570u;
label_3e2570:
    // 0x3e2570: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e2570u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e2574: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E2574u;
    {
        const bool branch_taken_0x3e2574 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2574u;
        // 0x3e2578: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e2574) {
            ctx->pc = 0x3E2588u;
            goto label_3e2588;
        }
    }
    ctx->pc = 0x3E257Cu;
    // 0x3e257c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E257Cu;
    SET_GPR_U32(ctx, 31, 0x3E2584u);
    ctx->pc = 0x3E2580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E257Cu;
    // 0x3e2580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E257Cu, 0x3E2584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2584u;
label_3e2584:
    // 0x3e2584: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e2584u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2588:
    // 0x3e2588: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2588u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e258c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e258cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2590: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2590u;
        // 0x3e2594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2598u;
}
