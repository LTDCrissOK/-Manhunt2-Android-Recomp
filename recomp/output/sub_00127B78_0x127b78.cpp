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

// Function: sub_00127B78
// Address: 0x127b78 - 0x127bd8
void sub_00127B78_0x127b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127B78_0x127b78");
#endif

    switch (ctx->pc) {
        case 0x127b98u: goto label_127b98;
        case 0x127ba8u: goto label_127ba8;
        default: break;
    }

    ctx->pc = 0x127b78u;

    // 0x127b78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x127b7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127b80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127b84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x127b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x127b8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x127b8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b90: 0x102980  sll         $a1, $s0, 6
    ctx->pc = 0x127b90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x127b94: 0x0  nop
    ctx->pc = 0x127b94u;
    // NOP
label_127b98:
    // 0x127b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x127b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127b9c: 0x24a50870  addiu       $a1, $a1, 0x870
    ctx->pc = 0x127b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2160));
    // 0x127ba0: 0xc049ef6  jal         func_127BD8
    ctx->pc = 0x127BA0u;
    SET_GPR_U32(ctx, 31, 0x127BA8u);
    ctx->pc = 0x127BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127BA0u;
    // 0x127ba4: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127BD8u, 0x127BA0u, 0x127BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127BA8u;
label_127ba8:
    // 0x127ba8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x127ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x127bac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x127bacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x127bb0: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x127bb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x127bb4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x127BB4u;
    {
        const bool branch_taken_0x127bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x127bb4) {
            ctx->pc = 0x127BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127BB4u;
            // 0x127bb8: 0x102980  sll         $a1, $s0, 6 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127b98;
        }
    }
    ctx->pc = 0x127BBCu;
    // 0x127bbc: 0xa2200a70  sb          $zero, 0xA70($s1)
    ctx->pc = 0x127bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2672), (uint8_t)GPR_U32(ctx, 0));
    // 0x127bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x127bc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x127bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x127BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127BCCu;
        // 0x127bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127BD4u;
    // 0x127bd4: 0x0  nop
    ctx->pc = 0x127bd4u;
    // NOP
    ctx->pc = 0x127bd8u;
}
