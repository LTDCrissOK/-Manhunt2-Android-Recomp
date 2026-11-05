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

// Function: sub_0012C100
// Address: 0x12c100 - 0x12c148
void sub_0012C100_0x12c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C100_0x12c100");
#endif

    switch (ctx->pc) {
        case 0x12c11cu: goto label_12c11c;
        case 0x12c130u: goto label_12c130;
        default: break;
    }

    ctx->pc = 0x12c100u;

    // 0x12c100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12c10c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c114: 0xc04b100  jal         func_12C400
    ctx->pc = 0x12C114u;
    SET_GPR_U32(ctx, 31, 0x12C11Cu);
    ctx->pc = 0x12C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C114u;
    // 0x12c118: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C400u, 0x12C114u, 0x12C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C11Cu;
label_12c11c:
    // 0x12c11c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12c120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c124: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12c124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12c128: 0xc05f52a  jal         func_17D4A8
    ctx->pc = 0x12C128u;
    SET_GPR_U32(ctx, 31, 0x12C130u);
    ctx->pc = 0x12C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C128u;
    // 0x12c12c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4A8u, 0x12C128u, 0x12C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C130u;
label_12c130:
    // 0x12c130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12c134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12c138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c13c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C13Cu;
        // 0x12c140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C144u;
    // 0x12c144: 0x0  nop
    ctx->pc = 0x12c144u;
    // NOP
    ctx->pc = 0x12c148u;
}
