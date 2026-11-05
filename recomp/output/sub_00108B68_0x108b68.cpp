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

// Function: sub_00108B68
// Address: 0x108b68 - 0x108bc0
void sub_00108B68_0x108b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108B68_0x108b68");
#endif

    switch (ctx->pc) {
        case 0x108b8cu: goto label_108b8c;
        case 0x108ba8u: goto label_108ba8;
        default: break;
    }

    ctx->pc = 0x108b68u;

    // 0x108b68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x108b6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108b70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108b74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x108b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x108b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b84: 0xc045edc  jal         func_117B70
    ctx->pc = 0x108B84u;
    SET_GPR_U32(ctx, 31, 0x108B8Cu);
    ctx->pc = 0x108B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108B84u;
    // 0x108b88: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x108B84u, 0x108B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108B8Cu;
label_108b8c:
    // 0x108b8c: 0x92020045  lbu         $v0, 0x45($s0)
    ctx->pc = 0x108b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x108b90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x108b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x108b98: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x108b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x108b9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x108b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108ba0: 0xc046164  jal         func_118590
    ctx->pc = 0x108BA0u;
    SET_GPR_U32(ctx, 31, 0x108BA8u);
    ctx->pc = 0x108BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108BA0u;
    // 0x108ba4: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118590u, 0x108BA0u, 0x108BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108BA8u;
label_108ba8:
    // 0x108ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108bb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x108bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x108BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108BB4u;
        // 0x108bb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108BBCu;
    // 0x108bbc: 0x0  nop
    ctx->pc = 0x108bbcu;
    // NOP
    ctx->pc = 0x108bc0u;
}
