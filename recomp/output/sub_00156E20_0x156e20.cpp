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

// Function: sub_00156E20
// Address: 0x156e20 - 0x156f10
void sub_00156E20_0x156e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156E20_0x156e20");
#endif

    switch (ctx->pc) {
        case 0x156e48u: goto label_156e48;
        case 0x156e54u: goto label_156e54;
        case 0x156e64u: goto label_156e64;
        case 0x156e88u: goto label_156e88;
        case 0x156eacu: goto label_156eac;
        case 0x156ec8u: goto label_156ec8;
        case 0x156edcu: goto label_156edc;
        case 0x156ef0u: goto label_156ef0;
        default: break;
    }

    ctx->pc = 0x156e20u;

    // 0x156e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156e24: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156e24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156e2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156e30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156e34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e38: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x156e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x156e3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156e40: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156E40u;
    SET_GPR_U32(ctx, 31, 0x156E48u);
    ctx->pc = 0x156E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E40u;
    // 0x156e44: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156E40u, 0x156E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E48u;
label_156e48:
    // 0x156e48: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x156e48u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x156e4c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x156E4Cu;
    SET_GPR_U32(ctx, 31, 0x156E54u);
    ctx->pc = 0x156E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E4Cu;
    // 0x156e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x156E4Cu, 0x156E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E54u;
label_156e54:
    // 0x156e54: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x156e54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x156e58: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x156e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x156e5c: 0xc055950  jal         func_156540
    ctx->pc = 0x156E5Cu;
    SET_GPR_U32(ctx, 31, 0x156E64u);
    ctx->pc = 0x156E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E5Cu;
    // 0x156e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x156E5Cu, 0x156E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E64u;
label_156e64:
    // 0x156e64: 0x8e220540  lw          $v0, 0x540($s1)
    ctx->pc = 0x156e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
    // 0x156e68: 0x3c120049  lui         $s2, 0x49
    ctx->pc = 0x156e68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)73 << 16));
    // 0x156e6c: 0x26529a08  addiu       $s2, $s2, -0x65F8
    ctx->pc = 0x156e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
    // 0x156e70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156e78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x156e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e7c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x156e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x156e80: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x156E80u;
    SET_GPR_U32(ctx, 31, 0x156E88u);
    ctx->pc = 0x156E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156E80u;
    // 0x156e84: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x156E80u, 0x156E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156E88u;
label_156e88:
    // 0x156e88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x156e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e8c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x156e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e90: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x156e90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156e94: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x156e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156e9c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x156e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ea4: 0xc04daca  jal         func_136B28
    ctx->pc = 0x156EA4u;
    SET_GPR_U32(ctx, 31, 0x156EACu);
    ctx->pc = 0x156EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EA4u;
    // 0x156ea8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x156EA4u, 0x156EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EACu;
label_156eac:
    // 0x156eac: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x156eacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x156eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156eb4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x156eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x156eb8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x156eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156ebc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156ec0: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x156EC0u;
    SET_GPR_U32(ctx, 31, 0x156EC8u);
    ctx->pc = 0x156EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EC0u;
    // 0x156ec4: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x156EC0u, 0x156EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EC8u;
label_156ec8:
    // 0x156ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ecc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x156eccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ed0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ed4: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x156ED4u;
    SET_GPR_U32(ctx, 31, 0x156EDCu);
    ctx->pc = 0x156ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156ED4u;
    // 0x156ed8: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x156ED4u, 0x156EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EDCu;
label_156edc:
    // 0x156edc: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x156edcu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x156ee0: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x156ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x156ee4: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x156ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x156ee8: 0xc043c56  jal         func_10F158
    ctx->pc = 0x156EE8u;
    SET_GPR_U32(ctx, 31, 0x156EF0u);
    ctx->pc = 0x156EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156EE8u;
    // 0x156eec: 0x8e44020c  lw          $a0, 0x20C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x156EE8u, 0x156EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156EF0u;
label_156ef0:
    // 0x156ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156ef4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156ef8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156ef8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156efc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x156efcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156f00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156f04: 0x3e00008  jr          $ra
    ctx->pc = 0x156F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F04u;
        // 0x156f08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156F0Cu;
    // 0x156f0c: 0x0  nop
    ctx->pc = 0x156f0cu;
    // NOP
    ctx->pc = 0x156f10u;
}
