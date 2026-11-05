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

// Function: sub_00156B88
// Address: 0x156b88 - 0x156c78
void sub_00156B88_0x156b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156B88_0x156b88");
#endif

    switch (ctx->pc) {
        case 0x156bacu: goto label_156bac;
        case 0x156bb8u: goto label_156bb8;
        case 0x156bc8u: goto label_156bc8;
        case 0x156bd4u: goto label_156bd4;
        case 0x156bf8u: goto label_156bf8;
        case 0x156c04u: goto label_156c04;
        case 0x156c10u: goto label_156c10;
        case 0x156c2cu: goto label_156c2c;
        case 0x156c40u: goto label_156c40;
        case 0x156c5cu: goto label_156c5c;
        default: break;
    }

    ctx->pc = 0x156b88u;

    // 0x156b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x156b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x156b8c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156b90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156b94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x156b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b9c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156ba0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x156ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x156ba4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156BA4u;
    SET_GPR_U32(ctx, 31, 0x156BACu);
    ctx->pc = 0x156BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BA4u;
    // 0x156ba8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156BA4u, 0x156BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BACu;
label_156bac:
    // 0x156bac: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156bacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156bb0: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x156BB0u;
    SET_GPR_U32(ctx, 31, 0x156BB8u);
    ctx->pc = 0x156BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BB0u;
    // 0x156bb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x156BB0u, 0x156BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BB8u;
label_156bb8:
    // 0x156bb8: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156bb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156bbc: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x156bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x156bc0: 0xc055950  jal         func_156540
    ctx->pc = 0x156BC0u;
    SET_GPR_U32(ctx, 31, 0x156BC8u);
    ctx->pc = 0x156BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BC0u;
    // 0x156bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x156BC0u, 0x156BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BC8u;
label_156bc8:
    // 0x156bc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bcc: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x156BCCu;
    SET_GPR_U32(ctx, 31, 0x156BD4u);
    ctx->pc = 0x156BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BCCu;
    // 0x156bd0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x156BCCu, 0x156BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BD4u;
label_156bd4:
    // 0x156bd4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x156bd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bd8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x156bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156bdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x156bdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156be0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x156be0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156be4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x156be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x156be8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x156be8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156bf0: 0xc04daca  jal         func_136B28
    ctx->pc = 0x156BF0u;
    SET_GPR_U32(ctx, 31, 0x156BF8u);
    ctx->pc = 0x156BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BF0u;
    // 0x156bf4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x156BF0u, 0x156BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156BF8u;
label_156bf8:
    // 0x156bf8: 0x8e050544  lw          $a1, 0x544($s0)
    ctx->pc = 0x156bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1348)));
    // 0x156bfc: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x156BFCu;
    SET_GPR_U32(ctx, 31, 0x156C04u);
    ctx->pc = 0x156C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156BFCu;
    // 0x156c00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x156BFCu, 0x156C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C04u;
label_156c04:
    // 0x156c04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c08: 0xc046058  jal         func_118160
    ctx->pc = 0x156C08u;
    SET_GPR_U32(ctx, 31, 0x156C10u);
    ctx->pc = 0x156C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C08u;
    // 0x156c0c: 0x26050530  addiu       $a1, $s0, 0x530 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x156C08u, 0x156C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C10u;
label_156c10:
    // 0x156c10: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x156c10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x156c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c18: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x156c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x156c1c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x156c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156c20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156c24: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x156C24u;
    SET_GPR_U32(ctx, 31, 0x156C2Cu);
    ctx->pc = 0x156C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C24u;
    // 0x156c28: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x156C24u, 0x156C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C2Cu;
label_156c2c:
    // 0x156c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x156c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c30: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x156c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x156c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156c38: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x156C38u;
    SET_GPR_U32(ctx, 31, 0x156C40u);
    ctx->pc = 0x156C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C38u;
    // 0x156c3c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x156C38u, 0x156C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C40u;
label_156c40:
    // 0x156c40: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x156c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x156c44: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x156c44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x156c48: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x156c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x156c4c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x156c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x156c50: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x156c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x156c54: 0xc043c56  jal         func_10F158
    ctx->pc = 0x156C54u;
    SET_GPR_U32(ctx, 31, 0x156C5Cu);
    ctx->pc = 0x156C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156C54u;
    // 0x156c58: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x156C54u, 0x156C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156C5Cu;
label_156c5c:
    // 0x156c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156c64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156c68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x156c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x156C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156C6Cu;
        // 0x156c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156C74u;
    // 0x156c74: 0x0  nop
    ctx->pc = 0x156c74u;
    // NOP
    ctx->pc = 0x156c78u;
}
