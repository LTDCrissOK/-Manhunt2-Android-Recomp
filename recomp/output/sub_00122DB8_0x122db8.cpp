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

// Function: sub_00122DB8
// Address: 0x122db8 - 0x122ef0
void sub_00122DB8_0x122db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122DB8_0x122db8");
#endif

    switch (ctx->pc) {
        case 0x122e04u: goto label_122e04;
        case 0x122e14u: goto label_122e14;
        case 0x122e24u: goto label_122e24;
        case 0x122e40u: goto label_122e40;
        case 0x122e54u: goto label_122e54;
        case 0x122e64u: goto label_122e64;
        case 0x122e70u: goto label_122e70;
        case 0x122e7cu: goto label_122e7c;
        case 0x122e88u: goto label_122e88;
        case 0x122e94u: goto label_122e94;
        case 0x122ea0u: goto label_122ea0;
        case 0x122eacu: goto label_122eac;
        case 0x122eb8u: goto label_122eb8;
        default: break;
    }

    ctx->pc = 0x122db8u;

    // 0x122db8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x122db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x122dbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x122dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x122dc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x122dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x122dc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x122dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x122dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x122dcc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x122dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x122dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x122dd4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x122dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122dd8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x122dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x122ddc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x122ddcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122de0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x122de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x122de4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x122de4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122de8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x122de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x122dec: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x122decu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122df0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x122df4: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x122df4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122df8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x122df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x122dfc: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122DFCu;
    SET_GPR_U32(ctx, 31, 0x122E04u);
    ctx->pc = 0x122E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122DFCu;
    // 0x122e00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122DFCu, 0x122E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E04u;
label_122e04:
    // 0x122e04: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x122E04u;
    {
        const bool branch_taken_0x122e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E04u;
        // 0x122e08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e04) {
            ctx->pc = 0x122EC4u;
            goto label_122ec4;
        }
    }
    ctx->pc = 0x122E0Cu;
    // 0x122e0c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122E0Cu;
    SET_GPR_U32(ctx, 31, 0x122E14u);
    ctx->pc = 0x122E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E0Cu;
    // 0x122e10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122E0Cu, 0x122E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E14u;
label_122e14:
    // 0x122e14: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x122E14u;
    {
        const bool branch_taken_0x122e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E14u;
        // 0x122e18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e14) {
            ctx->pc = 0x122EC4u;
            goto label_122ec4;
        }
    }
    ctx->pc = 0x122E1Cu;
    // 0x122e1c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122E1Cu;
    SET_GPR_U32(ctx, 31, 0x122E24u);
    ctx->pc = 0x122E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E1Cu;
    // 0x122e20: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122E1Cu, 0x122E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E24u;
label_122e24:
    // 0x122e24: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x122E24u;
    {
        const bool branch_taken_0x122e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E24u;
        // 0x122e28: 0x2ac20002  slti        $v0, $s6, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e24) {
            ctx->pc = 0x122E34u;
            goto label_122e34;
        }
    }
    ctx->pc = 0x122E2Cu;
    // 0x122e2c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x122E2Cu;
    {
        const bool branch_taken_0x122e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E2Cu;
        // 0x122e30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e2c) {
            ctx->pc = 0x122EC4u;
            goto label_122ec4;
        }
    }
    ctx->pc = 0x122E34u;
label_122e34:
    // 0x122e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x122e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e38: 0xc04a2fc  jal         func_128BF0
    ctx->pc = 0x122E38u;
    SET_GPR_U32(ctx, 31, 0x122E40u);
    ctx->pc = 0x122E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E38u;
    // 0x122e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128BF0u, 0x122E38u, 0x122E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E40u;
label_122e40:
    // 0x122e40: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e44: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x122E44u;
    {
        const bool branch_taken_0x122e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x122E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E44u;
        // 0x122e48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122e44) {
            ctx->pc = 0x122EC0u;
            goto label_122ec0;
        }
    }
    ctx->pc = 0x122E4Cu;
    // 0x122e4c: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x122E4Cu;
    SET_GPR_U32(ctx, 31, 0x122E54u);
    ctx->pc = 0x122E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E4Cu;
    // 0x122e50: 0x24050bd2  addiu       $a1, $zero, 0xBD2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3026));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x122E4Cu, 0x122E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E54u;
label_122e54:
    // 0x122e54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e58: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x122e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e5c: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x122E5Cu;
    SET_GPR_U32(ctx, 31, 0x122E64u);
    ctx->pc = 0x122E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E5Cu;
    // 0x122e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x122E5Cu, 0x122E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E64u;
label_122e64:
    // 0x122e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e68: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x122E68u;
    SET_GPR_U32(ctx, 31, 0x122E70u);
    ctx->pc = 0x122E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E68u;
    // 0x122e6c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x122E68u, 0x122E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E70u;
label_122e70:
    // 0x122e70: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x122e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e74: 0xc05a6d2  jal         func_169B48
    ctx->pc = 0x122E74u;
    SET_GPR_U32(ctx, 31, 0x122E7Cu);
    ctx->pc = 0x122E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E74u;
    // 0x122e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B48u, 0x122E74u, 0x122E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E7Cu;
label_122e7c:
    // 0x122e7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x122e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e80: 0xc05a70e  jal         func_169C38
    ctx->pc = 0x122E80u;
    SET_GPR_U32(ctx, 31, 0x122E88u);
    ctx->pc = 0x122E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E80u;
    // 0x122e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C38u, 0x122E80u, 0x122E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E88u;
label_122e88:
    // 0x122e88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x122e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122e8c: 0xc05a6be  jal         func_169AF8
    ctx->pc = 0x122E8Cu;
    SET_GPR_U32(ctx, 31, 0x122E94u);
    ctx->pc = 0x122E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E8Cu;
    // 0x122e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AF8u, 0x122E8Cu, 0x122E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122E94u;
label_122e94:
    // 0x122e94: 0x32c500ff  andi        $a1, $s6, 0xFF
    ctx->pc = 0x122e94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x122e98: 0xc05a74a  jal         func_169D28
    ctx->pc = 0x122E98u;
    SET_GPR_U32(ctx, 31, 0x122EA0u);
    ctx->pc = 0x122E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E98u;
    // 0x122e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169D28u, 0x122E98u, 0x122EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EA0u;
label_122ea0:
    // 0x122ea0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x122ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122ea4: 0xc05a736  jal         func_169CD8
    ctx->pc = 0x122EA4u;
    SET_GPR_U32(ctx, 31, 0x122EACu);
    ctx->pc = 0x122EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122EA4u;
    // 0x122ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169CD8u, 0x122EA4u, 0x122EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EACu;
label_122eac:
    // 0x122eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x122eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122eb0: 0xc049944  jal         func_126510
    ctx->pc = 0x122EB0u;
    SET_GPR_U32(ctx, 31, 0x122EB8u);
    ctx->pc = 0x122EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122EB0u;
    // 0x122eb4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x122EB0u, 0x122EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122EB8u;
label_122eb8:
    // 0x122eb8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x122EB8u;
    {
        const bool branch_taken_0x122eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EB8u;
        // 0x122ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122eb8) {
            ctx->pc = 0x122EC4u;
            goto label_122ec4;
        }
    }
    ctx->pc = 0x122EC0u;
label_122ec0:
    // 0x122ec0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_122ec4:
    // 0x122ec4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x122ec4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x122ec8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x122ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x122ecc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x122eccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122ed0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x122ed0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x122ed4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x122ed4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122ed8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122ed8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122edc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x122edcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122ee0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x122ee0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x122ee4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x122ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x122ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x122EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EE8u;
        // 0x122eec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122EF0u;
}
