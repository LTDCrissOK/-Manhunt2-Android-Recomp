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

// Function: sub_0016FF70
// Address: 0x16ff70 - 0x16ffd8
void sub_0016FF70_0x16ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FF70_0x16ff70");
#endif

    switch (ctx->pc) {
        case 0x16ff90u: goto label_16ff90;
        case 0x16ff9cu: goto label_16ff9c;
        case 0x16ffb0u: goto label_16ffb0;
        case 0x16ffc0u: goto label_16ffc0;
        default: break;
    }

    ctx->pc = 0x16ff70u;

    // 0x16ff70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16ff74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ff74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ff78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16ff7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ff7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16ff80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ff88: 0xc04621e  jal         func_118878
    ctx->pc = 0x16FF88u;
    SET_GPR_U32(ctx, 31, 0x16FF90u);
    ctx->pc = 0x16FF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF88u;
    // 0x16ff8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118878u, 0x16FF88u, 0x16FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF90u;
label_16ff90:
    // 0x16ff90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ff94: 0xc05a63a  jal         func_1698E8
    ctx->pc = 0x16FF94u;
    SET_GPR_U32(ctx, 31, 0x16FF9Cu);
    ctx->pc = 0x16FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FF94u;
    // 0x16ff98: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1698E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1698E8u, 0x16FF94u, 0x16FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF9Cu;
label_16ff9c:
    // 0x16ff9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ffa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ffa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffa4: 0xa2020069  sb          $v0, 0x69($s0)
    ctx->pc = 0x16ffa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 2));
    // 0x16ffa8: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x16FFA8u;
    SET_GPR_U32(ctx, 31, 0x16FFB0u);
    ctx->pc = 0x16FFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFA8u;
    // 0x16ffac: 0xa2030068  sb          $v1, 0x68($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x16FFA8u, 0x16FFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FFB0u;
label_16ffb0:
    // 0x16ffb0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16ffb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16ffb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16ffb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ffb8: 0xc042136  jal         func_1084D8
    ctx->pc = 0x16FFB8u;
    SET_GPR_U32(ctx, 31, 0x16FFC0u);
    ctx->pc = 0x16FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16FFB8u;
    // 0x16ffbc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x16FFB8u, 0x16FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FFC0u;
label_16ffc0:
    // 0x16ffc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16ffc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ffc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16ffc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16ffc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16ffc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16ffcc: 0x3e00008  jr          $ra
    ctx->pc = 0x16FFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FFCCu;
        // 0x16ffd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FFD4u;
    // 0x16ffd4: 0x0  nop
    ctx->pc = 0x16ffd4u;
    // NOP
    ctx->pc = 0x16ffd8u;
}
