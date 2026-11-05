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

// Function: sub_0024AF40
// Address: 0x24af40 - 0x24b008
void sub_0024AF40_0x24af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AF40_0x24af40");
#endif

    switch (ctx->pc) {
        case 0x24af40u: goto label_24af40;
        case 0x24af44u: goto label_24af44;
        case 0x24af48u: goto label_24af48;
        case 0x24af4cu: goto label_24af4c;
        case 0x24af50u: goto label_24af50;
        case 0x24af54u: goto label_24af54;
        case 0x24af58u: goto label_24af58;
        case 0x24af5cu: goto label_24af5c;
        case 0x24af60u: goto label_24af60;
        case 0x24af64u: goto label_24af64;
        case 0x24af68u: goto label_24af68;
        case 0x24af6cu: goto label_24af6c;
        case 0x24af70u: goto label_24af70;
        case 0x24af74u: goto label_24af74;
        case 0x24af78u: goto label_24af78;
        case 0x24af7cu: goto label_24af7c;
        case 0x24af80u: goto label_24af80;
        case 0x24af84u: goto label_24af84;
        case 0x24af88u: goto label_24af88;
        case 0x24af8cu: goto label_24af8c;
        case 0x24af90u: goto label_24af90;
        case 0x24af94u: goto label_24af94;
        case 0x24af98u: goto label_24af98;
        case 0x24af9cu: goto label_24af9c;
        case 0x24afa0u: goto label_24afa0;
        case 0x24afa4u: goto label_24afa4;
        case 0x24afa8u: goto label_24afa8;
        case 0x24afacu: goto label_24afac;
        case 0x24afb0u: goto label_24afb0;
        case 0x24afb4u: goto label_24afb4;
        case 0x24afb8u: goto label_24afb8;
        case 0x24afbcu: goto label_24afbc;
        case 0x24afc0u: goto label_24afc0;
        case 0x24afc4u: goto label_24afc4;
        case 0x24afc8u: goto label_24afc8;
        case 0x24afccu: goto label_24afcc;
        case 0x24afd0u: goto label_24afd0;
        case 0x24afd4u: goto label_24afd4;
        case 0x24afd8u: goto label_24afd8;
        case 0x24afdcu: goto label_24afdc;
        case 0x24afe0u: goto label_24afe0;
        case 0x24afe4u: goto label_24afe4;
        case 0x24afe8u: goto label_24afe8;
        case 0x24afecu: goto label_24afec;
        case 0x24aff0u: goto label_24aff0;
        case 0x24aff4u: goto label_24aff4;
        case 0x24aff8u: goto label_24aff8;
        case 0x24affcu: goto label_24affc;
        case 0x24b000u: goto label_24b000;
        case 0x24b004u: goto label_24b004;
        default: break;
    }

    ctx->pc = 0x24af40u;

label_24af40:
    // 0x24af40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_24af44:
    // 0x24af44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24af44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24af48:
    // 0x24af48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24af48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_24af4c:
    // 0x24af4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_24af50:
    // 0x24af50: 0xc09242a  jal         func_2490A8
label_24af54:
    if (ctx->pc == 0x24AF54u) {
        ctx->pc = 0x24AF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF50u;
        // 0x24af54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF58u;
        goto label_24af58;
    }
    ctx->pc = 0x24AF50u;
    SET_GPR_U32(ctx, 31, 0x24AF58u);
    ctx->pc = 0x24AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF50u;
    // 0x24af54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490A8u, 0x24AF50u, 0x24AF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF58u;
label_24af58:
    // 0x24af58: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_24af5c:
    if (ctx->pc == 0x24AF5Cu) {
        ctx->pc = 0x24AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF58u;
        // 0x24af5c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF60u;
        goto label_24af60;
    }
    ctx->pc = 0x24AF58u;
    {
        const bool branch_taken_0x24af58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF58u;
        // 0x24af5c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af58) {
            ctx->pc = 0x24AF84u;
            goto label_24af84;
        }
    }
    ctx->pc = 0x24AF60u;
label_24af60:
    // 0x24af60: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x24af60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_24af64:
    // 0x24af64: 0x8c6201cc  lw          $v0, 0x1CC($v1)
    ctx->pc = 0x24af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
label_24af68:
    // 0x24af68: 0x40f809  jalr        $v0
label_24af6c:
    if (ctx->pc == 0x24AF6Cu) {
        ctx->pc = 0x24AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF68u;
        // 0x24af6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF70u;
        goto label_24af70;
    }
    ctx->pc = 0x24AF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24AF70u);
        ctx->pc = 0x24AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF68u;
        // 0x24af6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AF68u, 0x24AF70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24AF70u;
label_24af70:
    // 0x24af70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24af70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24af74:
    // 0x24af74: 0xc092542  jal         func_249508
label_24af78:
    if (ctx->pc == 0x24AF78u) {
        ctx->pc = 0x24AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF74u;
        // 0x24af78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF7Cu;
        goto label_24af7c;
    }
    ctx->pc = 0x24AF74u;
    SET_GPR_U32(ctx, 31, 0x24AF7Cu);
    ctx->pc = 0x24AF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AF74u;
    // 0x24af78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249508u, 0x24AF74u, 0x24AF7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AF7Cu;
label_24af7c:
    // 0x24af7c: 0x1000001d  b           . + 4 + (0x1D << 2)
label_24af80:
    if (ctx->pc == 0x24AF80u) {
        ctx->pc = 0x24AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF7Cu;
        // 0x24af80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF84u;
        goto label_24af84;
    }
    ctx->pc = 0x24AF7Cu;
    {
        const bool branch_taken_0x24af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF7Cu;
        // 0x24af80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af7c) {
            ctx->pc = 0x24AFF4u;
            goto label_24aff4;
        }
    }
    ctx->pc = 0x24AF84u;
label_24af84:
    // 0x24af84: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x24af84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945416)));
label_24af88:
    // 0x24af88: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_24af8c:
    if (ctx->pc == 0x24AF8Cu) {
        ctx->pc = 0x24AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF88u;
        // 0x24af8c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AF90u;
        goto label_24af90;
    }
    ctx->pc = 0x24AF88u;
    {
        const bool branch_taken_0x24af88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF88u;
        // 0x24af8c: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af88) {
            ctx->pc = 0x24AFA0u;
            goto label_24afa0;
        }
    }
    ctx->pc = 0x24AF90u;
label_24af90:
    // 0x24af90: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x24af90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_24af94:
    // 0x24af94: 0x8c432460  lw          $v1, 0x2460($v0)
    ctx->pc = 0x24af94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9312)));
label_24af98:
    // 0x24af98: 0x10000002  b           . + 4 + (0x2 << 2)
label_24af9c:
    if (ctx->pc == 0x24AF9Cu) {
        ctx->pc = 0x24AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF98u;
        // 0x24af9c: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFA0u;
        goto label_24afa0;
    }
    ctx->pc = 0x24AF98u;
    {
        const bool branch_taken_0x24af98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AF98u;
        // 0x24af9c: 0x641824  and         $v1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24af98) {
            ctx->pc = 0x24AFA4u;
            goto label_24afa4;
        }
    }
    ctx->pc = 0x24AFA0u;
label_24afa0:
    // 0x24afa0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x24afa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24afa4:
    // 0x24afa4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_24afa8:
    if (ctx->pc == 0x24AFA8u) {
        ctx->pc = 0x24AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFA4u;
        // 0x24afa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFACu;
        goto label_24afac;
    }
    ctx->pc = 0x24AFA4u;
    {
        const bool branch_taken_0x24afa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFA4u;
        // 0x24afa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afa4) {
            ctx->pc = 0x24AFD4u;
            goto label_24afd4;
        }
    }
    ctx->pc = 0x24AFACu;
label_24afac:
    // 0x24afac: 0xc08fc7c  jal         func_23F1F0
label_24afb0:
    if (ctx->pc == 0x24AFB0u) {
        ctx->pc = 0x24AFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFACu;
        // 0x24afb0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFB4u;
        goto label_24afb4;
    }
    ctx->pc = 0x24AFACu;
    SET_GPR_U32(ctx, 31, 0x24AFB4u);
    ctx->pc = 0x24AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFACu;
    // 0x24afb0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1F0u, 0x24AFACu, 0x24AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFB4u;
label_24afb4:
    // 0x24afb4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_24afb8:
    if (ctx->pc == 0x24AFB8u) {
        ctx->pc = 0x24AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFB4u;
        // 0x24afb8: 0x241107e1  addiu       $s1, $zero, 0x7E1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2017));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFBCu;
        goto label_24afbc;
    }
    ctx->pc = 0x24AFB4u;
    {
        const bool branch_taken_0x24afb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24AFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFB4u;
        // 0x24afb8: 0x241107e1  addiu       $s1, $zero, 0x7E1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afb4) {
            ctx->pc = 0x24AFD8u;
            goto label_24afd8;
        }
    }
    ctx->pc = 0x24AFBCu;
label_24afbc:
    // 0x24afbc: 0x241107e0  addiu       $s1, $zero, 0x7E0
    ctx->pc = 0x24afbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2016));
label_24afc0:
    // 0x24afc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24afc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24afc4:
    // 0x24afc4: 0xc08fc4e  jal         func_23F138
label_24afc8:
    if (ctx->pc == 0x24AFC8u) {
        ctx->pc = 0x24AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFC4u;
        // 0x24afc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFCCu;
        goto label_24afcc;
    }
    ctx->pc = 0x24AFC4u;
    SET_GPR_U32(ctx, 31, 0x24AFCCu);
    ctx->pc = 0x24AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFC4u;
    // 0x24afc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24AFC4u, 0x24AFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFCCu;
label_24afcc:
    // 0x24afcc: 0x10000006  b           . + 4 + (0x6 << 2)
label_24afd0:
    if (ctx->pc == 0x24AFD0u) {
        ctx->pc = 0x24AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFCCu;
        // 0x24afd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFD4u;
        goto label_24afd4;
    }
    ctx->pc = 0x24AFCCu;
    {
        const bool branch_taken_0x24afcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFCCu;
        // 0x24afd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24afcc) {
            ctx->pc = 0x24AFE8u;
            goto label_24afe8;
        }
    }
    ctx->pc = 0x24AFD4u;
label_24afd4:
    // 0x24afd4: 0x241107e1  addiu       $s1, $zero, 0x7E1
    ctx->pc = 0x24afd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2017));
label_24afd8:
    // 0x24afd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24afd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24afdc:
    // 0x24afdc: 0xc08fc4e  jal         func_23F138
label_24afe0:
    if (ctx->pc == 0x24AFE0u) {
        ctx->pc = 0x24AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFDCu;
        // 0x24afe0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFE4u;
        goto label_24afe4;
    }
    ctx->pc = 0x24AFDCu;
    SET_GPR_U32(ctx, 31, 0x24AFE4u);
    ctx->pc = 0x24AFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFDCu;
    // 0x24afe0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24AFDCu, 0x24AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFE4u;
label_24afe4:
    // 0x24afe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24afe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24afe8:
    // 0x24afe8: 0xc092bc6  jal         func_24AF18
label_24afec:
    if (ctx->pc == 0x24AFECu) {
        ctx->pc = 0x24AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFE8u;
        // 0x24afec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24AFF0u;
        goto label_24aff0;
    }
    ctx->pc = 0x24AFE8u;
    SET_GPR_U32(ctx, 31, 0x24AFF0u);
    ctx->pc = 0x24AFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AFE8u;
    // 0x24afec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AF18u, 0x24AFE8u, 0x24AFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AFF0u;
label_24aff0:
    // 0x24aff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24aff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24aff4:
    // 0x24aff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24aff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_24aff8:
    // 0x24aff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24aff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24affc:
    // 0x24affc: 0x3e00008  jr          $ra
label_24b000:
    if (ctx->pc == 0x24B000u) {
        ctx->pc = 0x24B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFFCu;
        // 0x24b000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24B004u;
        goto label_24b004;
    }
    ctx->pc = 0x24AFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AFFCu;
        // 0x24b000: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B004u;
label_24b004:
    // 0x24b004: 0x0  nop
    ctx->pc = 0x24b004u;
    // NOP
    ctx->pc = 0x24b008u;
}
