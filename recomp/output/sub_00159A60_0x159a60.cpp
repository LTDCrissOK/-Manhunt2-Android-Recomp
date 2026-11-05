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

// Function: sub_00159A60
// Address: 0x159a60 - 0x159b08
void sub_00159A60_0x159a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159A60_0x159a60");
#endif

    switch (ctx->pc) {
        case 0x159a60u: goto label_159a60;
        case 0x159a64u: goto label_159a64;
        case 0x159a68u: goto label_159a68;
        case 0x159a6cu: goto label_159a6c;
        case 0x159a70u: goto label_159a70;
        case 0x159a74u: goto label_159a74;
        case 0x159a78u: goto label_159a78;
        case 0x159a7cu: goto label_159a7c;
        case 0x159a80u: goto label_159a80;
        case 0x159a84u: goto label_159a84;
        case 0x159a88u: goto label_159a88;
        case 0x159a8cu: goto label_159a8c;
        case 0x159a90u: goto label_159a90;
        case 0x159a94u: goto label_159a94;
        case 0x159a98u: goto label_159a98;
        case 0x159a9cu: goto label_159a9c;
        case 0x159aa0u: goto label_159aa0;
        case 0x159aa4u: goto label_159aa4;
        case 0x159aa8u: goto label_159aa8;
        case 0x159aacu: goto label_159aac;
        case 0x159ab0u: goto label_159ab0;
        case 0x159ab4u: goto label_159ab4;
        case 0x159ab8u: goto label_159ab8;
        case 0x159abcu: goto label_159abc;
        case 0x159ac0u: goto label_159ac0;
        case 0x159ac4u: goto label_159ac4;
        case 0x159ac8u: goto label_159ac8;
        case 0x159accu: goto label_159acc;
        case 0x159ad0u: goto label_159ad0;
        case 0x159ad4u: goto label_159ad4;
        case 0x159ad8u: goto label_159ad8;
        case 0x159adcu: goto label_159adc;
        case 0x159ae0u: goto label_159ae0;
        case 0x159ae4u: goto label_159ae4;
        case 0x159ae8u: goto label_159ae8;
        case 0x159aecu: goto label_159aec;
        case 0x159af0u: goto label_159af0;
        case 0x159af4u: goto label_159af4;
        case 0x159af8u: goto label_159af8;
        case 0x159afcu: goto label_159afc;
        case 0x159b00u: goto label_159b00;
        case 0x159b04u: goto label_159b04;
        default: break;
    }

    ctx->pc = 0x159a60u;

label_159a60:
    // 0x159a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x159a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_159a64:
    // 0x159a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_159a68:
    // 0x159a68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_159a6c:
    // 0x159a6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x159a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_159a70:
    // 0x159a70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x159a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_159a74:
    // 0x159a74: 0xc04f244  jal         func_13C910
label_159a78:
    if (ctx->pc == 0x159A78u) {
        ctx->pc = 0x159A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A74u;
        // 0x159a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A7Cu;
        goto label_159a7c;
    }
    ctx->pc = 0x159A74u;
    SET_GPR_U32(ctx, 31, 0x159A7Cu);
    ctx->pc = 0x159A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A74u;
    // 0x159a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C910u, 0x159A74u, 0x159A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A7Cu;
label_159a7c:
    // 0x159a7c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x159a7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159a80:
    // 0x159a80: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x159a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_159a84:
    // 0x159a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159a88:
    // 0x159a88: 0xc04f33e  jal         func_13CCF8
label_159a8c:
    if (ctx->pc == 0x159A8Cu) {
        ctx->pc = 0x159A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A88u;
        // 0x159a8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A90u;
        goto label_159a90;
    }
    ctx->pc = 0x159A88u;
    SET_GPR_U32(ctx, 31, 0x159A90u);
    ctx->pc = 0x159A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A88u;
    // 0x159a8c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x159A88u, 0x159A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A90u;
label_159a90:
    // 0x159a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159a94:
    // 0x159a94: 0xc04f0b6  jal         func_13C2D8
label_159a98:
    if (ctx->pc == 0x159A98u) {
        ctx->pc = 0x159A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A94u;
        // 0x159a98: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A9Cu;
        goto label_159a9c;
    }
    ctx->pc = 0x159A94u;
    SET_GPR_U32(ctx, 31, 0x159A9Cu);
    ctx->pc = 0x159A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A94u;
    // 0x159a98: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x159A94u, 0x159A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A9Cu;
label_159a9c:
    // 0x159a9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x159a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159aa0:
    // 0x159aa0: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x159aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_159aa4:
    // 0x159aa4: 0xc0461e8  jal         func_1187A0
label_159aa8:
    if (ctx->pc == 0x159AA8u) {
        ctx->pc = 0x159AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AA4u;
        // 0x159aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AACu;
        goto label_159aac;
    }
    ctx->pc = 0x159AA4u;
    SET_GPR_U32(ctx, 31, 0x159AACu);
    ctx->pc = 0x159AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AA4u;
    // 0x159aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x159AA4u, 0x159AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AACu;
label_159aac:
    // 0x159aac: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x159aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_159ab0:
    // 0x159ab0: 0xc046226  jal         func_118898
label_159ab4:
    if (ctx->pc == 0x159AB4u) {
        ctx->pc = 0x159AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AB0u;
        // 0x159ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AB8u;
        goto label_159ab8;
    }
    ctx->pc = 0x159AB0u;
    SET_GPR_U32(ctx, 31, 0x159AB8u);
    ctx->pc = 0x159AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AB0u;
    // 0x159ab4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x159AB0u, 0x159AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AB8u;
label_159ab8:
    // 0x159ab8: 0x8e0502e8  lw          $a1, 0x2E8($s0)
    ctx->pc = 0x159ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 744)));
label_159abc:
    // 0x159abc: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_159ac0:
    if (ctx->pc == 0x159AC0u) {
        ctx->pc = 0x159AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159ABCu;
        // 0x159ac0: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AC4u;
        goto label_159ac4;
    }
    ctx->pc = 0x159ABCu;
    {
        const bool branch_taken_0x159abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x159abc) {
            ctx->pc = 0x159AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x159ABCu;
            // 0x159ac0: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159ADCu;
            goto label_159adc;
        }
    }
    ctx->pc = 0x159AC4u;
label_159ac4:
    // 0x159ac4: 0xc045fea  jal         func_117FA8
label_159ac8:
    if (ctx->pc == 0x159AC8u) {
        ctx->pc = 0x159AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AC4u;
        // 0x159ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159ACCu;
        goto label_159acc;
    }
    ctx->pc = 0x159AC4u;
    SET_GPR_U32(ctx, 31, 0x159ACCu);
    ctx->pc = 0x159AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AC4u;
    // 0x159ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x159AC4u, 0x159ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159ACCu;
label_159acc:
    // 0x159acc: 0xc60c02ec  lwc1        $f12, 0x2EC($s0)
    ctx->pc = 0x159accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_159ad0:
    // 0x159ad0: 0xc046290  jal         func_118A40
label_159ad4:
    if (ctx->pc == 0x159AD4u) {
        ctx->pc = 0x159AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AD0u;
        // 0x159ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AD8u;
        goto label_159ad8;
    }
    ctx->pc = 0x159AD0u;
    SET_GPR_U32(ctx, 31, 0x159AD8u);
    ctx->pc = 0x159AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159AD0u;
    // 0x159ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x159AD0u, 0x159AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159AD8u;
label_159ad8:
    // 0x159ad8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x159ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_159adc:
    // 0x159adc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_159ae0:
    // 0x159ae0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x159ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159ae4:
    // 0x159ae4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x159ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_159ae8:
    // 0x159ae8: 0x40f809  jalr        $v0
label_159aec:
    if (ctx->pc == 0x159AECu) {
        ctx->pc = 0x159AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AE8u;
        // 0x159aec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159AF0u;
        goto label_159af0;
    }
    ctx->pc = 0x159AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159AF0u);
        ctx->pc = 0x159AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159AE8u;
        // 0x159aec: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159AE8u, 0x159AF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159AF0u;
label_159af0:
    // 0x159af0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159af0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159af4:
    // 0x159af4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159af4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_159af8:
    // 0x159af8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159af8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159afc:
    // 0x159afc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x159afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159b00:
    // 0x159b00: 0x3e00008  jr          $ra
label_159b04:
    if (ctx->pc == 0x159B04u) {
        ctx->pc = 0x159B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B00u;
        // 0x159b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159B08u;
        goto label_fallthrough_0x159b00;
    }
    ctx->pc = 0x159B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159B00u;
        // 0x159b04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159b00:
    ctx->pc = 0x159B08u;
}
