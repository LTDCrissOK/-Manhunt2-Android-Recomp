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

// Function: sub_0016F528
// Address: 0x16f528 - 0x16f598
void sub_0016F528_0x16f528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F528_0x16f528");
#endif

    switch (ctx->pc) {
        case 0x16f54cu: goto label_16f54c;
        case 0x16f558u: goto label_16f558;
        case 0x16f568u: goto label_16f568;
        case 0x16f574u: goto label_16f574;
        case 0x16f584u: goto label_16f584;
        default: break;
    }

    ctx->pc = 0x16f528u;

    // 0x16f528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16f528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16f52c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f530: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16f530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16f534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f538: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x16f538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x16f53c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16F53Cu;
    {
        const bool branch_taken_0x16f53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F53Cu;
        // 0x16f540: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f53c) {
            ctx->pc = 0x16F588u;
            goto label_16f588;
        }
    }
    ctx->pc = 0x16F544u;
    // 0x16f544: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x16F544u;
    SET_GPR_U32(ctx, 31, 0x16F54Cu);
    ctx->pc = 0x16F548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F544u;
    // 0x16f548: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x16F544u, 0x16F54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F54Cu;
label_16f54c:
    // 0x16f54c: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x16f54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x16f550: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x16F550u;
    SET_GPR_U32(ctx, 31, 0x16F558u);
    ctx->pc = 0x16F554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F550u;
    // 0x16f554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x16F550u, 0x16F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F558u;
label_16f558:
    // 0x16f558: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16F558u;
    {
        const bool branch_taken_0x16f558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F558u;
        // 0x16f55c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f558) {
            ctx->pc = 0x16F57Cu;
            goto label_16f57c;
        }
    }
    ctx->pc = 0x16F560u;
    // 0x16f560: 0xc05bd48  jal         func_16F520
    ctx->pc = 0x16F560u;
    SET_GPR_U32(ctx, 31, 0x16F568u);
    ctx->pc = 0x16F564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F560u;
    // 0x16f564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F520u, 0x16F560u, 0x16F568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F568u;
label_16f568:
    // 0x16f568: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f56c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16F56Cu;
    SET_GPR_U32(ctx, 31, 0x16F574u);
    ctx->pc = 0x16F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F56Cu;
    // 0x16f570: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16F56Cu, 0x16F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F574u;
label_16f574:
    // 0x16f574: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16F574u;
    {
        const bool branch_taken_0x16f574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F574u;
        // 0x16f578: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f574) {
            ctx->pc = 0x16F588u;
            goto label_16f588;
        }
    }
    ctx->pc = 0x16F57Cu;
label_16f57c:
    // 0x16f57c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x16F57Cu;
    SET_GPR_U32(ctx, 31, 0x16F584u);
    ctx->pc = 0x16F580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F57Cu;
    // 0x16f580: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x16F57Cu, 0x16F584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F584u;
label_16f584:
    // 0x16f584: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f588:
    // 0x16f588: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16f588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f58c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16f58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f590: 0x3e00008  jr          $ra
    ctx->pc = 0x16F590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F590u;
        // 0x16f594: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F598u;
}
