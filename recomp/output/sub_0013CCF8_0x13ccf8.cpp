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

// Function: sub_0013CCF8
// Address: 0x13ccf8 - 0x13cd58
void sub_0013CCF8_0x13ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CCF8_0x13ccf8");
#endif

    switch (ctx->pc) {
        case 0x13cd1cu: goto label_13cd1c;
        default: break;
    }

    ctx->pc = 0x13ccf8u;

    // 0x13ccf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ccf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ccfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13ccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13cd00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13cd00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13cd08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13cd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13cd0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13cd0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13cd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x13cd14: 0xc04f40a  jal         func_13D028
    ctx->pc = 0x13CD14u;
    SET_GPR_U32(ctx, 31, 0x13CD1Cu);
    ctx->pc = 0x13CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CD14u;
    // 0x13cd18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D028u, 0x13CD14u, 0x13CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CD1Cu;
label_13cd1c:
    // 0x13cd1c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13cd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13cd20: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x13cd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13cd24: 0x2021821  addu        $v1, $s0, $v0
    ctx->pc = 0x13cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13cd28: 0xac710228  sw          $s1, 0x228($v1)
    ctx->pc = 0x13cd28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 17));
    // 0x13cd2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13cd2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cd30: 0xac52022c  sw          $s2, 0x22C($v0)
    ctx->pc = 0x13cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 556), GPR_U32(ctx, 18));
    // 0x13cd34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13cd34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13cd38: 0x920202a8  lbu         $v0, 0x2A8($s0)
    ctx->pc = 0x13cd38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 680)));
    // 0x13cd3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13cd3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cd40: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13cd44: 0xa20202a8  sb          $v0, 0x2A8($s0)
    ctx->pc = 0x13cd44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 2));
    // 0x13cd48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13cd48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13cd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x13CD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CD4Cu;
        // 0x13cd50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CD54u;
    // 0x13cd54: 0x0  nop
    ctx->pc = 0x13cd54u;
    // NOP
    ctx->pc = 0x13cd58u;
}
