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

// Function: sub_00278CA8
// Address: 0x278ca8 - 0x278e00
void sub_00278CA8_0x278ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278CA8_0x278ca8");
#endif

    switch (ctx->pc) {
        case 0x278cd0u: goto label_278cd0;
        case 0x278d00u: goto label_278d00;
        case 0x278d40u: goto label_278d40;
        case 0x278d68u: goto label_278d68;
        case 0x278d6cu: goto label_278d6c;
        case 0x278db8u: goto label_278db8;
        case 0x278de4u: goto label_278de4;
        default: break;
    }

    ctx->pc = 0x278ca8u;

    // 0x278ca8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278cb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278cb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278cb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278cb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x278cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x278cbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278cc0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x278cc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x278cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x278cc8: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x278CC8u;
    SET_GPR_U32(ctx, 31, 0x278CD0u);
    ctx->pc = 0x278CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278CC8u;
    // 0x278ccc: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x278CC8u, 0x278CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CD0u;
label_278cd0:
    // 0x278cd0: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278cd4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x278cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x278cd8: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278cdc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x278cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x278ce0: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278ce0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278ce4: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x278CE4u;
    {
        const bool branch_taken_0x278ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278ce4) {
            ctx->pc = 0x278CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278CE4u;
            // 0x278ce8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D00u;
            goto label_278d00;
        }
    }
    ctx->pc = 0x278CECu;
    // 0x278cec: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278cf0: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x278CF0u;
    {
        const bool branch_taken_0x278cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x278CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CF0u;
        // 0x278cf4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cf0) {
            ctx->pc = 0x278D30u;
            goto label_278d30;
        }
    }
    ctx->pc = 0x278CF8u;
    // 0x278cf8: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278cfc: 0x0  nop
    ctx->pc = 0x278cfcu;
    // NOP
label_278d00:
    // 0x278d00: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x278d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x278d04: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x278d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d08: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x278d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278d0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278d10: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278d14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x278d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278d18: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278d18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278d1c: 0x5064fff8  beql        $v1, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x278D1Cu;
    {
        const bool branch_taken_0x278d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x278d1c) {
            ctx->pc = 0x278D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278D1Cu;
            // 0x278d20: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278d00;
        }
    }
    ctx->pc = 0x278D24u;
    // 0x278d24: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278d28: 0x5062fff5  beql        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x278D28u;
    {
        const bool branch_taken_0x278d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278d28) {
            ctx->pc = 0x278D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278D28u;
            // 0x278d2c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278d00;
        }
    }
    ctx->pc = 0x278D30u;
label_278d30:
    // 0x278d30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x278d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d38: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x278D38u;
    SET_GPR_U32(ctx, 31, 0x278D40u);
    ctx->pc = 0x278D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D38u;
    // 0x278d3c: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x278D38u, 0x278D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278D40u;
label_278d40:
    // 0x278d40: 0x8e030114  lw          $v1, 0x114($s0)
    ctx->pc = 0x278d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278d44: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x278d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278d48: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x278d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x278d4c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x278d4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278d50: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278D50u;
    {
        const bool branch_taken_0x278d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x278d50) {
            ctx->pc = 0x278D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278D50u;
            // 0x278d54: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D68u;
            goto label_278d68;
        }
    }
    ctx->pc = 0x278D58u;
    // 0x278d58: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278d5c: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x278D5Cu;
    {
        const bool branch_taken_0x278d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x278d5c) {
            ctx->pc = 0x278D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278D5Cu;
            // 0x278d60: 0x8e040114  lw          $a0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D94u;
            goto label_278d94;
        }
    }
    ctx->pc = 0x278D64u;
    // 0x278d64: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_278d68:
    // 0x278d68: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_278d6c:
    // 0x278d6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278d70: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
    // 0x278d74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x278d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x278d78: 0x80440000  lb          $a0, 0x0($v0)
    ctx->pc = 0x278d78u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278d7c: 0x5083fffb  beql        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x278D7Cu;
    {
        const bool branch_taken_0x278d7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278d7c) {
            ctx->pc = 0x278D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278D7Cu;
            // 0x278d80: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278d6c;
        }
    }
    ctx->pc = 0x278D84u;
    // 0x278d84: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278d88: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278D88u;
    {
        const bool branch_taken_0x278d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x278d88) {
            ctx->pc = 0x278D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278D88u;
            // 0x278d8c: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278d68;
        }
    }
    ctx->pc = 0x278D90u;
    // 0x278d90: 0x8e040114  lw          $a0, 0x114($s0)
    ctx->pc = 0x278d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_278d94:
    // 0x278d94: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278d98: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x278d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x278d9c: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x278d9cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278da0: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x278DA0u;
    {
        const bool branch_taken_0x278da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x278DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DA0u;
        // 0x278da4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278da0) {
            ctx->pc = 0x278DD8u;
            goto label_278dd8;
        }
    }
    ctx->pc = 0x278DA8u;
    // 0x278da8: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x278DA8u;
    {
        const bool branch_taken_0x278da8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x278DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DA8u;
        // 0x278dac: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278da8) {
            ctx->pc = 0x278DD8u;
            goto label_278dd8;
        }
    }
    ctx->pc = 0x278DB0u;
    // 0x278db0: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x278db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x278db4: 0x0  nop
    ctx->pc = 0x278db4u;
    // NOP
label_278db8:
    // 0x278db8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x278db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x278dbc: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x278dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
    // 0x278dc0: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x278dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x278dc4: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x278dc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278dc8: 0x10460004  beq         $v0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x278DC8u;
    {
        const bool branch_taken_0x278dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x278DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DC8u;
        // 0x278dcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278dc8) {
            ctx->pc = 0x278DDCu;
            goto label_278ddc;
        }
    }
    ctx->pc = 0x278DD0u;
    // 0x278dd0: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x278DD0u;
    {
        const bool branch_taken_0x278dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x278DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DD0u;
        // 0x278dd4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278dd0) {
            ctx->pc = 0x278DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278db8;
        }
    }
    ctx->pc = 0x278DD8u;
label_278dd8:
    // 0x278dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278ddc:
    // 0x278ddc: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x278DDCu;
    SET_GPR_U32(ctx, 31, 0x278DE4u);
    ctx->pc = 0x278DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278DDCu;
    // 0x278de0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x278DDCu, 0x278DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278DE4u;
label_278de4:
    // 0x278de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x278de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x278de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278dec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x278decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278df0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x278df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x278df4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x278df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278df8: 0x3e00008  jr          $ra
    ctx->pc = 0x278DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DF8u;
        // 0x278dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278E00u;
}
