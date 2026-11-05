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

// Function: sub_00109CE8
// Address: 0x109ce8 - 0x109e08
void sub_00109CE8_0x109ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109CE8_0x109ce8");
#endif

    switch (ctx->pc) {
        case 0x109d14u: goto label_109d14;
        case 0x109d3cu: goto label_109d3c;
        case 0x109d60u: goto label_109d60;
        case 0x109d74u: goto label_109d74;
        case 0x109d90u: goto label_109d90;
        case 0x109da4u: goto label_109da4;
        case 0x109dccu: goto label_109dcc;
        default: break;
    }

    ctx->pc = 0x109ce8u;

    // 0x109ce8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x109ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x109cec: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x109cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x109cf0: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x109cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x109cf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109cf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109cf8: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x109cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x109cfc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x109cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d00: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x109d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x109d04: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x109d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x109d08: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x109d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x109d0c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109D0Cu;
    SET_GPR_U32(ctx, 31, 0x109D14u);
    ctx->pc = 0x109D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D0Cu;
    // 0x109d10: 0x2611000c  addiu       $s1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109D0Cu, 0x109D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D14u;
label_109d14:
    // 0x109d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109d18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x109d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x109d1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109d20: 0x8c73001c  lw          $s3, 0x1C($v1)
    ctx->pc = 0x109d20u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109d24: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x109d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x109d28: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x109D28u;
    {
        const bool branch_taken_0x109d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D28u;
        // 0x109d2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d28) {
            ctx->pc = 0x109DE4u;
            goto label_109de4;
        }
    }
    ctx->pc = 0x109D30u;
    // 0x109d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d34: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109D34u;
    SET_GPR_U32(ctx, 31, 0x109D3Cu);
    ctx->pc = 0x109D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D34u;
    // 0x109d38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109D34u, 0x109D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D3Cu;
label_109d3c:
    // 0x109d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109d40: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x109d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x109d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109d48: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x109d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109d4c: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x109d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x109d50: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x109D50u;
    {
        const bool branch_taken_0x109d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D50u;
        // 0x109d54: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d50) {
            ctx->pc = 0x109DE4u;
            goto label_109de4;
        }
    }
    ctx->pc = 0x109D58u;
    // 0x109d58: 0xc044188  jal         func_110620
    ctx->pc = 0x109D58u;
    SET_GPR_U32(ctx, 31, 0x109D60u);
    ctx->pc = 0x109D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D58u;
    // 0x109d5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110620u, 0x109D58u, 0x109D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109D60u;
label_109d60:
    // 0x109d60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109d60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d64: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x109D64u;
    {
        const bool branch_taken_0x109d64 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x109D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D64u;
        // 0x109d68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d64) {
            ctx->pc = 0x109D7Cu;
            goto label_109d7c;
        }
    }
    ctx->pc = 0x109D6Cu;
    // 0x109d6c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x109D6Cu;
    {
        const bool branch_taken_0x109d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D6Cu;
        // 0x109d70: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d6c) {
            ctx->pc = 0x109DE8u;
            goto label_109de8;
        }
    }
    ctx->pc = 0x109D74u;
label_109d74:
    // 0x109d74: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x109D74u;
    {
        const bool branch_taken_0x109d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D74u;
        // 0x109d78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d74) {
            ctx->pc = 0x109DE4u;
            goto label_109de4;
        }
    }
    ctx->pc = 0x109D7Cu;
label_109d7c:
    // 0x109d7c: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x109D7Cu;
    {
        const bool branch_taken_0x109d7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x109D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109D7Cu;
        // 0x109d80: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109d7c) {
            ctx->pc = 0x109DE0u;
            goto label_109de0;
        }
    }
    ctx->pc = 0x109D84u;
    // 0x109d84: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x109d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x109d88: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x109d88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x109d8c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x109d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_109d90:
    // 0x109d90: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109d94: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x109d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x109d98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x109d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109d9c: 0xc044150  jal         func_110540
    ctx->pc = 0x109D9Cu;
    SET_GPR_U32(ctx, 31, 0x109DA4u);
    ctx->pc = 0x109DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109D9Cu;
    // 0x109da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110540u, 0x109D9Cu, 0x109DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DA4u;
label_109da4:
    // 0x109da4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x109DA4u;
    {
        const bool branch_taken_0x109da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DA4u;
        // 0x109da8: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109da4) {
            ctx->pc = 0x109DD0u;
            goto label_109dd0;
        }
    }
    ctx->pc = 0x109DACu;
    // 0x109dac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x109dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x109db0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x109db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x109db4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x109db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109db8: 0x8c6400d0  lw          $a0, 0xD0($v1)
    ctx->pc = 0x109db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x109dbc: 0x1480ffed  bnez        $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x109DBCu;
    {
        const bool branch_taken_0x109dbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x109DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DBCu;
        // 0x109dc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dbc) {
            ctx->pc = 0x109D74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d74;
        }
    }
    ctx->pc = 0x109DC4u;
    // 0x109dc4: 0xc044140  jal         func_110500
    ctx->pc = 0x109DC4u;
    SET_GPR_U32(ctx, 31, 0x109DCCu);
    ctx->pc = 0x109DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109DC4u;
    // 0x109dc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110500u, 0x109DC4u, 0x109DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109DCCu;
label_109dcc:
    // 0x109dcc: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x109dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_109dd0:
    // 0x109dd0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x109dd0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x109dd4: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x109dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x109dd8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x109DD8u;
    {
        const bool branch_taken_0x109dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DD8u;
        // 0x109ddc: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109dd8) {
            ctx->pc = 0x109D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_109d90;
        }
    }
    ctx->pc = 0x109DE0u;
label_109de0:
    // 0x109de0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109de4:
    // 0x109de4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x109de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_109de8:
    // 0x109de8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x109de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x109dec: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x109decu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x109df0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x109df0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x109df4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x109df4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x109df8: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x109df8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x109dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x109DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109DFCu;
        // 0x109e00: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109DFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109E04u;
    // 0x109e04: 0x0  nop
    ctx->pc = 0x109e04u;
    // NOP
    ctx->pc = 0x109e08u;
}
