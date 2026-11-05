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

// Function: sub_00156A80
// Address: 0x156a80 - 0x156b88
void sub_00156A80_0x156a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156A80_0x156a80");
#endif

    switch (ctx->pc) {
        case 0x156aa8u: goto label_156aa8;
        case 0x156ab4u: goto label_156ab4;
        case 0x156ac4u: goto label_156ac4;
        case 0x156ae8u: goto label_156ae8;
        case 0x156b0cu: goto label_156b0c;
        case 0x156b18u: goto label_156b18;
        case 0x156b24u: goto label_156b24;
        case 0x156b40u: goto label_156b40;
        case 0x156b54u: goto label_156b54;
        case 0x156b68u: goto label_156b68;
        default: break;
    }

    ctx->pc = 0x156a80u;

    // 0x156a80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x156a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x156a84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156a88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x156a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x156a8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x156a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x156a90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x156a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x156a94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x156a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a98: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x156a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x156a9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x156a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x156aa0: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x156AA0u;
    SET_GPR_U32(ctx, 31, 0x156AA8u);
    ctx->pc = 0x156AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156AA0u;
    // 0x156aa4: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x156AA0u, 0x156AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AA8u;
label_156aa8:
    // 0x156aa8: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x156aa8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x156aac: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x156AACu;
    SET_GPR_U32(ctx, 31, 0x156AB4u);
    ctx->pc = 0x156AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156AACu;
    // 0x156ab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x156AACu, 0x156AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AB4u;
label_156ab4:
    // 0x156ab4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x156ab4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x156ab8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x156ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156abc: 0xc055950  jal         func_156540
    ctx->pc = 0x156ABCu;
    SET_GPR_U32(ctx, 31, 0x156AC4u);
    ctx->pc = 0x156AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156ABCu;
    // 0x156ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x156ABCu, 0x156AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AC4u;
label_156ac4:
    // 0x156ac4: 0x8e220540  lw          $v0, 0x540($s1)
    ctx->pc = 0x156ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1344)));
    // 0x156ac8: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x156ac8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
    // 0x156acc: 0x26739a08  addiu       $s3, $s3, -0x65F8
    ctx->pc = 0x156accu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941192));
    // 0x156ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156ad8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x156ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x156adc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x156adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x156ae0: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x156AE0u;
    SET_GPR_U32(ctx, 31, 0x156AE8u);
    ctx->pc = 0x156AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156AE0u;
    // 0x156ae4: 0x8c500108  lw          $s0, 0x108($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x156AE0u, 0x156AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156AE8u;
label_156ae8:
    // 0x156ae8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x156ae8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156aec: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x156aecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156af0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x156af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x156af4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x156af4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x156af8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x156af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156afc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x156afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b04: 0xc04daca  jal         func_136B28
    ctx->pc = 0x156B04u;
    SET_GPR_U32(ctx, 31, 0x156B0Cu);
    ctx->pc = 0x156B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B04u;
    // 0x156b08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x156B04u, 0x156B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B0Cu;
label_156b0c:
    // 0x156b0c: 0x8e250544  lw          $a1, 0x544($s1)
    ctx->pc = 0x156b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1348)));
    // 0x156b10: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x156B10u;
    SET_GPR_U32(ctx, 31, 0x156B18u);
    ctx->pc = 0x156B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B10u;
    // 0x156b14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x156B10u, 0x156B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B18u;
label_156b18:
    // 0x156b18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x156b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b1c: 0xc046104  jal         func_118410
    ctx->pc = 0x156B1Cu;
    SET_GPR_U32(ctx, 31, 0x156B24u);
    ctx->pc = 0x156B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B1Cu;
    // 0x156b20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x156B1Cu, 0x156B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B24u;
label_156b24:
    // 0x156b24: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x156b24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x156b28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b2c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x156b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x156b30: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x156b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156b34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x156b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x156b38: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x156B38u;
    SET_GPR_U32(ctx, 31, 0x156B40u);
    ctx->pc = 0x156B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B38u;
    // 0x156b3c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x156B38u, 0x156B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B40u;
label_156b40:
    // 0x156b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x156b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b44: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x156b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156b4c: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x156B4Cu;
    SET_GPR_U32(ctx, 31, 0x156B54u);
    ctx->pc = 0x156B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B4Cu;
    // 0x156b50: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x156B4Cu, 0x156B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B54u;
label_156b54:
    // 0x156b54: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x156b54u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x156b58: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x156b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x156b5c: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x156b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x156b60: 0xc043c56  jal         func_10F158
    ctx->pc = 0x156B60u;
    SET_GPR_U32(ctx, 31, 0x156B68u);
    ctx->pc = 0x156B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156B60u;
    // 0x156b64: 0x8e64020c  lw          $a0, 0x20C($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x156B60u, 0x156B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156B68u;
label_156b68:
    // 0x156b68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x156b68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156b6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x156b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x156b70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x156b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156b74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x156b74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x156b78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x156b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x156B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156B7Cu;
        // 0x156b80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156B84u;
    // 0x156b84: 0x0  nop
    ctx->pc = 0x156b84u;
    // NOP
    ctx->pc = 0x156b88u;
}
