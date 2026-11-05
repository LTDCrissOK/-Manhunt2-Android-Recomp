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

// Function: sub_0022DAC8
// Address: 0x22dac8 - 0x22dec0
void sub_0022DAC8_0x22dac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DAC8_0x22dac8");
#endif

    switch (ctx->pc) {
        case 0x22db18u: goto label_22db18;
        case 0x22db24u: goto label_22db24;
        case 0x22db34u: goto label_22db34;
        case 0x22db78u: goto label_22db78;
        case 0x22db94u: goto label_22db94;
        case 0x22dbb0u: goto label_22dbb0;
        case 0x22dbc0u: goto label_22dbc0;
        case 0x22dc14u: goto label_22dc14;
        case 0x22dc20u: goto label_22dc20;
        case 0x22dcacu: goto label_22dcac;
        case 0x22dcbcu: goto label_22dcbc;
        case 0x22dcc8u: goto label_22dcc8;
        case 0x22dcd4u: goto label_22dcd4;
        case 0x22dcf8u: goto label_22dcf8;
        case 0x22dd04u: goto label_22dd04;
        case 0x22dd18u: goto label_22dd18;
        case 0x22dd34u: goto label_22dd34;
        case 0x22dd3cu: goto label_22dd3c;
        case 0x22dd90u: goto label_22dd90;
        case 0x22ddbcu: goto label_22ddbc;
        case 0x22de00u: goto label_22de00;
        case 0x22de40u: goto label_22de40;
        case 0x22de7cu: goto label_22de7c;
        case 0x22de94u: goto label_22de94;
        case 0x22dea8u: goto label_22dea8;
        default: break;
    }

    ctx->pc = 0x22dac8u;

    // 0x22dac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22dac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22dacc: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x22daccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x22dad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22dad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22dad4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22dad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22dad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22dad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dadc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22dadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22dae0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22dae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22dae4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22dae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22dae8: 0x104300ef  beq         $v0, $v1, . + 4 + (0xEF << 2)
    ctx->pc = 0x22DAE8u;
    {
        const bool branch_taken_0x22dae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x22DAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAE8u;
        // 0x22daec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dae8) {
            ctx->pc = 0x22DEA8u;
            goto label_22dea8;
        }
    }
    ctx->pc = 0x22DAF0u;
    // 0x22daf0: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x22daf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x22daf4: 0x904300a8  lbu         $v1, 0xA8($v0)
    ctx->pc = 0x22daf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x22daf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DAF8u;
    {
        const bool branch_taken_0x22daf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DAF8u;
        // 0x22dafc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22daf8) {
            ctx->pc = 0x22DB08u;
            goto label_22db08;
        }
    }
    ctx->pc = 0x22DB00u;
    // 0x22db00: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x22DB00u;
    {
        const bool branch_taken_0x22db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB00u;
        // 0x22db04: 0xa2020320  sb          $v0, 0x320($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 800), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db00) {
            ctx->pc = 0x22DEA8u;
            goto label_22dea8;
        }
    }
    ctx->pc = 0x22DB08u;
label_22db08:
    // 0x22db08: 0xa2000320  sb          $zero, 0x320($s0)
    ctx->pc = 0x22db08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 800), (uint8_t)GPR_U32(ctx, 0));
    // 0x22db0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22db0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db10: 0xc08e3b2  jal         func_238EC8
    ctx->pc = 0x22DB10u;
    SET_GPR_U32(ctx, 31, 0x22DB18u);
    ctx->pc = 0x22DB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB10u;
    // 0x22db14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x22DB10u, 0x22DB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB18u;
label_22db18:
    // 0x22db18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22db18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db1c: 0xc08950c  jal         func_225430
    ctx->pc = 0x22DB1Cu;
    SET_GPR_U32(ctx, 31, 0x22DB24u);
    ctx->pc = 0x22DB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB1Cu;
    // 0x22db20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225430u, 0x22DB1Cu, 0x22DB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB24u;
label_22db24:
    // 0x22db24: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x22db24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22db28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22db28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db2c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x22DB2Cu;
    SET_GPR_U32(ctx, 31, 0x22DB34u);
    ctx->pc = 0x22DB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB2Cu;
    // 0x22db30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x22DB2Cu, 0x22DB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB34u;
label_22db34:
    // 0x22db34: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x22db34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22db38: 0xae0005b0  sw          $zero, 0x5B0($s0)
    ctx->pc = 0x22db38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 0));
    // 0x22db3c: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x22db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x22db40: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x22db40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x22db44: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x22db44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x22db48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22DB48u;
    {
        const bool branch_taken_0x22db48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB48u;
        // 0x22db4c: 0x24020037  addiu       $v0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db48) {
            ctx->pc = 0x22DB78u;
            goto label_22db78;
        }
    }
    ctx->pc = 0x22DB50u;
    // 0x22db50: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22DB50u;
    {
        const bool branch_taken_0x22db50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB50u;
        // 0x22db54: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db50) {
            ctx->pc = 0x22DB78u;
            goto label_22db78;
        }
    }
    ctx->pc = 0x22DB58u;
    // 0x22db58: 0x240407a1  addiu       $a0, $zero, 0x7A1
    ctx->pc = 0x22db58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
    // 0x22db5c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22db60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22db60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22db64: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DB64u;
    {
        const bool branch_taken_0x22db64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22db64) {
            ctx->pc = 0x22DB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DB64u;
            // 0x22db68: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DB7Cu;
            goto label_22db7c;
        }
    }
    ctx->pc = 0x22DB6Cu;
    // 0x22db6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22db6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22db70: 0xc08bbf4  jal         func_22EFD0
    ctx->pc = 0x22DB70u;
    SET_GPR_U32(ctx, 31, 0x22DB78u);
    ctx->pc = 0x22DB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB70u;
    // 0x22db74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EFD0u, 0x22DB70u, 0x22DB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB78u;
label_22db78:
    // 0x22db78: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22db78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
label_22db7c:
    // 0x22db7c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x22db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x22db80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x22db80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x22db84: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DB84u;
    {
        const bool branch_taken_0x22db84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22db84) {
            ctx->pc = 0x22DB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DB84u;
            // 0x22db88: 0x8e020488  lw          $v0, 0x488($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DB9Cu;
            goto label_22db9c;
        }
    }
    ctx->pc = 0x22DB8Cu;
    // 0x22db8c: 0xc069af6  jal         func_1A6BD8
    ctx->pc = 0x22DB8Cu;
    SET_GPR_U32(ctx, 31, 0x22DB94u);
    ctx->pc = 0x22DB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DB8Cu;
    // 0x22db90: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6BD8u, 0x22DB8Cu, 0x22DB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DB94u;
label_22db94:
    // 0x22db94: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x22DB94u;
    {
        const bool branch_taken_0x22db94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DB94u;
        // 0x22db98: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22db94) {
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DB9Cu;
label_22db9c:
    // 0x22db9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22DB9Cu;
    {
        const bool branch_taken_0x22db9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22db9c) {
            ctx->pc = 0x22DBB8u;
            goto label_22dbb8;
        }
    }
    ctx->pc = 0x22DBA4u;
    // 0x22dba4: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22dba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22dba8: 0xc06991c  jal         func_1A6470
    ctx->pc = 0x22DBA8u;
    SET_GPR_U32(ctx, 31, 0x22DBB0u);
    ctx->pc = 0x22DBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBA8u;
    // 0x22dbac: 0x2405044e  addiu       $a1, $zero, 0x44E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1102));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6470u, 0x22DBA8u, 0x22DBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBB0u;
label_22dbb0:
    // 0x22dbb0: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x22DBB0u;
    {
        const bool branch_taken_0x22dbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBB0u;
        // 0x22dbb4: 0x8e020390  lw          $v0, 0x390($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbb0) {
            ctx->pc = 0x22DE18u;
            goto label_22de18;
        }
    }
    ctx->pc = 0x22DBB8u;
label_22dbb8:
    // 0x22dbb8: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x22DBB8u;
    SET_GPR_U32(ctx, 31, 0x22DBC0u);
    ctx->pc = 0x22DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DBB8u;
    // 0x22dbbc: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x22DBB8u, 0x22DBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DBC0u;
label_22dbc0:
    // 0x22dbc0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22DBC0u;
    {
        const bool branch_taken_0x22dbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dbc0) {
            ctx->pc = 0x22DBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DBC0u;
            // 0x22dbc4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DBE0u;
            goto label_22dbe0;
        }
    }
    ctx->pc = 0x22DBC8u;
    // 0x22dbc8: 0x8e050334  lw          $a1, 0x334($s0)
    ctx->pc = 0x22dbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22dbcc: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x22dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22dbd0: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x22dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x22dbd4: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x22DBD4u;
    {
        const bool branch_taken_0x22dbd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x22DBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBD4u;
        // 0x22dbd8: 0x2462ffea  addiu       $v0, $v1, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbd4) {
            ctx->pc = 0x22DC94u;
            goto label_22dc94;
        }
    }
    ctx->pc = 0x22DBDCu;
    // 0x22dbdc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22dbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22dbe0:
    // 0x22dbe0: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x22dbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22dbe4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22dbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22dbe8: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22DBE8u;
    {
        const bool branch_taken_0x22dbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22dbe8) {
            ctx->pc = 0x22DBECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DBE8u;
            // 0x22dbec: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DC18u;
            goto label_22dc18;
        }
    }
    ctx->pc = 0x22DBF0u;
    // 0x22dbf0: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x22dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x22dbf4: 0x24020555  addiu       $v0, $zero, 0x555
    ctx->pc = 0x22dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1365));
    // 0x22dbf8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DBF8u;
    {
        const bool branch_taken_0x22dbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DBF8u;
        // 0x22dbfc: 0x24020556  addiu       $v0, $zero, 0x556 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1366));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dbf8) {
            ctx->pc = 0x22DC08u;
            goto label_22dc08;
        }
    }
    ctx->pc = 0x22DC00u;
    // 0x22dc00: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DC00u;
    {
        const bool branch_taken_0x22dc00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22dc00) {
            ctx->pc = 0x22DC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DC00u;
            // 0x22dc04: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DC18u;
            goto label_22dc18;
        }
    }
    ctx->pc = 0x22DC08u;
label_22dc08:
    // 0x22dc08: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x22dc08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x22dc0c: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22DC0Cu;
    SET_GPR_U32(ctx, 31, 0x22DC14u);
    ctx->pc = 0x22DC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC0Cu;
    // 0x22dc10: 0x24060583  addiu       $a2, $zero, 0x583 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1411));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22DC0Cu, 0x22DC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC14u;
label_22dc14:
    // 0x22dc14: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_22dc18:
    // 0x22dc18: 0xc069b78  jal         func_1A6DE0
    ctx->pc = 0x22DC18u;
    SET_GPR_U32(ctx, 31, 0x22DC20u);
    ctx->pc = 0x22DC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DC18u;
    // 0x22dc1c: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x22DC18u, 0x22DC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DC20u;
label_22dc20:
    // 0x22dc20: 0x8e03032c  lw          $v1, 0x32C($s0)
    ctx->pc = 0x22dc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x22dc24: 0x5060007f  beql        $v1, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x22DC24u;
    {
        const bool branch_taken_0x22dc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dc24) {
            ctx->pc = 0x22DC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DC24u;
            // 0x22dc28: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DC2Cu;
    // 0x22dc2c: 0x8c620228  lw          $v0, 0x228($v1)
    ctx->pc = 0x22dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x22dc30: 0x5440007c  bnel        $v0, $zero, . + 4 + (0x7C << 2)
    ctx->pc = 0x22DC30u;
    {
        const bool branch_taken_0x22dc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dc30) {
            ctx->pc = 0x22DC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DC30u;
            // 0x22dc34: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DC38u;
    // 0x22dc38: 0x8c62022c  lw          $v0, 0x22C($v1)
    ctx->pc = 0x22dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
    // 0x22dc3c: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x22DC3Cu;
    {
        const bool branch_taken_0x22dc3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dc3c) {
            ctx->pc = 0x22DC40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DC3Cu;
            // 0x22dc40: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DC44u;
    // 0x22dc44: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22dc48: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x22dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22dc4c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x22dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x22dc50: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x22DC50u;
    {
        const bool branch_taken_0x22dc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x22dc50) {
            ctx->pc = 0x22DC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DC50u;
            // 0x22dc54: 0x8e0302b4  lw          $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DC80u;
            goto label_22dc80;
        }
    }
    ctx->pc = 0x22DC58u;
    // 0x22dc58: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x22dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x22dc5c: 0x24020553  addiu       $v0, $zero, 0x553
    ctx->pc = 0x22dc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1363));
    // 0x22dc60: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DC60u;
    {
        const bool branch_taken_0x22dc60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22dc60) {
            ctx->pc = 0x22DC64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DC60u;
            // 0x22dc64: 0x8e020390  lw          $v0, 0x390($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DC78u;
            goto label_22dc78;
        }
    }
    ctx->pc = 0x22DC68u;
    // 0x22dc68: 0x24020554  addiu       $v0, $zero, 0x554
    ctx->pc = 0x22dc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
    // 0x22dc6c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DC6Cu;
    {
        const bool branch_taken_0x22dc6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22dc6c) {
            ctx->pc = 0x22DC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DC6Cu;
            // 0x22dc70: 0x8e0302b4  lw          $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DC80u;
            goto label_22dc80;
        }
    }
    ctx->pc = 0x22DC74u;
    // 0x22dc74: 0x8e020390  lw          $v0, 0x390($s0)
    ctx->pc = 0x22dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
label_22dc78:
    // 0x22dc78: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x22DC78u;
    {
        const bool branch_taken_0x22dc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC78u;
        // 0x22dc7c: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc78) {
            ctx->pc = 0x22DE1Cu;
            goto label_22de1c;
        }
    }
    ctx->pc = 0x22DC80u;
label_22dc80:
    // 0x22dc80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22dc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dc84: 0x1062005b  beq         $v1, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x22DC84u;
    {
        const bool branch_taken_0x22dc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC84u;
        // 0x22dc88: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc84) {
            ctx->pc = 0x22DDF4u;
            goto label_22ddf4;
        }
    }
    ctx->pc = 0x22DC8Cu;
    // 0x22dc8c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x22DC8Cu;
    {
        const bool branch_taken_0x22dc8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC8Cu;
        // 0x22dc90: 0x8e020390  lw          $v0, 0x390($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc8c) {
            ctx->pc = 0x22DE18u;
            goto label_22de18;
        }
    }
    ctx->pc = 0x22DC94u;
label_22dc94:
    // 0x22dc94: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x22dc94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22dc98: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x22DC98u;
    {
        const bool branch_taken_0x22dc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DC98u;
        // 0x22dc9c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dc98) {
            ctx->pc = 0x22DD20u;
            goto label_22dd20;
        }
    }
    ctx->pc = 0x22DCA0u;
    // 0x22dca0: 0x24060563  addiu       $a2, $zero, 0x563
    ctx->pc = 0x22dca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
    // 0x22dca4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22DCA4u;
    SET_GPR_U32(ctx, 31, 0x22DCACu);
    ctx->pc = 0x22DCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCA4u;
    // 0x22dca8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22DCA4u, 0x22DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCACu;
label_22dcac:
    // 0x22dcac: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22dcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22dcb0: 0x24060590  addiu       $a2, $zero, 0x590
    ctx->pc = 0x22dcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1424));
    // 0x22dcb4: 0xc06a0cc  jal         func_1A8330
    ctx->pc = 0x22DCB4u;
    SET_GPR_U32(ctx, 31, 0x22DCBCu);
    ctx->pc = 0x22DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCB4u;
    // 0x22dcb8: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x22DCB4u, 0x22DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCBCu;
label_22dcbc:
    // 0x22dcbc: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22dcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22dcc0: 0xc069b36  jal         func_1A6CD8
    ctx->pc = 0x22DCC0u;
    SET_GPR_U32(ctx, 31, 0x22DCC8u);
    ctx->pc = 0x22DCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCC0u;
    // 0x22dcc4: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6CD8u, 0x22DCC0u, 0x22DCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCC8u;
label_22dcc8:
    // 0x22dcc8: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22dcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22dccc: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22DCCCu;
    SET_GPR_U32(ctx, 31, 0x22DCD4u);
    ctx->pc = 0x22DCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCCCu;
    // 0x22dcd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22DCCCu, 0x22DCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCD4u;
label_22dcd4:
    // 0x22dcd4: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x22dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x22dcd8: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x22dcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x22dcdc: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x22dcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x22dce0: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x22dce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
    // 0x22dce4: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x22dce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x22dce8: 0x304200fe  andi        $v0, $v0, 0xFE
    ctx->pc = 0x22dce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)254);
    // 0x22dcec: 0xa0620032  sb          $v0, 0x32($v1)
    ctx->pc = 0x22dcecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
    // 0x22dcf0: 0xc07682a  jal         func_1DA0A8
    ctx->pc = 0x22DCF0u;
    SET_GPR_U32(ctx, 31, 0x22DCF8u);
    ctx->pc = 0x22DCF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCF0u;
    // 0x22dcf4: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA0A8u, 0x22DCF0u, 0x22DCF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DCF8u;
label_22dcf8:
    // 0x22dcf8: 0xae000fd0  sw          $zero, 0xFD0($s0)
    ctx->pc = 0x22dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4048), GPR_U32(ctx, 0));
    // 0x22dcfc: 0xc08998c  jal         func_226630
    ctx->pc = 0x22DCFCu;
    SET_GPR_U32(ctx, 31, 0x22DD04u);
    ctx->pc = 0x22DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DCFCu;
    // 0x22dd00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226630u, 0x22DCFCu, 0x22DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD04u;
label_22dd04:
    // 0x22dd04: 0x8e040388  lw          $a0, 0x388($s0)
    ctx->pc = 0x22dd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
    // 0x22dd08: 0x5080004e  beql        $a0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x22DD08u;
    {
        const bool branch_taken_0x22dd08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dd08) {
            ctx->pc = 0x22DD0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DD08u;
            // 0x22dd0c: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE44u;
            goto label_22de44;
        }
    }
    ctx->pc = 0x22DD10u;
    // 0x22dd10: 0xc09bf28  jal         func_26FCA0
    ctx->pc = 0x22DD10u;
    SET_GPR_U32(ctx, 31, 0x22DD18u);
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x22DD10u, 0x22DD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD18u;
label_22dd18:
    // 0x22dd18: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x22DD18u;
    {
        const bool branch_taken_0x22dd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD18u;
        // 0x22dd1c: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd18) {
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DD20u;
label_22dd20:
    // 0x22dd20: 0x8e040394  lw          $a0, 0x394($s0)
    ctx->pc = 0x22dd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
    // 0x22dd24: 0x5080001c  beql        $a0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x22DD24u;
    {
        const bool branch_taken_0x22dd24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22dd24) {
            ctx->pc = 0x22DD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DD24u;
            // 0x22dd28: 0x8e02036c  lw          $v0, 0x36C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DD98u;
            goto label_22dd98;
        }
    }
    ctx->pc = 0x22DD2Cu;
    // 0x22dd2c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x22DD2Cu;
    SET_GPR_U32(ctx, 31, 0x22DD34u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x22DD2Cu, 0x22DD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD34u;
label_22dd34:
    // 0x22dd34: 0xc069938  jal         func_1A64E0
    ctx->pc = 0x22DD34u;
    SET_GPR_U32(ctx, 31, 0x22DD3Cu);
    ctx->pc = 0x22DD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD34u;
    // 0x22dd38: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A64E0u, 0x22DD34u, 0x22DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD3Cu;
label_22dd3c:
    // 0x22dd3c: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x22dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22dd40: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x22dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x22dd44: 0x2463fc8c  addiu       $v1, $v1, -0x374
    ctx->pc = 0x22dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966412));
    // 0x22dd48: 0x2c6200c4  sltiu       $v0, $v1, 0xC4
    ctx->pc = 0x22dd48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)196) ? 1 : 0);
    // 0x22dd4c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x22DD4Cu;
    {
        const bool branch_taken_0x22dd4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD4Cu;
        // 0x22dd50: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd4c) {
            ctx->pc = 0x22DD84u;
            goto label_22dd84;
        }
    }
    ctx->pc = 0x22DD54u;
    // 0x22dd54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22dd58: 0x24424870  addiu       $v0, $v0, 0x4870
    ctx->pc = 0x22dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18544));
    // 0x22dd5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22dd60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22dd64: 0x800008  jr          $a0
    ctx->pc = 0x22DD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22DD6Cu: goto label_22dd6c;
            case 0x22DD78u: goto label_22dd78;
            case 0x22DD84u: goto label_22dd84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DD64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x22DD6Cu;
label_22dd6c:
    // 0x22dd6c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22dd70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22DD70u;
    {
        const bool branch_taken_0x22dd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD70u;
        // 0x22dd74: 0xae0202b4  sw          $v0, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd70) {
            ctx->pc = 0x22DD88u;
            goto label_22dd88;
        }
    }
    ctx->pc = 0x22DD78u;
label_22dd78:
    // 0x22dd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dd7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22DD7Cu;
    {
        const bool branch_taken_0x22dd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD7Cu;
        // 0x22dd80: 0xae0202b4  sw          $v0, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd7c) {
            ctx->pc = 0x22DD88u;
            goto label_22dd88;
        }
    }
    ctx->pc = 0x22DD84u;
label_22dd84:
    // 0x22dd84: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x22dd84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
label_22dd88:
    // 0x22dd88: 0xc0cf304  jal         func_33CC10
    ctx->pc = 0x22DD88u;
    SET_GPR_U32(ctx, 31, 0x22DD90u);
    ctx->pc = 0x22DD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DD88u;
    // 0x22dd8c: 0x8e0402a0  lw          $a0, 0x2A0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CC10u, 0x22DD88u, 0x22DD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DD90u;
label_22dd90:
    // 0x22dd90: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x22DD90u;
    {
        const bool branch_taken_0x22dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DD90u;
        // 0x22dd94: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd90) {
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DD98u;
label_22dd98:
    // 0x22dd98: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22dd98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x22dd9c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22DD9Cu;
    {
        const bool branch_taken_0x22dd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dd9c) {
            ctx->pc = 0x22DDA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DD9Cu;
            // 0x22dda0: 0x8e03032c  lw          $v1, 0x32C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DDC0u;
            goto label_22ddc0;
        }
    }
    ctx->pc = 0x22DDA4u;
    // 0x22dda4: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x22dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x22dda8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DDA8u;
    {
        const bool branch_taken_0x22dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22dda8) {
            ctx->pc = 0x22DDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DDA8u;
            // 0x22ddac: 0x8e03032c  lw          $v1, 0x32C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DDC0u;
            goto label_22ddc0;
        }
    }
    ctx->pc = 0x22DDB0u;
    // 0x22ddb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddb4: 0xc06991c  jal         func_1A6470
    ctx->pc = 0x22DDB4u;
    SET_GPR_U32(ctx, 31, 0x22DDBCu);
    ctx->pc = 0x22DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDB4u;
    // 0x22ddb8: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6470u, 0x22DDB4u, 0x22DDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DDBCu;
label_22ddbc:
    // 0x22ddbc: 0x8e03032c  lw          $v1, 0x32C($s0)
    ctx->pc = 0x22ddbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_22ddc0:
    // 0x22ddc0: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x22DDC0u;
    {
        const bool branch_taken_0x22ddc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ddc0) {
            ctx->pc = 0x22DDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DDC0u;
            // 0x22ddc4: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DDC8u;
    // 0x22ddc8: 0x8c620228  lw          $v0, 0x228($v1)
    ctx->pc = 0x22ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 552)));
    // 0x22ddcc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x22DDCCu;
    {
        const bool branch_taken_0x22ddcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ddcc) {
            ctx->pc = 0x22DDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DDCCu;
            // 0x22ddd0: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DDD4u;
    // 0x22ddd4: 0x8c62022c  lw          $v0, 0x22C($v1)
    ctx->pc = 0x22ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 556)));
    // 0x22ddd8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x22DDD8u;
    {
        const bool branch_taken_0x22ddd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ddd8) {
            ctx->pc = 0x22DDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DDD8u;
            // 0x22dddc: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DDE0u;
    // 0x22dde0: 0x8e0302b4  lw          $v1, 0x2B4($s0)
    ctx->pc = 0x22dde0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x22dde4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22dde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dde8: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22DDE8u;
    {
        const bool branch_taken_0x22dde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22dde8) {
            ctx->pc = 0x22DDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DDE8u;
            // 0x22ddec: 0x8e0204b8  lw          $v0, 0x4B8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE08u;
            goto label_22de08;
        }
    }
    ctx->pc = 0x22DDF0u;
    // 0x22ddf0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x22ddf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_22ddf4:
    // 0x22ddf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22ddf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddf8: 0xc049548  jal         func_125520
    ctx->pc = 0x22DDF8u;
    SET_GPR_U32(ctx, 31, 0x22DE00u);
    ctx->pc = 0x22DDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DDF8u;
    // 0x22ddfc: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125520u, 0x22DDF8u, 0x22DE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE00u;
label_22de00:
    // 0x22de00: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22DE00u;
    {
        const bool branch_taken_0x22de00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE00u;
        // 0x22de04: 0x8e040388  lw          $a0, 0x388($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de00) {
            ctx->pc = 0x22DE24u;
            goto label_22de24;
        }
    }
    ctx->pc = 0x22DE08u;
label_22de08:
    // 0x22de08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22DE08u;
    {
        const bool branch_taken_0x22de08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE08u;
        // 0x22de0c: 0x8e020390  lw          $v0, 0x390($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de08) {
            ctx->pc = 0x22DE18u;
            goto label_22de18;
        }
    }
    ctx->pc = 0x22DE10u;
    // 0x22de10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22DE10u;
    {
        const bool branch_taken_0x22de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DE10u;
        // 0x22de14: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de10) {
            ctx->pc = 0x22DE1Cu;
            goto label_22de1c;
        }
    }
    ctx->pc = 0x22DE18u;
label_22de18:
    // 0x22de18: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x22de18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_22de1c:
    // 0x22de1c: 0xae020390  sw          $v0, 0x390($s0)
    ctx->pc = 0x22de1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 2));
    // 0x22de20: 0x8e040388  lw          $a0, 0x388($s0)
    ctx->pc = 0x22de20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
label_22de24:
    // 0x22de24: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x22DE24u;
    {
        const bool branch_taken_0x22de24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de24) {
            ctx->pc = 0x22DE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE24u;
            // 0x22de28: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE44u;
            goto label_22de44;
        }
    }
    ctx->pc = 0x22DE2Cu;
    // 0x22de2c: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x22de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x22de30: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DE30u;
    {
        const bool branch_taken_0x22de30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x22de30) {
            ctx->pc = 0x22DE34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE30u;
            // 0x22de34: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE44u;
            goto label_22de44;
        }
    }
    ctx->pc = 0x22DE38u;
    // 0x22de38: 0xc09c07c  jal         func_2701F0
    ctx->pc = 0x22DE38u;
    SET_GPR_U32(ctx, 31, 0x22DE40u);
    ctx->pc = 0x22DE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE38u;
    // 0x22de3c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701F0u, 0x22DE38u, 0x22DE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE40u;
label_22de40:
    // 0x22de40: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x22de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_22de44:
    // 0x22de44: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22de44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22de48: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x22DE48u;
    {
        const bool branch_taken_0x22de48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22de48) {
            ctx->pc = 0x22DE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE48u;
            // 0x22de4c: 0x8e020290  lw          $v0, 0x290($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE80u;
            goto label_22de80;
        }
    }
    ctx->pc = 0x22DE50u;
    // 0x22de50: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x22de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x22de54: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x22de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x22de58: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x22DE58u;
    {
        const bool branch_taken_0x22de58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22de58) {
            ctx->pc = 0x22DE5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22DE58u;
            // 0x22de5c: 0x8e020290  lw          $v0, 0x290($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22DE80u;
            goto label_22de80;
        }
    }
    ctx->pc = 0x22DE60u;
    // 0x22de60: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x22de60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x22de64: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x22de64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x22de68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22de68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x22de6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22de6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22de70: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x22de70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x22de74: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x22DE74u;
    SET_GPR_U32(ctx, 31, 0x22DE7Cu);
    ctx->pc = 0x22DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE74u;
    // 0x22de78: 0x2406004d  addiu       $a2, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x22DE74u, 0x22DE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE7Cu;
label_22de7c:
    // 0x22de7c: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x22de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
label_22de80:
    // 0x22de80: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DE80u;
    {
        const bool branch_taken_0x22de80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22de80) {
            ctx->pc = 0x22DE94u;
            goto label_22de94;
        }
    }
    ctx->pc = 0x22DE88u;
    // 0x22de88: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x22de8c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x22DE8Cu;
    SET_GPR_U32(ctx, 31, 0x22DE94u);
    ctx->pc = 0x22DE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DE8Cu;
    // 0x22de90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x22DE8Cu, 0x22DE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DE94u;
label_22de94:
    // 0x22de94: 0x3c014370  lui         $at, 0x4370
    ctx->pc = 0x22de94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17264 << 16));
    // 0x22de98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22de98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22de9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22de9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dea0: 0xc08f956  jal         func_23E558
    ctx->pc = 0x22DEA0u;
    SET_GPR_U32(ctx, 31, 0x22DEA8u);
    ctx->pc = 0x22DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22DEA0u;
    // 0x22dea4: 0xe6000378  swc1        $f0, 0x378($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 888), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x22DEA0u, 0x22DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22DEA8u;
label_22dea8:
    // 0x22dea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22dea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22deac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22deacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22deb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22deb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22deb4: 0x3e00008  jr          $ra
    ctx->pc = 0x22DEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22DEB4u;
        // 0x22deb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22DEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22DEBCu;
    // 0x22debc: 0x0  nop
    ctx->pc = 0x22debcu;
    // NOP
    ctx->pc = 0x22dec0u;
}
