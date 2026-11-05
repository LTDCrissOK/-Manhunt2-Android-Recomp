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

// Function: sub_00156990
// Address: 0x156990 - 0x156a80
void sub_00156990_0x156990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156990_0x156990");
#endif

    switch (ctx->pc) {
        case 0x1569b8u: goto label_1569b8;
        case 0x1569c4u: goto label_1569c4;
        case 0x1569d4u: goto label_1569d4;
        case 0x1569f8u: goto label_1569f8;
        case 0x156a1cu: goto label_156a1c;
        case 0x156a38u: goto label_156a38;
        case 0x156a4cu: goto label_156a4c;
        case 0x156a60u: goto label_156a60;
        default: break;
    }

    ctx->pc = 0x156990u;

    // 0x156990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156994: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156998: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15699c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15699cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1569a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1569a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1569a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1569a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1569a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1569ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1569acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1569b0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x1569B0u;
    SET_GPR_U32(ctx, 31, 0x1569B8u);
    ctx->pc = 0x1569B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1569B0u;
    // 0x1569b4: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x1569B0u, 0x1569B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569B8u;
label_1569b8:
    // 0x1569b8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1569b8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1569bc: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x1569BCu;
    SET_GPR_U32(ctx, 31, 0x1569C4u);
    ctx->pc = 0x1569C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1569BCu;
    // 0x1569c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x1569BCu, 0x1569C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569C4u;
label_1569c4:
    // 0x1569c4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x1569c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1569c8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1569c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1569cc: 0xc055950  jal         func_156540
    ctx->pc = 0x1569CCu;
    SET_GPR_U32(ctx, 31, 0x1569D4u);
    ctx->pc = 0x1569D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1569CCu;
    // 0x1569d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x1569CCu, 0x1569D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569D4u;
label_1569d4:
    // 0x1569d4: 0x8e220540  lw          $v0, 0x540($s1)
    ctx->pc = 0x1569d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
    // 0x1569d8: 0x3c120049  lui         $s2, 0x49
    ctx->pc = 0x1569d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)73 << 16));
    // 0x1569dc: 0x26529a08  addiu       $s2, $s2, -0x65F8
    ctx->pc = 0x1569dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941192));
    // 0x1569e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1569e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1569e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1569e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1569e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569ec: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1569ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1569f0: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1569F0u;
    SET_GPR_U32(ctx, 31, 0x1569F8u);
    ctx->pc = 0x1569F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1569F0u;
    // 0x1569f4: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1569F0u, 0x1569F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1569F8u;
label_1569f8:
    // 0x1569f8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1569f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569fc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1569fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a00: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x156a00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156a04: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x156a04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156a08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a14: 0xc04daca  jal         func_136B28
    ctx->pc = 0x156A14u;
    SET_GPR_U32(ctx, 31, 0x156A1Cu);
    ctx->pc = 0x156A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A14u;
    // 0x156a18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x156A14u, 0x156A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A1Cu;
label_156a1c:
    // 0x156a1c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x156a1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x156a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a24: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x156a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x156a28: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x156a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156a30: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x156A30u;
    SET_GPR_U32(ctx, 31, 0x156A38u);
    ctx->pc = 0x156A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A30u;
    // 0x156a34: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x156A30u, 0x156A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A38u;
label_156a38:
    // 0x156a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a3c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x156a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a44: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x156A44u;
    SET_GPR_U32(ctx, 31, 0x156A4Cu);
    ctx->pc = 0x156A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A44u;
    // 0x156a48: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x156A44u, 0x156A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A4Cu;
label_156a4c:
    // 0x156a4c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x156a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x156a50: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x156a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x156a54: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x156a54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x156a58: 0xc043c56  jal         func_10F158
    ctx->pc = 0x156A58u;
    SET_GPR_U32(ctx, 31, 0x156A60u);
    ctx->pc = 0x156A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156A58u;
    // 0x156a5c: 0x8e44020c  lw          $a0, 0x20C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x156A58u, 0x156A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156A60u;
label_156a60:
    // 0x156a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156a64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156a64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156a68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156a68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156a6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x156a6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156a70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156a74: 0x3e00008  jr          $ra
    ctx->pc = 0x156A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156A74u;
        // 0x156a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156A7Cu;
    // 0x156a7c: 0x0  nop
    ctx->pc = 0x156a7cu;
    // NOP
    ctx->pc = 0x156a80u;
}
