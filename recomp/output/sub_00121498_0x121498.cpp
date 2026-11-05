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

// Function: sub_00121498
// Address: 0x121498 - 0x1214e8
void sub_00121498_0x121498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121498_0x121498");
#endif

    switch (ctx->pc) {
        case 0x1214b8u: goto label_1214b8;
        case 0x1214ccu: goto label_1214cc;
        default: break;
    }

    ctx->pc = 0x121498u;

    // 0x121498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12149c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12149cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1214a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1214a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1214a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1214a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1214a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1214ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1214acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1214b0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1214B0u;
    SET_GPR_U32(ctx, 31, 0x1214B8u);
    ctx->pc = 0x1214B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1214B0u;
    // 0x1214b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1214B0u, 0x1214B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214B8u;
label_1214b8:
    // 0x1214b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1214B8u;
    {
        const bool branch_taken_0x1214b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1214BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214B8u;
        // 0x1214bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1214b8) {
            ctx->pc = 0x1214D0u;
            goto label_1214d0;
        }
    }
    ctx->pc = 0x1214C0u;
    // 0x1214c0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1214c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1214c4: 0xc04257e  jal         func_1095F8
    ctx->pc = 0x1214C4u;
    SET_GPR_U32(ctx, 31, 0x1214CCu);
    ctx->pc = 0x1214C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1214C4u;
    // 0x1214c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095F8u, 0x1214C4u, 0x1214CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1214CCu;
label_1214cc:
    // 0x1214cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1214ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1214d0:
    // 0x1214d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1214d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1214d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1214d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1214d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1214d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1214dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1214DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1214E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1214DCu;
        // 0x1214e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1214DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1214E4u;
    // 0x1214e4: 0x0  nop
    ctx->pc = 0x1214e4u;
    // NOP
    ctx->pc = 0x1214e8u;
}
