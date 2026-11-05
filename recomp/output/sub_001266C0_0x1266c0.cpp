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

// Function: sub_001266C0
// Address: 0x1266c0 - 0x126718
void sub_001266C0_0x1266c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001266C0_0x1266c0");
#endif

    switch (ctx->pc) {
        case 0x1266e0u: goto label_1266e0;
        case 0x1266e8u: goto label_1266e8;
        default: break;
    }

    ctx->pc = 0x1266c0u;

    // 0x1266c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1266c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1266c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1266c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1266c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1266c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1266cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1266ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1266d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1266d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1266d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1266d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1266dc: 0x0  nop
    ctx->pc = 0x1266dcu;
    // NOP
label_1266e0:
    // 0x1266e0: 0xc0499c6  jal         func_126718
    ctx->pc = 0x1266E0u;
    SET_GPR_U32(ctx, 31, 0x1266E8u);
    ctx->pc = 0x1266E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1266E0u;
    // 0x1266e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126718u, 0x1266E0u, 0x1266E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266E8u;
label_1266e8:
    // 0x1266e8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1266e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1266ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1266ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1266f0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x1266f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1266f4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1266F4u;
    {
        const bool branch_taken_0x1266f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1266F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1266F4u;
        // 0x1266f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1266f4) {
            ctx->pc = 0x1266E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1266e0;
        }
    }
    ctx->pc = 0x1266FCu;
    // 0x1266fc: 0xa2200300  sb          $zero, 0x300($s1)
    ctx->pc = 0x1266fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 768), (uint8_t)GPR_U32(ctx, 0));
    // 0x126700: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126700u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126704: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x126708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12670c: 0x3e00008  jr          $ra
    ctx->pc = 0x12670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12670Cu;
        // 0x126710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126714u;
    // 0x126714: 0x0  nop
    ctx->pc = 0x126714u;
    // NOP
    ctx->pc = 0x126718u;
}
