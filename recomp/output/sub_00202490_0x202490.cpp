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

// Function: sub_00202490
// Address: 0x202490 - 0x2024e8
void sub_00202490_0x202490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202490_0x202490");
#endif

    switch (ctx->pc) {
        case 0x2024b0u: goto label_2024b0;
        case 0x2024ccu: goto label_2024cc;
        default: break;
    }

    ctx->pc = 0x202490u;

    // 0x202490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x202498: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x202498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20249c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x20249cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2024a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2024a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2024a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2024a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024a8: 0xc0827c2  jal         func_209F08
    ctx->pc = 0x2024A8u;
    SET_GPR_U32(ctx, 31, 0x2024B0u);
    ctx->pc = 0x2024ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024A8u;
    // 0x2024ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F08u, 0x2024A8u, 0x2024B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2024B0u;
label_2024b0:
    // 0x2024b0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2024b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2024b4: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2024B4u;
    {
        const bool branch_taken_0x2024b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2024b4) {
            ctx->pc = 0x2024B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2024B4u;
            // 0x2024b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2024D0u;
            goto label_2024d0;
        }
    }
    ctx->pc = 0x2024BCu;
    // 0x2024bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2024bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2024c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2024c4: 0xc082794  jal         func_209E50
    ctx->pc = 0x2024C4u;
    SET_GPR_U32(ctx, 31, 0x2024CCu);
    ctx->pc = 0x2024C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024C4u;
    // 0x2024c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209E50u, 0x2024C4u, 0x2024CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2024CCu;
label_2024cc:
    // 0x2024cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2024ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2024d0:
    // 0x2024d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2024d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2024d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2024d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2024d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2024d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2024dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2024DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2024E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024DCu;
        // 0x2024e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2024DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2024E4u;
    // 0x2024e4: 0x0  nop
    ctx->pc = 0x2024e4u;
    // NOP
    ctx->pc = 0x2024e8u;
}
