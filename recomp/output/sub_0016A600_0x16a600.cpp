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

// Function: sub_0016A600
// Address: 0x16a600 - 0x16a660
void sub_0016A600_0x16a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A600_0x16a600");
#endif

    switch (ctx->pc) {
        case 0x16a638u: goto label_16a638;
        case 0x16a648u: goto label_16a648;
        default: break;
    }

    ctx->pc = 0x16a600u;

    // 0x16a600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a604: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a608: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a60c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a60cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a610: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a614: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x16a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a618: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x16a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x16a61c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A61Cu;
    {
        const bool branch_taken_0x16a61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A61Cu;
        // 0x16a620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a61c) {
            ctx->pc = 0x16A64Cu;
            goto label_16a64c;
        }
    }
    ctx->pc = 0x16A624u;
    // 0x16a624: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x16a624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x16a628: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A628u;
    {
        const bool branch_taken_0x16a628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A628u;
        // 0x16a62c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a628) {
            ctx->pc = 0x16A64Cu;
            goto label_16a64c;
        }
    }
    ctx->pc = 0x16A630u;
    // 0x16a630: 0xc05abe0  jal         func_16AF80
    ctx->pc = 0x16A630u;
    SET_GPR_U32(ctx, 31, 0x16A638u);
    ctx->pc = 0x16A634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A630u;
    // 0x16a634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF80u, 0x16A630u, 0x16A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A638u;
label_16a638:
    // 0x16a638: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a63c: 0x26250108  addiu       $a1, $s1, 0x108
    ctx->pc = 0x16a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 264));
    // 0x16a640: 0xc046304  jal         func_118C10
    ctx->pc = 0x16A640u;
    SET_GPR_U32(ctx, 31, 0x16A648u);
    ctx->pc = 0x16A644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A640u;
    // 0x16a644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x16A640u, 0x16A648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A648u;
label_16a648:
    // 0x16a648: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a64c:
    // 0x16a64c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a64cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a658: 0x3e00008  jr          $ra
    ctx->pc = 0x16A658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A658u;
        // 0x16a65c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A660u;
}
