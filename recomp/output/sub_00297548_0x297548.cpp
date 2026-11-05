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

// Function: sub_00297548
// Address: 0x297548 - 0x2975a8
void sub_00297548_0x297548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297548_0x297548");
#endif

    switch (ctx->pc) {
        case 0x29756cu: goto label_29756c;
        case 0x297580u: goto label_297580;
        case 0x297590u: goto label_297590;
        default: break;
    }

    ctx->pc = 0x297548u;

    // 0x297548: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x297548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29754c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297550: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x297550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x297554: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x297554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297558: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x297558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29755c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x297560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297564: 0xc0d757c  jal         func_35D5F0
    ctx->pc = 0x297564u;
    SET_GPR_U32(ctx, 31, 0x29756Cu);
    ctx->pc = 0x297568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297564u;
    // 0x297568: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5F0u, 0x297564u, 0x29756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29756Cu;
label_29756c:
    // 0x29756c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297570: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297570u;
    {
        const bool branch_taken_0x297570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x297574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297570u;
        // 0x297574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297570) {
            ctx->pc = 0x297588u;
            goto label_297588;
        }
    }
    ctx->pc = 0x297578u;
    // 0x297578: 0xc0a5da8  jal         func_2976A0
    ctx->pc = 0x297578u;
    SET_GPR_U32(ctx, 31, 0x297580u);
    ctx->pc = 0x29757Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297578u;
    // 0x29757c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2976A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2976A0u, 0x297578u, 0x297580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297580u;
label_297580:
    // 0x297580: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297580u;
    {
        const bool branch_taken_0x297580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297580u;
        // 0x297584: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297580) {
            ctx->pc = 0x297594u;
            goto label_297594;
        }
    }
    ctx->pc = 0x297588u;
label_297588:
    // 0x297588: 0xc0a5f16  jal         func_297C58
    ctx->pc = 0x297588u;
    SET_GPR_U32(ctx, 31, 0x297590u);
    ctx->pc = 0x29758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297588u;
    // 0x29758c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C58u, 0x297588u, 0x297590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297590u;
label_297590:
    // 0x297590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297594:
    // 0x297594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x297594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x297598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29759c: 0x3e00008  jr          $ra
    ctx->pc = 0x29759Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2975A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29759Cu;
        // 0x2975a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29759Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2975A4u;
    // 0x2975a4: 0x0  nop
    ctx->pc = 0x2975a4u;
    // NOP
    ctx->pc = 0x2975a8u;
}
