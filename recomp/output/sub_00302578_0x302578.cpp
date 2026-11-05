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

// Function: sub_00302578
// Address: 0x302578 - 0x3025d0
void sub_00302578_0x302578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00302578_0x302578");
#endif

    switch (ctx->pc) {
        case 0x302588u: goto label_302588;
        case 0x3025a0u: goto label_3025a0;
        case 0x3025b0u: goto label_3025b0;
        case 0x3025c4u: goto label_3025c4;
        default: break;
    }

    ctx->pc = 0x302578u;

    // 0x302578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x302578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30257c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30257cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x302580: 0xc0d0566  jal         func_341598
    ctx->pc = 0x302580u;
    SET_GPR_U32(ctx, 31, 0x302588u);
    ctx->pc = 0x302584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302580u;
    // 0x302584: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341598u, 0x302580u, 0x302588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302588u;
label_302588:
    // 0x302588: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x302588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30258c: 0x9043971c  lbu         $v1, -0x68E4($v0)
    ctx->pc = 0x30258cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F971Cu));
    // 0x302590: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x302590u;
    {
        const bool branch_taken_0x302590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x302594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x302590u;
        // 0x302594: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x302590) {
            ctx->pc = 0x3025B0u;
            goto label_3025b0;
        }
    }
    ctx->pc = 0x302598u;
    // 0x302598: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x302598u;
    SET_GPR_U32(ctx, 31, 0x3025A0u);
    ctx->pc = 0x30259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302598u;
    // 0x30259c: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x302598u, 0x3025A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025A0u;
label_3025a0:
    // 0x3025a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3025A0u;
    {
        const bool branch_taken_0x3025a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3025a0) {
            ctx->pc = 0x3025B0u;
            goto label_3025b0;
        }
    }
    ctx->pc = 0x3025A8u;
    // 0x3025a8: 0xc089f20  jal         func_227C80
    ctx->pc = 0x3025A8u;
    SET_GPR_U32(ctx, 31, 0x3025B0u);
    ctx->pc = 0x227C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C80u, 0x3025A8u, 0x3025B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025B0u;
label_3025b0:
    // 0x3025b0: 0x3c013b58  lui         $at, 0x3B58
    ctx->pc = 0x3025b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15192 << 16));
    // 0x3025b4: 0x342144d0  ori         $at, $at, 0x44D0
    ctx->pc = 0x3025b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)17616);
    // 0x3025b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3025b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3025bc: 0xc0d0574  jal         func_3415D0
    ctx->pc = 0x3025BCu;
    SET_GPR_U32(ctx, 31, 0x3025C4u);
    ctx->pc = 0x3415D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3415D0u, 0x3025BCu, 0x3025C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3025C4u;
label_3025c4:
    // 0x3025c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3025c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3025c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3025C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3025CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3025C8u;
        // 0x3025cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3025C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3025D0u;
}
