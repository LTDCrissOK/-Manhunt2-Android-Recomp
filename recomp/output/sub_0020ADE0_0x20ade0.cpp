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

// Function: sub_0020ADE0
// Address: 0x20ade0 - 0x20afb0
void sub_0020ADE0_0x20ade0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ADE0_0x20ade0");
#endif

    switch (ctx->pc) {
        case 0x20ade0u: goto label_20ade0;
        case 0x20ade4u: goto label_20ade4;
        case 0x20ade8u: goto label_20ade8;
        case 0x20adecu: goto label_20adec;
        case 0x20adf0u: goto label_20adf0;
        case 0x20adf4u: goto label_20adf4;
        case 0x20adf8u: goto label_20adf8;
        case 0x20adfcu: goto label_20adfc;
        case 0x20ae00u: goto label_20ae00;
        case 0x20ae04u: goto label_20ae04;
        case 0x20ae08u: goto label_20ae08;
        case 0x20ae0cu: goto label_20ae0c;
        case 0x20ae10u: goto label_20ae10;
        case 0x20ae14u: goto label_20ae14;
        case 0x20ae18u: goto label_20ae18;
        case 0x20ae1cu: goto label_20ae1c;
        case 0x20ae20u: goto label_20ae20;
        case 0x20ae24u: goto label_20ae24;
        case 0x20ae28u: goto label_20ae28;
        case 0x20ae2cu: goto label_20ae2c;
        case 0x20ae30u: goto label_20ae30;
        case 0x20ae34u: goto label_20ae34;
        case 0x20ae38u: goto label_20ae38;
        case 0x20ae3cu: goto label_20ae3c;
        case 0x20ae40u: goto label_20ae40;
        case 0x20ae44u: goto label_20ae44;
        case 0x20ae48u: goto label_20ae48;
        case 0x20ae4cu: goto label_20ae4c;
        case 0x20ae50u: goto label_20ae50;
        case 0x20ae54u: goto label_20ae54;
        case 0x20ae58u: goto label_20ae58;
        case 0x20ae5cu: goto label_20ae5c;
        case 0x20ae60u: goto label_20ae60;
        case 0x20ae64u: goto label_20ae64;
        case 0x20ae68u: goto label_20ae68;
        case 0x20ae6cu: goto label_20ae6c;
        case 0x20ae70u: goto label_20ae70;
        case 0x20ae74u: goto label_20ae74;
        case 0x20ae78u: goto label_20ae78;
        case 0x20ae7cu: goto label_20ae7c;
        case 0x20ae80u: goto label_20ae80;
        case 0x20ae84u: goto label_20ae84;
        case 0x20ae88u: goto label_20ae88;
        case 0x20ae8cu: goto label_20ae8c;
        case 0x20ae90u: goto label_20ae90;
        case 0x20ae94u: goto label_20ae94;
        case 0x20ae98u: goto label_20ae98;
        case 0x20ae9cu: goto label_20ae9c;
        case 0x20aea0u: goto label_20aea0;
        case 0x20aea4u: goto label_20aea4;
        case 0x20aea8u: goto label_20aea8;
        case 0x20aeacu: goto label_20aeac;
        case 0x20aeb0u: goto label_20aeb0;
        case 0x20aeb4u: goto label_20aeb4;
        case 0x20aeb8u: goto label_20aeb8;
        case 0x20aebcu: goto label_20aebc;
        case 0x20aec0u: goto label_20aec0;
        case 0x20aec4u: goto label_20aec4;
        case 0x20aec8u: goto label_20aec8;
        case 0x20aeccu: goto label_20aecc;
        case 0x20aed0u: goto label_20aed0;
        case 0x20aed4u: goto label_20aed4;
        case 0x20aed8u: goto label_20aed8;
        case 0x20aedcu: goto label_20aedc;
        case 0x20aee0u: goto label_20aee0;
        case 0x20aee4u: goto label_20aee4;
        case 0x20aee8u: goto label_20aee8;
        case 0x20aeecu: goto label_20aeec;
        case 0x20aef0u: goto label_20aef0;
        case 0x20aef4u: goto label_20aef4;
        case 0x20aef8u: goto label_20aef8;
        case 0x20aefcu: goto label_20aefc;
        case 0x20af00u: goto label_20af00;
        case 0x20af04u: goto label_20af04;
        case 0x20af08u: goto label_20af08;
        case 0x20af0cu: goto label_20af0c;
        case 0x20af10u: goto label_20af10;
        case 0x20af14u: goto label_20af14;
        case 0x20af18u: goto label_20af18;
        case 0x20af1cu: goto label_20af1c;
        case 0x20af20u: goto label_20af20;
        case 0x20af24u: goto label_20af24;
        case 0x20af28u: goto label_20af28;
        case 0x20af2cu: goto label_20af2c;
        case 0x20af30u: goto label_20af30;
        case 0x20af34u: goto label_20af34;
        case 0x20af38u: goto label_20af38;
        case 0x20af3cu: goto label_20af3c;
        case 0x20af40u: goto label_20af40;
        case 0x20af44u: goto label_20af44;
        case 0x20af48u: goto label_20af48;
        case 0x20af4cu: goto label_20af4c;
        case 0x20af50u: goto label_20af50;
        case 0x20af54u: goto label_20af54;
        case 0x20af58u: goto label_20af58;
        case 0x20af5cu: goto label_20af5c;
        case 0x20af60u: goto label_20af60;
        case 0x20af64u: goto label_20af64;
        case 0x20af68u: goto label_20af68;
        case 0x20af6cu: goto label_20af6c;
        case 0x20af70u: goto label_20af70;
        case 0x20af74u: goto label_20af74;
        case 0x20af78u: goto label_20af78;
        case 0x20af7cu: goto label_20af7c;
        case 0x20af80u: goto label_20af80;
        case 0x20af84u: goto label_20af84;
        case 0x20af88u: goto label_20af88;
        case 0x20af8cu: goto label_20af8c;
        case 0x20af90u: goto label_20af90;
        case 0x20af94u: goto label_20af94;
        case 0x20af98u: goto label_20af98;
        case 0x20af9cu: goto label_20af9c;
        case 0x20afa0u: goto label_20afa0;
        case 0x20afa4u: goto label_20afa4;
        case 0x20afa8u: goto label_20afa8;
        case 0x20afacu: goto label_20afac;
        default: break;
    }

    ctx->pc = 0x20ade0u;

label_20ade0:
    // 0x20ade0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ade0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20ade4:
    // 0x20ade4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20ade4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_20ade8:
    // 0x20ade8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20ade8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_20adec:
    // 0x20adec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20adecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20adf0:
    // 0x20adf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20adf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20adf4:
    // 0x20adf4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_20adf8:
    // 0x20adf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20adf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_20adfc:
    // 0x20adfc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20adfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20ae00:
    // 0x20ae00: 0xc0ae360  jal         func_2B8D80
label_20ae04:
    if (ctx->pc == 0x20AE04u) {
        ctx->pc = 0x20AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE00u;
        // 0x20ae04: 0x24844d00  addiu       $a0, $a0, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE08u;
        goto label_20ae08;
    }
    ctx->pc = 0x20AE00u;
    SET_GPR_U32(ctx, 31, 0x20AE08u);
    ctx->pc = 0x20AE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE00u;
    // 0x20ae04: 0x24844d00  addiu       $a0, $a0, 0x4D00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8D80u, 0x20AE00u, 0x20AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE08u;
label_20ae08:
    // 0x20ae08: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x20ae08u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_20ae0c:
    // 0x20ae0c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_20ae10:
    // 0x20ae10: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x20ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
label_20ae14:
    // 0x20ae14: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x20ae14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20ae18:
    // 0x20ae18: 0x8c440578  lw          $a0, 0x578($v0)
    ctx->pc = 0x20ae18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
label_20ae1c:
    // 0x20ae1c: 0x906294a5  lbu         $v0, -0x6B5B($v1)
    ctx->pc = 0x20ae1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294939813)));
label_20ae20:
    // 0x20ae20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20ae24:
    if (ctx->pc == 0x20AE24u) {
        ctx->pc = 0x20AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE20u;
        // 0x20ae24: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE28u;
        goto label_20ae28;
    }
    ctx->pc = 0x20AE20u;
    {
        const bool branch_taken_0x20ae20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE20u;
        // 0x20ae24: 0x4202b  sltu        $a0, $zero, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae20) {
            ctx->pc = 0x20AE38u;
            goto label_20ae38;
        }
    }
    ctx->pc = 0x20AE28u;
label_20ae28:
    // 0x20ae28: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_20ae2c:
    if (ctx->pc == 0x20AE2Cu) {
        ctx->pc = 0x20AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE28u;
        // 0x20ae2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE30u;
        goto label_20ae30;
    }
    ctx->pc = 0x20AE28u;
    {
        const bool branch_taken_0x20ae28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE28u;
        // 0x20ae2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae28) {
            ctx->pc = 0x20AE38u;
            goto label_20ae38;
        }
    }
    ctx->pc = 0x20AE30u;
label_20ae30:
    // 0x20ae30: 0x1000000d  b           . + 4 + (0xD << 2)
label_20ae34:
    if (ctx->pc == 0x20AE34u) {
        ctx->pc = 0x20AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE30u;
        // 0x20ae34: 0xa0a294a5  sb          $v0, -0x6B5B($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294939813), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE38u;
        goto label_20ae38;
    }
    ctx->pc = 0x20AE30u;
    {
        const bool branch_taken_0x20ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE30u;
        // 0x20ae34: 0xa0a294a5  sb          $v0, -0x6B5B($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294939813), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae30) {
            ctx->pc = 0x20AE68u;
            goto label_20ae68;
        }
    }
    ctx->pc = 0x20AE38u;
label_20ae38:
    // 0x20ae38: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x20ae38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_20ae3c:
    // 0x20ae3c: 0x920294a4  lbu         $v0, -0x6B5C($s0)
    ctx->pc = 0x20ae3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294939812)));
label_20ae40:
    // 0x20ae40: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_20ae44:
    if (ctx->pc == 0x20AE44u) {
        ctx->pc = 0x20AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE40u;
        // 0x20ae44: 0x90a294a5  lbu         $v0, -0x6B5B($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294939813)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE48u;
        goto label_20ae48;
    }
    ctx->pc = 0x20AE40u;
    {
        const bool branch_taken_0x20ae40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE40u;
        // 0x20ae44: 0x90a294a5  lbu         $v0, -0x6B5B($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294939813)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae40) {
            ctx->pc = 0x20AE68u;
            goto label_20ae68;
        }
    }
    ctx->pc = 0x20AE48u;
label_20ae48:
    // 0x20ae48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20ae4c:
    if (ctx->pc == 0x20AE4Cu) {
        ctx->pc = 0x20AE50u;
        goto label_20ae50;
    }
    ctx->pc = 0x20AE48u;
    {
        const bool branch_taken_0x20ae48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ae48) {
            ctx->pc = 0x20AE68u;
            goto label_20ae68;
        }
    }
    ctx->pc = 0x20AE50u;
label_20ae50:
    // 0x20ae50: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_20ae54:
    if (ctx->pc == 0x20AE54u) {
        ctx->pc = 0x20AE58u;
        goto label_20ae58;
    }
    ctx->pc = 0x20AE50u;
    {
        const bool branch_taken_0x20ae50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ae50) {
            ctx->pc = 0x20AE68u;
            goto label_20ae68;
        }
    }
    ctx->pc = 0x20AE58u;
label_20ae58:
    // 0x20ae58: 0xc075f40  jal         func_1D7D00
label_20ae5c:
    if (ctx->pc == 0x20AE5Cu) {
        ctx->pc = 0x20AE60u;
        goto label_20ae60;
    }
    ctx->pc = 0x20AE58u;
    SET_GPR_U32(ctx, 31, 0x20AE60u);
    ctx->pc = 0x1D7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7D00u, 0x20AE58u, 0x20AE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AE60u;
label_20ae60:
    // 0x20ae60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20ae64:
    // 0x20ae64: 0xa20294a4  sb          $v0, -0x6B5C($s0)
    ctx->pc = 0x20ae64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294939812), (uint8_t)GPR_U32(ctx, 2));
label_20ae68:
    // 0x20ae68: 0x12400030  beqz        $s2, . + 4 + (0x30 << 2)
label_20ae6c:
    if (ctx->pc == 0x20AE6Cu) {
        ctx->pc = 0x20AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE68u;
        // 0x20ae6c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE70u;
        goto label_20ae70;
    }
    ctx->pc = 0x20AE68u;
    {
        const bool branch_taken_0x20ae68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE68u;
        // 0x20ae6c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae68) {
            ctx->pc = 0x20AF2Cu;
            goto label_20af2c;
        }
    }
    ctx->pc = 0x20AE70u;
label_20ae70:
    // 0x20ae70: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x20ae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_20ae74:
    // 0x20ae74: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x20ae74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_20ae78:
    // 0x20ae78: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x20ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20ae7c:
    // 0x20ae7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20ae80:
    // 0x20ae80: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20ae80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_20ae84:
    // 0x20ae84: 0x40f809  jalr        $v0
label_20ae88:
    if (ctx->pc == 0x20AE88u) {
        ctx->pc = 0x20AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE84u;
        // 0x20ae88: 0x26304d00  addiu       $s0, $s1, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 19712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE8Cu;
        goto label_20ae8c;
    }
    ctx->pc = 0x20AE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AE8Cu);
        ctx->pc = 0x20AE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE84u;
        // 0x20ae88: 0x26304d00  addiu       $s0, $s1, 0x4D00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 19712));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AE84u, 0x20AE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AE8Cu;
label_20ae8c:
    // 0x20ae8c: 0x8e234d00  lw          $v1, 0x4D00($s1)
    ctx->pc = 0x20ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19712)));
label_20ae90:
    // 0x20ae90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_20ae94:
    if (ctx->pc == 0x20AE94u) {
        ctx->pc = 0x20AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE90u;
        // 0x20ae94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AE98u;
        goto label_20ae98;
    }
    ctx->pc = 0x20AE90u;
    {
        const bool branch_taken_0x20ae90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE90u;
        // 0x20ae94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ae90) {
            ctx->pc = 0x20AEA8u;
            goto label_20aea8;
        }
    }
    ctx->pc = 0x20AE98u;
label_20ae98:
    // 0x20ae98: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20ae98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_20ae9c:
    // 0x20ae9c: 0xc07f50c  jal         func_1FD430
label_20aea0:
    if (ctx->pc == 0x20AEA0u) {
        ctx->pc = 0x20AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AE9Cu;
        // 0x20aea0: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEA4u;
        goto label_20aea4;
    }
    ctx->pc = 0x20AE9Cu;
    SET_GPR_U32(ctx, 31, 0x20AEA4u);
    ctx->pc = 0x20AEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AE9Cu;
    // 0x20aea0: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD430u, 0x20AE9Cu, 0x20AEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AEA4u;
label_20aea4:
    // 0x20aea4: 0x8e234d00  lw          $v1, 0x4D00($s1)
    ctx->pc = 0x20aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19712)));
label_20aea8:
    // 0x20aea8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x20aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_20aeac:
    // 0x20aeac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20aeb0:
    if (ctx->pc == 0x20AEB0u) {
        ctx->pc = 0x20AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEACu;
        // 0x20aeb0: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEB4u;
        goto label_20aeb4;
    }
    ctx->pc = 0x20AEACu;
    {
        const bool branch_taken_0x20aeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEACu;
        // 0x20aeb0: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aeac) {
            ctx->pc = 0x20AEBCu;
            goto label_20aebc;
        }
    }
    ctx->pc = 0x20AEB4u;
label_20aeb4:
    // 0x20aeb4: 0xc07f49c  jal         func_1FD270
label_20aeb8:
    if (ctx->pc == 0x20AEB8u) {
        ctx->pc = 0x20AEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEB4u;
        // 0x20aeb8: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEBCu;
        goto label_20aebc;
    }
    ctx->pc = 0x20AEB4u;
    SET_GPR_U32(ctx, 31, 0x20AEBCu);
    ctx->pc = 0x20AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AEB4u;
    // 0x20aeb8: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD270u, 0x20AEB4u, 0x20AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AEBCu;
label_20aebc:
    // 0x20aebc: 0xc0da280  jal         func_368A00
label_20aec0:
    if (ctx->pc == 0x20AEC0u) {
        ctx->pc = 0x20AEC4u;
        goto label_20aec4;
    }
    ctx->pc = 0x20AEBCu;
    SET_GPR_U32(ctx, 31, 0x20AEC4u);
    ctx->pc = 0x368A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A00u, 0x20AEBCu, 0x20AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AEC4u;
label_20aec4:
    // 0x20aec4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20aec8:
    if (ctx->pc == 0x20AEC8u) {
        ctx->pc = 0x20AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEC4u;
        // 0x20aec8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AECCu;
        goto label_20aecc;
    }
    ctx->pc = 0x20AEC4u;
    {
        const bool branch_taken_0x20aec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEC4u;
        // 0x20aec8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aec4) {
            ctx->pc = 0x20AED8u;
            goto label_20aed8;
        }
    }
    ctx->pc = 0x20AECCu;
label_20aecc:
    // 0x20aecc: 0xc0ae56e  jal         func_2B95B8
label_20aed0:
    if (ctx->pc == 0x20AED0u) {
        ctx->pc = 0x20AED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AECCu;
        // 0x20aed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AED4u;
        goto label_20aed4;
    }
    ctx->pc = 0x20AECCu;
    SET_GPR_U32(ctx, 31, 0x20AED4u);
    ctx->pc = 0x20AED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AECCu;
    // 0x20aed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B95B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B95B8u, 0x20AECCu, 0x20AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AED4u;
label_20aed4:
    // 0x20aed4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x20aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_20aed8:
    // 0x20aed8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x20aed8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_20aedc:
    // 0x20aedc: 0x8c6294a0  lw          $v0, -0x6B60($v1)
    ctx->pc = 0x20aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939808)));
label_20aee0:
    // 0x20aee0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20aee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_20aee4:
    // 0x20aee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20aee8:
    if (ctx->pc == 0x20AEE8u) {
        ctx->pc = 0x20AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEE4u;
        // 0x20aee8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AEECu;
        goto label_20aeec;
    }
    ctx->pc = 0x20AEE4u;
    {
        const bool branch_taken_0x20aee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AEE4u;
        // 0x20aee8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20aee4) {
            ctx->pc = 0x20AF08u;
            goto label_20af08;
        }
    }
    ctx->pc = 0x20AEECu;
label_20aeec:
    // 0x20aeec: 0x0  nop
    ctx->pc = 0x20aeecu;
    // NOP
label_20aef0:
    // 0x20aef0: 0x8c6294a0  lw          $v0, -0x6B60($v1)
    ctx->pc = 0x20aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939808)));
label_20aef4:
    // 0x20aef4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x20aef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_20aef8:
    // 0x20aef8: 0x0  nop
    ctx->pc = 0x20aef8u;
    // NOP
label_20aefc:
    // 0x20aefc: 0x0  nop
    ctx->pc = 0x20aefcu;
    // NOP
label_20af00:
    // 0x20af00: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_20af04:
    if (ctx->pc == 0x20AF04u) {
        ctx->pc = 0x20AF08u;
        goto label_20af08;
    }
    ctx->pc = 0x20AF00u;
    {
        const bool branch_taken_0x20af00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20af00) {
            ctx->pc = 0x20AEF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20aef0;
        }
    }
    ctx->pc = 0x20AF08u;
label_20af08:
    // 0x20af08: 0xac8094a0  sw          $zero, -0x6B60($a0)
    ctx->pc = 0x20af08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294939808), GPR_U32(ctx, 0));
label_20af0c:
    // 0x20af0c: 0x8e42cba8  lw          $v0, -0x3458($s2)
    ctx->pc = 0x20af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953896)));
label_20af10:
    // 0x20af10: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x20af10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_20af14:
    // 0x20af14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x20af14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20af18:
    // 0x20af18: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x20af18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_20af1c:
    // 0x20af1c: 0x40f809  jalr        $v0
label_20af20:
    if (ctx->pc == 0x20AF20u) {
        ctx->pc = 0x20AF24u;
        goto label_20af24;
    }
    ctx->pc = 0x20AF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20AF24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AF1Cu, 0x20AF24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20AF24u;
label_20af24:
    // 0x20af24: 0x10000010  b           . + 4 + (0x10 << 2)
label_20af28:
    if (ctx->pc == 0x20AF28u) {
        ctx->pc = 0x20AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF24u;
        // 0x20af28: 0x8e02b5f8  lw          $v0, -0x4A08($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF2Cu;
        goto label_20af2c;
    }
    ctx->pc = 0x20AF24u;
    {
        const bool branch_taken_0x20af24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF24u;
        // 0x20af28: 0x8e02b5f8  lw          $v0, -0x4A08($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af24) {
            ctx->pc = 0x20AF68u;
            goto label_20af68;
        }
    }
    ctx->pc = 0x20AF2Cu;
label_20af2c:
    // 0x20af2c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20af2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_20af30:
    // 0x20af30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20af30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20af34:
    // 0x20af34: 0xc07f50c  jal         func_1FD430
label_20af38:
    if (ctx->pc == 0x20AF38u) {
        ctx->pc = 0x20AF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF34u;
        // 0x20af38: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF3Cu;
        goto label_20af3c;
    }
    ctx->pc = 0x20AF34u;
    SET_GPR_U32(ctx, 31, 0x20AF3Cu);
    ctx->pc = 0x20AF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF34u;
    // 0x20af38: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD430u, 0x20AF34u, 0x20AF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF3Cu;
label_20af3c:
    // 0x20af3c: 0xc075a02  jal         func_1D6808
label_20af40:
    if (ctx->pc == 0x20AF40u) {
        ctx->pc = 0x20AF44u;
        goto label_20af44;
    }
    ctx->pc = 0x20AF3Cu;
    SET_GPR_U32(ctx, 31, 0x20AF44u);
    ctx->pc = 0x1D6808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6808u, 0x20AF3Cu, 0x20AF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF44u;
label_20af44:
    // 0x20af44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_20af48:
    if (ctx->pc == 0x20AF48u) {
        ctx->pc = 0x20AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF44u;
        // 0x20af48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF4Cu;
        goto label_20af4c;
    }
    ctx->pc = 0x20AF44u;
    {
        const bool branch_taken_0x20af44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF44u;
        // 0x20af48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af44) {
            ctx->pc = 0x20AF98u;
            goto label_20af98;
        }
    }
    ctx->pc = 0x20AF4Cu;
label_20af4c:
    // 0x20af4c: 0xc0da280  jal         func_368A00
label_20af50:
    if (ctx->pc == 0x20AF50u) {
        ctx->pc = 0x20AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF4Cu;
        // 0x20af50: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF54u;
        goto label_20af54;
    }
    ctx->pc = 0x20AF4Cu;
    SET_GPR_U32(ctx, 31, 0x20AF54u);
    ctx->pc = 0x20AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF4Cu;
    // 0x20af50: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368A00u, 0x20AF4Cu, 0x20AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF54u;
label_20af54:
    // 0x20af54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_20af58:
    if (ctx->pc == 0x20AF58u) {
        ctx->pc = 0x20AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF54u;
        // 0x20af58: 0x8e02b5f8  lw          $v0, -0x4A08($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948344)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF5Cu;
        goto label_20af5c;
    }
    ctx->pc = 0x20AF54u;
    {
        const bool branch_taken_0x20af54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF54u;
        // 0x20af58: 0x8e02b5f8  lw          $v0, -0x4A08($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20af54) {
            ctx->pc = 0x20AF68u;
            goto label_20af68;
        }
    }
    ctx->pc = 0x20AF5Cu;
label_20af5c:
    // 0x20af5c: 0xc075abe  jal         func_1D6AF8
label_20af60:
    if (ctx->pc == 0x20AF60u) {
        ctx->pc = 0x20AF64u;
        goto label_20af64;
    }
    ctx->pc = 0x20AF5Cu;
    SET_GPR_U32(ctx, 31, 0x20AF64u);
    ctx->pc = 0x1D6AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6AF8u, 0x20AF5Cu, 0x20AF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF64u;
label_20af64:
    // 0x20af64: 0x8e02b5f8  lw          $v0, -0x4A08($s0)
    ctx->pc = 0x20af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948344)));
label_20af68:
    // 0x20af68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20af6c:
    if (ctx->pc == 0x20AF6Cu) {
        ctx->pc = 0x20AF70u;
        goto label_20af70;
    }
    ctx->pc = 0x20AF68u;
    {
        const bool branch_taken_0x20af68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20af68) {
            ctx->pc = 0x20AF8Cu;
            goto label_20af8c;
        }
    }
    ctx->pc = 0x20AF70u;
label_20af70:
    // 0x20af70: 0xc0a0340  jal         func_280D00
label_20af74:
    if (ctx->pc == 0x20AF74u) {
        ctx->pc = 0x20AF78u;
        goto label_20af78;
    }
    ctx->pc = 0x20AF70u;
    SET_GPR_U32(ctx, 31, 0x20AF78u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x20AF70u, 0x20AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF78u;
label_20af78:
    // 0x20af78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20af78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20af7c:
    // 0x20af7c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_20af80:
    if (ctx->pc == 0x20AF80u) {
        ctx->pc = 0x20AF84u;
        goto label_20af84;
    }
    ctx->pc = 0x20AF7Cu;
    {
        const bool branch_taken_0x20af7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20af7c) {
            ctx->pc = 0x20AF8Cu;
            goto label_20af8c;
        }
    }
    ctx->pc = 0x20AF84u;
label_20af84:
    // 0x20af84: 0xc0b6a2a  jal         func_2DA8A8
label_20af88:
    if (ctx->pc == 0x20AF88u) {
        ctx->pc = 0x20AF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AF84u;
        // 0x20af88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AF8Cu;
        goto label_20af8c;
    }
    ctx->pc = 0x20AF84u;
    SET_GPR_U32(ctx, 31, 0x20AF8Cu);
    ctx->pc = 0x20AF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AF84u;
    // 0x20af88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8A8u, 0x20AF84u, 0x20AF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF8Cu;
label_20af8c:
    // 0x20af8c: 0xc0abd50  jal         func_2AF540
label_20af90:
    if (ctx->pc == 0x20AF90u) {
        ctx->pc = 0x20AF94u;
        goto label_20af94;
    }
    ctx->pc = 0x20AF8Cu;
    SET_GPR_U32(ctx, 31, 0x20AF94u);
    ctx->pc = 0x2AF540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF540u, 0x20AF8Cu, 0x20AF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AF94u;
label_20af94:
    // 0x20af94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20af98:
    // 0x20af98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20af98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20af9c:
    // 0x20af9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20af9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_20afa0:
    // 0x20afa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20afa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20afa4:
    // 0x20afa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20afa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20afa8:
    // 0x20afa8: 0x3e00008  jr          $ra
label_20afac:
    if (ctx->pc == 0x20AFACu) {
        ctx->pc = 0x20AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFA8u;
        // 0x20afac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20AFB0u;
        goto label_fallthrough_0x20afa8;
    }
    ctx->pc = 0x20AFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AFA8u;
        // 0x20afac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20afa8:
    ctx->pc = 0x20AFB0u;
}
