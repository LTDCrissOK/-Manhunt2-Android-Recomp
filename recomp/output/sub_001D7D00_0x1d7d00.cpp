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

// Function: sub_001D7D00
// Address: 0x1d7d00 - 0x1d7e68
void sub_001D7D00_0x1d7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7D00_0x1d7d00");
#endif

    switch (ctx->pc) {
        case 0x1d7d24u: goto label_1d7d24;
        case 0x1d7d2cu: goto label_1d7d2c;
        case 0x1d7d40u: goto label_1d7d40;
        case 0x1d7d50u: goto label_1d7d50;
        case 0x1d7d60u: goto label_1d7d60;
        case 0x1d7d68u: goto label_1d7d68;
        case 0x1d7d70u: goto label_1d7d70;
        case 0x1d7d88u: goto label_1d7d88;
        case 0x1d7d90u: goto label_1d7d90;
        case 0x1d7d98u: goto label_1d7d98;
        case 0x1d7dacu: goto label_1d7dac;
        case 0x1d7dbcu: goto label_1d7dbc;
        case 0x1d7dccu: goto label_1d7dcc;
        case 0x1d7dd4u: goto label_1d7dd4;
        case 0x1d7ddcu: goto label_1d7ddc;
        case 0x1d7dfcu: goto label_1d7dfc;
        case 0x1d7e14u: goto label_1d7e14;
        case 0x1d7e28u: goto label_1d7e28;
        case 0x1d7e30u: goto label_1d7e30;
        case 0x1d7e38u: goto label_1d7e38;
        case 0x1d7e40u: goto label_1d7e40;
        case 0x1d7e48u: goto label_1d7e48;
        case 0x1d7e50u: goto label_1d7e50;
        default: break;
    }

    ctx->pc = 0x1d7d00u;

    // 0x1d7d00: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x1d7d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x1d7d04: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1d7d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1d7d08: 0xffb20210  sd          $s2, 0x210($sp)
    ctx->pc = 0x1d7d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 18));
    // 0x1d7d0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d7d0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d10: 0xffb00200  sd          $s0, 0x200($sp)
    ctx->pc = 0x1d7d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 16));
    // 0x1d7d14: 0xffb10208  sd          $s1, 0x208($sp)
    ctx->pc = 0x1d7d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 17));
    // 0x1d7d18: 0xffbf0218  sd          $ra, 0x218($sp)
    ctx->pc = 0x1d7d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 31));
    // 0x1d7d1c: 0xc07f494  jal         func_1FD250
    ctx->pc = 0x1D7D1Cu;
    SET_GPR_U32(ctx, 31, 0x1D7D24u);
    ctx->pc = 0x1D7D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D1Cu;
    // 0x1d7d20: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD250u, 0x1D7D1Cu, 0x1D7D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D24u;
label_1d7d24:
    // 0x1d7d24: 0xc0b32e4  jal         func_2CCB90
    ctx->pc = 0x1D7D24u;
    SET_GPR_U32(ctx, 31, 0x1D7D2Cu);
    ctx->pc = 0x2CCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCB90u, 0x1D7D24u, 0x1D7D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D2Cu;
label_1d7d2c:
    // 0x1d7d2c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D7D2Cu;
    {
        const bool branch_taken_0x1d7d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D2Cu;
        // 0x1d7d30: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d2c) {
            ctx->pc = 0x1D7D90u;
            goto label_1d7d90;
        }
    }
    ctx->pc = 0x1D7D34u;
    // 0x1d7d34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d38: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1D7D38u;
    SET_GPR_U32(ctx, 31, 0x1D7D40u);
    ctx->pc = 0x1D7D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D38u;
    // 0x1d7d3c: 0x24a5ec20  addiu       $a1, $a1, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1D7D38u, 0x1D7D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D40u;
label_1d7d40:
    // 0x1d7d40: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1d7d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1d7d44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d48: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D7D48u;
    SET_GPR_U32(ctx, 31, 0x1D7D50u);
    ctx->pc = 0x1D7D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D48u;
    // 0x1d7d4c: 0x8c65ee38  lw          $a1, -0x11C8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D7D48u, 0x1D7D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D50u;
label_1d7d50:
    // 0x1d7d50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d7d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d7d54: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d58: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D7D58u;
    SET_GPR_U32(ctx, 31, 0x1D7D60u);
    ctx->pc = 0x1D7D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D58u;
    // 0x1d7d5c: 0x24a5d718  addiu       $a1, $a1, -0x28E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D7D58u, 0x1D7D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D60u;
label_1d7d60:
    // 0x1d7d60: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x1D7D60u;
    SET_GPR_U32(ctx, 31, 0x1D7D68u);
    ctx->pc = 0x1D7D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D60u;
    // 0x1d7d64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x1D7D60u, 0x1D7D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D68u;
label_1d7d68:
    // 0x1d7d68: 0xc09dc80  jal         func_277200
    ctx->pc = 0x1D7D68u;
    SET_GPR_U32(ctx, 31, 0x1D7D70u);
    ctx->pc = 0x1D7D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D68u;
    // 0x1d7d6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277200u, 0x1D7D68u, 0x1D7D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D70u;
label_1d7d70:
    // 0x1d7d70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D7D70u;
    {
        const bool branch_taken_0x1d7d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D70u;
        // 0x1d7d74: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d70) {
            ctx->pc = 0x1D7D90u;
            goto label_1d7d90;
        }
    }
    ctx->pc = 0x1D7D78u;
    // 0x1d7d78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7d7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7d80: 0xc0b3368  jal         func_2CCDA0
    ctx->pc = 0x1D7D80u;
    SET_GPR_U32(ctx, 31, 0x1D7D88u);
    ctx->pc = 0x1D7D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7D80u;
    // 0x1d7d84: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCDA0u, 0x1D7D80u, 0x1D7D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D88u;
label_1d7d88:
    // 0x1d7d88: 0xc0b3360  jal         func_2CCD80
    ctx->pc = 0x1D7D88u;
    SET_GPR_U32(ctx, 31, 0x1D7D90u);
    ctx->pc = 0x2CCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD80u, 0x1D7D88u, 0x1D7D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D90u;
label_1d7d90:
    // 0x1d7d90: 0xc0b32e4  jal         func_2CCB90
    ctx->pc = 0x1D7D90u;
    SET_GPR_U32(ctx, 31, 0x1D7D98u);
    ctx->pc = 0x2CCB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCB90u, 0x1D7D90u, 0x1D7D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7D98u;
label_1d7d98:
    // 0x1d7d98: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D7D98u;
    {
        const bool branch_taken_0x1d7d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7D98u;
        // 0x1d7d9c: 0x3c05004c  lui         $a1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7d98) {
            ctx->pc = 0x1D7E40u;
            goto label_1d7e40;
        }
    }
    ctx->pc = 0x1D7DA0u;
    // 0x1d7da0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7da4: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1D7DA4u;
    SET_GPR_U32(ctx, 31, 0x1D7DACu);
    ctx->pc = 0x1D7DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DA4u;
    // 0x1d7da8: 0x24a5ec20  addiu       $a1, $a1, -0x13E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1D7DA4u, 0x1D7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DACu;
label_1d7dac:
    // 0x1d7dac: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1d7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1d7db0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7db4: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D7DB4u;
    SET_GPR_U32(ctx, 31, 0x1D7DBCu);
    ctx->pc = 0x1D7DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DB4u;
    // 0x1d7db8: 0x8c65ee38  lw          $a1, -0x11C8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D7DB4u, 0x1D7DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DBCu;
label_1d7dbc:
    // 0x1d7dbc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1d7dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1d7dc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7dc4: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x1D7DC4u;
    SET_GPR_U32(ctx, 31, 0x1D7DCCu);
    ctx->pc = 0x1D7DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DC4u;
    // 0x1d7dc8: 0x24a5d728  addiu       $a1, $a1, -0x28D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x1D7DC4u, 0x1D7DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DCCu;
label_1d7dcc:
    // 0x1d7dcc: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x1D7DCCu;
    SET_GPR_U32(ctx, 31, 0x1D7DD4u);
    ctx->pc = 0x1D7DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DCCu;
    // 0x1d7dd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x1D7DCCu, 0x1D7DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DD4u;
label_1d7dd4:
    // 0x1d7dd4: 0xc09dc80  jal         func_277200
    ctx->pc = 0x1D7DD4u;
    SET_GPR_U32(ctx, 31, 0x1D7DDCu);
    ctx->pc = 0x1D7DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DD4u;
    // 0x1d7dd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277200u, 0x1D7DD4u, 0x1D7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DDCu;
label_1d7ddc:
    // 0x1d7ddc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D7DDCu;
    {
        const bool branch_taken_0x1d7ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7DDCu;
        // 0x1d7de0: 0x27b00100  addiu       $s0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ddc) {
            ctx->pc = 0x1D7E40u;
            goto label_1d7e40;
        }
    }
    ctx->pc = 0x1D7DE4u;
    // 0x1d7de4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x1d7de4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x1d7de8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1d7de8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7dec: 0x24c68f20  addiu       $a2, $a2, -0x70E0
    ctx->pc = 0x1d7decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938400));
    // 0x1d7df0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d7df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7df4: 0xc075e68  jal         func_1D79A0
    ctx->pc = 0x1D7DF4u;
    SET_GPR_U32(ctx, 31, 0x1D7DFCu);
    ctx->pc = 0x1D7DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7DF4u;
    // 0x1d7df8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D79A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D79A0u, 0x1D7DF4u, 0x1D7DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7DFCu;
label_1d7dfc:
    // 0x1d7dfc: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x1d7dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x1d7e00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d7e00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e04: 0x26314ef0  addiu       $s1, $s1, 0x4EF0
    ctx->pc = 0x1d7e04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20208));
    // 0x1d7e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d7e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e0c: 0xc0aecae  jal         func_2BB2B8
    ctx->pc = 0x1D7E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E14u);
    ctx->pc = 0x1D7E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E0Cu;
    // 0x1d7e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB2B8u, 0x1D7E0Cu, 0x1D7E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E14u;
label_1d7e14:
    // 0x1d7e14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d7e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d7e18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d7e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d7e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d7e20: 0xc0b3368  jal         func_2CCDA0
    ctx->pc = 0x1D7E20u;
    SET_GPR_U32(ctx, 31, 0x1D7E28u);
    ctx->pc = 0x1D7E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E20u;
    // 0x1d7e24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCDA0u, 0x1D7E20u, 0x1D7E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E28u;
label_1d7e28:
    // 0x1d7e28: 0xc0b3360  jal         func_2CCD80
    ctx->pc = 0x1D7E28u;
    SET_GPR_U32(ctx, 31, 0x1D7E30u);
    ctx->pc = 0x2CCD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCD80u, 0x1D7E28u, 0x1D7E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E30u;
label_1d7e30:
    // 0x1d7e30: 0xc0ae9f6  jal         func_2BA7D8
    ctx->pc = 0x1D7E30u;
    SET_GPR_U32(ctx, 31, 0x1D7E38u);
    ctx->pc = 0x1D7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E30u;
    // 0x1d7e34: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x1D7E30u, 0x1D7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E38u;
label_1d7e38:
    // 0x1d7e38: 0xc0ae94a  jal         func_2BA528
    ctx->pc = 0x1D7E38u;
    SET_GPR_U32(ctx, 31, 0x1D7E40u);
    ctx->pc = 0x1D7E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E38u;
    // 0x1d7e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x1D7E38u, 0x1D7E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E40u;
label_1d7e40:
    // 0x1d7e40: 0xc07f482  jal         func_1FD208
    ctx->pc = 0x1D7E40u;
    SET_GPR_U32(ctx, 31, 0x1D7E48u);
    ctx->pc = 0x1D7E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7E40u;
    // 0x1d7e44: 0x26449b10  addiu       $a0, $s2, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD208u, 0x1D7E40u, 0x1D7E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E48u;
label_1d7e48:
    // 0x1d7e48: 0xc075eba  jal         func_1D7AE8
    ctx->pc = 0x1D7E48u;
    SET_GPR_U32(ctx, 31, 0x1D7E50u);
    ctx->pc = 0x1D7AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7AE8u, 0x1D7E48u, 0x1D7E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7E50u;
label_1d7e50:
    // 0x1d7e50: 0xdfb00200  ld          $s0, 0x200($sp)
    ctx->pc = 0x1d7e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1d7e54: 0xdfb10208  ld          $s1, 0x208($sp)
    ctx->pc = 0x1d7e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1d7e58: 0xdfb20210  ld          $s2, 0x210($sp)
    ctx->pc = 0x1d7e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x1d7e5c: 0xdfbf0218  ld          $ra, 0x218($sp)
    ctx->pc = 0x1d7e5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1d7e60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7E60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7E60u;
        // 0x1d7e64: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7E60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7E68u;
}
