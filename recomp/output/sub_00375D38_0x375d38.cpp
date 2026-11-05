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

// Function: sub_00375D38
// Address: 0x375d38 - 0x375e28
void sub_00375D38_0x375d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375D38_0x375d38");
#endif

    switch (ctx->pc) {
        case 0x375d58u: goto label_375d58;
        case 0x375d70u: goto label_375d70;
        case 0x375d88u: goto label_375d88;
        case 0x375da0u: goto label_375da0;
        case 0x375db4u: goto label_375db4;
        default: break;
    }

    ctx->pc = 0x375d38u;

    // 0x375d38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x375d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x375d3c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x375d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x375d40: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x375d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x375d44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x375d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x375d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x375d4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x375d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375d50: 0xc0dde50  jal         func_377940
    ctx->pc = 0x375D50u;
    SET_GPR_U32(ctx, 31, 0x375D58u);
    ctx->pc = 0x375D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D50u;
    // 0x375d54: 0x240400dc  addiu       $a0, $zero, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377940u, 0x375D50u, 0x375D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D58u;
label_375d58:
    // 0x375d58: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x375d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x375d5c: 0x8c43cd34  lw          $v1, -0x32CC($v0)
    ctx->pc = 0x375d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD34u));
    // 0x375d60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x375D60u;
    {
        const bool branch_taken_0x375d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x375d60) {
            ctx->pc = 0x375D70u;
            goto label_375d70;
        }
    }
    ctx->pc = 0x375D68u;
    // 0x375d68: 0xc0dd78a  jal         func_375E28
    ctx->pc = 0x375D68u;
    SET_GPR_U32(ctx, 31, 0x375D70u);
    ctx->pc = 0x375E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375E28u, 0x375D68u, 0x375D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D70u;
label_375d70:
    // 0x375d70: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x375D70u;
    {
        const bool branch_taken_0x375d70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x375D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D70u;
        // 0x375d74: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375d70) {
            ctx->pc = 0x375D90u;
            goto label_375d90;
        }
    }
    ctx->pc = 0x375D78u;
    // 0x375d78: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x375d78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x375d7c: 0x8c44cd38  lw          $a0, -0x32C8($v0)
    ctx->pc = 0x375d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954296)));
    // 0x375d80: 0xc0dfdf6  jal         func_37F7D8
    ctx->pc = 0x375D80u;
    SET_GPR_U32(ctx, 31, 0x375D88u);
    ctx->pc = 0x375D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D80u;
    // 0x375d84: 0x24a5f4b8  addiu       $a1, $a1, -0xB48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7D8u, 0x375D80u, 0x375D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375D88u;
label_375d88:
    // 0x375d88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x375D88u;
    {
        const bool branch_taken_0x375d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375D88u;
        // 0x375d8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375d88) {
            ctx->pc = 0x375DA4u;
            goto label_375da4;
        }
    }
    ctx->pc = 0x375D90u;
label_375d90:
    // 0x375d90: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x375d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x375d94: 0x8c44cd38  lw          $a0, -0x32C8($v0)
    ctx->pc = 0x375d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954296)));
    // 0x375d98: 0xc0dfdf6  jal         func_37F7D8
    ctx->pc = 0x375D98u;
    SET_GPR_U32(ctx, 31, 0x375DA0u);
    ctx->pc = 0x375D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375D98u;
    // 0x375d9c: 0x24a5f4c8  addiu       $a1, $a1, -0xB38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37F7D8u, 0x375D98u, 0x375DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DA0u;
label_375da0:
    // 0x375da0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x375da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_375da4:
    // 0x375da4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x375da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375da8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x375da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375dac: 0xc0dde27  jal         func_37789C
    ctx->pc = 0x375DACu;
    SET_GPR_U32(ctx, 31, 0x375DB4u);
    ctx->pc = 0x375DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375DACu;
    // 0x375db0: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37789Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37789Cu, 0x375DACu, 0x375DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x375DB4u;
label_375db4:
    // 0x375db4: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x375db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x375db8: 0x2407003f  addiu       $a3, $zero, 0x3F
    ctx->pc = 0x375db8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x375dbc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x375dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375dc0: 0x30a20fff  andi        $v0, $a1, 0xFFF
    ctx->pc = 0x375dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x375dc4: 0x30a4003f  andi        $a0, $a1, 0x3F
    ctx->pc = 0x375dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
    // 0x375dc8: 0x30c30fff  andi        $v1, $a2, 0xFFF
    ctx->pc = 0x375dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x375dcc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x375dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x375dd0: 0x1087000d  beq         $a0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x375DD0u;
    {
        const bool branch_taken_0x375dd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x375DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DD0u;
        // 0x375dd4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375dd0) {
            ctx->pc = 0x375E08u;
            goto label_375e08;
        }
    }
    ctx->pc = 0x375DD8u;
    // 0x375dd8: 0x30c2003f  andi        $v0, $a2, 0x3F
    ctx->pc = 0x375dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x375ddc: 0x10470004  beq         $v0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x375DDCu;
    {
        const bool branch_taken_0x375ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x375DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DDCu;
        // 0x375de0: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375ddc) {
            ctx->pc = 0x375DF0u;
            goto label_375df0;
        }
    }
    ctx->pc = 0x375DE4u;
    // 0x375de4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x375de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375de8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x375DE8u;
    {
        const bool branch_taken_0x375de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DE8u;
        // 0x375dec: 0xac602d58  sw          $zero, 0x2D58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375de8) {
            ctx->pc = 0x375E14u;
            goto label_375e14;
        }
    }
    ctx->pc = 0x375DF0u;
label_375df0:
    // 0x375df0: 0x30a30fc0  andi        $v1, $a1, 0xFC0
    ctx->pc = 0x375df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4032);
    // 0x375df4: 0x24020fc0  addiu       $v0, $zero, 0xFC0
    ctx->pc = 0x375df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4032));
    // 0x375df8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x375DF8u;
    {
        const bool branch_taken_0x375df8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x375DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375DF8u;
        // 0x375dfc: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375df8) {
            ctx->pc = 0x375E08u;
            goto label_375e08;
        }
    }
    ctx->pc = 0x375E00u;
    // 0x375e00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x375E00u;
    {
        const bool branch_taken_0x375e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x375E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E00u;
        // 0x375e04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x375e00) {
            ctx->pc = 0x375E10u;
            goto label_375e10;
        }
    }
    ctx->pc = 0x375E08u;
label_375e08:
    // 0x375e08: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x375e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x375e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x375e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_375e10:
    // 0x375e10: 0xac622d58  sw          $v0, 0x2D58($v1)
    ctx->pc = 0x375e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11608), GPR_U32(ctx, 2));
label_375e14:
    // 0x375e14: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x375e14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375e18: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x375e18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375e1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x375e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x375e20: 0x3e00008  jr          $ra
    ctx->pc = 0x375E20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375E20u;
        // 0x375e24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375E20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375E28u;
}
