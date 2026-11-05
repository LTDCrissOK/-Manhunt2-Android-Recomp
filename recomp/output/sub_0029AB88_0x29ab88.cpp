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

// Function: sub_0029AB88
// Address: 0x29ab88 - 0x29ac18
void sub_0029AB88_0x29ab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AB88_0x29ab88");
#endif

    switch (ctx->pc) {
        case 0x29abb0u: goto label_29abb0;
        case 0x29abc0u: goto label_29abc0;
        case 0x29abd4u: goto label_29abd4;
        case 0x29abecu: goto label_29abec;
        case 0x29abf8u: goto label_29abf8;
        default: break;
    }

    ctx->pc = 0x29ab88u;

    // 0x29ab88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29ab88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29ab8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29ab90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29ab90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29ab94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29ab94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ab9c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29ab9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29aba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29aba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29aba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29aba8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x29ABA8u;
    SET_GPR_U32(ctx, 31, 0x29ABB0u);
    ctx->pc = 0x29ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABA8u;
    // 0x29abac: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x29ABA8u, 0x29ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABB0u;
label_29abb0:
    // 0x29abb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29abb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29abb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abb8: 0xc0a58d8  jal         func_296360
    ctx->pc = 0x29ABB8u;
    SET_GPR_U32(ctx, 31, 0x29ABC0u);
    ctx->pc = 0x29ABBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABB8u;
    // 0x29abbc: 0x26110078  addiu       $s1, $s0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296360u, 0x29ABB8u, 0x29ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABC0u;
label_29abc0:
    // 0x29abc0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x29abc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x29abc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29abc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abc8: 0x24632fb8  addiu       $v1, $v1, 0x2FB8
    ctx->pc = 0x29abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12216));
    // 0x29abcc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x29ABCCu;
    SET_GPR_U32(ctx, 31, 0x29ABD4u);
    ctx->pc = 0x29ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABCCu;
    // 0x29abd0: 0xae030074  sw          $v1, 0x74($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29ABCCu, 0x29ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABD4u;
label_29abd4:
    // 0x29abd4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29abd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29abd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abdc: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x29abdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x29abe0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x29abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x29abe4: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x29ABE4u;
    SET_GPR_U32(ctx, 31, 0x29ABECu);
    ctx->pc = 0x29ABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABE4u;
    // 0x29abe8: 0xa2000080  sb          $zero, 0x80($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29ABE4u, 0x29ABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABECu;
label_29abec:
    // 0x29abec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29abecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abf0: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x29ABF0u;
    SET_GPR_U32(ctx, 31, 0x29ABF8u);
    ctx->pc = 0x29ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABF0u;
    // 0x29abf4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x29ABF0u, 0x29ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABF8u;
label_29abf8:
    // 0x29abf8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29abf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29abfc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29abfcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ac00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ac00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ac04: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29ac04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ac08: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29ac08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ac0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29ac0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ac10: 0x3e00008  jr          $ra
    ctx->pc = 0x29AC10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC10u;
        // 0x29ac14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AC10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AC18u;
}
