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

// Function: sub_00290D50
// Address: 0x290d50 - 0x290ef0
void sub_00290D50_0x290d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290D50_0x290d50");
#endif

    switch (ctx->pc) {
        case 0x290d50u: goto label_290d50;
        case 0x290d54u: goto label_290d54;
        case 0x290d58u: goto label_290d58;
        case 0x290d5cu: goto label_290d5c;
        case 0x290d60u: goto label_290d60;
        case 0x290d64u: goto label_290d64;
        case 0x290d68u: goto label_290d68;
        case 0x290d6cu: goto label_290d6c;
        case 0x290d70u: goto label_290d70;
        case 0x290d74u: goto label_290d74;
        case 0x290d78u: goto label_290d78;
        case 0x290d7cu: goto label_290d7c;
        case 0x290d80u: goto label_290d80;
        case 0x290d84u: goto label_290d84;
        case 0x290d88u: goto label_290d88;
        case 0x290d8cu: goto label_290d8c;
        case 0x290d90u: goto label_290d90;
        case 0x290d94u: goto label_290d94;
        case 0x290d98u: goto label_290d98;
        case 0x290d9cu: goto label_290d9c;
        case 0x290da0u: goto label_290da0;
        case 0x290da4u: goto label_290da4;
        case 0x290da8u: goto label_290da8;
        case 0x290dacu: goto label_290dac;
        case 0x290db0u: goto label_290db0;
        case 0x290db4u: goto label_290db4;
        case 0x290db8u: goto label_290db8;
        case 0x290dbcu: goto label_290dbc;
        case 0x290dc0u: goto label_290dc0;
        case 0x290dc4u: goto label_290dc4;
        case 0x290dc8u: goto label_290dc8;
        case 0x290dccu: goto label_290dcc;
        case 0x290dd0u: goto label_290dd0;
        case 0x290dd4u: goto label_290dd4;
        case 0x290dd8u: goto label_290dd8;
        case 0x290ddcu: goto label_290ddc;
        case 0x290de0u: goto label_290de0;
        case 0x290de4u: goto label_290de4;
        case 0x290de8u: goto label_290de8;
        case 0x290decu: goto label_290dec;
        case 0x290df0u: goto label_290df0;
        case 0x290df4u: goto label_290df4;
        case 0x290df8u: goto label_290df8;
        case 0x290dfcu: goto label_290dfc;
        case 0x290e00u: goto label_290e00;
        case 0x290e04u: goto label_290e04;
        case 0x290e08u: goto label_290e08;
        case 0x290e0cu: goto label_290e0c;
        case 0x290e10u: goto label_290e10;
        case 0x290e14u: goto label_290e14;
        case 0x290e18u: goto label_290e18;
        case 0x290e1cu: goto label_290e1c;
        case 0x290e20u: goto label_290e20;
        case 0x290e24u: goto label_290e24;
        case 0x290e28u: goto label_290e28;
        case 0x290e2cu: goto label_290e2c;
        case 0x290e30u: goto label_290e30;
        case 0x290e34u: goto label_290e34;
        case 0x290e38u: goto label_290e38;
        case 0x290e3cu: goto label_290e3c;
        case 0x290e40u: goto label_290e40;
        case 0x290e44u: goto label_290e44;
        case 0x290e48u: goto label_290e48;
        case 0x290e4cu: goto label_290e4c;
        case 0x290e50u: goto label_290e50;
        case 0x290e54u: goto label_290e54;
        case 0x290e58u: goto label_290e58;
        case 0x290e5cu: goto label_290e5c;
        case 0x290e60u: goto label_290e60;
        case 0x290e64u: goto label_290e64;
        case 0x290e68u: goto label_290e68;
        case 0x290e6cu: goto label_290e6c;
        case 0x290e70u: goto label_290e70;
        case 0x290e74u: goto label_290e74;
        case 0x290e78u: goto label_290e78;
        case 0x290e7cu: goto label_290e7c;
        case 0x290e80u: goto label_290e80;
        case 0x290e84u: goto label_290e84;
        case 0x290e88u: goto label_290e88;
        case 0x290e8cu: goto label_290e8c;
        case 0x290e90u: goto label_290e90;
        case 0x290e94u: goto label_290e94;
        case 0x290e98u: goto label_290e98;
        case 0x290e9cu: goto label_290e9c;
        case 0x290ea0u: goto label_290ea0;
        case 0x290ea4u: goto label_290ea4;
        case 0x290ea8u: goto label_290ea8;
        case 0x290eacu: goto label_290eac;
        case 0x290eb0u: goto label_290eb0;
        case 0x290eb4u: goto label_290eb4;
        case 0x290eb8u: goto label_290eb8;
        case 0x290ebcu: goto label_290ebc;
        case 0x290ec0u: goto label_290ec0;
        case 0x290ec4u: goto label_290ec4;
        case 0x290ec8u: goto label_290ec8;
        case 0x290eccu: goto label_290ecc;
        case 0x290ed0u: goto label_290ed0;
        case 0x290ed4u: goto label_290ed4;
        case 0x290ed8u: goto label_290ed8;
        case 0x290edcu: goto label_290edc;
        case 0x290ee0u: goto label_290ee0;
        case 0x290ee4u: goto label_290ee4;
        case 0x290ee8u: goto label_290ee8;
        case 0x290eecu: goto label_290eec;
        default: break;
    }

    ctx->pc = 0x290d50u;

label_290d50:
    // 0x290d50: 0x27bdfbb0  addiu       $sp, $sp, -0x450
    ctx->pc = 0x290d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966192));
label_290d54:
    // 0x290d54: 0xffb20410  sd          $s2, 0x410($sp)
    ctx->pc = 0x290d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1040), GPR_U64(ctx, 18));
label_290d58:
    // 0x290d58: 0xffb30418  sd          $s3, 0x418($sp)
    ctx->pc = 0x290d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1048), GPR_U64(ctx, 19));
label_290d5c:
    // 0x290d5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x290d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d60:
    // 0x290d60: 0xffb40420  sd          $s4, 0x420($sp)
    ctx->pc = 0x290d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1056), GPR_U64(ctx, 20));
label_290d64:
    // 0x290d64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x290d64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290d68:
    // 0x290d68: 0xffb50428  sd          $s5, 0x428($sp)
    ctx->pc = 0x290d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1064), GPR_U64(ctx, 21));
label_290d6c:
    // 0x290d6c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x290d6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d70:
    // 0x290d70: 0xffb60430  sd          $s6, 0x430($sp)
    ctx->pc = 0x290d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1072), GPR_U64(ctx, 22));
label_290d74:
    // 0x290d74: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x290d74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d78:
    // 0x290d78: 0xffb70438  sd          $s7, 0x438($sp)
    ctx->pc = 0x290d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1080), GPR_U64(ctx, 23));
label_290d7c:
    // 0x290d7c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x290d7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290d80:
    // 0x290d80: 0xffb00400  sd          $s0, 0x400($sp)
    ctx->pc = 0x290d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 16));
label_290d84:
    // 0x290d84: 0xffb10408  sd          $s1, 0x408($sp)
    ctx->pc = 0x290d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1032), GPR_U64(ctx, 17));
label_290d88:
    // 0x290d88: 0xffbe0440  sd          $fp, 0x440($sp)
    ctx->pc = 0x290d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1088), GPR_U64(ctx, 30));
label_290d8c:
    // 0x290d8c: 0xffbf0448  sd          $ra, 0x448($sp)
    ctx->pc = 0x290d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1096), GPR_U64(ctx, 31));
label_290d90:
    // 0x290d90: 0x8e6201d0  lw          $v0, 0x1D0($s3)
    ctx->pc = 0x290d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
label_290d94:
    // 0x290d94: 0x18400048  blez        $v0, . + 4 + (0x48 << 2)
label_290d98:
    if (ctx->pc == 0x290D98u) {
        ctx->pc = 0x290D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D94u;
        // 0x290d98: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290D9Cu;
        goto label_290d9c;
    }
    ctx->pc = 0x290D94u;
    {
        const bool branch_taken_0x290d94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x290D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290D94u;
        // 0x290d98: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290d94) {
            ctx->pc = 0x290EB8u;
            goto label_290eb8;
        }
    }
    ctx->pc = 0x290D9Cu;
label_290d9c:
    // 0x290d9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x290d9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_290da0:
    // 0x290da0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x290da0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_290da4:
    // 0x290da4: 0x0  nop
    ctx->pc = 0x290da4u;
    // NOP
label_290da8:
    // 0x290da8: 0x16a0001d  bnez        $s5, . + 4 + (0x1D << 2)
label_290dac:
    if (ctx->pc == 0x290DACu) {
        ctx->pc = 0x290DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DA8u;
        // 0x290dac: 0x171040  sll         $v0, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DB0u;
        goto label_290db0;
    }
    ctx->pc = 0x290DA8u;
    {
        const bool branch_taken_0x290da8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x290DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DA8u;
        // 0x290dac: 0x171040  sll         $v0, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290da8) {
            ctx->pc = 0x290E20u;
            goto label_290e20;
        }
    }
    ctx->pc = 0x290DB0u;
label_290db0:
    // 0x290db0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x290db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_290db4:
    // 0x290db4: 0x2431018  mult        $v0, $s2, $v1
    ctx->pc = 0x290db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_290db8:
    // 0x290db8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x290db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_290dbc:
    // 0x290dbc: 0x8c65a898  lw          $a1, -0x5768($v1)
    ctx->pc = 0x290dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944920)));
label_290dc0:
    // 0x290dc0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x290dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
label_290dc4:
    // 0x290dc4: 0x2628021  addu        $s0, $s3, $v0
    ctx->pc = 0x290dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_290dc8:
    // 0x290dc8: 0xc0efb95  jal         func_3BEE54
label_290dcc:
    if (ctx->pc == 0x290DCCu) {
        ctx->pc = 0x290DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DC8u;
        // 0x290dcc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DD0u;
        goto label_290dd0;
    }
    ctx->pc = 0x290DC8u;
    SET_GPR_U32(ctx, 31, 0x290DD0u);
    ctx->pc = 0x290DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290DC8u;
    // 0x290dcc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x290DC8u, 0x290DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290DD0u;
label_290dd0:
    // 0x290dd0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_290dd4:
    if (ctx->pc == 0x290DD4u) {
        ctx->pc = 0x290DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DD0u;
        // 0x290dd4: 0x8e630074  lw          $v1, 0x74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DD8u;
        goto label_290dd8;
    }
    ctx->pc = 0x290DD0u;
    {
        const bool branch_taken_0x290dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290dd0) {
            ctx->pc = 0x290DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290DD0u;
            // 0x290dd4: 0x8e630074  lw          $v1, 0x74($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290DF4u;
            goto label_290df4;
        }
    }
    ctx->pc = 0x290DD8u;
label_290dd8:
    // 0x290dd8: 0xae3e0008  sw          $fp, 0x8($s1)
    ctx->pc = 0x290dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 30));
label_290ddc:
    // 0x290ddc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x290ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_290de0:
    // 0x290de0: 0xae3e0004  sw          $fp, 0x4($s1)
    ctx->pc = 0x290de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 30));
label_290de4:
    // 0x290de4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x290de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_290de8:
    // 0x290de8: 0xae3e0000  sw          $fp, 0x0($s1)
    ctx->pc = 0x290de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 30));
label_290dec:
    // 0x290dec: 0x1000002e  b           . + 4 + (0x2E << 2)
label_290df0:
    if (ctx->pc == 0x290DF0u) {
        ctx->pc = 0x290DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DECu;
        // 0x290df0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290DF4u;
        goto label_290df4;
    }
    ctx->pc = 0x290DECu;
    {
        const bool branch_taken_0x290dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290DECu;
        // 0x290df0: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290dec) {
            ctx->pc = 0x290EA8u;
            goto label_290ea8;
        }
    }
    ctx->pc = 0x290DF4u;
label_290df4:
    // 0x290df4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x290df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290df8:
    // 0x290df8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_290dfc:
    // 0x290dfc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x290dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_290e00:
    // 0x290e00: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x290e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_290e04:
    // 0x290e04: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x290e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_290e08:
    // 0x290e08: 0x40f809  jalr        $v0
label_290e0c:
    if (ctx->pc == 0x290E0Cu) {
        ctx->pc = 0x290E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E08u;
        // 0x290e0c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E10u;
        goto label_290e10;
    }
    ctx->pc = 0x290E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x290E10u);
        ctx->pc = 0x290E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E08u;
        // 0x290e0c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290E08u, 0x290E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x290E10u;
label_290e10:
    // 0x290e10: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x290e10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_290e14:
    // 0x290e14: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x290e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_290e18:
    // 0x290e18: 0x10000023  b           . + 4 + (0x23 << 2)
label_290e1c:
    if (ctx->pc == 0x290E1Cu) {
        ctx->pc = 0x290E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E18u;
        // 0x290e1c: 0x55900a  movz        $s2, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E20u;
        goto label_290e20;
    }
    ctx->pc = 0x290E18u;
    {
        const bool branch_taken_0x290e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E18u;
        // 0x290e1c: 0x55900a  movz        $s2, $v0, $s5 (Delay Slot)
        if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e18) {
            ctx->pc = 0x290EA8u;
            goto label_290ea8;
        }
    }
    ctx->pc = 0x290E20u;
label_290e20:
    // 0x290e20: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x290e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_290e24:
    // 0x290e24: 0x16c0000c  bnez        $s6, . + 4 + (0xC << 2)
label_290e28:
    if (ctx->pc == 0x290E28u) {
        ctx->pc = 0x290E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E24u;
        // 0x290e28: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E2Cu;
        goto label_290e2c;
    }
    ctx->pc = 0x290E24u;
    {
        const bool branch_taken_0x290e24 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x290E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E24u;
        // 0x290e28: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e24) {
            ctx->pc = 0x290E58u;
            goto label_290e58;
        }
    }
    ctx->pc = 0x290E2Cu;
label_290e2c:
    // 0x290e2c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x290e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_290e30:
    // 0x290e30: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_290e34:
    if (ctx->pc == 0x290E34u) {
        ctx->pc = 0x290E38u;
        goto label_290e38;
    }
    ctx->pc = 0x290E30u;
    {
        const bool branch_taken_0x290e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x290e30) {
            ctx->pc = 0x290E50u;
            goto label_290e50;
        }
    }
    ctx->pc = 0x290E38u;
label_290e38:
    // 0x290e38: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_290e3c:
    if (ctx->pc == 0x290E3Cu) {
        ctx->pc = 0x290E40u;
        goto label_290e40;
    }
    ctx->pc = 0x290E38u;
    {
        const bool branch_taken_0x290e38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e38) {
            ctx->pc = 0x290E50u;
            goto label_290e50;
        }
    }
    ctx->pc = 0x290E40u;
label_290e40:
    // 0x290e40: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x290e40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_290e44:
    // 0x290e44: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x290e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_290e48:
    // 0x290e48: 0x10000013  b           . + 4 + (0x13 << 2)
label_290e4c:
    if (ctx->pc == 0x290E4Cu) {
        ctx->pc = 0x290E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E48u;
        // 0x290e4c: 0xae370004  sw          $s7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E50u;
        goto label_290e50;
    }
    ctx->pc = 0x290E48u;
    {
        const bool branch_taken_0x290e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E48u;
        // 0x290e4c: 0xae370004  sw          $s7, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e48) {
            ctx->pc = 0x290E98u;
            goto label_290e98;
        }
    }
    ctx->pc = 0x290E50u;
label_290e50:
    // 0x290e50: 0x12c00011  beqz        $s6, . + 4 + (0x11 << 2)
label_290e54:
    if (ctx->pc == 0x290E54u) {
        ctx->pc = 0x290E58u;
        goto label_290e58;
    }
    ctx->pc = 0x290E50u;
    {
        const bool branch_taken_0x290e50 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x290e50) {
            ctx->pc = 0x290E98u;
            goto label_290e98;
        }
    }
    ctx->pc = 0x290E58u;
label_290e58:
    // 0x290e58: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x290e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_290e5c:
    // 0x290e5c: 0x52030004  beql        $s0, $v1, . + 4 + (0x4 << 2)
label_290e60:
    if (ctx->pc == 0x290E60u) {
        ctx->pc = 0x290E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E5Cu;
        // 0x290e60: 0xae370008  sw          $s7, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E64u;
        goto label_290e64;
    }
    ctx->pc = 0x290E5Cu;
    {
        const bool branch_taken_0x290e5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x290e5c) {
            ctx->pc = 0x290E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E5Cu;
            // 0x290e60: 0xae370008  sw          $s7, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290E70u;
            goto label_290e70;
        }
    }
    ctx->pc = 0x290E64u;
label_290e64:
    // 0x290e64: 0x56000010  bnel        $s0, $zero, . + 4 + (0x10 << 2)
label_290e68:
    if (ctx->pc == 0x290E68u) {
        ctx->pc = 0x290E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E64u;
        // 0x290e68: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E6Cu;
        goto label_290e6c;
    }
    ctx->pc = 0x290E64u;
    {
        const bool branch_taken_0x290e64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x290e64) {
            ctx->pc = 0x290E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290E64u;
            // 0x290e68: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290EA8u;
            goto label_290ea8;
        }
    }
    ctx->pc = 0x290E6Cu;
label_290e6c:
    // 0x290e6c: 0xae370008  sw          $s7, 0x8($s1)
    ctx->pc = 0x290e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 23));
label_290e70:
    // 0x290e70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x290e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_290e74:
    // 0x290e74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x290e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_290e78:
    // 0x290e78: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x290e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_290e7c:
    // 0x290e7c: 0xc66c0020  lwc1        $f12, 0x20($s3)
    ctx->pc = 0x290e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_290e80:
    // 0x290e80: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x290e80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290e84:
    // 0x290e84: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x290e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_290e88:
    // 0x290e88: 0xc09f624  jal         func_27D890
label_290e8c:
    if (ctx->pc == 0x290E8Cu) {
        ctx->pc = 0x290E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E88u;
        // 0x290e8c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290E90u;
        goto label_290e90;
    }
    ctx->pc = 0x290E88u;
    SET_GPR_U32(ctx, 31, 0x290E90u);
    ctx->pc = 0x290E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290E88u;
    // 0x290e8c: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D890u, 0x290E88u, 0x290E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290E90u;
label_290e90:
    // 0x290e90: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x290e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_290e94:
    // 0x290e94: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x290e94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_290e98:
    // 0x290e98: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_290e9c:
    if (ctx->pc == 0x290E9Cu) {
        ctx->pc = 0x290E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E98u;
        // 0x290e9c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290EA0u;
        goto label_290ea0;
    }
    ctx->pc = 0x290E98u;
    {
        const bool branch_taken_0x290e98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x290E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290E98u;
        // 0x290e9c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290e98) {
            ctx->pc = 0x290EA8u;
            goto label_290ea8;
        }
    }
    ctx->pc = 0x290EA0u;
label_290ea0:
    // 0x290ea0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x290ea0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290ea4:
    // 0x290ea4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x290ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_290ea8:
    // 0x290ea8: 0x8e6201d0  lw          $v0, 0x1D0($s3)
    ctx->pc = 0x290ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 464)));
label_290eac:
    // 0x290eac: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x290eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_290eb0:
    // 0x290eb0: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_290eb4:
    if (ctx->pc == 0x290EB4u) {
        ctx->pc = 0x290EB8u;
        goto label_290eb8;
    }
    ctx->pc = 0x290EB0u;
    {
        const bool branch_taken_0x290eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290eb0) {
            ctx->pc = 0x290DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290da8;
        }
    }
    ctx->pc = 0x290EB8u;
label_290eb8:
    // 0x290eb8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x290eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_290ebc:
    // 0x290ebc: 0xdfb00400  ld          $s0, 0x400($sp)
    ctx->pc = 0x290ebcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
label_290ec0:
    // 0x290ec0: 0xdfb10408  ld          $s1, 0x408($sp)
    ctx->pc = 0x290ec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1032)));
label_290ec4:
    // 0x290ec4: 0xdfb20410  ld          $s2, 0x410($sp)
    ctx->pc = 0x290ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1040)));
label_290ec8:
    // 0x290ec8: 0xdfb30418  ld          $s3, 0x418($sp)
    ctx->pc = 0x290ec8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1048)));
label_290ecc:
    // 0x290ecc: 0xdfb40420  ld          $s4, 0x420($sp)
    ctx->pc = 0x290eccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1056)));
label_290ed0:
    // 0x290ed0: 0xdfb50428  ld          $s5, 0x428($sp)
    ctx->pc = 0x290ed0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1064)));
label_290ed4:
    // 0x290ed4: 0xdfb60430  ld          $s6, 0x430($sp)
    ctx->pc = 0x290ed4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1072)));
label_290ed8:
    // 0x290ed8: 0xdfb70438  ld          $s7, 0x438($sp)
    ctx->pc = 0x290ed8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1080)));
label_290edc:
    // 0x290edc: 0xdfbe0440  ld          $fp, 0x440($sp)
    ctx->pc = 0x290edcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1088)));
label_290ee0:
    // 0x290ee0: 0xdfbf0448  ld          $ra, 0x448($sp)
    ctx->pc = 0x290ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1096)));
label_290ee4:
    // 0x290ee4: 0x3e00008  jr          $ra
label_290ee8:
    if (ctx->pc == 0x290EE8u) {
        ctx->pc = 0x290EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EE4u;
        // 0x290ee8: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290EECu;
        goto label_290eec;
    }
    ctx->pc = 0x290EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290EE4u;
        // 0x290ee8: 0x27bd0450  addiu       $sp, $sp, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290EECu;
label_290eec:
    // 0x290eec: 0x0  nop
    ctx->pc = 0x290eecu;
    // NOP
    ctx->pc = 0x290ef0u;
}
