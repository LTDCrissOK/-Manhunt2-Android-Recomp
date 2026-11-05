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

// Function: sub_002579E8
// Address: 0x2579e8 - 0x257a28
void sub_002579E8_0x2579e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002579E8_0x2579e8");
#endif

    switch (ctx->pc) {
        case 0x257a00u: goto label_257a00;
        case 0x257a0cu: goto label_257a0c;
        default: break;
    }

    ctx->pc = 0x2579e8u;

    // 0x2579e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2579e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2579ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2579ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2579f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2579f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2579f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2579f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2579f8: 0xc09553c  jal         func_2554F0
    ctx->pc = 0x2579F8u;
    SET_GPR_U32(ctx, 31, 0x257A00u);
    ctx->pc = 0x2579FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2579F8u;
    // 0x2579fc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2554F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2554F0u, 0x2579F8u, 0x257A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A00u;
label_257a00:
    // 0x257a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x257a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a04: 0xc096080  jal         func_258200
    ctx->pc = 0x257A04u;
    SET_GPR_U32(ctx, 31, 0x257A0Cu);
    ctx->pc = 0x257A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x257A04u;
    // 0x257a08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x258200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258200u, 0x257A04u, 0x257A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257A0Cu;
label_257a0c:
    // 0x257a0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x257a0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257a10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x257a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x257a14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257a18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x257A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257A1Cu;
        // 0x257a20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257A1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257A24u;
    // 0x257a24: 0x0  nop
    ctx->pc = 0x257a24u;
    // NOP
    ctx->pc = 0x257a28u;
}
