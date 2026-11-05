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

// Function: sub_00365CA0
// Address: 0x365ca0 - 0x365dc8
void sub_00365CA0_0x365ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365CA0_0x365ca0");
#endif

    switch (ctx->pc) {
        case 0x365ca0u: goto label_365ca0;
        case 0x365ca4u: goto label_365ca4;
        case 0x365ca8u: goto label_365ca8;
        case 0x365cacu: goto label_365cac;
        case 0x365cb0u: goto label_365cb0;
        case 0x365cb4u: goto label_365cb4;
        case 0x365cb8u: goto label_365cb8;
        case 0x365cbcu: goto label_365cbc;
        case 0x365cc0u: goto label_365cc0;
        case 0x365cc4u: goto label_365cc4;
        case 0x365cc8u: goto label_365cc8;
        case 0x365cccu: goto label_365ccc;
        case 0x365cd0u: goto label_365cd0;
        case 0x365cd4u: goto label_365cd4;
        case 0x365cd8u: goto label_365cd8;
        case 0x365cdcu: goto label_365cdc;
        case 0x365ce0u: goto label_365ce0;
        case 0x365ce4u: goto label_365ce4;
        case 0x365ce8u: goto label_365ce8;
        case 0x365cecu: goto label_365cec;
        case 0x365cf0u: goto label_365cf0;
        case 0x365cf4u: goto label_365cf4;
        case 0x365cf8u: goto label_365cf8;
        case 0x365cfcu: goto label_365cfc;
        case 0x365d00u: goto label_365d00;
        case 0x365d04u: goto label_365d04;
        case 0x365d08u: goto label_365d08;
        case 0x365d0cu: goto label_365d0c;
        case 0x365d10u: goto label_365d10;
        case 0x365d14u: goto label_365d14;
        case 0x365d18u: goto label_365d18;
        case 0x365d1cu: goto label_365d1c;
        case 0x365d20u: goto label_365d20;
        case 0x365d24u: goto label_365d24;
        case 0x365d28u: goto label_365d28;
        case 0x365d2cu: goto label_365d2c;
        case 0x365d30u: goto label_365d30;
        case 0x365d34u: goto label_365d34;
        case 0x365d38u: goto label_365d38;
        case 0x365d3cu: goto label_365d3c;
        case 0x365d40u: goto label_365d40;
        case 0x365d44u: goto label_365d44;
        case 0x365d48u: goto label_365d48;
        case 0x365d4cu: goto label_365d4c;
        case 0x365d50u: goto label_365d50;
        case 0x365d54u: goto label_365d54;
        case 0x365d58u: goto label_365d58;
        case 0x365d5cu: goto label_365d5c;
        case 0x365d60u: goto label_365d60;
        case 0x365d64u: goto label_365d64;
        case 0x365d68u: goto label_365d68;
        case 0x365d6cu: goto label_365d6c;
        case 0x365d70u: goto label_365d70;
        case 0x365d74u: goto label_365d74;
        case 0x365d78u: goto label_365d78;
        case 0x365d7cu: goto label_365d7c;
        case 0x365d80u: goto label_365d80;
        case 0x365d84u: goto label_365d84;
        case 0x365d88u: goto label_365d88;
        case 0x365d8cu: goto label_365d8c;
        case 0x365d90u: goto label_365d90;
        case 0x365d94u: goto label_365d94;
        case 0x365d98u: goto label_365d98;
        case 0x365d9cu: goto label_365d9c;
        case 0x365da0u: goto label_365da0;
        case 0x365da4u: goto label_365da4;
        case 0x365da8u: goto label_365da8;
        case 0x365dacu: goto label_365dac;
        case 0x365db0u: goto label_365db0;
        case 0x365db4u: goto label_365db4;
        case 0x365db8u: goto label_365db8;
        case 0x365dbcu: goto label_365dbc;
        case 0x365dc0u: goto label_365dc0;
        case 0x365dc4u: goto label_365dc4;
        default: break;
    }

    ctx->pc = 0x365ca0u;

label_365ca0:
    // 0x365ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x365ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_365ca4:
    // 0x365ca4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x365ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_365ca8:
    // 0x365ca8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x365ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_365cac:
    // 0x365cac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x365cacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_365cb0:
    // 0x365cb0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x365cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_365cb4:
    // 0x365cb4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x365cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_365cb8:
    // 0x365cb8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x365cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_365cbc:
    // 0x365cbc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x365cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_365cc0:
    // 0x365cc0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x365cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_365cc4:
    // 0x365cc4: 0xc0d7384  jal         func_35CE10
label_365cc8:
    if (ctx->pc == 0x365CC8u) {
        ctx->pc = 0x365CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CC4u;
        // 0x365cc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365CCCu;
        goto label_365ccc;
    }
    ctx->pc = 0x365CC4u;
    SET_GPR_U32(ctx, 31, 0x365CCCu);
    ctx->pc = 0x365CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CC4u;
    // 0x365cc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x365CC4u, 0x365CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CCCu;
label_365ccc:
    // 0x365ccc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x365cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_365cd0:
    // 0x365cd0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x365cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_365cd4:
    // 0x365cd4: 0xc0d7384  jal         func_35CE10
label_365cd8:
    if (ctx->pc == 0x365CD8u) {
        ctx->pc = 0x365CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CD4u;
        // 0x365cd8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365CDCu;
        goto label_365cdc;
    }
    ctx->pc = 0x365CD4u;
    SET_GPR_U32(ctx, 31, 0x365CDCu);
    ctx->pc = 0x365CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CD4u;
    // 0x365cd8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x365CD4u, 0x365CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CDCu;
label_365cdc:
    // 0x365cdc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x365cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_365ce0:
    // 0x365ce0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x365ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
label_365ce4:
    // 0x365ce4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x365ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_365ce8:
    // 0x365ce8: 0x2472fe40  addiu       $s2, $v1, -0x1C0
    ctx->pc = 0x365ce8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966848));
label_365cec:
    // 0x365cec: 0x2484edf0  addiu       $a0, $a0, -0x1210
    ctx->pc = 0x365cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
label_365cf0:
    // 0x365cf0: 0xc09eb20  jal         func_27AC80
label_365cf4:
    if (ctx->pc == 0x365CF4u) {
        ctx->pc = 0x365CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CF0u;
        // 0x365cf4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365CF8u;
        goto label_365cf8;
    }
    ctx->pc = 0x365CF0u;
    SET_GPR_U32(ctx, 31, 0x365CF8u);
    ctx->pc = 0x365CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CF0u;
    // 0x365cf4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x365CF0u, 0x365CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365CF8u;
label_365cf8:
    // 0x365cf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x365cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_365cfc:
    // 0x365cfc: 0xc0d7394  jal         func_35CE50
label_365d00:
    if (ctx->pc == 0x365D00u) {
        ctx->pc = 0x365D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365CFCu;
        // 0x365d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D04u;
        goto label_365d04;
    }
    ctx->pc = 0x365CFCu;
    SET_GPR_U32(ctx, 31, 0x365D04u);
    ctx->pc = 0x365D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365CFCu;
    // 0x365d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x365CFCu, 0x365D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D04u;
label_365d04:
    // 0x365d04: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x365d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_365d08:
    // 0x365d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365d0c:
    // 0x365d0c: 0xc0d756c  jal         func_35D5B0
label_365d10:
    if (ctx->pc == 0x365D10u) {
        ctx->pc = 0x365D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D0Cu;
        // 0x365d10: 0x24a5eeb0  addiu       $a1, $a1, -0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D14u;
        goto label_365d14;
    }
    ctx->pc = 0x365D0Cu;
    SET_GPR_U32(ctx, 31, 0x365D14u);
    ctx->pc = 0x365D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D0Cu;
    // 0x365d10: 0x24a5eeb0  addiu       $a1, $a1, -0x1150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x365D0Cu, 0x365D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D14u;
label_365d14:
    // 0x365d14: 0x16200014  bnez        $s1, . + 4 + (0x14 << 2)
label_365d18:
    if (ctx->pc == 0x365D18u) {
        ctx->pc = 0x365D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D14u;
        // 0x365d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D1Cu;
        goto label_365d1c;
    }
    ctx->pc = 0x365D14u;
    {
        const bool branch_taken_0x365d14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x365D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D14u;
        // 0x365d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d14) {
            ctx->pc = 0x365D68u;
            goto label_365d68;
        }
    }
    ctx->pc = 0x365D1Cu;
label_365d1c:
    // 0x365d1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x365d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_365d20:
    // 0x365d20: 0xc09dd98  jal         func_277660
label_365d24:
    if (ctx->pc == 0x365D24u) {
        ctx->pc = 0x365D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D20u;
        // 0x365d24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D28u;
        goto label_365d28;
    }
    ctx->pc = 0x365D20u;
    SET_GPR_U32(ctx, 31, 0x365D28u);
    ctx->pc = 0x365D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D20u;
    // 0x365d24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x365D20u, 0x365D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D28u;
label_365d28:
    // 0x365d28: 0x1000000f  b           . + 4 + (0xF << 2)
label_365d2c:
    if (ctx->pc == 0x365D2Cu) {
        ctx->pc = 0x365D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D28u;
        // 0x365d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D30u;
        goto label_365d30;
    }
    ctx->pc = 0x365D28u;
    {
        const bool branch_taken_0x365d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D28u;
        // 0x365d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d28) {
            ctx->pc = 0x365D68u;
            goto label_365d68;
        }
    }
    ctx->pc = 0x365D30u;
label_365d30:
    // 0x365d30: 0xc0d9604  jal         func_365810
label_365d34:
    if (ctx->pc == 0x365D34u) {
        ctx->pc = 0x365D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D30u;
        // 0x365d34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D38u;
        goto label_365d38;
    }
    ctx->pc = 0x365D30u;
    SET_GPR_U32(ctx, 31, 0x365D38u);
    ctx->pc = 0x365D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D30u;
    // 0x365d34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365810u, 0x365D30u, 0x365D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D38u;
label_365d38:
    // 0x365d38: 0x10000005  b           . + 4 + (0x5 << 2)
label_365d3c:
    if (ctx->pc == 0x365D3Cu) {
        ctx->pc = 0x365D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D38u;
        // 0x365d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D40u;
        goto label_365d40;
    }
    ctx->pc = 0x365D38u;
    {
        const bool branch_taken_0x365d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D38u;
        // 0x365d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d38) {
            ctx->pc = 0x365D50u;
            goto label_365d50;
        }
    }
    ctx->pc = 0x365D40u;
label_365d40:
    // 0x365d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_365d44:
    // 0x365d44: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x365d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_365d48:
    // 0x365d48: 0x40f809  jalr        $v0
label_365d4c:
    if (ctx->pc == 0x365D4Cu) {
        ctx->pc = 0x365D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D48u;
        // 0x365d4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D50u;
        goto label_365d50;
    }
    ctx->pc = 0x365D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x365D50u);
        ctx->pc = 0x365D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D48u;
        // 0x365d4c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365D48u, 0x365D50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x365D50u;
label_365d50:
    // 0x365d50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_365d54:
    // 0x365d54: 0xc09de68  jal         func_2779A0
label_365d58:
    if (ctx->pc == 0x365D58u) {
        ctx->pc = 0x365D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D54u;
        // 0x365d58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D5Cu;
        goto label_365d5c;
    }
    ctx->pc = 0x365D54u;
    SET_GPR_U32(ctx, 31, 0x365D5Cu);
    ctx->pc = 0x365D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D54u;
    // 0x365d58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x365D54u, 0x365D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D5Cu;
label_365d5c:
    // 0x365d5c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_365d60:
    if (ctx->pc == 0x365D60u) {
        ctx->pc = 0x365D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D5Cu;
        // 0x365d60: 0x8e0300a8  lw          $v1, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D64u;
        goto label_365d64;
    }
    ctx->pc = 0x365D5Cu;
    {
        const bool branch_taken_0x365d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365d5c) {
            ctx->pc = 0x365D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365D5Cu;
            // 0x365d60: 0x8e0300a8  lw          $v1, 0xA8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x365D40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365d40;
        }
    }
    ctx->pc = 0x365D64u;
label_365d64:
    // 0x365d64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x365d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_365d68:
    // 0x365d68: 0xc09de3a  jal         func_2778E8
label_365d6c:
    if (ctx->pc == 0x365D6Cu) {
        ctx->pc = 0x365D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D68u;
        // 0x365d6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D70u;
        goto label_365d70;
    }
    ctx->pc = 0x365D68u;
    SET_GPR_U32(ctx, 31, 0x365D70u);
    ctx->pc = 0x365D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D68u;
    // 0x365d6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x365D68u, 0x365D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D70u;
label_365d70:
    // 0x365d70: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_365d74:
    if (ctx->pc == 0x365D74u) {
        ctx->pc = 0x365D78u;
        goto label_365d78;
    }
    ctx->pc = 0x365D70u;
    {
        const bool branch_taken_0x365d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365d70) {
            ctx->pc = 0x365D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365d30;
        }
    }
    ctx->pc = 0x365D78u;
label_365d78:
    // 0x365d78: 0xc09ddec  jal         func_2777B0
label_365d7c:
    if (ctx->pc == 0x365D7Cu) {
        ctx->pc = 0x365D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D78u;
        // 0x365d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D80u;
        goto label_365d80;
    }
    ctx->pc = 0x365D78u;
    SET_GPR_U32(ctx, 31, 0x365D80u);
    ctx->pc = 0x365D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D78u;
    // 0x365d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x365D78u, 0x365D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D80u;
label_365d80:
    // 0x365d80: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x365d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_365d84:
    // 0x365d84: 0xc0d7412  jal         func_35D048
label_365d88:
    if (ctx->pc == 0x365D88u) {
        ctx->pc = 0x365D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D84u;
        // 0x365d88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D8Cu;
        goto label_365d8c;
    }
    ctx->pc = 0x365D84u;
    SET_GPR_U32(ctx, 31, 0x365D8Cu);
    ctx->pc = 0x365D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D84u;
    // 0x365d88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x365D84u, 0x365D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D8Cu;
label_365d8c:
    // 0x365d8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x365d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_365d90:
    // 0x365d90: 0xc0d7412  jal         func_35D048
label_365d94:
    if (ctx->pc == 0x365D94u) {
        ctx->pc = 0x365D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D90u;
        // 0x365d94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365D98u;
        goto label_365d98;
    }
    ctx->pc = 0x365D90u;
    SET_GPR_U32(ctx, 31, 0x365D98u);
    ctx->pc = 0x365D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D90u;
    // 0x365d94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x365D90u, 0x365D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365D98u;
label_365d98:
    // 0x365d98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x365d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_365d9c:
    // 0x365d9c: 0xc0d7412  jal         func_35D048
label_365da0:
    if (ctx->pc == 0x365DA0u) {
        ctx->pc = 0x365DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D9Cu;
        // 0x365da0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365DA4u;
        goto label_365da4;
    }
    ctx->pc = 0x365D9Cu;
    SET_GPR_U32(ctx, 31, 0x365DA4u);
    ctx->pc = 0x365DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365D9Cu;
    // 0x365da0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x365D9Cu, 0x365DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365DA4u;
label_365da4:
    // 0x365da4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x365da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_365da8:
    // 0x365da8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x365da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_365dac:
    // 0x365dac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x365dacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_365db0:
    // 0x365db0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x365db0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_365db4:
    // 0x365db4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x365db4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_365db8:
    // 0x365db8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x365db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_365dbc:
    // 0x365dbc: 0x3e00008  jr          $ra
label_365dc0:
    if (ctx->pc == 0x365DC0u) {
        ctx->pc = 0x365DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DBCu;
        // 0x365dc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x365DC4u;
        goto label_365dc4;
    }
    ctx->pc = 0x365DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365DBCu;
        // 0x365dc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365DC4u;
label_365dc4:
    // 0x365dc4: 0x0  nop
    ctx->pc = 0x365dc4u;
    // NOP
    ctx->pc = 0x365dc8u;
}
