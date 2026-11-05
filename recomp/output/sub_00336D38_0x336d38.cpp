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

// Function: sub_00336D38
// Address: 0x336d38 - 0x336de8
void sub_00336D38_0x336d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336D38_0x336d38");
#endif

    switch (ctx->pc) {
        case 0x336d98u: goto label_336d98;
        case 0x336db8u: goto label_336db8;
        default: break;
    }

    ctx->pc = 0x336d38u;

    // 0x336d38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x336d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x336d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x336d40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x336d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x336d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d48: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x336d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x336d4c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x336d4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x336d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x336d54: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x336d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d58: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x336d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x336d5c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x336d5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d60: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x336d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x336d64: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x336d64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d68: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x336d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x336d6c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x336d6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d70: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x336d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x336d74: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x336d74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d78: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x336d78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x336d7c: 0x26040490  addiu       $a0, $s0, 0x490
    ctx->pc = 0x336d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1168));
    // 0x336d80: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x336d80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x336d84: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x336d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x336d88: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x336d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x336d8c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x336d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x336d90: 0xc0d75dc  jal         func_35D770
    ctx->pc = 0x336D90u;
    SET_GPR_U32(ctx, 31, 0x336D98u);
    ctx->pc = 0x336D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336D90u;
    // 0x336d94: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D770u, 0x336D90u, 0x336D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336D98u;
label_336d98:
    // 0x336d98: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x336d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336d9c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x336d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336da0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x336da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336da4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x336da4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336da8: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x336da8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336dac: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x336dacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336db0: 0xc0cdb98  jal         func_336E60
    ctx->pc = 0x336DB0u;
    SET_GPR_U32(ctx, 31, 0x336DB8u);
    ctx->pc = 0x336DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336DB0u;
    // 0x336db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336E60u, 0x336DB0u, 0x336DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336DB8u;
label_336db8:
    // 0x336db8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x336db8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x336dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336dc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336dc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x336dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336dcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x336dccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336dd0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x336dd0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x336dd4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x336dd4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336dd8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x336dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x336ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x336DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336DDCu;
        // 0x336de0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336DE4u;
    // 0x336de4: 0x0  nop
    ctx->pc = 0x336de4u;
    // NOP
    ctx->pc = 0x336de8u;
}
