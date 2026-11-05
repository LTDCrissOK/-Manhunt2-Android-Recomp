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

// Function: sub_003E2420
// Address: 0x3e2420 - 0x3e2498
void sub_003E2420_0x3e2420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E2420_0x3e2420");
#endif

    switch (ctx->pc) {
        case 0x3e2450u: goto label_3e2450;
        case 0x3e245cu: goto label_3e245c;
        case 0x3e2468u: goto label_3e2468;
        case 0x3e247cu: goto label_3e247c;
        default: break;
    }

    ctx->pc = 0x3e2420u;

    // 0x3e2420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e2420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e2424: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e2424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e2428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e2428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e242c: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e2430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e2430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e2434: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e2434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e2438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e243c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e243cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2440: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e2440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e2444: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e2444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e2448: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2448u;
    SET_GPR_U32(ctx, 31, 0x3E2450u);
    ctx->pc = 0x3E244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2448u;
    // 0x3e244c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2448u, 0x3E2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2450u;
label_3e2450:
    // 0x3e2450: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e2450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e2454: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2454u;
    SET_GPR_U32(ctx, 31, 0x3E245Cu);
    ctx->pc = 0x3E2458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2454u;
    // 0x3e2458: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2454u, 0x3E245Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E245Cu;
label_3e245c:
    // 0x3e245c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e245cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e2460: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E2460u;
    SET_GPR_U32(ctx, 31, 0x3E2468u);
    ctx->pc = 0x3E2464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2460u;
    // 0x3e2464: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E2460u, 0x3E2468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E2468u;
label_3e2468:
    // 0x3e2468: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e2468u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e246c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E246Cu;
    {
        const bool branch_taken_0x3e246c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E2470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E246Cu;
        // 0x3e2470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e246c) {
            ctx->pc = 0x3E2480u;
            goto label_3e2480;
        }
    }
    ctx->pc = 0x3E2474u;
    // 0x3e2474: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E2474u;
    SET_GPR_U32(ctx, 31, 0x3E247Cu);
    ctx->pc = 0x3E2478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E2474u;
    // 0x3e2478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E2474u, 0x3E247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E247Cu;
label_3e247c:
    // 0x3e247c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e247cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e2480:
    // 0x3e2480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e2480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e2484: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e2484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e2488: 0x3e00008  jr          $ra
    ctx->pc = 0x3E2488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E2488u;
        // 0x3e248c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E2488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E2490u;
    // 0x3e2490: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3e2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3e2494: 0x0  nop
    ctx->pc = 0x3e2494u;
    // NOP
    ctx->pc = 0x3e2498u;
}
