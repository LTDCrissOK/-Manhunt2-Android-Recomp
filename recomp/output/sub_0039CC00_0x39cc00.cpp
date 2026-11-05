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

// Function: sub_0039CC00
// Address: 0x39cc00 - 0x39cdb8
void sub_0039CC00_0x39cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CC00_0x39cc00");
#endif

    switch (ctx->pc) {
        case 0x39cc30u: goto label_39cc30;
        case 0x39cc40u: goto label_39cc40;
        case 0x39cc5cu: goto label_39cc5c;
        case 0x39cc84u: goto label_39cc84;
        case 0x39cc94u: goto label_39cc94;
        case 0x39cce0u: goto label_39cce0;
        case 0x39cd00u: goto label_39cd00;
        case 0x39cd60u: goto label_39cd60;
        case 0x39cd6cu: goto label_39cd6c;
        default: break;
    }

    ctx->pc = 0x39cc00u;

    // 0x39cc00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39cc04: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x39cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x39cc08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cc08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc0c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x39cc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x39cc10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39cc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc14: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x39cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x39cc18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39cc18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc1c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39CC1Cu;
    {
        const bool branch_taken_0x39cc1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39CC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC1Cu;
        // 0x39cc20: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc1c) {
            ctx->pc = 0x39CC38u;
            goto label_39cc38;
        }
    }
    ctx->pc = 0x39CC24u;
    // 0x39cc24: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39cc28: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39CC28u;
    SET_GPR_U32(ctx, 31, 0x39CC30u);
    ctx->pc = 0x39CC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC28u;
    // 0x39cc2c: 0x2484ba60  addiu       $a0, $a0, -0x45A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39CC28u, 0x39CC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC30u;
label_39cc30:
    // 0x39cc30: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x39CC30u;
    {
        const bool branch_taken_0x39cc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CC30u;
        // 0x39cc34: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cc30) {
            ctx->pc = 0x39CCE4u;
            goto label_39cce4;
        }
    }
    ctx->pc = 0x39CC38u;
label_39cc38:
    // 0x39cc38: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x39CC38u;
    SET_GPR_U32(ctx, 31, 0x39CC40u);
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x39CC38u, 0x39CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC40u;
label_39cc40:
    // 0x39cc40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc44: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x39cc44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x39cc48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39cc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc4c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x39cc4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39cc50: 0x27a80014  addiu       $t0, $sp, 0x14
    ctx->pc = 0x39cc50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x39cc54: 0xc0e56de  jal         func_395B78
    ctx->pc = 0x39CC54u;
    SET_GPR_U32(ctx, 31, 0x39CC5Cu);
    ctx->pc = 0x39CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC54u;
    // 0x39cc58: 0x27a90018  addiu       $t1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395B78u, 0x39CC54u, 0x39CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC5Cu;
label_39cc5c:
    // 0x39cc5c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x39CC5Cu;
    {
        const bool branch_taken_0x39cc5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cc5c) {
            ctx->pc = 0x39CC60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CC5Cu;
            // 0x39cc60: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CCE4u;
            goto label_39cce4;
        }
    }
    ctx->pc = 0x39CC64u;
    // 0x39cc64: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39cc68: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x39CC68u;
    {
        const bool branch_taken_0x39cc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cc68) {
            ctx->pc = 0x39CC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39CC68u;
            // 0x39cc6c: 0x8fa70010  lw          $a3, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39CCA8u;
            goto label_39cca8;
        }
    }
    ctx->pc = 0x39CC70u;
    // 0x39cc70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39cc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc74: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39cc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39cc78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cc7c: 0xc0ec184  jal         func_3B0610
    ctx->pc = 0x39CC7Cu;
    SET_GPR_U32(ctx, 31, 0x39CC84u);
    ctx->pc = 0x39CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC7Cu;
    // 0x39cc80: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0610u, 0x39CC7Cu, 0x39CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC84u;
label_39cc84:
    // 0x39cc84: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39cc88: 0x2484ba90  addiu       $a0, $a0, -0x4570
    ctx->pc = 0x39cc88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949520));
    // 0x39cc8c: 0xc0ec11c  jal         func_3B0470
    ctx->pc = 0x39CC8Cu;
    SET_GPR_U32(ctx, 31, 0x39CC94u);
    ctx->pc = 0x39CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CC8Cu;
    // 0x39cc90: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x39CC8Cu, 0x39CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CC94u;
label_39cc94:
    // 0x39cc94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39cc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39cc98: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x39cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39cc9c: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x39cc9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x39cca0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39CCA0u;
    {
        const bool branch_taken_0x39cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCA0u;
        // 0x39cca4: 0xa2030001  sb          $v1, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cca0) {
            ctx->pc = 0x39CCE0u;
            goto label_39cce0;
        }
    }
    ctx->pc = 0x39CCA8u;
label_39cca8:
    // 0x39cca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39ccac: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x39ccacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x39ccb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ccb4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x39ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39ccb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39ccb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ccbc: 0x8e0800b0  lw          $t0, 0xB0($s0)
    ctx->pc = 0x39ccbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x39ccc0: 0xae0700b8  sw          $a3, 0xB8($s0)
    ctx->pc = 0x39ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 7));
    // 0x39ccc4: 0xae0800b4  sw          $t0, 0xB4($s0)
    ctx->pc = 0x39ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 8));
    // 0x39ccc8: 0xae0600bc  sw          $a2, 0xBC($s0)
    ctx->pc = 0x39ccc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 6));
    // 0x39cccc: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x39ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x39ccd0: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x39ccd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x39ccd4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x39ccd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x39ccd8: 0xc0e7278  jal         func_39C9E0
    ctx->pc = 0x39CCD8u;
    SET_GPR_U32(ctx, 31, 0x39CCE0u);
    ctx->pc = 0x39CCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CCD8u;
    // 0x39ccdc: 0xa20200ac  sb          $v0, 0xAC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C9E0u, 0x39CCD8u, 0x39CCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CCE0u;
label_39cce0:
    // 0x39cce0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39cce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39cce4:
    // 0x39cce4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x39cce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39cce8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39cce8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39ccec: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x39ccecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x39ccf0: 0x3e00008  jr          $ra
    ctx->pc = 0x39CCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39CCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CCF0u;
        // 0x39ccf4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39CCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39CCF8u;
    // 0x39ccf8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x39ccf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39ccfc: 0x0  nop
    ctx->pc = 0x39ccfcu;
    // NOP
label_39cd00:
    // 0x39cd00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39cd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39cd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39cd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39cd08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39cd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39cd10: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39cd10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39cd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39cd18: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x39cd18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd1c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39cd1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39cd20: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x39cd20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd24: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39CD24u;
    {
        const bool branch_taken_0x39cd24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39CD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39CD24u;
        // 0x39cd28: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39cd24) {
            ctx->pc = 0x39CD34u;
            goto label_39cd34;
        }
    }
    ctx->pc = 0x39CD2Cu;
    // 0x39cd2c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x39CD2Cu;
    {
        const bool branch_taken_0x39cd2c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x39cd2c) {
            ctx->pc = 0x39CD58u;
            goto label_39cd58;
        }
    }
    ctx->pc = 0x39CD34u;
label_39cd34:
    // 0x39cd34: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39cd34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39cd38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cd38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cd3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39cd3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39cd40: 0x2484bab8  addiu       $a0, $a0, -0x4548
    ctx->pc = 0x39cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949560));
    // 0x39cd44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39cd44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cd48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39cd48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39cd4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39cd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39cd50: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39CD50u;
    ctx->pc = 0x39CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD50u;
    // 0x39cd54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39CD58u;
label_39cd58:
    // 0x39cd58: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x39CD58u;
    SET_GPR_U32(ctx, 31, 0x39CD60u);
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x39CD58u, 0x39CD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD60u;
label_39cd60:
    // 0x39cd60: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x39cd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x39cd64: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x39CD64u;
    SET_GPR_U32(ctx, 31, 0x39CD6Cu);
    ctx->pc = 0x39CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CD64u;
    // 0x39cd68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x39CD64u, 0x39CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CD6Cu;
label_39cd6c:
    // 0x39cd6c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x39cd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x39cd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39cd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39cd74: 0xae1200bc  sw          $s2, 0xBC($s0)
    ctx->pc = 0x39cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 18));
    // 0x39cd78: 0xae1300c0  sw          $s3, 0xC0($s0)
    ctx->pc = 0x39cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 19));
    // 0x39cd7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd80: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x39cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
    // 0x39cd84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39cd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cd88: 0xa20200ac  sb          $v0, 0xAC($s0)
    ctx->pc = 0x39cd88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x39cd8c: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x39cd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x39cd90: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x39cd90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x39cd94: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x39cd94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x39cd98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39cd98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39cd9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cda0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39cda0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cda4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39cda4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39cda8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39cda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39cdac: 0x80e7278  j           func_39C9E0
    ctx->pc = 0x39CDACu;
    ctx->pc = 0x39CDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDACu;
    // 0x39cdb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C9E0u;
    sub_0039C9E0_0x39c9e0(rdram, ctx, runtime); return;
    ctx->pc = 0x39CDB4u;
    // 0x39cdb4: 0x0  nop
    ctx->pc = 0x39cdb4u;
    // NOP
    ctx->pc = 0x39cdb8u;
}
