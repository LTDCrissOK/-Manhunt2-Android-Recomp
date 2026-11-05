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

// Function: sub_00390CB0
// Address: 0x390cb0 - 0x3910c0
void sub_00390CB0_0x390cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390CB0_0x390cb0");
#endif

    switch (ctx->pc) {
        case 0x390d38u: goto label_390d38;
        case 0x390d60u: goto label_390d60;
        case 0x390d80u: goto label_390d80;
        case 0x390dccu: goto label_390dcc;
        case 0x390e00u: goto label_390e00;
        case 0x390e1cu: goto label_390e1c;
        case 0x390e24u: goto label_390e24;
        case 0x390e30u: goto label_390e30;
        case 0x390e44u: goto label_390e44;
        case 0x390e50u: goto label_390e50;
        case 0x390e64u: goto label_390e64;
        case 0x390e74u: goto label_390e74;
        case 0x390ea8u: goto label_390ea8;
        case 0x390eb4u: goto label_390eb4;
        case 0x390ec4u: goto label_390ec4;
        case 0x390ed8u: goto label_390ed8;
        case 0x390eecu: goto label_390eec;
        case 0x390efcu: goto label_390efc;
        case 0x390f08u: goto label_390f08;
        case 0x390f18u: goto label_390f18;
        case 0x390f24u: goto label_390f24;
        case 0x390f34u: goto label_390f34;
        case 0x390f40u: goto label_390f40;
        case 0x390f50u: goto label_390f50;
        case 0x390f5cu: goto label_390f5c;
        case 0x390f68u: goto label_390f68;
        case 0x390f7cu: goto label_390f7c;
        case 0x390f90u: goto label_390f90;
        case 0x390f9cu: goto label_390f9c;
        case 0x390fa8u: goto label_390fa8;
        case 0x390fb8u: goto label_390fb8;
        case 0x390fccu: goto label_390fcc;
        case 0x390fe0u: goto label_390fe0;
        case 0x390fecu: goto label_390fec;
        case 0x390ff8u: goto label_390ff8;
        case 0x391004u: goto label_391004;
        case 0x391014u: goto label_391014;
        case 0x391084u: goto label_391084;
        default: break;
    }

    ctx->pc = 0x390cb0u;

    // 0x390cb0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x390cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x390cb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x390cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x390cb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x390cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x390cbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x390cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390cc0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x390cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x390cc4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x390cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x390cc8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x390cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x390ccc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x390cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x390cd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x390cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x390cd4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x390cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390cd8: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x390cd8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x390cdc: 0x108fc2  srl         $s1, $s0, 31
    ctx->pc = 0x390cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x390ce0: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x390ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x390ce4: 0x3c024086  lui         $v0, 0x4086
    ctx->pc = 0x390ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16518 << 16));
    // 0x390ce8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x390ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x390cec: 0x34422e41  ori         $v0, $v0, 0x2E41
    ctx->pc = 0x390cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11841);
    // 0x390cf0: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x390cf0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x390cf4: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x390cf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x390cf8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x390CF8u;
    {
        const bool branch_taken_0x390cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390CF8u;
        // 0x390cfc: 0x3c027fef  lui         $v0, 0x7FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32751 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390cf8) {
            ctx->pc = 0x390D90u;
            goto label_390d90;
        }
    }
    ctx->pc = 0x390D00u;
    // 0x390d00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390d04: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x390d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x390d08: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x390D08u;
    {
        const bool branch_taken_0x390d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D08u;
        // 0x390d0c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d08) {
            ctx->pc = 0x390D50u;
            goto label_390d50;
        }
    }
    ctx->pc = 0x390D10u;
    // 0x390d10: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x390d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x390d14: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x390d14u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x390d18: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x390d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    // 0x390d1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390d20: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x390d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x390d24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x390d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x390d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x390D28u;
    {
        const bool branch_taken_0x390d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x390d28) {
            ctx->pc = 0x390D40u;
            goto label_390d40;
        }
    }
    ctx->pc = 0x390D30u;
    // 0x390d30: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x390D30u;
    SET_GPR_U32(ctx, 31, 0x390D38u);
    ctx->pc = 0x390D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D30u;
    // 0x390d34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x390D30u, 0x390D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D38u;
label_390d38:
    // 0x390d38: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x390D38u;
    {
        const bool branch_taken_0x390d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D38u;
        // 0x390d3c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d38) {
            ctx->pc = 0x39108Cu;
            goto label_39108c;
        }
    }
    ctx->pc = 0x390D40u;
label_390d40:
    // 0x390d40: 0x162000d1  bnez        $s1, . + 4 + (0xD1 << 2)
    ctx->pc = 0x390D40u;
    {
        const bool branch_taken_0x390d40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x390D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D40u;
        // 0x390d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d40) {
            ctx->pc = 0x391088u;
            goto label_391088;
        }
    }
    ctx->pc = 0x390D48u;
    // 0x390d48: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x390D48u;
    {
        const bool branch_taken_0x390d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D48u;
        // 0x390d4c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d48) {
            ctx->pc = 0x391088u;
            goto label_391088;
        }
    }
    ctx->pc = 0x390D50u;
label_390d50:
    // 0x390d50: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390d54: 0xdc259a00  ld          $a1, -0x6600($at)
    ctx->pc = 0x390d54u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479A00u));
    // 0x390d58: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390D58u;
    SET_GPR_U32(ctx, 31, 0x390D60u);
    ctx->pc = 0x390D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D58u;
    // 0x390d5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390D58u, 0x390D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D60u;
label_390d60:
    // 0x390d60: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390D60u;
    {
        const bool branch_taken_0x390d60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x390D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D60u;
        // 0x390d64: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d60) {
            ctx->pc = 0x390D70u;
            goto label_390d70;
        }
    }
    ctx->pc = 0x390D68u;
    // 0x390d68: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x390D68u;
    {
        const bool branch_taken_0x390d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D68u;
        // 0x390d6c: 0xdc6299e8  ld          $v0, -0x6618($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4294941160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d68) {
            ctx->pc = 0x391088u;
            goto label_391088;
        }
    }
    ctx->pc = 0x390D70u;
label_390d70:
    // 0x390d70: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390d74: 0xdc259a08  ld          $a1, -0x65F8($at)
    ctx->pc = 0x390d74u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479A08u));
    // 0x390d78: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390D78u;
    SET_GPR_U32(ctx, 31, 0x390D80u);
    ctx->pc = 0x390D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390D78u;
    // 0x390d7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390D78u, 0x390D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390D80u;
label_390d80:
    // 0x390d80: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390D80u;
    {
        const bool branch_taken_0x390d80 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x390D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D80u;
        // 0x390d84: 0x3c023fd6  lui         $v0, 0x3FD6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16342 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d80) {
            ctx->pc = 0x390D94u;
            goto label_390d94;
        }
    }
    ctx->pc = 0x390D88u;
    // 0x390d88: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x390D88u;
    {
        const bool branch_taken_0x390d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D88u;
        // 0x390d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d88) {
            ctx->pc = 0x391088u;
            goto label_391088;
        }
    }
    ctx->pc = 0x390D90u;
label_390d90:
    // 0x390d90: 0x3c023fd6  lui         $v0, 0x3FD6
    ctx->pc = 0x390d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16342 << 16));
label_390d94:
    // 0x390d94: 0x34422e42  ori         $v0, $v0, 0x2E42
    ctx->pc = 0x390d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)11842);
    // 0x390d98: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x390d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x390d9c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x390D9Cu;
    {
        const bool branch_taken_0x390d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390D9Cu;
        // 0x390da0: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390d9c) {
            ctx->pc = 0x390E7Cu;
            goto label_390e7c;
        }
    }
    ctx->pc = 0x390DA4u;
    // 0x390da4: 0x3442a2b1  ori         $v0, $v0, 0xA2B1
    ctx->pc = 0x390da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41649);
    // 0x390da8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x390da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x390dac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x390DACu;
    {
        const bool branch_taken_0x390dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x390DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DACu;
        // 0x390db0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390dac) {
            ctx->pc = 0x390DF0u;
            goto label_390df0;
        }
    }
    ctx->pc = 0x390DB4u;
    // 0x390db4: 0x1180c0  sll         $s0, $s1, 3
    ctx->pc = 0x390db4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x390db8: 0x24429998  addiu       $v0, $v0, -0x6668
    ctx->pc = 0x390db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941080));
    // 0x390dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x390dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390dc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x390dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x390dc4: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390DC4u;
    SET_GPR_U32(ctx, 31, 0x390DCCu);
    ctx->pc = 0x390DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390DC4u;
    // 0x390dc8: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390DC4u, 0x390DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390DCCu;
label_390dcc:
    // 0x390dcc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x390dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x390dd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x390dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x390dd4: 0x246399a8  addiu       $v1, $v1, -0x6658
    ctx->pc = 0x390dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941096));
    // 0x390dd8: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x390dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x390ddc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x390ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x390de0: 0x919823  subu        $s3, $a0, $s1
    ctx->pc = 0x390de0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x390de4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390de4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390de8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x390DE8u;
    {
        const bool branch_taken_0x390de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390DE8u;
        // 0x390dec: 0xde140000  ld          $s4, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390de8) {
            ctx->pc = 0x390E68u;
            goto label_390e68;
        }
    }
    ctx->pc = 0x390DF0u;
label_390df0:
    // 0x390df0: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390df4: 0xdc259a10  ld          $a1, -0x65F0($at)
    ctx->pc = 0x390df4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479A10u));
    // 0x390df8: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390DF8u;
    SET_GPR_U32(ctx, 31, 0x390E00u);
    ctx->pc = 0x390DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390DF8u;
    // 0x390dfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390DF8u, 0x390E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E00u;
label_390e00:
    // 0x390e00: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x390e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x390e04: 0x1130c0  sll         $a2, $s1, 3
    ctx->pc = 0x390e04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x390e08: 0x24639968  addiu       $v1, $v1, -0x6698
    ctx->pc = 0x390e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941032));
    // 0x390e0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e10: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x390e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x390e14: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x390E14u;
    SET_GPR_U32(ctx, 31, 0x390E1Cu);
    ctx->pc = 0x390E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E14u;
    // 0x390e18: 0xdcc50000  ld          $a1, 0x0($a2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x390E14u, 0x390E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E1Cu;
label_390e1c:
    // 0x390e1c: 0xc0f5122  jal         func_3D4488
    ctx->pc = 0x390E1Cu;
    SET_GPR_U32(ctx, 31, 0x390E24u);
    ctx->pc = 0x390E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E1Cu;
    // 0x390e20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4488u, 0x390E1Cu, 0x390E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E24u;
label_390e24:
    // 0x390e24: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x390e24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e28: 0xc0f50f4  jal         func_3D43D0
    ctx->pc = 0x390E28u;
    SET_GPR_U32(ctx, 31, 0x390E30u);
    ctx->pc = 0x390E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E28u;
    // 0x390e2c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D43D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D43D0u, 0x390E28u, 0x390E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E30u;
label_390e30:
    // 0x390e30: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x390e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x390e34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e38: 0xdc659998  ld          $a1, -0x6668($v1)
    ctx->pc = 0x390e38u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479998u));
    // 0x390e3c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390E3Cu;
    SET_GPR_U32(ctx, 31, 0x390E44u);
    ctx->pc = 0x390E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E3Cu;
    // 0x390e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390E3Cu, 0x390E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E44u;
label_390e44:
    // 0x390e44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x390e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e48: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390E48u;
    SET_GPR_U32(ctx, 31, 0x390E50u);
    ctx->pc = 0x390E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E48u;
    // 0x390e4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390E48u, 0x390E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E50u;
label_390e50:
    // 0x390e50: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x390e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x390e54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x390e54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e58: 0xdc6599a8  ld          $a1, -0x6658($v1)
    ctx->pc = 0x390e58u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x4799A8u));
    // 0x390e5c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390E5Cu;
    SET_GPR_U32(ctx, 31, 0x390E64u);
    ctx->pc = 0x390E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E5Cu;
    // 0x390e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390E5Cu, 0x390E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E64u;
label_390e64:
    // 0x390e64: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x390e64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390e68:
    // 0x390e68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x390e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e6c: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390E6Cu;
    SET_GPR_U32(ctx, 31, 0x390E74u);
    ctx->pc = 0x390E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390E6Cu;
    // 0x390e70: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390E6Cu, 0x390E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390E74u;
label_390e74:
    // 0x390e74: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x390E74u;
    {
        const bool branch_taken_0x390e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390E74u;
        // 0x390e78: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390e74) {
            ctx->pc = 0x390ECCu;
            goto label_390ecc;
        }
    }
    ctx->pc = 0x390E7Cu;
label_390e7c:
    // 0x390e7c: 0x3c023e2f  lui         $v0, 0x3E2F
    ctx->pc = 0x390e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15919 << 16));
    // 0x390e80: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x390e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x390e84: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x390e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x390e88: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x390E88u;
    {
        const bool branch_taken_0x390e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390e88) {
            ctx->pc = 0x390E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390E88u;
            // 0x390e8c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390ECCu;
            goto label_390ecc;
        }
    }
    ctx->pc = 0x390E90u;
    // 0x390e90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x390e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x390e94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x390e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390e98: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x390e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x390e9c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x390e9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x390ea0: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x390EA0u;
    SET_GPR_U32(ctx, 31, 0x390EA8u);
    ctx->pc = 0x390EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390EA0u;
    // 0x390ea4: 0xdc4599f0  ld          $a1, -0x6610($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294941168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x390EA0u, 0x390EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EA8u;
label_390ea8:
    // 0x390ea8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390eac: 0xc0f50e0  jal         func_3D4380
    ctx->pc = 0x390EACu;
    SET_GPR_U32(ctx, 31, 0x390EB4u);
    ctx->pc = 0x390EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390EACu;
    // 0x390eb0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4380u, 0x390EACu, 0x390EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EB4u;
label_390eb4:
    // 0x390eb4: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x390EB4u;
    {
        const bool branch_taken_0x390eb4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x390EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390EB4u;
        // 0x390eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390eb4) {
            ctx->pc = 0x390ED0u;
            goto label_390ed0;
        }
    }
    ctx->pc = 0x390EBCu;
    // 0x390ebc: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x390EBCu;
    SET_GPR_U32(ctx, 31, 0x390EC4u);
    ctx->pc = 0x390EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390EBCu;
    // 0x390ec0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x390EBCu, 0x390EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EC4u;
label_390ec4:
    // 0x390ec4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x390EC4u;
    {
        const bool branch_taken_0x390ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390EC4u;
        // 0x390ec8: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ec4) {
            ctx->pc = 0x39108Cu;
            goto label_39108c;
        }
    }
    ctx->pc = 0x390ECCu;
label_390ecc:
    // 0x390ecc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x390eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_390ed0:
    // 0x390ed0: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390ED0u;
    SET_GPR_U32(ctx, 31, 0x390ED8u);
    ctx->pc = 0x390ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390ED0u;
    // 0x390ed4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390ED0u, 0x390ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390ED8u;
label_390ed8:
    // 0x390ed8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390ed8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390edc: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390ee0: 0xdc259a18  ld          $a1, -0x65E8($at)
    ctx->pc = 0x390ee0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479A18u));
    // 0x390ee4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390EE4u;
    SET_GPR_U32(ctx, 31, 0x390EECu);
    ctx->pc = 0x390EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390EE4u;
    // 0x390ee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390EE4u, 0x390EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EECu;
label_390eec:
    // 0x390eec: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390ef0: 0xdc259a20  ld          $a1, -0x65E0($at)
    ctx->pc = 0x390ef0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479A20u));
    // 0x390ef4: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x390EF4u;
    SET_GPR_U32(ctx, 31, 0x390EFCu);
    ctx->pc = 0x390EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390EF4u;
    // 0x390ef8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x390EF4u, 0x390EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390EFCu;
label_390efc:
    // 0x390efc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x390efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f00: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390F00u;
    SET_GPR_U32(ctx, 31, 0x390F08u);
    ctx->pc = 0x390F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F00u;
    // 0x390f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390F00u, 0x390F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F08u;
label_390f08:
    // 0x390f08: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390f0c: 0xdc259a28  ld          $a1, -0x65D8($at)
    ctx->pc = 0x390f0cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479A28u));
    // 0x390f10: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x390F10u;
    SET_GPR_U32(ctx, 31, 0x390F18u);
    ctx->pc = 0x390F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F10u;
    // 0x390f14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x390F10u, 0x390F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F18u;
label_390f18:
    // 0x390f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x390f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f1c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390F1Cu;
    SET_GPR_U32(ctx, 31, 0x390F24u);
    ctx->pc = 0x390F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F1Cu;
    // 0x390f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390F1Cu, 0x390F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F24u;
label_390f24:
    // 0x390f24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390f28: 0xdc259a30  ld          $a1, -0x65D0($at)
    ctx->pc = 0x390f28u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479A30u));
    // 0x390f2c: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x390F2Cu;
    SET_GPR_U32(ctx, 31, 0x390F34u);
    ctx->pc = 0x390F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F2Cu;
    // 0x390f30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x390F2Cu, 0x390F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F34u;
label_390f34:
    // 0x390f34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x390f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f38: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390F38u;
    SET_GPR_U32(ctx, 31, 0x390F40u);
    ctx->pc = 0x390F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F38u;
    // 0x390f3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390F38u, 0x390F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F40u;
label_390f40:
    // 0x390f40: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x390f40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x390f44: 0xdc259a38  ld          $a1, -0x65C8($at)
    ctx->pc = 0x390f44u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x479A38u));
    // 0x390f48: 0xc0f4f66  jal         func_3D3D98
    ctx->pc = 0x390F48u;
    SET_GPR_U32(ctx, 31, 0x390F50u);
    ctx->pc = 0x390F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F48u;
    // 0x390f4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3D98u, 0x390F48u, 0x390F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F50u;
label_390f50:
    // 0x390f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f54: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390F54u;
    SET_GPR_U32(ctx, 31, 0x390F5Cu);
    ctx->pc = 0x390F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F54u;
    // 0x390f58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390F54u, 0x390F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F5Cu;
label_390f5c:
    // 0x390f5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x390f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f60: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390F60u;
    SET_GPR_U32(ctx, 31, 0x390F68u);
    ctx->pc = 0x390F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F60u;
    // 0x390f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390F60u, 0x390F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F68u;
label_390f68:
    // 0x390f68: 0x16600015  bnez        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x390F68u;
    {
        const bool branch_taken_0x390f68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x390F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390F68u;
        // 0x390f6c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390f68) {
            ctx->pc = 0x390FC0u;
            goto label_390fc0;
        }
    }
    ctx->pc = 0x390F70u;
    // 0x390f70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x390f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f74: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390F74u;
    SET_GPR_U32(ctx, 31, 0x390F7Cu);
    ctx->pc = 0x390F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F74u;
    // 0x390f78: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390F74u, 0x390F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F7Cu;
label_390f7c:
    // 0x390f7c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x390f7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x390f80: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x390f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x390f84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f88: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390F88u;
    SET_GPR_U32(ctx, 31, 0x390F90u);
    ctx->pc = 0x390F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F88u;
    // 0x390f8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390F88u, 0x390F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F90u;
label_390f90:
    // 0x390f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390f94: 0xc0f5040  jal         func_3D4100
    ctx->pc = 0x390F94u;
    SET_GPR_U32(ctx, 31, 0x390F9Cu);
    ctx->pc = 0x390F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390F94u;
    // 0x390f98: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4100u, 0x390F94u, 0x390F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390F9Cu;
label_390f9c:
    // 0x390f9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fa0: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390FA0u;
    SET_GPR_U32(ctx, 31, 0x390FA8u);
    ctx->pc = 0x390FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FA0u;
    // 0x390fa4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390FA0u, 0x390FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FA8u;
label_390fa8:
    // 0x390fa8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x390fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x390fac: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x390facu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x390fb0: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390FB0u;
    SET_GPR_U32(ctx, 31, 0x390FB8u);
    ctx->pc = 0x390FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FB0u;
    // 0x390fb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390FB0u, 0x390FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FB8u;
label_390fb8:
    // 0x390fb8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x390FB8u;
    {
        const bool branch_taken_0x390fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390FB8u;
        // 0x390fbc: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390fb8) {
            ctx->pc = 0x39108Cu;
            goto label_39108c;
        }
    }
    ctx->pc = 0x390FC0u;
label_390fc0:
    // 0x390fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x390fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fc4: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x390FC4u;
    SET_GPR_U32(ctx, 31, 0x390FCCu);
    ctx->pc = 0x390FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FC4u;
    // 0x390fc8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x390FC4u, 0x390FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FCCu;
label_390fcc:
    // 0x390fcc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x390fccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x390fd0: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x390fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
    // 0x390fd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x390fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fd8: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390FD8u;
    SET_GPR_U32(ctx, 31, 0x390FE0u);
    ctx->pc = 0x390FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FD8u;
    // 0x390fdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390FD8u, 0x390FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FE0u;
label_390fe0:
    // 0x390fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x390fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390fe4: 0xc0f5040  jal         func_3D4100
    ctx->pc = 0x390FE4u;
    SET_GPR_U32(ctx, 31, 0x390FECu);
    ctx->pc = 0x390FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FE4u;
    // 0x390fe8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4100u, 0x390FE4u, 0x390FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FECu;
label_390fec:
    // 0x390fec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x390fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ff0: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390FF0u;
    SET_GPR_U32(ctx, 31, 0x390FF8u);
    ctx->pc = 0x390FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FF0u;
    // 0x390ff4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390FF0u, 0x390FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390FF8u;
label_390ff8:
    // 0x390ff8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x390ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390ffc: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x390FFCu;
    SET_GPR_U32(ctx, 31, 0x391004u);
    ctx->pc = 0x391000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390FFCu;
    // 0x391000: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x390FFCu, 0x391004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391004u;
label_391004:
    // 0x391004: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x391004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x391008: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x391008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x39100c: 0xc0f4f7c  jal         func_3D3DF0
    ctx->pc = 0x39100Cu;
    SET_GPR_U32(ctx, 31, 0x391014u);
    ctx->pc = 0x391010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39100Cu;
    // 0x391010: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3DF0u, 0x39100Cu, 0x391014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391014u;
label_391014:
    // 0x391014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x391014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391018: 0x2a62fc03  slti        $v0, $s3, -0x3FD
    ctx->pc = 0x391018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966275) ? 1 : 0);
    // 0x39101c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x39101Cu;
    {
        const bool branch_taken_0x39101c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39101Cu;
        // 0x391020: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39101c) {
            ctx->pc = 0x391050u;
            goto label_391050;
        }
    }
    ctx->pc = 0x391024u;
    // 0x391024: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x391024u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x391028: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x391028u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39102c: 0x132500  sll         $a0, $s3, 20
    ctx->pc = 0x39102cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 20));
    // 0x391030: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x391030u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x391034: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x391034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x391038: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x391038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x39103c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x39103cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x391040: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x391040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x391044: 0x622025  or          $a0, $v1, $v0
    ctx->pc = 0x391044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x391048: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x391048u;
    {
        const bool branch_taken_0x391048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391048u;
        // 0x39104c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391048) {
            ctx->pc = 0x391088u;
            goto label_391088;
        }
    }
    ctx->pc = 0x391050u;
label_391050:
    // 0x391050: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x391050u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x391054: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x391054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x391058: 0x266303e8  addiu       $v1, $s3, 0x3E8
    ctx->pc = 0x391058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1000));
    // 0x39105c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x39105cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x391060: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x391060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x391064: 0x31d00  sll         $v1, $v1, 20
    ctx->pc = 0x391064u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 20));
    // 0x391068: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x391068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x39106c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39106cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x391070: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x391070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x391074: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x391074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x391078: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x391078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x39107c: 0xc0f4f96  jal         func_3D3E58
    ctx->pc = 0x39107Cu;
    SET_GPR_U32(ctx, 31, 0x391084u);
    ctx->pc = 0x391080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39107Cu;
    // 0x391080: 0xdc6599f8  ld          $a1, -0x6608($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294941176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3E58u, 0x39107Cu, 0x391084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x391084u;
label_391084:
    // 0x391084: 0x0  nop
    ctx->pc = 0x391084u;
    // NOP
label_391088:
    // 0x391088: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x391088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_39108c:
    // 0x39108c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x39108cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x391090: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x391090u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x391094: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x391094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x391098: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x391098u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39109c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39109cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3910a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3910a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3910a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3910A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3910A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3910A4u;
        // 0x3910a8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3910A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3910ACu;
    // 0x3910ac: 0x0  nop
    ctx->pc = 0x3910acu;
    // NOP
    // 0x3910b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x3910b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3910b4: 0x0  nop
    ctx->pc = 0x3910b4u;
    // NOP
    // 0x3910b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x3910b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x3910bc: 0x0  nop
    ctx->pc = 0x3910bcu;
    // NOP
    ctx->pc = 0x3910c0u;
}
