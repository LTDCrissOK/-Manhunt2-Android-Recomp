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

// Function: sub_0027A198
// Address: 0x27a198 - 0x27a1f0
void sub_0027A198_0x27a198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A198_0x27a198");
#endif

    switch (ctx->pc) {
        case 0x27a1c0u: goto label_27a1c0;
        case 0x27a1dcu: goto label_27a1dc;
        default: break;
    }

    ctx->pc = 0x27a198u;

    // 0x27a198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a19c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x27a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x27a1a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27a1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27a1a4: 0x24422c28  addiu       $v0, $v0, 0x2C28
    ctx->pc = 0x27a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11304));
    // 0x27a1a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27a1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27a1ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27a1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a1b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27a1b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a1b8: 0xc09e8e4  jal         func_27A390
    ctx->pc = 0x27A1B8u;
    SET_GPR_U32(ctx, 31, 0x27A1C0u);
    ctx->pc = 0x27A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A1B8u;
    // 0x27a1bc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A390u, 0x27A1B8u, 0x27A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1C0u;
label_27a1c0:
    // 0x27a1c0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x27a1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x27a1c4: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x27a1c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x27a1c8: 0x24422c60  addiu       $v0, $v0, 0x2C60
    ctx->pc = 0x27a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11360));
    // 0x27a1cc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27A1CCu;
    {
        const bool branch_taken_0x27a1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1CCu;
        // 0x27a1d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1cc) {
            ctx->pc = 0x27A1DCu;
            goto label_27a1dc;
        }
    }
    ctx->pc = 0x27A1D4u;
    // 0x27a1d4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x27A1D4u;
    SET_GPR_U32(ctx, 31, 0x27A1DCu);
    ctx->pc = 0x27A1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A1D4u;
    // 0x27a1d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x27A1D4u, 0x27A1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A1DCu;
label_27a1dc:
    // 0x27a1dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27a1dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27a1e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27a1e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27a1e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x27A1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1E8u;
        // 0x27a1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A1F0u;
}
