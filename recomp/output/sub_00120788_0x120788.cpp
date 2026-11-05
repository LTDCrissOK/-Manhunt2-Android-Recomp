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

// Function: sub_00120788
// Address: 0x120788 - 0x1207e8
void sub_00120788_0x120788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120788_0x120788");
#endif

    switch (ctx->pc) {
        case 0x1207c4u: goto label_1207c4;
        default: break;
    }

    ctx->pc = 0x120788u;

    // 0x120788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x120788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12078c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12078cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x120790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x120790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x120794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x120794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x120798: 0x90820214  lbu         $v0, 0x214($a0)
    ctx->pc = 0x120798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 532)));
    // 0x12079c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12079Cu;
    {
        const bool branch_taken_0x12079c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12079Cu;
        // 0x1207a0: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12079c) {
            ctx->pc = 0x1207D0u;
            goto label_1207d0;
        }
    }
    ctx->pc = 0x1207A4u;
    // 0x1207a4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1207a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1207a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1207A8u;
    {
        const bool branch_taken_0x1207a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1207ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207A8u;
        // 0x1207ac: 0x2483011c  addiu       $v1, $a0, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207a8) {
            ctx->pc = 0x1207D0u;
            goto label_1207d0;
        }
    }
    ctx->pc = 0x1207B0u;
    // 0x1207b0: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1207b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1207b4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1207b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1207b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1207b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207bc: 0xc048226  jal         func_120898
    ctx->pc = 0x1207BCu;
    SET_GPR_U32(ctx, 31, 0x1207C4u);
    ctx->pc = 0x1207C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1207BCu;
    // 0x1207c0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120898u, 0x1207BCu, 0x1207C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1207C4u;
label_1207c4:
    // 0x1207c4: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x1207c4u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1207c8: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1207C8u;
    {
        const bool branch_taken_0x1207c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1207c8) {
            ctx->pc = 0x1207CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1207C8u;
            // 0x1207cc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1207D0u;
            goto label_1207d0;
        }
    }
    ctx->pc = 0x1207D0u;
label_1207d0:
    // 0x1207d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1207d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1207d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1207d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1207d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1207d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1207dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1207DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1207E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1207DCu;
        // 0x1207e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1207DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1207E4u;
    // 0x1207e4: 0x0  nop
    ctx->pc = 0x1207e4u;
    // NOP
    ctx->pc = 0x1207e8u;
}
