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

// Function: sub_003ACD70
// Address: 0x3acd70 - 0x3acde0
void sub_003ACD70_0x3acd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACD70_0x3acd70");
#endif

    switch (ctx->pc) {
        case 0x3acda4u: goto label_3acda4;
        case 0x3acdbcu: goto label_3acdbc;
        default: break;
    }

    ctx->pc = 0x3acd70u;

    // 0x3acd70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3acd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3acd74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3acd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3acd78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3acd78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3acd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3acd80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3acd80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3acd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3acd88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3acd88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3acd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3acd90: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3acd90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acd94: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3acd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3acd98: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3acd98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3acd9c: 0xc0eb26e  jal         func_3AC9B8
    ctx->pc = 0x3ACD9Cu;
    SET_GPR_U32(ctx, 31, 0x3ACDA4u);
    ctx->pc = 0x3ACDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACD9Cu;
    // 0x3acda0: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9B8u, 0x3ACD9Cu, 0x3ACDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDA4u;
label_3acda4:
    // 0x3acda4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3acda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acda8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3acda8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acdac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3acdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acdb0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x3acdb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3acdb4: 0xc0eb378  jal         func_3ACDE0
    ctx->pc = 0x3ACDB4u;
    SET_GPR_U32(ctx, 31, 0x3ACDBCu);
    ctx->pc = 0x3ACDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACDB4u;
    // 0x3acdb8: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACDE0u, 0x3ACDB4u, 0x3ACDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ACDBCu;
label_3acdbc:
    // 0x3acdbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3acdbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3acdc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3acdc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3acdc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3acdc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3acdc8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3acdc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3acdcc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3acdccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3acdd0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3acdd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3acdd4: 0x80eb274  j           func_3AC9D0
    ctx->pc = 0x3ACDD4u;
    ctx->pc = 0x3ACDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ACDD4u;
    // 0x3acdd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9D0u;
    sub_003AC9D0_0x3ac9d0(rdram, ctx, runtime); return;
    ctx->pc = 0x3ACDDCu;
    // 0x3acddc: 0x0  nop
    ctx->pc = 0x3acddcu;
    // NOP
    ctx->pc = 0x3acde0u;
}
