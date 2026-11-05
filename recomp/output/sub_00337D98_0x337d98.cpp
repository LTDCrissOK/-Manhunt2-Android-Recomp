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

// Function: sub_00337D98
// Address: 0x337d98 - 0x337f70
void sub_00337D98_0x337d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337D98_0x337d98");
#endif

    switch (ctx->pc) {
        case 0x337d98u: goto label_337d98;
        case 0x337d9cu: goto label_337d9c;
        case 0x337da0u: goto label_337da0;
        case 0x337da4u: goto label_337da4;
        case 0x337da8u: goto label_337da8;
        case 0x337dacu: goto label_337dac;
        case 0x337db0u: goto label_337db0;
        case 0x337db4u: goto label_337db4;
        case 0x337db8u: goto label_337db8;
        case 0x337dbcu: goto label_337dbc;
        case 0x337dc0u: goto label_337dc0;
        case 0x337dc4u: goto label_337dc4;
        case 0x337dc8u: goto label_337dc8;
        case 0x337dccu: goto label_337dcc;
        case 0x337dd0u: goto label_337dd0;
        case 0x337dd4u: goto label_337dd4;
        case 0x337dd8u: goto label_337dd8;
        case 0x337ddcu: goto label_337ddc;
        case 0x337de0u: goto label_337de0;
        case 0x337de4u: goto label_337de4;
        case 0x337de8u: goto label_337de8;
        case 0x337decu: goto label_337dec;
        case 0x337df0u: goto label_337df0;
        case 0x337df4u: goto label_337df4;
        case 0x337df8u: goto label_337df8;
        case 0x337dfcu: goto label_337dfc;
        case 0x337e00u: goto label_337e00;
        case 0x337e04u: goto label_337e04;
        case 0x337e08u: goto label_337e08;
        case 0x337e0cu: goto label_337e0c;
        case 0x337e10u: goto label_337e10;
        case 0x337e14u: goto label_337e14;
        case 0x337e18u: goto label_337e18;
        case 0x337e1cu: goto label_337e1c;
        case 0x337e20u: goto label_337e20;
        case 0x337e24u: goto label_337e24;
        case 0x337e28u: goto label_337e28;
        case 0x337e2cu: goto label_337e2c;
        case 0x337e30u: goto label_337e30;
        case 0x337e34u: goto label_337e34;
        case 0x337e38u: goto label_337e38;
        case 0x337e3cu: goto label_337e3c;
        case 0x337e40u: goto label_337e40;
        case 0x337e44u: goto label_337e44;
        case 0x337e48u: goto label_337e48;
        case 0x337e4cu: goto label_337e4c;
        case 0x337e50u: goto label_337e50;
        case 0x337e54u: goto label_337e54;
        case 0x337e58u: goto label_337e58;
        case 0x337e5cu: goto label_337e5c;
        case 0x337e60u: goto label_337e60;
        case 0x337e64u: goto label_337e64;
        case 0x337e68u: goto label_337e68;
        case 0x337e6cu: goto label_337e6c;
        case 0x337e70u: goto label_337e70;
        case 0x337e74u: goto label_337e74;
        case 0x337e78u: goto label_337e78;
        case 0x337e7cu: goto label_337e7c;
        case 0x337e80u: goto label_337e80;
        case 0x337e84u: goto label_337e84;
        case 0x337e88u: goto label_337e88;
        case 0x337e8cu: goto label_337e8c;
        case 0x337e90u: goto label_337e90;
        case 0x337e94u: goto label_337e94;
        case 0x337e98u: goto label_337e98;
        case 0x337e9cu: goto label_337e9c;
        case 0x337ea0u: goto label_337ea0;
        case 0x337ea4u: goto label_337ea4;
        case 0x337ea8u: goto label_337ea8;
        case 0x337eacu: goto label_337eac;
        case 0x337eb0u: goto label_337eb0;
        case 0x337eb4u: goto label_337eb4;
        case 0x337eb8u: goto label_337eb8;
        case 0x337ebcu: goto label_337ebc;
        case 0x337ec0u: goto label_337ec0;
        case 0x337ec4u: goto label_337ec4;
        case 0x337ec8u: goto label_337ec8;
        case 0x337eccu: goto label_337ecc;
        case 0x337ed0u: goto label_337ed0;
        case 0x337ed4u: goto label_337ed4;
        case 0x337ed8u: goto label_337ed8;
        case 0x337edcu: goto label_337edc;
        case 0x337ee0u: goto label_337ee0;
        case 0x337ee4u: goto label_337ee4;
        case 0x337ee8u: goto label_337ee8;
        case 0x337eecu: goto label_337eec;
        case 0x337ef0u: goto label_337ef0;
        case 0x337ef4u: goto label_337ef4;
        case 0x337ef8u: goto label_337ef8;
        case 0x337efcu: goto label_337efc;
        case 0x337f00u: goto label_337f00;
        case 0x337f04u: goto label_337f04;
        case 0x337f08u: goto label_337f08;
        case 0x337f0cu: goto label_337f0c;
        case 0x337f10u: goto label_337f10;
        case 0x337f14u: goto label_337f14;
        case 0x337f18u: goto label_337f18;
        case 0x337f1cu: goto label_337f1c;
        case 0x337f20u: goto label_337f20;
        case 0x337f24u: goto label_337f24;
        case 0x337f28u: goto label_337f28;
        case 0x337f2cu: goto label_337f2c;
        case 0x337f30u: goto label_337f30;
        case 0x337f34u: goto label_337f34;
        case 0x337f38u: goto label_337f38;
        case 0x337f3cu: goto label_337f3c;
        case 0x337f40u: goto label_337f40;
        case 0x337f44u: goto label_337f44;
        case 0x337f48u: goto label_337f48;
        case 0x337f4cu: goto label_337f4c;
        case 0x337f50u: goto label_337f50;
        case 0x337f54u: goto label_337f54;
        case 0x337f58u: goto label_337f58;
        case 0x337f5cu: goto label_337f5c;
        case 0x337f60u: goto label_337f60;
        case 0x337f64u: goto label_337f64;
        case 0x337f68u: goto label_337f68;
        case 0x337f6cu: goto label_337f6c;
        default: break;
    }

    ctx->pc = 0x337d98u;

label_337d98:
    // 0x337d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_337d9c:
    // 0x337d9c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x337d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_337da0:
    // 0x337da0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x337da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_337da4:
    // 0x337da4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x337da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_337da8:
    // 0x337da8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x337da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_337dac:
    // 0x337dac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x337dacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_337db0:
    // 0x337db0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_337db4:
    // 0x337db4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x337db4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_337db8:
    // 0x337db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_337dbc:
    // 0x337dbc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x337dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_337dc0:
    // 0x337dc0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_337dc4:
    // 0x337dc4: 0xc083976  jal         func_20E5D8
label_337dc8:
    if (ctx->pc == 0x337DC8u) {
        ctx->pc = 0x337DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DC4u;
        // 0x337dc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337DCCu;
        goto label_337dcc;
    }
    ctx->pc = 0x337DC4u;
    SET_GPR_U32(ctx, 31, 0x337DCCu);
    ctx->pc = 0x337DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337DC4u;
    // 0x337dc8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E5D8u, 0x337DC4u, 0x337DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DCCu;
label_337dcc:
    // 0x337dcc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x337dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_337dd0:
    // 0x337dd0: 0x24433500  addiu       $v1, $v0, 0x3500
    ctx->pc = 0x337dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
label_337dd4:
    // 0x337dd4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x337dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_337dd8:
    // 0x337dd8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_337ddc:
    if (ctx->pc == 0x337DDCu) {
        ctx->pc = 0x337DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DD8u;
        // 0x337ddc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337DE0u;
        goto label_337de0;
    }
    ctx->pc = 0x337DD8u;
    {
        const bool branch_taken_0x337dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337dd8) {
            ctx->pc = 0x337DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337DD8u;
            // 0x337ddc: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337DE0u;
            goto label_337de0;
        }
    }
    ctx->pc = 0x337DE0u;
label_337de0:
    // 0x337de0: 0x5632000f  bnel        $s1, $s2, . + 4 + (0xF << 2)
label_337de4:
    if (ctx->pc == 0x337DE4u) {
        ctx->pc = 0x337DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DE0u;
        // 0x337de4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337DE8u;
        goto label_337de8;
    }
    ctx->pc = 0x337DE0u;
    {
        const bool branch_taken_0x337de0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x337de0) {
            ctx->pc = 0x337DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337DE0u;
            // 0x337de4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337E20u;
            goto label_337e20;
        }
    }
    ctx->pc = 0x337DE8u;
label_337de8:
    // 0x337de8: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
label_337dec:
    if (ctx->pc == 0x337DECu) {
        ctx->pc = 0x337DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DE8u;
        // 0x337dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337DF0u;
        goto label_337df0;
    }
    ctx->pc = 0x337DE8u;
    {
        const bool branch_taken_0x337de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x337DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DE8u;
        // 0x337dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337de8) {
            ctx->pc = 0x337EC4u;
            goto label_337ec4;
        }
    }
    ctx->pc = 0x337DF0u;
label_337df0:
    // 0x337df0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x337df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_337df4:
    // 0x337df4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x337df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_337df8:
    // 0x337df8: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x337df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_337dfc:
    // 0x337dfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_337e00:
    if (ctx->pc == 0x337E00u) {
        ctx->pc = 0x337E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DFCu;
        // 0x337e00: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E04u;
        goto label_337e04;
    }
    ctx->pc = 0x337DFCu;
    {
        const bool branch_taken_0x337dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DFCu;
        // 0x337e00: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337dfc) {
            ctx->pc = 0x337E10u;
            goto label_337e10;
        }
    }
    ctx->pc = 0x337E04u;
label_337e04:
    // 0x337e04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x337e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_337e08:
    // 0x337e08: 0xc0484c0  jal         func_121300
label_337e0c:
    if (ctx->pc == 0x337E0Cu) {
        ctx->pc = 0x337E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E08u;
        // 0x337e0c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E10u;
        goto label_337e10;
    }
    ctx->pc = 0x337E08u;
    SET_GPR_U32(ctx, 31, 0x337E10u);
    ctx->pc = 0x337E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337E08u;
    // 0x337e0c: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121300u, 0x337E08u, 0x337E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337E10u;
label_337e10:
    // 0x337e10: 0xc0837b4  jal         func_20DED0
label_337e14:
    if (ctx->pc == 0x337E14u) {
        ctx->pc = 0x337E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E10u;
        // 0x337e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E18u;
        goto label_337e18;
    }
    ctx->pc = 0x337E10u;
    SET_GPR_U32(ctx, 31, 0x337E18u);
    ctx->pc = 0x337E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337E10u;
    // 0x337e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x337E10u, 0x337E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337E18u;
label_337e18:
    // 0x337e18: 0x1000004e  b           . + 4 + (0x4E << 2)
label_337e1c:
    if (ctx->pc == 0x337E1Cu) {
        ctx->pc = 0x337E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E18u;
        // 0x337e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E20u;
        goto label_337e20;
    }
    ctx->pc = 0x337E18u;
    {
        const bool branch_taken_0x337e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E18u;
        // 0x337e1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e18) {
            ctx->pc = 0x337F54u;
            goto label_337f54;
        }
    }
    ctx->pc = 0x337E20u;
label_337e20:
    // 0x337e20: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x337e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_337e24:
    // 0x337e24: 0x10000015  b           . + 4 + (0x15 << 2)
label_337e28:
    if (ctx->pc == 0x337E28u) {
        ctx->pc = 0x337E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E24u;
        // 0x337e28: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E2Cu;
        goto label_337e2c;
    }
    ctx->pc = 0x337E24u;
    {
        const bool branch_taken_0x337e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E24u;
        // 0x337e28: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e24) {
            ctx->pc = 0x337E7Cu;
            goto label_337e7c;
        }
    }
    ctx->pc = 0x337E2Cu;
label_337e2c:
    // 0x337e2c: 0x0  nop
    ctx->pc = 0x337e2cu;
    // NOP
label_337e30:
    // 0x337e30: 0x56120013  bnel        $s0, $s2, . + 4 + (0x13 << 2)
label_337e34:
    if (ctx->pc == 0x337E34u) {
        ctx->pc = 0x337E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E30u;
        // 0x337e34: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E38u;
        goto label_337e38;
    }
    ctx->pc = 0x337E30u;
    {
        const bool branch_taken_0x337e30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x337e30) {
            ctx->pc = 0x337E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337E30u;
            // 0x337e34: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337E80u;
            goto label_337e80;
        }
    }
    ctx->pc = 0x337E38u;
label_337e38:
    // 0x337e38: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_337e3c:
    if (ctx->pc == 0x337E3Cu) {
        ctx->pc = 0x337E40u;
        goto label_337e40;
    }
    ctx->pc = 0x337E38u;
    {
        const bool branch_taken_0x337e38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x337e38) {
            ctx->pc = 0x337E48u;
            goto label_337e48;
        }
    }
    ctx->pc = 0x337E40u;
label_337e40:
    // 0x337e40: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x337e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_337e44:
    // 0x337e44: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x337e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_337e48:
    // 0x337e48: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
label_337e4c:
    if (ctx->pc == 0x337E4Cu) {
        ctx->pc = 0x337E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E48u;
        // 0x337e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E50u;
        goto label_337e50;
    }
    ctx->pc = 0x337E48u;
    {
        const bool branch_taken_0x337e48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E48u;
        // 0x337e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e48) {
            ctx->pc = 0x337EC4u;
            goto label_337ec4;
        }
    }
    ctx->pc = 0x337E50u;
label_337e50:
    // 0x337e50: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x337e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_337e54:
    // 0x337e54: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x337e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_337e58:
    // 0x337e58: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x337e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_337e5c:
    // 0x337e5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_337e60:
    if (ctx->pc == 0x337E60u) {
        ctx->pc = 0x337E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E5Cu;
        // 0x337e60: 0x24a4a080  addiu       $a0, $a1, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E64u;
        goto label_337e64;
    }
    ctx->pc = 0x337E5Cu;
    {
        const bool branch_taken_0x337e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E5Cu;
        // 0x337e60: 0x24a4a080  addiu       $a0, $a1, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e5c) {
            ctx->pc = 0x337E6Cu;
            goto label_337e6c;
        }
    }
    ctx->pc = 0x337E64u;
label_337e64:
    // 0x337e64: 0xc0484c0  jal         func_121300
label_337e68:
    if (ctx->pc == 0x337E68u) {
        ctx->pc = 0x337E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E64u;
        // 0x337e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E6Cu;
        goto label_337e6c;
    }
    ctx->pc = 0x337E64u;
    SET_GPR_U32(ctx, 31, 0x337E6Cu);
    ctx->pc = 0x337E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337E64u;
    // 0x337e68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121300u, 0x337E64u, 0x337E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337E6Cu;
label_337e6c:
    // 0x337e6c: 0xc0837b4  jal         func_20DED0
label_337e70:
    if (ctx->pc == 0x337E70u) {
        ctx->pc = 0x337E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E6Cu;
        // 0x337e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E74u;
        goto label_337e74;
    }
    ctx->pc = 0x337E6Cu;
    SET_GPR_U32(ctx, 31, 0x337E74u);
    ctx->pc = 0x337E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337E6Cu;
    // 0x337e70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x337E6Cu, 0x337E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337E74u;
label_337e74:
    // 0x337e74: 0x10000037  b           . + 4 + (0x37 << 2)
label_337e78:
    if (ctx->pc == 0x337E78u) {
        ctx->pc = 0x337E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E74u;
        // 0x337e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E7Cu;
        goto label_337e7c;
    }
    ctx->pc = 0x337E74u;
    {
        const bool branch_taken_0x337e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E74u;
        // 0x337e78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e74) {
            ctx->pc = 0x337F54u;
            goto label_337f54;
        }
    }
    ctx->pc = 0x337E7Cu;
label_337e7c:
    // 0x337e7c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x337e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_337e80:
    // 0x337e80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_337e84:
    if (ctx->pc == 0x337E84u) {
        ctx->pc = 0x337E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E80u;
        // 0x337e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E88u;
        goto label_337e88;
    }
    ctx->pc = 0x337E80u;
    {
        const bool branch_taken_0x337e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E80u;
        // 0x337e84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e80) {
            ctx->pc = 0x337E8Cu;
            goto label_337e8c;
        }
    }
    ctx->pc = 0x337E88u;
label_337e88:
    // 0x337e88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x337e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_337e8c:
    // 0x337e8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_337e90:
    if (ctx->pc == 0x337E90u) {
        ctx->pc = 0x337E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E8Cu;
        // 0x337e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337E94u;
        goto label_337e94;
    }
    ctx->pc = 0x337E8Cu;
    {
        const bool branch_taken_0x337e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E8Cu;
        // 0x337e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e8c) {
            ctx->pc = 0x337E9Cu;
            goto label_337e9c;
        }
    }
    ctx->pc = 0x337E94u;
label_337e94:
    // 0x337e94: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x337e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_337e98:
    // 0x337e98: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x337e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_337e9c:
    // 0x337e9c: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_337ea0:
    if (ctx->pc == 0x337EA0u) {
        ctx->pc = 0x337EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E9Cu;
        // 0x337ea0: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EA4u;
        goto label_337ea4;
    }
    ctx->pc = 0x337E9Cu;
    {
        const bool branch_taken_0x337e9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x337EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E9Cu;
        // 0x337ea0: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e9c) {
            ctx->pc = 0x337E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337e30;
        }
    }
    ctx->pc = 0x337EA4u;
label_337ea4:
    // 0x337ea4: 0x24433510  addiu       $v1, $v0, 0x3510
    ctx->pc = 0x337ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
label_337ea8:
    // 0x337ea8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x337ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_337eac:
    // 0x337eac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_337eb0:
    if (ctx->pc == 0x337EB0u) {
        ctx->pc = 0x337EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EACu;
        // 0x337eb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EB4u;
        goto label_337eb4;
    }
    ctx->pc = 0x337EACu;
    {
        const bool branch_taken_0x337eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EACu;
        // 0x337eb0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337eac) {
            ctx->pc = 0x337EB8u;
            goto label_337eb8;
        }
    }
    ctx->pc = 0x337EB4u;
label_337eb4:
    // 0x337eb4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x337eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_337eb8:
    // 0x337eb8: 0x56320006  bnel        $s1, $s2, . + 4 + (0x6 << 2)
label_337ebc:
    if (ctx->pc == 0x337EBCu) {
        ctx->pc = 0x337EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EB8u;
        // 0x337ebc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EC0u;
        goto label_337ec0;
    }
    ctx->pc = 0x337EB8u;
    {
        const bool branch_taken_0x337eb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x337eb8) {
            ctx->pc = 0x337EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337EB8u;
            // 0x337ebc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337ED4u;
            goto label_337ed4;
        }
    }
    ctx->pc = 0x337EC0u;
label_337ec0:
    // 0x337ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x337ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_337ec4:
    // 0x337ec4: 0xc095412  jal         func_255048
label_337ec8:
    if (ctx->pc == 0x337EC8u) {
        ctx->pc = 0x337ECCu;
        goto label_337ecc;
    }
    ctx->pc = 0x337EC4u;
    SET_GPR_U32(ctx, 31, 0x337ECCu);
    ctx->pc = 0x255048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255048u, 0x337EC4u, 0x337ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337ECCu;
label_337ecc:
    // 0x337ecc: 0x10000021  b           . + 4 + (0x21 << 2)
label_337ed0:
    if (ctx->pc == 0x337ED0u) {
        ctx->pc = 0x337ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337ECCu;
        // 0x337ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337ED4u;
        goto label_337ed4;
    }
    ctx->pc = 0x337ECCu;
    {
        const bool branch_taken_0x337ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337ECCu;
        // 0x337ed0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ecc) {
            ctx->pc = 0x337F54u;
            goto label_337f54;
        }
    }
    ctx->pc = 0x337ED4u;
label_337ed4:
    // 0x337ed4: 0x10000015  b           . + 4 + (0x15 << 2)
label_337ed8:
    if (ctx->pc == 0x337ED8u) {
        ctx->pc = 0x337ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337ED4u;
        // 0x337ed8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EDCu;
        goto label_337edc;
    }
    ctx->pc = 0x337ED4u;
    {
        const bool branch_taken_0x337ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337ED4u;
        // 0x337ed8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ed4) {
            ctx->pc = 0x337F2Cu;
            goto label_337f2c;
        }
    }
    ctx->pc = 0x337EDCu;
label_337edc:
    // 0x337edc: 0x0  nop
    ctx->pc = 0x337edcu;
    // NOP
label_337ee0:
    // 0x337ee0: 0x56120013  bnel        $s0, $s2, . + 4 + (0x13 << 2)
label_337ee4:
    if (ctx->pc == 0x337EE4u) {
        ctx->pc = 0x337EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EE0u;
        // 0x337ee4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EE8u;
        goto label_337ee8;
    }
    ctx->pc = 0x337EE0u;
    {
        const bool branch_taken_0x337ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x337ee0) {
            ctx->pc = 0x337EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337EE0u;
            // 0x337ee4: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337F30u;
            goto label_337f30;
        }
    }
    ctx->pc = 0x337EE8u;
label_337ee8:
    // 0x337ee8: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_337eec:
    if (ctx->pc == 0x337EECu) {
        ctx->pc = 0x337EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EE8u;
        // 0x337eec: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337EF0u;
        goto label_337ef0;
    }
    ctx->pc = 0x337EE8u;
    {
        const bool branch_taken_0x337ee8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ee8) {
            ctx->pc = 0x337EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337EE8u;
            // 0x337eec: 0x8e0200bc  lw          $v0, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337EFCu;
            goto label_337efc;
        }
    }
    ctx->pc = 0x337EF0u;
label_337ef0:
    // 0x337ef0: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x337ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_337ef4:
    // 0x337ef4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x337ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_337ef8:
    // 0x337ef8: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x337ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_337efc:
    // 0x337efc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x337efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_337f00:
    // 0x337f00: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x337f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_337f04:
    // 0x337f04: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_337f08:
    if (ctx->pc == 0x337F08u) {
        ctx->pc = 0x337F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F04u;
        // 0x337f08: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F0Cu;
        goto label_337f0c;
    }
    ctx->pc = 0x337F04u;
    {
        const bool branch_taken_0x337f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x337f04) {
            ctx->pc = 0x337F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337F04u;
            // 0x337f08: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337F14u;
            goto label_337f14;
        }
    }
    ctx->pc = 0x337F0Cu;
label_337f0c:
    // 0x337f0c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_337f10:
    if (ctx->pc == 0x337F10u) {
        ctx->pc = 0x337F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F0Cu;
        // 0x337f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F14u;
        goto label_337f14;
    }
    ctx->pc = 0x337F0Cu;
    {
        const bool branch_taken_0x337f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F0Cu;
        // 0x337f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f0c) {
            ctx->pc = 0x337EC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337ec4;
        }
    }
    ctx->pc = 0x337F14u;
label_337f14:
    // 0x337f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337f18:
    // 0x337f18: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x337f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_337f1c:
    // 0x337f1c: 0x40f809  jalr        $v0
label_337f20:
    if (ctx->pc == 0x337F20u) {
        ctx->pc = 0x337F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F1Cu;
        // 0x337f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F24u;
        goto label_337f24;
    }
    ctx->pc = 0x337F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x337F24u);
        ctx->pc = 0x337F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F1Cu;
        // 0x337f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337F1Cu, 0x337F24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x337F24u;
label_337f24:
    // 0x337f24: 0x1000000b  b           . + 4 + (0xB << 2)
label_337f28:
    if (ctx->pc == 0x337F28u) {
        ctx->pc = 0x337F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F24u;
        // 0x337f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F2Cu;
        goto label_337f2c;
    }
    ctx->pc = 0x337F24u;
    {
        const bool branch_taken_0x337f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F24u;
        // 0x337f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f24) {
            ctx->pc = 0x337F54u;
            goto label_337f54;
        }
    }
    ctx->pc = 0x337F2Cu;
label_337f2c:
    // 0x337f2c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x337f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_337f30:
    // 0x337f30: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_337f34:
    if (ctx->pc == 0x337F34u) {
        ctx->pc = 0x337F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F30u;
        // 0x337f34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F38u;
        goto label_337f38;
    }
    ctx->pc = 0x337F30u;
    {
        const bool branch_taken_0x337f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F30u;
        // 0x337f34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f30) {
            ctx->pc = 0x337F3Cu;
            goto label_337f3c;
        }
    }
    ctx->pc = 0x337F38u;
label_337f38:
    // 0x337f38: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x337f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_337f3c:
    // 0x337f3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_337f40:
    if (ctx->pc == 0x337F40u) {
        ctx->pc = 0x337F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F3Cu;
        // 0x337f40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F44u;
        goto label_337f44;
    }
    ctx->pc = 0x337F3Cu;
    {
        const bool branch_taken_0x337f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F3Cu;
        // 0x337f40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f3c) {
            ctx->pc = 0x337F4Cu;
            goto label_337f4c;
        }
    }
    ctx->pc = 0x337F44u;
label_337f44:
    // 0x337f44: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x337f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_337f48:
    // 0x337f48: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x337f48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_337f4c:
    // 0x337f4c: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_337f50:
    if (ctx->pc == 0x337F50u) {
        ctx->pc = 0x337F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F4Cu;
        // 0x337f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F54u;
        goto label_337f54;
    }
    ctx->pc = 0x337F4Cu;
    {
        const bool branch_taken_0x337f4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x337F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F4Cu;
        // 0x337f50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f4c) {
            ctx->pc = 0x337EE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337ee0;
        }
    }
    ctx->pc = 0x337F54u;
label_337f54:
    // 0x337f54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337f54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337f58:
    // 0x337f58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337f58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_337f5c:
    // 0x337f5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x337f5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_337f60:
    // 0x337f60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x337f60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_337f64:
    // 0x337f64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_337f68:
    // 0x337f68: 0x3e00008  jr          $ra
label_337f6c:
    if (ctx->pc == 0x337F6Cu) {
        ctx->pc = 0x337F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F68u;
        // 0x337f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x337F70u;
        goto label_fallthrough_0x337f68;
    }
    ctx->pc = 0x337F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F68u;
        // 0x337f6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x337f68:
    ctx->pc = 0x337F70u;
}
