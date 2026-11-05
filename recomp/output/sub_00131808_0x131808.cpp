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

// Function: sub_00131808
// Address: 0x131808 - 0x131898
void sub_00131808_0x131808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131808_0x131808");
#endif

    switch (ctx->pc) {
        case 0x131844u: goto label_131844;
        case 0x131860u: goto label_131860;
        case 0x131868u: goto label_131868;
        default: break;
    }

    ctx->pc = 0x131808u;

    // 0x131808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x131808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13180c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131818: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x131818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13181c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13181cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131820: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x131820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x131824: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x131824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131828: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x131828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13182c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x13182cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131830: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x131830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x131834: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x131834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131838: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x131838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13183c: 0xc04c756  jal         func_131D58
    ctx->pc = 0x13183Cu;
    SET_GPR_U32(ctx, 31, 0x131844u);
    ctx->pc = 0x131840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13183Cu;
    // 0x131840: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D58u, 0x13183Cu, 0x131844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131844u;
label_131844:
    // 0x131844: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x131844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x131848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13184c: 0xae150004  sw          $s5, 0x4($s0)
    ctx->pc = 0x13184cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 21));
    // 0x131850: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x131850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x131854: 0xae130010  sw          $s3, 0x10($s0)
    ctx->pc = 0x131854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
    // 0x131858: 0xc04c762  jal         func_131D88
    ctx->pc = 0x131858u;
    SET_GPR_U32(ctx, 31, 0x131860u);
    ctx->pc = 0x13185Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131858u;
    // 0x13185c: 0xae140014  sw          $s4, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131D88u, 0x131858u, 0x131860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131860u;
label_131860:
    // 0x131860: 0xc04c780  jal         func_131E00
    ctx->pc = 0x131860u;
    SET_GPR_U32(ctx, 31, 0x131868u);
    ctx->pc = 0x131864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131860u;
    // 0x131864: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E00u, 0x131860u, 0x131868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131868u;
label_131868:
    // 0x131868: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x131868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13186c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13186cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131870: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x131870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x131874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x131878: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x131878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13187c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13187cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x131880: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x131880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131884: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x131884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x131888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x131888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13188c: 0x3e00008  jr          $ra
    ctx->pc = 0x13188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13188Cu;
        // 0x131890: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131894u;
    // 0x131894: 0x0  nop
    ctx->pc = 0x131894u;
    // NOP
    ctx->pc = 0x131898u;
}
