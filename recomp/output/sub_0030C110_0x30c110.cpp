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

// Function: sub_0030C110
// Address: 0x30c110 - 0x30c170
void sub_0030C110_0x30c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C110_0x30c110");
#endif

    switch (ctx->pc) {
        case 0x30c130u: goto label_30c130;
        case 0x30c158u: goto label_30c158;
        default: break;
    }

    ctx->pc = 0x30c110u;

    // 0x30c110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c118: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30c11c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c120: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30c120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c124: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30c124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30c128: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x30C128u;
    SET_GPR_U32(ctx, 31, 0x30C130u);
    ctx->pc = 0x30C12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C128u;
    // 0x30c12c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x30C128u, 0x30C130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C130u;
label_30c130:
    // 0x30c130: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x30c130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x30c134: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x30c134u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x30c138: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x30c138u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x30c13c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c140: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x30c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x30c144: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x30c144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x30c148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30c148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30c14c: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x30c14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
    // 0x30c150: 0xc07508c  jal         func_1D4230
    ctx->pc = 0x30C150u;
    SET_GPR_U32(ctx, 31, 0x30C158u);
    ctx->pc = 0x30C154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C150u;
    // 0x30c154: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4230u, 0x30C150u, 0x30C158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C158u;
label_30c158:
    // 0x30c158: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c158u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c15c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30c15cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c160: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c164: 0x3e00008  jr          $ra
    ctx->pc = 0x30C164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C164u;
        // 0x30c168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C16Cu;
    // 0x30c16c: 0x0  nop
    ctx->pc = 0x30c16cu;
    // NOP
    ctx->pc = 0x30c170u;
}
