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

// Function: sub_0011AB68
// Address: 0x11ab68 - 0x11abd0
void sub_0011AB68_0x11ab68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AB68_0x11ab68");
#endif

    switch (ctx->pc) {
        case 0x11ab88u: goto label_11ab88;
        case 0x11ab90u: goto label_11ab90;
        default: break;
    }

    ctx->pc = 0x11ab68u;

    // 0x11ab68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11ab68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11ab6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11ab6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11ab70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11ab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11ab74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11ab74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ab7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ab7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11ab80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab84: 0x0  nop
    ctx->pc = 0x11ab84u;
    // NOP
label_11ab88:
    // 0x11ab88: 0xc046af4  jal         func_11ABD0
    ctx->pc = 0x11AB88u;
    SET_GPR_U32(ctx, 31, 0x11AB90u);
    ctx->pc = 0x11AB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB88u;
    // 0x11ab8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11ABD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11ABD0u, 0x11AB88u, 0x11AB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB90u;
label_11ab90:
    // 0x11ab90: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x11ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11ab94: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x11ab94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11ab98: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x11ab98u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11ab9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11AB9Cu;
    {
        const bool branch_taken_0x11ab9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB9Cu;
        // 0x11aba0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ab9c) {
            ctx->pc = 0x11AB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ab88;
        }
    }
    ctx->pc = 0x11ABA4u;
    // 0x11aba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11aba8: 0xa2201213  sb          $zero, 0x1213($s1)
    ctx->pc = 0x11aba8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4627), (uint8_t)GPR_U32(ctx, 0));
    // 0x11abac: 0xa2221211  sb          $v0, 0x1211($s1)
    ctx->pc = 0x11abacu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4625), (uint8_t)GPR_U32(ctx, 2));
    // 0x11abb0: 0xa2201210  sb          $zero, 0x1210($s1)
    ctx->pc = 0x11abb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4624), (uint8_t)GPR_U32(ctx, 0));
    // 0x11abb4: 0xa2201212  sb          $zero, 0x1212($s1)
    ctx->pc = 0x11abb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4626), (uint8_t)GPR_U32(ctx, 0));
    // 0x11abb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11abb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11abbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11abbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11abc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11abc4: 0x3e00008  jr          $ra
    ctx->pc = 0x11ABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ABC4u;
        // 0x11abc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ABC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ABCCu;
    // 0x11abcc: 0x0  nop
    ctx->pc = 0x11abccu;
    // NOP
    ctx->pc = 0x11abd0u;
}
