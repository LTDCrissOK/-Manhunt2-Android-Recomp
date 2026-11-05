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

// Function: sub_0016BED0
// Address: 0x16bed0 - 0x16bf20
void sub_0016BED0_0x16bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BED0_0x16bed0");
#endif

    switch (ctx->pc) {
        case 0x16beecu: goto label_16beec;
        case 0x16bf00u: goto label_16bf00;
        default: break;
    }

    ctx->pc = 0x16bed0u;

    // 0x16bed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16bed4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16bed8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16bedc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16bedcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bee0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16bee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16bee4: 0xc05afdc  jal         func_16BF70
    ctx->pc = 0x16BEE4u;
    SET_GPR_U32(ctx, 31, 0x16BEECu);
    ctx->pc = 0x16BEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BEE4u;
    // 0x16bee8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BF70u, 0x16BEE4u, 0x16BEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BEECu;
label_16beec:
    // 0x16beec: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x16BEECu;
    {
        const bool branch_taken_0x16beec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16beec) {
            ctx->pc = 0x16BEF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BEECu;
            // 0x16bef0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BF10u;
            goto label_16bf10;
        }
    }
    ctx->pc = 0x16BEF4u;
    // 0x16bef4: 0xae3001a0  sw          $s0, 0x1A0($s1)
    ctx->pc = 0x16bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 16));
    // 0x16bef8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x16BEF8u;
    SET_GPR_U32(ctx, 31, 0x16BF00u);
    ctx->pc = 0x16BEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BEF8u;
    // 0x16befc: 0x102080  sll         $a0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x16BEF8u, 0x16BF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BF00u;
label_16bf00:
    // 0x16bf00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bf04: 0xae220198  sw          $v0, 0x198($s1)
    ctx->pc = 0x16bf04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 408), GPR_U32(ctx, 2));
    // 0x16bf08: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x16bf08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x16bf0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16bf0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16bf10:
    // 0x16bf10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16bf10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16bf14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16bf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bf18: 0x3e00008  jr          $ra
    ctx->pc = 0x16BF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BF18u;
        // 0x16bf1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BF20u;
}
