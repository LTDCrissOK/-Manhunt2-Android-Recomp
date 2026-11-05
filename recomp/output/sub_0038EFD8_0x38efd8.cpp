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

// Function: sub_0038EFD8
// Address: 0x38efd8 - 0x38f028
void sub_0038EFD8_0x38efd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EFD8_0x38efd8");
#endif

    switch (ctx->pc) {
        case 0x38efecu: goto label_38efec;
        default: break;
    }

    ctx->pc = 0x38efd8u;

    // 0x38efd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38efd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38efdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38efdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38efe0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38efe4: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38EFE4u;
    SET_GPR_U32(ctx, 31, 0x38EFECu);
    ctx->pc = 0x38EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EFE4u;
    // 0x38efe8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38EFE4u, 0x38EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EFECu;
label_38efec:
    // 0x38efec: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38efecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38eff0: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x38eff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x38eff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x38eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x38eff8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x38eff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x38effc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x38effcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x38f000: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x38f000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x38f004: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F004u;
    {
        const bool branch_taken_0x38f004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F004u;
        // 0x38f008: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f004) {
            ctx->pc = 0x38F01Cu;
            goto label_38f01c;
        }
    }
    ctx->pc = 0x38F00Cu;
    // 0x38f00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38f00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38f010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f014: 0x80e3b9c  j           func_38EE70
    ctx->pc = 0x38F014u;
    ctx->pc = 0x38F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38F014u;
    // 0x38f018: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE70u;
    sub_0038EE70_0x38ee70(rdram, ctx, runtime); return;
    ctx->pc = 0x38F01Cu;
label_38f01c:
    // 0x38f01c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38f01cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38f020: 0x3e00008  jr          $ra
    ctx->pc = 0x38F020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F020u;
        // 0x38f024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F028u;
}
