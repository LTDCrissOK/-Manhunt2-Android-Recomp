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

// Function: sub_0014A758
// Address: 0x14a758 - 0x14a7c0
void sub_0014A758_0x14a758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A758_0x14a758");
#endif

    switch (ctx->pc) {
        case 0x14a76cu: goto label_14a76c;
        case 0x14a77cu: goto label_14a77c;
        case 0x14a78cu: goto label_14a78c;
        case 0x14a79cu: goto label_14a79c;
        case 0x14a7acu: goto label_14a7ac;
        default: break;
    }

    ctx->pc = 0x14a758u;

    // 0x14a758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a75c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a75cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a760: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14a760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14a764: 0xc0529f0  jal         func_14A7C0
    ctx->pc = 0x14A764u;
    SET_GPR_U32(ctx, 31, 0x14A76Cu);
    ctx->pc = 0x14A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A764u;
    // 0x14a768: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7C0u, 0x14A764u, 0x14A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A76Cu;
label_14a76c:
    // 0x14a76c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x14A76Cu;
    {
        const bool branch_taken_0x14a76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a76c) {
            ctx->pc = 0x14A770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A76Cu;
            // 0x14a770: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A774u;
    // 0x14a774: 0xc0529f8  jal         func_14A7E0
    ctx->pc = 0x14A774u;
    SET_GPR_U32(ctx, 31, 0x14A77Cu);
    ctx->pc = 0x14A778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A774u;
    // 0x14a778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A7E0u, 0x14A774u, 0x14A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A77Cu;
label_14a77c:
    // 0x14a77c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x14A77Cu;
    {
        const bool branch_taken_0x14a77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a77c) {
            ctx->pc = 0x14A780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A77Cu;
            // 0x14a780: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A784u;
    // 0x14a784: 0xc052a14  jal         func_14A850
    ctx->pc = 0x14A784u;
    SET_GPR_U32(ctx, 31, 0x14A78Cu);
    ctx->pc = 0x14A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A784u;
    // 0x14a788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A850u, 0x14A784u, 0x14A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A78Cu;
label_14a78c:
    // 0x14a78c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14A78Cu;
    {
        const bool branch_taken_0x14a78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a78c) {
            ctx->pc = 0x14A790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A78Cu;
            // 0x14a790: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A794u;
    // 0x14a794: 0xc052a3c  jal         func_14A8F0
    ctx->pc = 0x14A794u;
    SET_GPR_U32(ctx, 31, 0x14A79Cu);
    ctx->pc = 0x14A798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A794u;
    // 0x14a798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A8F0u, 0x14A794u, 0x14A79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A79Cu;
label_14a79c:
    // 0x14a79c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14A79Cu;
    {
        const bool branch_taken_0x14a79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a79c) {
            ctx->pc = 0x14A7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A79Cu;
            // 0x14a7a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A7B0u;
            goto label_14a7b0;
        }
    }
    ctx->pc = 0x14A7A4u;
    // 0x14a7a4: 0xc052a6c  jal         func_14A9B0
    ctx->pc = 0x14A7A4u;
    SET_GPR_U32(ctx, 31, 0x14A7ACu);
    ctx->pc = 0x14A7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A7A4u;
    // 0x14a7a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A9B0u, 0x14A7A4u, 0x14A7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A7ACu;
label_14a7ac:
    // 0x14a7ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a7acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14a7b0:
    // 0x14a7b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x14A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A7B4u;
        // 0x14a7b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A7BCu;
    // 0x14a7bc: 0x0  nop
    ctx->pc = 0x14a7bcu;
    // NOP
    ctx->pc = 0x14a7c0u;
}
