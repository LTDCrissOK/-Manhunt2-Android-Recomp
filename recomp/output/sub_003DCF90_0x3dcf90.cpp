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

// Function: sub_003DCF90
// Address: 0x3dcf90 - 0x3dd0a8
void sub_003DCF90_0x3dcf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCF90_0x3dcf90");
#endif

    switch (ctx->pc) {
        case 0x3dcfc0u: goto label_3dcfc0;
        case 0x3dcfd8u: goto label_3dcfd8;
        case 0x3dcfe8u: goto label_3dcfe8;
        case 0x3dcff0u: goto label_3dcff0;
        case 0x3dd064u: goto label_3dd064;
        default: break;
    }

    ctx->pc = 0x3dcf90u;

    // 0x3dcf90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3dcf90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3dcf94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dcf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dcf98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3dcf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3dcf9c: 0x244213c8  addiu       $v0, $v0, 0x13C8
    ctx->pc = 0x3dcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5064));
    // 0x3dcfa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3dcfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3dcfa4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3dcfa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcfa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3dcfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3dcfac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3dcfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3dcfb0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3dcfb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3dcfb4: 0xae020394  sw          $v0, 0x394($s0)
    ctx->pc = 0x3dcfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 916), GPR_U32(ctx, 2));
    // 0x3dcfb8: 0xc06fa74  jal         func_1BE9D0
    ctx->pc = 0x3DCFB8u;
    SET_GPR_U32(ctx, 31, 0x3DCFC0u);
    ctx->pc = 0x3DCFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCFB8u;
    // 0x3dcfbc: 0x26110310  addiu       $s1, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE9D0u, 0x3DCFB8u, 0x3DCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCFC0u;
label_3dcfc0:
    // 0x3dcfc0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dcfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dcfc4: 0x26040328  addiu       $a0, $s0, 0x328
    ctx->pc = 0x3dcfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 808));
    // 0x3dcfc8: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x3dcfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x3dcfcc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3dcfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3dcfd0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3DCFD0u;
    SET_GPR_U32(ctx, 31, 0x3DCFD8u);
    ctx->pc = 0x3DCFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCFD0u;
    // 0x3dcfd4: 0xae220024  sw          $v0, 0x24($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3DCFD0u, 0x3DCFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCFD8u;
label_3dcfd8:
    // 0x3dcfd8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dcfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dcfdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DCFDCu;
    {
        const bool branch_taken_0x3dcfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCFDCu;
        // 0x3dcfe0: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dcfdc) {
            ctx->pc = 0x3DD000u;
            goto label_3dd000;
        }
    }
    ctx->pc = 0x3DCFE4u;
    // 0x3dcfe4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x3dcfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3dcfe8:
    // 0x3dcfe8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x3DCFE8u;
    SET_GPR_U32(ctx, 31, 0x3DCFF0u);
    ctx->pc = 0x3DCFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DCFE8u;
    // 0x3dcfec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x3DCFE8u, 0x3DCFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCFF0u;
label_3dcff0:
    // 0x3dcff0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3dcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3dcff4: 0x0  nop
    ctx->pc = 0x3dcff4u;
    // NOP
    // 0x3dcff8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3DCFF8u;
    {
        const bool branch_taken_0x3dcff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dcff8) {
            ctx->pc = 0x3DCFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DCFF8u;
            // 0x3dcffc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DCFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dcfe8;
        }
    }
    ctx->pc = 0x3DD000u;
label_3dd000:
    // 0x3dd000: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dd000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dd004: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3dd004u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3dd008: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3dd008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x3dd00c: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x3dd00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
    // 0x3dd010: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3dd010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x3dd014: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x3dd014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x3dd018: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3dd018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x3dd01c: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x3dd01cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x3dd020: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3dd020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3dd024: 0xae030254  sw          $v1, 0x254($s0)
    ctx->pc = 0x3dd024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 3));
    // 0x3dd028: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x3dd028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x3dd02c: 0xae0302f4  sw          $v1, 0x2F4($s0)
    ctx->pc = 0x3dd02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 756), GPR_U32(ctx, 3));
    // 0x3dd030: 0xae0302a4  sw          $v1, 0x2A4($s0)
    ctx->pc = 0x3dd030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 3));
    // 0x3dd034: 0xae0201f8  sw          $v0, 0x1F8($s0)
    ctx->pc = 0x3dd034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 504), GPR_U32(ctx, 2));
    // 0x3dd038: 0xae0201d8  sw          $v0, 0x1D8($s0)
    ctx->pc = 0x3dd038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 2));
    // 0x3dd03c: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x3dd03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x3dd040: 0xae020188  sw          $v0, 0x188($s0)
    ctx->pc = 0x3dd040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 2));
    // 0x3dd044: 0xae020168  sw          $v0, 0x168($s0)
    ctx->pc = 0x3dd044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 2));
    // 0x3dd048: 0xae020148  sw          $v0, 0x148($s0)
    ctx->pc = 0x3dd048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 2));
    // 0x3dd04c: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x3dd04cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x3dd050: 0xae020108  sw          $v0, 0x108($s0)
    ctx->pc = 0x3dd050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
    // 0x3dd054: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DD054u;
    {
        const bool branch_taken_0x3dd054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD054u;
        // 0x3dd058: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd054) {
            ctx->pc = 0x3DD064u;
            goto label_3dd064;
        }
    }
    ctx->pc = 0x3DD05Cu;
    // 0x3dd05c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DD05Cu;
    SET_GPR_U32(ctx, 31, 0x3DD064u);
    ctx->pc = 0x3DD060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD05Cu;
    // 0x3dd060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DD05Cu, 0x3DD064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD064u;
label_3dd064:
    // 0x3dd064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3dd064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dd068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3dd068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3dd06c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3dd06cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3dd070: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3dd070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3dd074: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD074u;
        // 0x3dd078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD07Cu;
    // 0x3dd07c: 0x0  nop
    ctx->pc = 0x3dd07cu;
    // NOP
    // 0x3dd080: 0x0  nop
    ctx->pc = 0x3dd080u;
    // NOP
    // 0x3dd084: 0x0  nop
    ctx->pc = 0x3dd084u;
    // NOP
    // 0x3dd088: 0x0  nop
    ctx->pc = 0x3dd088u;
    // NOP
    // 0x3dd08c: 0x0  nop
    ctx->pc = 0x3dd08cu;
    // NOP
    // 0x3dd090: 0x0  nop
    ctx->pc = 0x3dd090u;
    // NOP
    // 0x3dd094: 0x0  nop
    ctx->pc = 0x3dd094u;
    // NOP
    // 0x3dd098: 0x0  nop
    ctx->pc = 0x3dd098u;
    // NOP
    // 0x3dd09c: 0x0  nop
    ctx->pc = 0x3dd09cu;
    // NOP
    // 0x3dd0a0: 0x0  nop
    ctx->pc = 0x3dd0a0u;
    // NOP
    // 0x3dd0a4: 0x0  nop
    ctx->pc = 0x3dd0a4u;
    // NOP
    ctx->pc = 0x3dd0a8u;
}
