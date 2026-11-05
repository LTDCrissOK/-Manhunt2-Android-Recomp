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

// Function: sub_00202790
// Address: 0x202790 - 0x2027e8
void sub_00202790_0x202790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202790_0x202790");
#endif

    switch (ctx->pc) {
        case 0x2027c8u: goto label_2027c8;
        default: break;
    }

    ctx->pc = 0x202790u;

    // 0x202790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202794: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x202794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x202798: 0x2482045c  addiu       $v0, $a0, 0x45C
    ctx->pc = 0x202798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1116));
    // 0x20279c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20279cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2027a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2027a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2027a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2027a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2027a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2027a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2027ac: 0x458021  addu        $s0, $v0, $a1
    ctx->pc = 0x2027acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2027b0: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x2027b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x2027b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2027b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2027b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2027B8u;
    {
        const bool branch_taken_0x2027b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2027BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027B8u;
        // 0x2027bc: 0x858821  addu        $s1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2027b8) {
            ctx->pc = 0x2027C8u;
            goto label_2027c8;
        }
    }
    ctx->pc = 0x2027C0u;
    // 0x2027c0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x2027C0u;
    SET_GPR_U32(ctx, 31, 0x2027C8u);
    ctx->pc = 0x2027C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2027C0u;
    // 0x2027c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2027C0u, 0x2027C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2027C8u;
label_2027c8:
    // 0x2027c8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2027c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2027cc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2027ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x2027d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2027d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2027d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2027d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2027d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2027d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2027dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2027DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2027E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2027DCu;
        // 0x2027e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2027DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2027E4u;
    // 0x2027e4: 0x0  nop
    ctx->pc = 0x2027e4u;
    // NOP
    ctx->pc = 0x2027e8u;
}
