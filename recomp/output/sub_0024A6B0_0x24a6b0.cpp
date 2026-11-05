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

// Function: sub_0024A6B0
// Address: 0x24a6b0 - 0x24a700
void sub_0024A6B0_0x24a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A6B0_0x24a6b0");
#endif

    switch (ctx->pc) {
        case 0x24a6b0u: goto label_24a6b0;
        case 0x24a6b4u: goto label_24a6b4;
        case 0x24a6b8u: goto label_24a6b8;
        case 0x24a6bcu: goto label_24a6bc;
        case 0x24a6c0u: goto label_24a6c0;
        case 0x24a6c4u: goto label_24a6c4;
        case 0x24a6c8u: goto label_24a6c8;
        case 0x24a6ccu: goto label_24a6cc;
        case 0x24a6d0u: goto label_24a6d0;
        case 0x24a6d4u: goto label_24a6d4;
        case 0x24a6d8u: goto label_24a6d8;
        case 0x24a6dcu: goto label_24a6dc;
        case 0x24a6e0u: goto label_24a6e0;
        case 0x24a6e4u: goto label_24a6e4;
        case 0x24a6e8u: goto label_24a6e8;
        case 0x24a6ecu: goto label_24a6ec;
        case 0x24a6f0u: goto label_24a6f0;
        case 0x24a6f4u: goto label_24a6f4;
        case 0x24a6f8u: goto label_24a6f8;
        case 0x24a6fcu: goto label_24a6fc;
        default: break;
    }

    ctx->pc = 0x24a6b0u;

label_24a6b0:
    // 0x24a6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24a6b4:
    // 0x24a6b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24a6b8:
    // 0x24a6b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_24a6bc:
    // 0x24a6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24a6c0:
    // 0x24a6c0: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x24a6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24a6c4:
    // 0x24a6c4: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x24a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24a6c8:
    // 0x24a6c8: 0x40f809  jalr        $v0
label_24a6cc:
    if (ctx->pc == 0x24A6CCu) {
        ctx->pc = 0x24A6D0u;
        goto label_24a6d0;
    }
    ctx->pc = 0x24A6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A6D0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A6C8u, 0x24A6D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24A6D0u;
label_24a6d0:
    // 0x24a6d0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24a6d4:
    // 0x24a6d4: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x24a6d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_24a6d8:
    // 0x24a6d8: 0xc069712  jal         func_1A5C48
label_24a6dc:
    if (ctx->pc == 0x24A6DCu) {
        ctx->pc = 0x24A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6D8u;
        // 0x24a6dc: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A6E0u;
        goto label_24a6e0;
    }
    ctx->pc = 0x24A6D8u;
    SET_GPR_U32(ctx, 31, 0x24A6E0u);
    ctx->pc = 0x24A6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6D8u;
    // 0x24a6dc: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A6D8u, 0x24A6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6E0u;
label_24a6e0:
    // 0x24a6e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a6e4:
    // 0x24a6e4: 0xc092760  jal         func_249D80
label_24a6e8:
    if (ctx->pc == 0x24A6E8u) {
        ctx->pc = 0x24A6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6E4u;
        // 0x24a6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A6ECu;
        goto label_24a6ec;
    }
    ctx->pc = 0x24A6E4u;
    SET_GPR_U32(ctx, 31, 0x24A6ECu);
    ctx->pc = 0x24A6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A6E4u;
    // 0x24a6e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D80u, 0x24A6E4u, 0x24A6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A6ECu;
label_24a6ec:
    // 0x24a6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a6f0:
    // 0x24a6f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24a6f4:
    // 0x24a6f4: 0x3e00008  jr          $ra
label_24a6f8:
    if (ctx->pc == 0x24A6F8u) {
        ctx->pc = 0x24A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6F4u;
        // 0x24a6f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24A6FCu;
        goto label_24a6fc;
    }
    ctx->pc = 0x24A6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A6F4u;
        // 0x24a6f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A6FCu;
label_24a6fc:
    // 0x24a6fc: 0x0  nop
    ctx->pc = 0x24a6fcu;
    // NOP
    ctx->pc = 0x24a700u;
}
