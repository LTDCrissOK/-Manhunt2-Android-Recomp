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

// Function: sub_0038CBE0
// Address: 0x38cbe0 - 0x38cd08
void sub_0038CBE0_0x38cbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038CBE0_0x38cbe0");
#endif

    switch (ctx->pc) {
        case 0x38cc18u: goto label_38cc18;
        case 0x38cc38u: goto label_38cc38;
        case 0x38cc70u: goto label_38cc70;
        case 0x38cc8cu: goto label_38cc8c;
        case 0x38ccdcu: goto label_38ccdc;
        default: break;
    }

    ctx->pc = 0x38cbe0u;

    // 0x38cbe0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38cbe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38cbe4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38cbe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38cbec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38cbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38cbf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cbf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cbf4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x38cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x38cbf8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CBF8u;
    {
        const bool branch_taken_0x38cbf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CBF8u;
        // 0x38cbfc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38cbf8) {
            ctx->pc = 0x38CC10u;
            goto label_38cc10;
        }
    }
    ctx->pc = 0x38CC00u;
    // 0x38cc00: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x38cc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x38cc04: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x38cc04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x38cc08: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x38CC08u;
    {
        const bool branch_taken_0x38cc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cc08) {
            ctx->pc = 0x38CC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CC08u;
            // 0x38cc0c: 0x8e030848  lw          $v1, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CC50u;
            goto label_38cc50;
        }
    }
    ctx->pc = 0x38CC10u;
label_38cc10:
    // 0x38cc10: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38CC10u;
    SET_GPR_U32(ctx, 31, 0x38CC18u);
    ctx->pc = 0x38CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC10u;
    // 0x38cc14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38CC10u, 0x38CC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC18u;
label_38cc18:
    // 0x38cc18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38cc1c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x38cc1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x38cc20: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38cc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38cc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38cc28u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38cc2c: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x38cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x38cc30: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38CC30u;
    SET_GPR_U32(ctx, 31, 0x38CC38u);
    ctx->pc = 0x38CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC30u;
    // 0x38cc34: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38CC30u, 0x38CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC38u;
label_38cc38:
    // 0x38cc38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38cc38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38cc3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38cc3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38cc40: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x38cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38cc44: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x38cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x38cc48: 0xae03084c  sw          $v1, 0x84C($s0)
    ctx->pc = 0x38cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 3));
    // 0x38cc4c: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x38cc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_38cc50:
    // 0x38cc50: 0x111023  negu        $v0, $s1
    ctx->pc = 0x38cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x38cc54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38cc54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38cc58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38cc58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cc5c: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x38cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x38cc60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cc64: 0x3e00008  jr          $ra
    ctx->pc = 0x38CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CC64u;
        // 0x38cc68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CC6Cu;
    // 0x38cc6c: 0x0  nop
    ctx->pc = 0x38cc6cu;
    // NOP
label_38cc70:
    // 0x38cc70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38cc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38cc74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38cc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38cc78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38cc7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38cc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc80: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38cc84: 0xc0e3342  jal         func_38CD08
    ctx->pc = 0x38CC84u;
    SET_GPR_U32(ctx, 31, 0x38CC8Cu);
    ctx->pc = 0x38CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CC84u;
    // 0x38cc88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD08u, 0x38CC84u, 0x38CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CC8Cu;
label_38cc8c:
    // 0x38cc8c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x38cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x38cc90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38cc94: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x38cc94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x38cc98: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38cc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38cc9c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x38cc9cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 16)); // MMIO: 0x10002000
    // 0x38cca0: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x38cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x38cca4: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x38cca4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x38cca8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x38cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x38ccac: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CCACu;
    {
        const bool branch_taken_0x38ccac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x38CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCACu;
        // 0x38ccb0: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ccac) {
            ctx->pc = 0x38CCC8u;
            goto label_38ccc8;
        }
    }
    ctx->pc = 0x38CCB4u;
    // 0x38ccb4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x38ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x38ccb8: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CCB8u;
    {
        const bool branch_taken_0x38ccb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x38ccb8) {
            ctx->pc = 0x38CCBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CCB8u;
            // 0x38ccbc: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CCD4u;
            goto label_38ccd4;
        }
    }
    ctx->pc = 0x38CCC0u;
    // 0x38ccc0: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38CCC0u;
    {
        const bool branch_taken_0x38ccc0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x38CCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCC0u;
        // 0x38ccc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ccc0) {
            ctx->pc = 0x38CCD0u;
            goto label_38ccd0;
        }
    }
    ctx->pc = 0x38CCC8u;
label_38ccc8:
    // 0x38ccc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38CCC8u;
    {
        const bool branch_taken_0x38ccc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCC8u;
        // 0x38cccc: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ccc8) {
            ctx->pc = 0x38CCD4u;
            goto label_38ccd4;
        }
    }
    ctx->pc = 0x38CCD0u;
label_38ccd0:
    // 0x38ccd0: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x38ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_38ccd4:
    // 0x38ccd4: 0xc0e325e  jal         func_38C978
    ctx->pc = 0x38CCD4u;
    SET_GPR_U32(ctx, 31, 0x38CCDCu);
    ctx->pc = 0x38CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CCD4u;
    // 0x38ccd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C978u, 0x38CCD4u, 0x38CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CCDCu;
label_38ccdc:
    // 0x38ccdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x38ccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x38cce0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x38cce0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38cce4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x38cce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38cce8: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x38cce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x38ccec: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x38ccecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x38ccf0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38ccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38ccf4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38ccf4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38ccf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ccf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38ccfc: 0x3e00008  jr          $ra
    ctx->pc = 0x38CCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCFCu;
        // 0x38cd00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38CD04u;
    // 0x38cd04: 0x0  nop
    ctx->pc = 0x38cd04u;
    // NOP
    ctx->pc = 0x38cd08u;
}
