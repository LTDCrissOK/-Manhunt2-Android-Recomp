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

// Function: sub_001A8CA0
// Address: 0x1a8ca0 - 0x1a8e30
void sub_001A8CA0_0x1a8ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8CA0_0x1a8ca0");
#endif

    switch (ctx->pc) {
        case 0x1a8ca0u: goto label_1a8ca0;
        case 0x1a8ca4u: goto label_1a8ca4;
        case 0x1a8ca8u: goto label_1a8ca8;
        case 0x1a8cacu: goto label_1a8cac;
        case 0x1a8cb0u: goto label_1a8cb0;
        case 0x1a8cb4u: goto label_1a8cb4;
        case 0x1a8cb8u: goto label_1a8cb8;
        case 0x1a8cbcu: goto label_1a8cbc;
        case 0x1a8cc0u: goto label_1a8cc0;
        case 0x1a8cc4u: goto label_1a8cc4;
        case 0x1a8cc8u: goto label_1a8cc8;
        case 0x1a8cccu: goto label_1a8ccc;
        case 0x1a8cd0u: goto label_1a8cd0;
        case 0x1a8cd4u: goto label_1a8cd4;
        case 0x1a8cd8u: goto label_1a8cd8;
        case 0x1a8cdcu: goto label_1a8cdc;
        case 0x1a8ce0u: goto label_1a8ce0;
        case 0x1a8ce4u: goto label_1a8ce4;
        case 0x1a8ce8u: goto label_1a8ce8;
        case 0x1a8cecu: goto label_1a8cec;
        case 0x1a8cf0u: goto label_1a8cf0;
        case 0x1a8cf4u: goto label_1a8cf4;
        case 0x1a8cf8u: goto label_1a8cf8;
        case 0x1a8cfcu: goto label_1a8cfc;
        case 0x1a8d00u: goto label_1a8d00;
        case 0x1a8d04u: goto label_1a8d04;
        case 0x1a8d08u: goto label_1a8d08;
        case 0x1a8d0cu: goto label_1a8d0c;
        case 0x1a8d10u: goto label_1a8d10;
        case 0x1a8d14u: goto label_1a8d14;
        case 0x1a8d18u: goto label_1a8d18;
        case 0x1a8d1cu: goto label_1a8d1c;
        case 0x1a8d20u: goto label_1a8d20;
        case 0x1a8d24u: goto label_1a8d24;
        case 0x1a8d28u: goto label_1a8d28;
        case 0x1a8d2cu: goto label_1a8d2c;
        case 0x1a8d30u: goto label_1a8d30;
        case 0x1a8d34u: goto label_1a8d34;
        case 0x1a8d38u: goto label_1a8d38;
        case 0x1a8d3cu: goto label_1a8d3c;
        case 0x1a8d40u: goto label_1a8d40;
        case 0x1a8d44u: goto label_1a8d44;
        case 0x1a8d48u: goto label_1a8d48;
        case 0x1a8d4cu: goto label_1a8d4c;
        case 0x1a8d50u: goto label_1a8d50;
        case 0x1a8d54u: goto label_1a8d54;
        case 0x1a8d58u: goto label_1a8d58;
        case 0x1a8d5cu: goto label_1a8d5c;
        case 0x1a8d60u: goto label_1a8d60;
        case 0x1a8d64u: goto label_1a8d64;
        case 0x1a8d68u: goto label_1a8d68;
        case 0x1a8d6cu: goto label_1a8d6c;
        case 0x1a8d70u: goto label_1a8d70;
        case 0x1a8d74u: goto label_1a8d74;
        case 0x1a8d78u: goto label_1a8d78;
        case 0x1a8d7cu: goto label_1a8d7c;
        case 0x1a8d80u: goto label_1a8d80;
        case 0x1a8d84u: goto label_1a8d84;
        case 0x1a8d88u: goto label_1a8d88;
        case 0x1a8d8cu: goto label_1a8d8c;
        case 0x1a8d90u: goto label_1a8d90;
        case 0x1a8d94u: goto label_1a8d94;
        case 0x1a8d98u: goto label_1a8d98;
        case 0x1a8d9cu: goto label_1a8d9c;
        case 0x1a8da0u: goto label_1a8da0;
        case 0x1a8da4u: goto label_1a8da4;
        case 0x1a8da8u: goto label_1a8da8;
        case 0x1a8dacu: goto label_1a8dac;
        case 0x1a8db0u: goto label_1a8db0;
        case 0x1a8db4u: goto label_1a8db4;
        case 0x1a8db8u: goto label_1a8db8;
        case 0x1a8dbcu: goto label_1a8dbc;
        case 0x1a8dc0u: goto label_1a8dc0;
        case 0x1a8dc4u: goto label_1a8dc4;
        case 0x1a8dc8u: goto label_1a8dc8;
        case 0x1a8dccu: goto label_1a8dcc;
        case 0x1a8dd0u: goto label_1a8dd0;
        case 0x1a8dd4u: goto label_1a8dd4;
        case 0x1a8dd8u: goto label_1a8dd8;
        case 0x1a8ddcu: goto label_1a8ddc;
        case 0x1a8de0u: goto label_1a8de0;
        case 0x1a8de4u: goto label_1a8de4;
        case 0x1a8de8u: goto label_1a8de8;
        case 0x1a8decu: goto label_1a8dec;
        case 0x1a8df0u: goto label_1a8df0;
        case 0x1a8df4u: goto label_1a8df4;
        case 0x1a8df8u: goto label_1a8df8;
        case 0x1a8dfcu: goto label_1a8dfc;
        case 0x1a8e00u: goto label_1a8e00;
        case 0x1a8e04u: goto label_1a8e04;
        case 0x1a8e08u: goto label_1a8e08;
        case 0x1a8e0cu: goto label_1a8e0c;
        case 0x1a8e10u: goto label_1a8e10;
        case 0x1a8e14u: goto label_1a8e14;
        case 0x1a8e18u: goto label_1a8e18;
        case 0x1a8e1cu: goto label_1a8e1c;
        case 0x1a8e20u: goto label_1a8e20;
        case 0x1a8e24u: goto label_1a8e24;
        case 0x1a8e28u: goto label_1a8e28;
        case 0x1a8e2cu: goto label_1a8e2c;
        default: break;
    }

    ctx->pc = 0x1a8ca0u;

label_1a8ca0:
    // 0x1a8ca0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1a8ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1a8ca4:
    // 0x1a8ca4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8ca4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a8ca8:
    // 0x1a8ca8: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x1a8ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950256)));
label_1a8cac:
    // 0x1a8cac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a8cb0:
    // 0x1a8cb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a8cb4:
    // 0x1a8cb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8cb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8cb8:
    // 0x1a8cb8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1a8cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1a8cbc:
    // 0x1a8cbc: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_1a8cc0:
    if (ctx->pc == 0x1A8CC0u) {
        ctx->pc = 0x1A8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CBCu;
        // 0x1a8cc0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CC4u;
        goto label_1a8cc4;
    }
    ctx->pc = 0x1A8CBCu;
    {
        const bool branch_taken_0x1a8cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CBCu;
        // 0x1a8cc0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cbc) {
            ctx->pc = 0x1A8E18u;
            goto label_1a8e18;
        }
    }
    ctx->pc = 0x1A8CC4u;
label_1a8cc4:
    // 0x1a8cc4: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x1a8cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1a8cc8:
    // 0x1a8cc8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1a8ccc:
    if (ctx->pc == 0x1A8CCCu) {
        ctx->pc = 0x1A8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CC8u;
        // 0x1a8ccc: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CD0u;
        goto label_1a8cd0;
    }
    ctx->pc = 0x1A8CC8u;
    {
        const bool branch_taken_0x1a8cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CC8u;
        // 0x1a8ccc: 0x3c11003f  lui         $s1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cc8) {
            ctx->pc = 0x1A8D10u;
            goto label_1a8d10;
        }
    }
    ctx->pc = 0x1A8CD0u;
label_1a8cd0:
    // 0x1a8cd0: 0x8e050150  lw          $a1, 0x150($s0)
    ctx->pc = 0x1a8cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a8cd4:
    // 0x1a8cd4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a8cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1a8cd8:
    // 0x1a8cd8: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
label_1a8cdc:
    if (ctx->pc == 0x1A8CDCu) {
        ctx->pc = 0x1A8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CD8u;
        // 0x1a8cdc: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CE0u;
        goto label_1a8ce0;
    }
    ctx->pc = 0x1A8CD8u;
    {
        const bool branch_taken_0x1a8cd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CD8u;
        // 0x1a8cdc: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8cd8) {
            ctx->pc = 0x1A8CF8u;
            goto label_1a8cf8;
        }
    }
    ctx->pc = 0x1A8CE0u;
label_1a8ce0:
    // 0x1a8ce0: 0x26236a00  addiu       $v1, $s1, 0x6A00
    ctx->pc = 0x1a8ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 27136));
label_1a8ce4:
    // 0x1a8ce4: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1a8ce4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a8ce8:
    // 0x1a8ce8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a8ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a8cec:
    // 0x1a8cec: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1a8cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a8cf0:
    // 0x1a8cf0: 0x54800008  bnel        $a0, $zero, . + 4 + (0x8 << 2)
label_1a8cf4:
    if (ctx->pc == 0x1A8CF4u) {
        ctx->pc = 0x1A8CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8CF0u;
        // 0x1a8cf4: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8CF8u;
        goto label_1a8cf8;
    }
    ctx->pc = 0x1A8CF0u;
    {
        const bool branch_taken_0x1a8cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8cf0) {
            ctx->pc = 0x1A8CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8CF0u;
            // 0x1a8cf4: 0x8e020150  lw          $v0, 0x150($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8D14u;
            goto label_1a8d14;
        }
    }
    ctx->pc = 0x1A8CF8u;
label_1a8cf8:
    // 0x1a8cf8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1a8cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1a8cfc:
    // 0x1a8cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d00:
    // 0x1a8d00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a8d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a8d04:
    // 0x1a8d04: 0xc06a152  jal         func_1A8548
label_1a8d08:
    if (ctx->pc == 0x1A8D08u) {
        ctx->pc = 0x1A8D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D04u;
        // 0x1a8d08: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D0Cu;
        goto label_1a8d0c;
    }
    ctx->pc = 0x1A8D04u;
    SET_GPR_U32(ctx, 31, 0x1A8D0Cu);
    ctx->pc = 0x1A8D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8D04u;
    // 0x1a8d08: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8548u, 0x1A8D04u, 0x1A8D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8D0Cu;
label_1a8d0c:
    // 0x1a8d0c: 0xae0201e4  sw          $v0, 0x1E4($s0)
    ctx->pc = 0x1a8d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
label_1a8d10:
    // 0x1a8d10: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1a8d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a8d14:
    // 0x1a8d14: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1a8d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1a8d18:
    // 0x1a8d18: 0x26246a00  addiu       $a0, $s1, 0x6A00
    ctx->pc = 0x1a8d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 27136));
label_1a8d1c:
    // 0x1a8d1c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1a8d1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a8d20:
    // 0x1a8d20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a8d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a8d24:
    // 0x1a8d24: 0x94420014  lhu         $v0, 0x14($v0)
    ctx->pc = 0x1a8d24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_1a8d28:
    // 0x1a8d28: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x1a8d28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1a8d2c:
    // 0x1a8d2c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_1a8d30:
    if (ctx->pc == 0x1A8D30u) {
        ctx->pc = 0x1A8D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D2Cu;
        // 0x1a8d30: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D34u;
        goto label_1a8d34;
    }
    ctx->pc = 0x1A8D2Cu;
    {
        const bool branch_taken_0x1a8d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8d2c) {
            ctx->pc = 0x1A8D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8D2Cu;
            // 0x1a8d30: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8D40u;
            goto label_1a8d40;
        }
    }
    ctx->pc = 0x1A8D34u;
label_1a8d34:
    // 0x1a8d34: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1a8d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1a8d38:
    // 0x1a8d38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a8d3c:
    if (ctx->pc == 0x1A8D3Cu) {
        ctx->pc = 0x1A8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D38u;
        // 0x1a8d3c: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D40u;
        goto label_1a8d40;
    }
    ctx->pc = 0x1A8D38u;
    {
        const bool branch_taken_0x1a8d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D38u;
        // 0x1a8d3c: 0x8e020148  lw          $v0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d38) {
            ctx->pc = 0x1A8D50u;
            goto label_1a8d50;
        }
    }
    ctx->pc = 0x1A8D40u;
label_1a8d40:
    // 0x1a8d40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a8d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8d44:
    // 0x1a8d44: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1a8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_1a8d48:
    // 0x1a8d48: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a8d4c:
    if (ctx->pc == 0x1A8D4Cu) {
        ctx->pc = 0x1A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D48u;
        // 0x1a8d4c: 0xa0640030  sb          $a0, 0x30($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D50u;
        goto label_1a8d50;
    }
    ctx->pc = 0x1A8D48u;
    {
        const bool branch_taken_0x1a8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D48u;
        // 0x1a8d4c: 0xa0640030  sb          $a0, 0x30($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d48) {
            ctx->pc = 0x1A8D58u;
            goto label_1a8d58;
        }
    }
    ctx->pc = 0x1A8D50u;
label_1a8d50:
    // 0x1a8d50: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1a8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_1a8d54:
    // 0x1a8d54: 0xa0600030  sb          $zero, 0x30($v1)
    ctx->pc = 0x1a8d54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 48), (uint8_t)GPR_U32(ctx, 0));
label_1a8d58:
    // 0x1a8d58: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a8d5c:
    // 0x1a8d5c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x1a8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_1a8d60:
    // 0x1a8d60: 0x24420d70  addiu       $v0, $v0, 0xD70
    ctx->pc = 0x1a8d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3440));
label_1a8d64:
    // 0x1a8d64: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1a8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1a8d68:
    // 0x1a8d68: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1a8d68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a8d6c:
    // 0x1a8d6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a8d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8d70:
    // 0x1a8d70: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x1a8d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_1a8d74:
    // 0x1a8d74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1a8d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a8d78:
    // 0x1a8d78: 0x60f809  jalr        $v1
label_1a8d7c:
    if (ctx->pc == 0x1A8D7Cu) {
        ctx->pc = 0x1A8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D78u;
        // 0x1a8d7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D80u;
        goto label_1a8d80;
    }
    ctx->pc = 0x1A8D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8D80u);
        ctx->pc = 0x1A8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D78u;
        // 0x1a8d7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D78u, 0x1A8D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8D80u;
label_1a8d80:
    // 0x1a8d80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a8d80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a8d84:
    // 0x1a8d84: 0xc6000194  lwc1        $f0, 0x194($s0)
    ctx->pc = 0x1a8d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a8d88:
    // 0x1a8d88: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a8d88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a8d8c:
    // 0x1a8d8c: 0x0  nop
    ctx->pc = 0x1a8d8cu;
    // NOP
label_1a8d90:
    // 0x1a8d90: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1a8d94:
    if (ctx->pc == 0x1A8D94u) {
        ctx->pc = 0x1A8D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D90u;
        // 0x1a8d94: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D98u;
        goto label_1a8d98;
    }
    ctx->pc = 0x1A8D90u;
    {
        const bool branch_taken_0x1a8d90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A8D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D90u;
        // 0x1a8d94: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d90) {
            ctx->pc = 0x1A8DB8u;
            goto label_1a8db8;
        }
    }
    ctx->pc = 0x1A8D98u;
label_1a8d98:
    // 0x1a8d98: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1a8d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a8d9c:
    // 0x1a8d9c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_1a8da0:
    if (ctx->pc == 0x1A8DA0u) {
        ctx->pc = 0x1A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D9Cu;
        // 0x1a8da0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DA4u;
        goto label_1a8da4;
    }
    ctx->pc = 0x1A8D9Cu;
    {
        const bool branch_taken_0x1a8d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D9Cu;
        // 0x1a8da0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d9c) {
            ctx->pc = 0x1A8DB8u;
            goto label_1a8db8;
        }
    }
    ctx->pc = 0x1A8DA4u;
label_1a8da4:
    // 0x1a8da4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_1a8da8:
    if (ctx->pc == 0x1A8DA8u) {
        ctx->pc = 0x1A8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DA4u;
        // 0x1a8da8: 0x2462ffed  addiu       $v0, $v1, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DACu;
        goto label_1a8dac;
    }
    ctx->pc = 0x1A8DA4u;
    {
        const bool branch_taken_0x1a8da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DA4u;
        // 0x1a8da8: 0x2462ffed  addiu       $v0, $v1, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8da4) {
            ctx->pc = 0x1A8DB8u;
            goto label_1a8db8;
        }
    }
    ctx->pc = 0x1A8DACu;
label_1a8dac:
    // 0x1a8dac: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1a8dacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1a8db0:
    // 0x1a8db0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1a8db4:
    if (ctx->pc == 0x1A8DB4u) {
        ctx->pc = 0x1A8DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DB0u;
        // 0x1a8db4: 0xe6010194  swc1        $f1, 0x194($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DB8u;
        goto label_1a8db8;
    }
    ctx->pc = 0x1A8DB0u;
    {
        const bool branch_taken_0x1a8db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8db0) {
            ctx->pc = 0x1A8DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8DB0u;
            // 0x1a8db4: 0xe6010194  swc1        $f1, 0x194($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 404), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8DB8u;
            goto label_1a8db8;
        }
    }
    ctx->pc = 0x1A8DB8u;
label_1a8db8:
    // 0x1a8db8: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1a8db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
label_1a8dbc:
    // 0x1a8dbc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_1a8dc0:
    if (ctx->pc == 0x1A8DC0u) {
        ctx->pc = 0x1A8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DBCu;
        // 0x1a8dc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DC4u;
        goto label_1a8dc4;
    }
    ctx->pc = 0x1A8DBCu;
    {
        const bool branch_taken_0x1a8dbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DBCu;
        // 0x1a8dc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8dbc) {
            ctx->pc = 0x1A8E18u;
            goto label_1a8e18;
        }
    }
    ctx->pc = 0x1A8DC4u;
label_1a8dc4:
    // 0x1a8dc4: 0x8e050148  lw          $a1, 0x148($s0)
    ctx->pc = 0x1a8dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1a8dc8:
    // 0x1a8dc8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a8dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8dcc:
    // 0x1a8dcc: 0xc07400e  jal         func_1D0038
label_1a8dd0:
    if (ctx->pc == 0x1A8DD0u) {
        ctx->pc = 0x1A8DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DCCu;
        // 0x1a8dd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DD4u;
        goto label_1a8dd4;
    }
    ctx->pc = 0x1A8DCCu;
    SET_GPR_U32(ctx, 31, 0x1A8DD4u);
    ctx->pc = 0x1A8DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8DCCu;
    // 0x1a8dd0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0038u, 0x1A8DCCu, 0x1A8DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8DD4u;
label_1a8dd4:
    // 0x1a8dd4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1a8dd8:
    if (ctx->pc == 0x1A8DD8u) {
        ctx->pc = 0x1A8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DD4u;
        // 0x1a8dd8: 0x2403068e  addiu       $v1, $zero, 0x68E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1678));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DDCu;
        goto label_1a8ddc;
    }
    ctx->pc = 0x1A8DD4u;
    {
        const bool branch_taken_0x1a8dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DD4u;
        // 0x1a8dd8: 0x2403068e  addiu       $v1, $zero, 0x68E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1678));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8dd4) {
            ctx->pc = 0x1A8E18u;
            goto label_1a8e18;
        }
    }
    ctx->pc = 0x1A8DDCu;
label_1a8ddc:
    // 0x1a8ddc: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1a8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1a8de0:
    // 0x1a8de0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a8de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a8de4:
    // 0x1a8de4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1a8de8:
    // 0x1a8de8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a8de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a8dec:
    // 0x1a8dec: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1a8df0:
    if (ctx->pc == 0x1A8DF0u) {
        ctx->pc = 0x1A8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DECu;
        // 0x1a8df0: 0x24020691  addiu       $v0, $zero, 0x691 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1681));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DF4u;
        goto label_1a8df4;
    }
    ctx->pc = 0x1A8DECu;
    {
        const bool branch_taken_0x1a8dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A8DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DECu;
        // 0x1a8df0: 0x24020691  addiu       $v0, $zero, 0x691 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1681));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8dec) {
            ctx->pc = 0x1A8DFCu;
            goto label_1a8dfc;
        }
    }
    ctx->pc = 0x1A8DF4u;
label_1a8df4:
    // 0x1a8df4: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
label_1a8df8:
    if (ctx->pc == 0x1A8DF8u) {
        ctx->pc = 0x1A8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DF4u;
        // 0x1a8df8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DFCu;
        goto label_1a8dfc;
    }
    ctx->pc = 0x1A8DF4u;
    {
        const bool branch_taken_0x1a8df4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a8df4) {
            ctx->pc = 0x1A8DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8DF4u;
            // 0x1a8df8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8E1Cu;
            goto label_1a8e1c;
        }
    }
    ctx->pc = 0x1A8DFCu;
label_1a8dfc:
    // 0x1a8dfc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1a8dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1a8e00:
    // 0x1a8e00: 0x8e060148  lw          $a2, 0x148($s0)
    ctx->pc = 0x1a8e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_1a8e04:
    // 0x1a8e04: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x1a8e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_1a8e08:
    // 0x1a8e08: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1a8e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1a8e0c:
    // 0x1a8e0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1a8e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a8e10:
    // 0x1a8e10: 0xc046642  jal         func_119908
label_1a8e14:
    if (ctx->pc == 0x1A8E14u) {
        ctx->pc = 0x1A8E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E10u;
        // 0x1a8e14: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E18u;
        goto label_1a8e18;
    }
    ctx->pc = 0x1A8E10u;
    SET_GPR_U32(ctx, 31, 0x1A8E18u);
    ctx->pc = 0x1A8E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8E10u;
    // 0x1a8e14: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x1A8E10u, 0x1A8E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A8E18u;
label_1a8e18:
    // 0x1a8e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8e1c:
    // 0x1a8e1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a8e20:
    // 0x1a8e20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8e24:
    // 0x1a8e24: 0x3e00008  jr          $ra
label_1a8e28:
    if (ctx->pc == 0x1A8E28u) {
        ctx->pc = 0x1A8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E24u;
        // 0x1a8e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E2Cu;
        goto label_1a8e2c;
    }
    ctx->pc = 0x1A8E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E24u;
        // 0x1a8e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8E2Cu;
label_1a8e2c:
    // 0x1a8e2c: 0x0  nop
    ctx->pc = 0x1a8e2cu;
    // NOP
    ctx->pc = 0x1a8e30u;
}
