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

// Function: sub_00123D18
// Address: 0x123d18 - 0x123dd8
void sub_00123D18_0x123d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123D18_0x123d18");
#endif

    switch (ctx->pc) {
        case 0x123d64u: goto label_123d64;
        case 0x123d70u: goto label_123d70;
        case 0x123d98u: goto label_123d98;
        case 0x123dacu: goto label_123dac;
        case 0x123dbcu: goto label_123dbc;
        default: break;
    }

    ctx->pc = 0x123d18u;

    // 0x123d18: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x123d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x123d1c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x123d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x123d20: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x123d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x123d24: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x123d24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x123d28: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x123d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x123d2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x123d2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d30: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x123d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x123d34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d38: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x123d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x123d3c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x123d3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d40: 0x37a40002  ori         $a0, $sp, 0x2
    ctx->pc = 0x123d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)2);
    // 0x123d44: 0x2406007e  addiu       $a2, $zero, 0x7E
    ctx->pc = 0x123d44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    // 0x123d48: 0x2608cdc0  addiu       $t0, $s0, -0x3240
    ctx->pc = 0x123d48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954432));
    // 0x123d4c: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x123d4cu;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x43CDC0u));
    // 0x123d50: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x123d50u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x43CDC1u));
    // 0x123d54: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x123d54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x123d58: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x123d58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x123d5c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x123D5Cu;
    SET_GPR_U32(ctx, 31, 0x123D64u);
    ctx->pc = 0x123D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D5Cu;
    // 0x123d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x123D5Cu, 0x123D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D64u;
label_123d64:
    // 0x123d64: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x123d64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x123d68: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x123D68u;
    SET_GPR_U32(ctx, 31, 0x123D70u);
    ctx->pc = 0x123D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D68u;
    // 0x123d6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x123D68u, 0x123D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D70u;
label_123d70:
    // 0x123d70: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x123d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x123d74: 0x27a40082  addiu       $a0, $sp, 0x82
    ctx->pc = 0x123d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 130));
    // 0x123d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123d7c: 0x2608cdc0  addiu       $t0, $s0, -0x3240
    ctx->pc = 0x123d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954432));
    // 0x123d80: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x123d80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x123d84: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x123d84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x123d88: 0xa3a20080  sb          $v0, 0x80($sp)
    ctx->pc = 0x123d88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x123d8c: 0xa3a30081  sb          $v1, 0x81($sp)
    ctx->pc = 0x123d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 3));
    // 0x123d90: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x123D90u;
    SET_GPR_U32(ctx, 31, 0x123D98u);
    ctx->pc = 0x123D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123D90u;
    // 0x123d94: 0x2406007e  addiu       $a2, $zero, 0x7E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x123D90u, 0x123D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123D98u;
label_123d98:
    // 0x123d98: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x123D98u;
    {
        const bool branch_taken_0x123d98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x123d98) {
            ctx->pc = 0x123D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123D98u;
            // 0x123d9c: 0x8e640078  lw          $a0, 0x78($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123DB0u;
            goto label_123db0;
        }
    }
    ctx->pc = 0x123DA0u;
    // 0x123da0: 0x8e4500f8  lw          $a1, 0xF8($s2)
    ctx->pc = 0x123da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x123da4: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x123DA4u;
    SET_GPR_U32(ctx, 31, 0x123DACu);
    ctx->pc = 0x123DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DA4u;
    // 0x123da8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x123DA4u, 0x123DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DACu;
label_123dac:
    // 0x123dac: 0x8e640078  lw          $a0, 0x78($s3)
    ctx->pc = 0x123dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
label_123db0:
    // 0x123db0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x123db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123db4: 0xc04300a  jal         func_10C028
    ctx->pc = 0x123DB4u;
    SET_GPR_U32(ctx, 31, 0x123DBCu);
    ctx->pc = 0x123DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123DB4u;
    // 0x123db8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C028u, 0x123DB4u, 0x123DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123DBCu;
label_123dbc:
    // 0x123dbc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x123dbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x123dc0: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x123dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x123dc4: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x123dc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x123dc8: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x123dc8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x123dcc: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x123dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x123dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x123DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123DD0u;
        // 0x123dd4: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123DD8u;
}
