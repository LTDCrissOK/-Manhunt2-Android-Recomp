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

// Function: sub_00163A48
// Address: 0x163a48 - 0x163b28
void sub_00163A48_0x163a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163A48_0x163a48");
#endif

    switch (ctx->pc) {
        case 0x163a8cu: goto label_163a8c;
        case 0x163a94u: goto label_163a94;
        case 0x163aa8u: goto label_163aa8;
        case 0x163ac0u: goto label_163ac0;
        case 0x163accu: goto label_163acc;
        case 0x163adcu: goto label_163adc;
        case 0x163aecu: goto label_163aec;
        case 0x163afcu: goto label_163afc;
        case 0x163b10u: goto label_163b10;
        default: break;
    }

    ctx->pc = 0x163a48u;

    // 0x163a48: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x163a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x163a4c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x163a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x163a50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x163a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x163a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163a58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x163a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x163a5c: 0x8e2302e0  lw          $v1, 0x2E0($s1)
    ctx->pc = 0x163a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x163a60: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x163A60u;
    {
        const bool branch_taken_0x163a60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A60u;
        // 0x163a64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a60) {
            ctx->pc = 0x163B14u;
            goto label_163b14;
        }
    }
    ctx->pc = 0x163A68u;
    // 0x163a68: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x163a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x163a6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x163a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x163a70: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x163a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x163a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163a78: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x163a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x163a7c: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x163A7Cu;
    {
        const bool branch_taken_0x163a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x163A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163A7Cu;
        // 0x163a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163a7c) {
            ctx->pc = 0x163B14u;
            goto label_163b14;
        }
    }
    ctx->pc = 0x163A84u;
    // 0x163a84: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x163A84u;
    SET_GPR_U32(ctx, 31, 0x163A8Cu);
    ctx->pc = 0x163A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A84u;
    // 0x163a88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x163A84u, 0x163A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A8Cu;
label_163a8c:
    // 0x163a8c: 0xc043a54  jal         func_10E950
    ctx->pc = 0x163A8Cu;
    SET_GPR_U32(ctx, 31, 0x163A94u);
    ctx->pc = 0x163A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163A8Cu;
    // 0x163a90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E950u, 0x163A8Cu, 0x163A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163A94u;
label_163a94:
    // 0x163a94: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x163A94u;
    {
        const bool branch_taken_0x163a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163a94) {
            ctx->pc = 0x163A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163A94u;
            // 0x163a98: 0x8e25034c  lw          $a1, 0x34C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163AB0u;
            goto label_163ab0;
        }
    }
    ctx->pc = 0x163A9Cu;
    // 0x163a9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163aa0: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x163AA0u;
    SET_GPR_U32(ctx, 31, 0x163AA8u);
    ctx->pc = 0x163AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AA0u;
    // 0x163aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x163AA0u, 0x163AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AA8u;
label_163aa8:
    // 0x163aa8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x163AA8u;
    {
        const bool branch_taken_0x163aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AA8u;
        // 0x163aac: 0xae22034c  sw          $v0, 0x34C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163aa8) {
            ctx->pc = 0x163B04u;
            goto label_163b04;
        }
    }
    ctx->pc = 0x163AB0u;
label_163ab0:
    // 0x163ab0: 0x14a0000c  bnez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x163AB0u;
    {
        const bool branch_taken_0x163ab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x163AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AB0u;
        // 0x163ab4: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ab0) {
            ctx->pc = 0x163AE4u;
            goto label_163ae4;
        }
    }
    ctx->pc = 0x163AB8u;
    // 0x163ab8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x163AB8u;
    SET_GPR_U32(ctx, 31, 0x163AC0u);
    ctx->pc = 0x163ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AB8u;
    // 0x163abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x163AB8u, 0x163AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AC0u;
label_163ac0:
    // 0x163ac0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ac4: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x163AC4u;
    SET_GPR_U32(ctx, 31, 0x163ACCu);
    ctx->pc = 0x163AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AC4u;
    // 0x163ac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x163AC4u, 0x163ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163ACCu;
label_163acc:
    // 0x163acc: 0xae22034c  sw          $v0, 0x34C($s1)
    ctx->pc = 0x163accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 844), GPR_U32(ctx, 2));
    // 0x163ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x163ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163ad4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x163AD4u;
    SET_GPR_U32(ctx, 31, 0x163ADCu);
    ctx->pc = 0x163AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AD4u;
    // 0x163ad8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x163AD4u, 0x163ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163ADCu;
label_163adc:
    // 0x163adc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x163ADCu;
    {
        const bool branch_taken_0x163adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163ADCu;
        // 0x163ae0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163adc) {
            ctx->pc = 0x163B08u;
            goto label_163b08;
        }
    }
    ctx->pc = 0x163AE4u;
label_163ae4:
    // 0x163ae4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x163AE4u;
    SET_GPR_U32(ctx, 31, 0x163AECu);
    ctx->pc = 0x163AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AE4u;
    // 0x163ae8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x163AE4u, 0x163AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AECu;
label_163aec:
    // 0x163aec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x163AECu;
    {
        const bool branch_taken_0x163aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AECu;
        // 0x163af0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163aec) {
            ctx->pc = 0x163B04u;
            goto label_163b04;
        }
    }
    ctx->pc = 0x163AF4u;
    // 0x163af4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x163AF4u;
    SET_GPR_U32(ctx, 31, 0x163AFCu);
    ctx->pc = 0x163AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163AF4u;
    // 0x163af8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x163AF4u, 0x163AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163AFCu;
label_163afc:
    // 0x163afc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x163AFCu;
    {
        const bool branch_taken_0x163afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163AFCu;
        // 0x163b00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163afc) {
            ctx->pc = 0x163B14u;
            goto label_163b14;
        }
    }
    ctx->pc = 0x163B04u;
label_163b04:
    // 0x163b04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x163b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_163b08:
    // 0x163b08: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x163B08u;
    SET_GPR_U32(ctx, 31, 0x163B10u);
    ctx->pc = 0x163B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B08u;
    // 0x163b0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x163B08u, 0x163B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B10u;
label_163b10:
    // 0x163b10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163b10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163b14:
    // 0x163b14: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x163b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163b18: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x163b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x163b1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x163b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163b20: 0x3e00008  jr          $ra
    ctx->pc = 0x163B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B20u;
        // 0x163b24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163B28u;
}
