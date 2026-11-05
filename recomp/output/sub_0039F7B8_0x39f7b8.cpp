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

// Function: sub_0039F7B8
// Address: 0x39f7b8 - 0x39f810
void sub_0039F7B8_0x39f7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F7B8_0x39f7b8");
#endif

    switch (ctx->pc) {
        case 0x39f7f0u: goto label_39f7f0;
        default: break;
    }

    ctx->pc = 0x39f7b8u;

    // 0x39f7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39f7bc: 0x28a20021  slti        $v0, $a1, 0x21
    ctx->pc = 0x39f7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x39f7c0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39F7C0u;
    {
        const bool branch_taken_0x39f7c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7C0u;
        // 0x39f7c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7c0) {
            ctx->pc = 0x39F7D8u;
            goto label_39f7d8;
        }
    }
    ctx->pc = 0x39F7C8u;
    // 0x39f7c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39f7cc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x39F7CCu;
    {
        const bool branch_taken_0x39f7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7CCu;
        // 0x39f7d0: 0x2484bf98  addiu       $a0, $a0, -0x4068 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7cc) {
            ctx->pc = 0x39F7E8u;
            goto label_39f7e8;
        }
    }
    ctx->pc = 0x39F7D4u;
    // 0x39f7d4: 0x0  nop
    ctx->pc = 0x39f7d4u;
    // NOP
label_39f7d8:
    // 0x39f7d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39F7D8u;
    {
        const bool branch_taken_0x39f7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7D8u;
        // 0x39f7dc: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7d8) {
            ctx->pc = 0x39F7F8u;
            goto label_39f7f8;
        }
    }
    ctx->pc = 0x39F7E0u;
    // 0x39f7e0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39f7e4: 0x2484bfc0  addiu       $a0, $a0, -0x4040
    ctx->pc = 0x39f7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950848));
label_39f7e8:
    // 0x39f7e8: 0xc0ecbf4  jal         func_3B2FD0
    ctx->pc = 0x39F7E8u;
    SET_GPR_U32(ctx, 31, 0x39F7F0u);
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x39F7E8u, 0x39F7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F7F0u;
label_39f7f0:
    // 0x39f7f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39F7F0u;
    {
        const bool branch_taken_0x39f7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F7F0u;
        // 0x39f7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f7f0) {
            ctx->pc = 0x39F800u;
            goto label_39f800;
        }
    }
    ctx->pc = 0x39F7F8u;
label_39f7f8:
    // 0x39f7f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x39f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x39f7fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39f800:
    // 0x39f800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39f800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f804: 0x3e00008  jr          $ra
    ctx->pc = 0x39F804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F804u;
        // 0x39f808: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F80Cu;
    // 0x39f80c: 0x0  nop
    ctx->pc = 0x39f80cu;
    // NOP
    ctx->pc = 0x39f810u;
}
