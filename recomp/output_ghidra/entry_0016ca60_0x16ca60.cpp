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

// Function: entry_0016ca60
// Address: 0x16ca60 - 0x16cb70
void entry_0016ca60_0x16ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ca60_0x16ca60");
#endif

    switch (ctx->pc) {
        case 0x16ca84u: goto label_16ca84;
        case 0x16cab0u: goto label_16cab0;
        case 0x16cac0u: goto label_16cac0;
        case 0x16cad0u: goto label_16cad0;
        case 0x16cb24u: goto label_16cb24;
        case 0x16cb38u: goto label_16cb38;
        case 0x16cb4cu: goto label_16cb4c;
        case 0x16cb54u: goto label_16cb54;
        case 0x16cb5cu: goto label_16cb5c;
        default: break;
    }

    ctx->pc = 0x16ca60u;

    // 0x16ca60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16ca64: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x16ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x16ca68: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x16CA68u;
    {
        const bool branch_taken_0x16ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CA68u;
        // 0x16ca6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ca68) {
            ctx->pc = 0x16CB60u;
            goto label_16cb60;
        }
    }
    ctx->pc = 0x16CA70u;
    // 0x16ca70: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x16ca70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x16ca74: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x16CA74u;
    {
        const bool branch_taken_0x16ca74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ca74) {
            ctx->pc = 0x16CA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16CA74u;
            // 0x16ca78: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16CB64u;
            goto label_16cb64;
        }
    }
    ctx->pc = 0x16CA7Cu;
    // 0x16ca7c: 0xc04f8e6  jal         func_13E398
    ctx->pc = 0x16CA7Cu;
    SET_GPR_U32(ctx, 31, 0x16CA84u);
    ctx->pc = 0x16CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CA7Cu;
    // 0x16ca80: 0x922500f8  lbu         $a1, 0xF8($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E398u, 0x16CA7Cu, 0x16CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CA84u;
label_16ca84:
    // 0x16ca84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ca88: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x16CA88u;
    {
        const bool branch_taken_0x16ca88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ca88) {
            ctx->pc = 0x16CB4Cu;
            goto label_16cb4c;
        }
    }
    ctx->pc = 0x16CA90u;
    // 0x16ca90: 0x922200f8  lbu         $v0, 0xF8($s1)
    ctx->pc = 0x16ca90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x16ca94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x16ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16ca98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ca9c: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x16ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x16caa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16caa4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16caa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16caa8: 0xc04ef9c  jal         func_13BE70
    ctx->pc = 0x16CAA8u;
    SET_GPR_U32(ctx, 31, 0x16CAB0u);
    ctx->pc = 0x16CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAA8u;
    // 0x16caac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BE70u, 0x16CAA8u, 0x16CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAB0u;
label_16cab0:
    // 0x16cab0: 0x922500f8  lbu         $a1, 0xF8($s1)
    ctx->pc = 0x16cab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x16cab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cab8: 0xc04f8e0  jal         func_13E380
    ctx->pc = 0x16CAB8u;
    SET_GPR_U32(ctx, 31, 0x16CAC0u);
    ctx->pc = 0x16CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAB8u;
    // 0x16cabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E380u, 0x16CAB8u, 0x16CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAC0u;
label_16cac0:
    // 0x16cac0: 0x922500f8  lbu         $a1, 0xF8($s1)
    ctx->pc = 0x16cac0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x16cac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16cac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cac8: 0xc05b394  jal         func_16CE50
    ctx->pc = 0x16CAC8u;
    SET_GPR_U32(ctx, 31, 0x16CAD0u);
    ctx->pc = 0x16CACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CAC8u;
    // 0x16cacc: 0x8e2600f4  lw          $a2, 0xF4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CE50u, 0x16CAC8u, 0x16CAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CAD0u;
label_16cad0:
    // 0x16cad0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16cad4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x16cad4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16cad8: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x16cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16cadc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16cae0: 0x8c45020c  lw          $a1, 0x20C($v0)
    ctx->pc = 0x16cae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16cae4: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x16CAE4u;
    {
        const bool branch_taken_0x16cae4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cae4) {
            ctx->pc = 0x16CB4Cu;
            goto label_16cb4c;
        }
    }
    ctx->pc = 0x16CAECu;
    // 0x16caec: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x16caecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x16caf0: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x16caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16caf4: 0x2c83000b  sltiu       $v1, $a0, 0xB
    ctx->pc = 0x16caf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x16caf8: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x16CAF8u;
    {
        const bool branch_taken_0x16caf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CAF8u;
        // 0x16cafc: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16caf8) {
            ctx->pc = 0x16CB40u;
            goto label_16cb40;
        }
    }
    ctx->pc = 0x16CB00u;
    // 0x16cb00: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x16cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16cb04: 0x2442f0b0  addiu       $v0, $v0, -0xF50
    ctx->pc = 0x16cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963376));
    // 0x16cb08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16cb0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x16cb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16cb10: 0x800008  jr          $a0
    ctx->pc = 0x16CB10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16CB18u: goto label_16cb18;
            case 0x16CB2Cu: goto label_16cb2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB10u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16CB18u;
label_16cb18:
    // 0x16cb18: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb1c: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x16CB1Cu;
    SET_GPR_U32(ctx, 31, 0x16CB24u);
    ctx->pc = 0x16CB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB1Cu;
    // 0x16cb20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x16CB1Cu, 0x16CB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB24u;
label_16cb24:
    // 0x16cb24: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16CB24u;
    {
        const bool branch_taken_0x16cb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb24) {
            ctx->pc = 0x16CB4Cu;
            goto label_16cb4c;
        }
    }
    ctx->pc = 0x16CB2Cu;
label_16cb2c:
    // 0x16cb2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16cb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb30: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x16CB30u;
    SET_GPR_U32(ctx, 31, 0x16CB38u);
    ctx->pc = 0x16CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB30u;
    // 0x16cb34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x16CB30u, 0x16CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB38u;
label_16cb38:
    // 0x16cb38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16CB38u;
    {
        const bool branch_taken_0x16cb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16cb38) {
            ctx->pc = 0x16CB4Cu;
            goto label_16cb4c;
        }
    }
    ctx->pc = 0x16CB40u;
label_16cb40:
    // 0x16cb40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16cb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cb44: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x16CB44u;
    SET_GPR_U32(ctx, 31, 0x16CB4Cu);
    ctx->pc = 0x16CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB44u;
    // 0x16cb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x16CB44u, 0x16CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB4Cu;
label_16cb4c:
    // 0x16cb4c: 0xc05b352  jal         func_16CD48
    ctx->pc = 0x16CB4Cu;
    SET_GPR_U32(ctx, 31, 0x16CB54u);
    ctx->pc = 0x16CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB4Cu;
    // 0x16cb50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CD48u, 0x16CB4Cu, 0x16CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB54u;
label_16cb54:
    // 0x16cb54: 0xc05b2ea  jal         func_16CBA8
    ctx->pc = 0x16CB54u;
    SET_GPR_U32(ctx, 31, 0x16CB5Cu);
    ctx->pc = 0x16CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16CB54u;
    // 0x16cb58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CBA8u, 0x16CB54u, 0x16CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16CB5Cu;
label_16cb5c:
    // 0x16cb5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16cb5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16cb60:
    // 0x16cb60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16cb60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16cb64:
    // 0x16cb64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16cb64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16cb68: 0x3e00008  jr          $ra
    ctx->pc = 0x16CB68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CB68u;
        // 0x16cb6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16CB68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16CB70u;
}
