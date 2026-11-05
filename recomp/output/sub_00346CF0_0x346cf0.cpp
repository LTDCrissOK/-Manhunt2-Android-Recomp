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

// Function: sub_00346CF0
// Address: 0x346cf0 - 0x3474a0
void sub_00346CF0_0x346cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346CF0_0x346cf0");
#endif

    switch (ctx->pc) {
        case 0x346d24u: goto label_346d24;
        case 0x346d38u: goto label_346d38;
        case 0x346d50u: goto label_346d50;
        case 0x346d64u: goto label_346d64;
        case 0x346d7cu: goto label_346d7c;
        case 0x346d90u: goto label_346d90;
        case 0x346da8u: goto label_346da8;
        case 0x346dbcu: goto label_346dbc;
        case 0x346dd4u: goto label_346dd4;
        case 0x346de8u: goto label_346de8;
        case 0x346e00u: goto label_346e00;
        case 0x346e14u: goto label_346e14;
        case 0x346e2cu: goto label_346e2c;
        case 0x346e40u: goto label_346e40;
        case 0x346e58u: goto label_346e58;
        case 0x346e6cu: goto label_346e6c;
        case 0x346e84u: goto label_346e84;
        case 0x346e98u: goto label_346e98;
        case 0x346eb0u: goto label_346eb0;
        case 0x346eccu: goto label_346ecc;
        case 0x346ee4u: goto label_346ee4;
        case 0x346f00u: goto label_346f00;
        case 0x346f18u: goto label_346f18;
        case 0x346f34u: goto label_346f34;
        case 0x346f4cu: goto label_346f4c;
        case 0x346f60u: goto label_346f60;
        case 0x346f78u: goto label_346f78;
        case 0x346f94u: goto label_346f94;
        case 0x346facu: goto label_346fac;
        case 0x346fc8u: goto label_346fc8;
        case 0x346fe0u: goto label_346fe0;
        case 0x347000u: goto label_347000;
        case 0x347018u: goto label_347018;
        case 0x347038u: goto label_347038;
        case 0x347050u: goto label_347050;
        case 0x347064u: goto label_347064;
        case 0x34707cu: goto label_34707c;
        case 0x347098u: goto label_347098;
        case 0x3470b0u: goto label_3470b0;
        case 0x3470d4u: goto label_3470d4;
        case 0x3470e8u: goto label_3470e8;
        case 0x347100u: goto label_347100;
        case 0x347114u: goto label_347114;
        case 0x34712cu: goto label_34712c;
        case 0x347140u: goto label_347140;
        case 0x347158u: goto label_347158;
        case 0x34716cu: goto label_34716c;
        case 0x347178u: goto label_347178;
        case 0x347184u: goto label_347184;
        case 0x34719cu: goto label_34719c;
        case 0x3471b0u: goto label_3471b0;
        case 0x3471bcu: goto label_3471bc;
        case 0x3471c8u: goto label_3471c8;
        case 0x3471e0u: goto label_3471e0;
        case 0x3471fcu: goto label_3471fc;
        case 0x347210u: goto label_347210;
        case 0x34721cu: goto label_34721c;
        case 0x34722cu: goto label_34722c;
        case 0x347250u: goto label_347250;
        case 0x347274u: goto label_347274;
        case 0x347298u: goto label_347298;
        case 0x3472c0u: goto label_3472c0;
        case 0x3472d4u: goto label_3472d4;
        case 0x3472e0u: goto label_3472e0;
        case 0x3472f0u: goto label_3472f0;
        case 0x347314u: goto label_347314;
        case 0x347338u: goto label_347338;
        case 0x34735cu: goto label_34735c;
        case 0x347384u: goto label_347384;
        case 0x347398u: goto label_347398;
        case 0x3473a4u: goto label_3473a4;
        case 0x3473b4u: goto label_3473b4;
        case 0x3473d8u: goto label_3473d8;
        case 0x3473f8u: goto label_3473f8;
        case 0x347410u: goto label_347410;
        case 0x347424u: goto label_347424;
        case 0x347430u: goto label_347430;
        case 0x347440u: goto label_347440;
        case 0x347464u: goto label_347464;
        case 0x347484u: goto label_347484;
        default: break;
    }

    ctx->pc = 0x346cf0u;

    // 0x346cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x346cf4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x346cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x346cf8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x346cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x346cfc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x346cfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d00: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x346d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x346d04: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x346d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x346d08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346d08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d0c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346d10: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x346d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x346d14: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x346d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x346d18: 0x24a56228  addiu       $a1, $a1, 0x6228
    ctx->pc = 0x346d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25128));
    // 0x346d1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346D1Cu;
    SET_GPR_U32(ctx, 31, 0x346D24u);
    ctx->pc = 0x346D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D1Cu;
    // 0x346d20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346D1Cu, 0x346D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D24u;
label_346d24:
    // 0x346d24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346D28u;
    {
        const bool branch_taken_0x346d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D28u;
        // 0x346d2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d28) {
            ctx->pc = 0x346D40u;
            goto label_346d40;
        }
    }
    ctx->pc = 0x346D30u;
    // 0x346d30: 0xc09e056  jal         func_278158
    ctx->pc = 0x346D30u;
    SET_GPR_U32(ctx, 31, 0x346D38u);
    ctx->pc = 0x346D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D30u;
    // 0x346d34: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x346D30u, 0x346D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D38u;
label_346d38:
    // 0x346d38: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x346D38u;
    {
        const bool branch_taken_0x346d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D38u;
        // 0x346d3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d38) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346D40u;
label_346d40:
    // 0x346d40: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d48: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346D48u;
    SET_GPR_U32(ctx, 31, 0x346D50u);
    ctx->pc = 0x346D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D48u;
    // 0x346d4c: 0x24a56238  addiu       $a1, $a1, 0x6238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346D48u, 0x346D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D50u;
label_346d50:
    // 0x346d50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346d54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346D54u;
    {
        const bool branch_taken_0x346d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D54u;
        // 0x346d58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d54) {
            ctx->pc = 0x346D6Cu;
            goto label_346d6c;
        }
    }
    ctx->pc = 0x346D5Cu;
    // 0x346d5c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346D5Cu;
    SET_GPR_U32(ctx, 31, 0x346D64u);
    ctx->pc = 0x346D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D5Cu;
    // 0x346d60: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346D5Cu, 0x346D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D64u;
label_346d64:
    // 0x346d64: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x346D64u;
    {
        const bool branch_taken_0x346d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D64u;
        // 0x346d68: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d64) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346D6Cu;
label_346d6c:
    // 0x346d6c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346d70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346d74: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346D74u;
    SET_GPR_U32(ctx, 31, 0x346D7Cu);
    ctx->pc = 0x346D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D74u;
    // 0x346d78: 0x24a56248  addiu       $a1, $a1, 0x6248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346D74u, 0x346D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D7Cu;
label_346d7c:
    // 0x346d7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346d80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346D80u;
    {
        const bool branch_taken_0x346d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D80u;
        // 0x346d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d80) {
            ctx->pc = 0x346D98u;
            goto label_346d98;
        }
    }
    ctx->pc = 0x346D88u;
    // 0x346d88: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346D88u;
    SET_GPR_U32(ctx, 31, 0x346D90u);
    ctx->pc = 0x346D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346D88u;
    // 0x346d8c: 0x26050018  addiu       $a1, $s0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346D88u, 0x346D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346D90u;
label_346d90:
    // 0x346d90: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x346D90u;
    {
        const bool branch_taken_0x346d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346D90u;
        // 0x346d94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346d90) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346D98u;
label_346d98:
    // 0x346d98: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346d9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346da0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346DA0u;
    SET_GPR_U32(ctx, 31, 0x346DA8u);
    ctx->pc = 0x346DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DA0u;
    // 0x346da4: 0x24a56260  addiu       $a1, $a1, 0x6260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346DA0u, 0x346DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DA8u;
label_346da8:
    // 0x346da8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346dac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346DACu;
    {
        const bool branch_taken_0x346dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DACu;
        // 0x346db0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346dac) {
            ctx->pc = 0x346DC4u;
            goto label_346dc4;
        }
    }
    ctx->pc = 0x346DB4u;
    // 0x346db4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346DB4u;
    SET_GPR_U32(ctx, 31, 0x346DBCu);
    ctx->pc = 0x346DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DB4u;
    // 0x346db8: 0x2605001c  addiu       $a1, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346DB4u, 0x346DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DBCu;
label_346dbc:
    // 0x346dbc: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x346DBCu;
    {
        const bool branch_taken_0x346dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DBCu;
        // 0x346dc0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346dbc) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346DC4u;
label_346dc4:
    // 0x346dc4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346dcc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346DCCu;
    SET_GPR_U32(ctx, 31, 0x346DD4u);
    ctx->pc = 0x346DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DCCu;
    // 0x346dd0: 0x24a56278  addiu       $a1, $a1, 0x6278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346DCCu, 0x346DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DD4u;
label_346dd4:
    // 0x346dd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346dd8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346DD8u;
    {
        const bool branch_taken_0x346dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DD8u;
        // 0x346ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346dd8) {
            ctx->pc = 0x346DF0u;
            goto label_346df0;
        }
    }
    ctx->pc = 0x346DE0u;
    // 0x346de0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346DE0u;
    SET_GPR_U32(ctx, 31, 0x346DE8u);
    ctx->pc = 0x346DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DE0u;
    // 0x346de4: 0x26050024  addiu       $a1, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346DE0u, 0x346DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346DE8u;
label_346de8:
    // 0x346de8: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x346DE8u;
    {
        const bool branch_taken_0x346de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346DE8u;
        // 0x346dec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346de8) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346DF0u;
label_346df0:
    // 0x346df0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346df0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346df8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346DF8u;
    SET_GPR_U32(ctx, 31, 0x346E00u);
    ctx->pc = 0x346DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346DF8u;
    // 0x346dfc: 0x24a56288  addiu       $a1, $a1, 0x6288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346DF8u, 0x346E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E00u;
label_346e00:
    // 0x346e00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346e04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346E04u;
    {
        const bool branch_taken_0x346e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E04u;
        // 0x346e08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e04) {
            ctx->pc = 0x346E1Cu;
            goto label_346e1c;
        }
    }
    ctx->pc = 0x346E0Cu;
    // 0x346e0c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346E0Cu;
    SET_GPR_U32(ctx, 31, 0x346E14u);
    ctx->pc = 0x346E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E0Cu;
    // 0x346e10: 0x26050028  addiu       $a1, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346E0Cu, 0x346E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E14u;
label_346e14:
    // 0x346e14: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x346E14u;
    {
        const bool branch_taken_0x346e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E14u;
        // 0x346e18: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e14) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346E1Cu;
label_346e1c:
    // 0x346e1c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346e20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346E24u;
    SET_GPR_U32(ctx, 31, 0x346E2Cu);
    ctx->pc = 0x346E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E24u;
    // 0x346e28: 0x24a56298  addiu       $a1, $a1, 0x6298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346E24u, 0x346E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E2Cu;
label_346e2c:
    // 0x346e2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346e30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346E30u;
    {
        const bool branch_taken_0x346e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E30u;
        // 0x346e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e30) {
            ctx->pc = 0x346E48u;
            goto label_346e48;
        }
    }
    ctx->pc = 0x346E38u;
    // 0x346e38: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346E38u;
    SET_GPR_U32(ctx, 31, 0x346E40u);
    ctx->pc = 0x346E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E38u;
    // 0x346e3c: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346E38u, 0x346E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E40u;
label_346e40:
    // 0x346e40: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x346E40u;
    {
        const bool branch_taken_0x346e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E40u;
        // 0x346e44: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e40) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346E48u;
label_346e48:
    // 0x346e48: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346e4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346E50u;
    SET_GPR_U32(ctx, 31, 0x346E58u);
    ctx->pc = 0x346E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E50u;
    // 0x346e54: 0x24a562a0  addiu       $a1, $a1, 0x62A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346E50u, 0x346E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E58u;
label_346e58:
    // 0x346e58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346e5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346E5Cu;
    {
        const bool branch_taken_0x346e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E5Cu;
        // 0x346e60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e5c) {
            ctx->pc = 0x346E74u;
            goto label_346e74;
        }
    }
    ctx->pc = 0x346E64u;
    // 0x346e64: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346E64u;
    SET_GPR_U32(ctx, 31, 0x346E6Cu);
    ctx->pc = 0x346E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E64u;
    // 0x346e68: 0x26050034  addiu       $a1, $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346E64u, 0x346E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E6Cu;
label_346e6c:
    // 0x346e6c: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x346E6Cu;
    {
        const bool branch_taken_0x346e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E6Cu;
        // 0x346e70: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e6c) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346E74u;
label_346e74:
    // 0x346e74: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346e74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346e7c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346E7Cu;
    SET_GPR_U32(ctx, 31, 0x346E84u);
    ctx->pc = 0x346E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E7Cu;
    // 0x346e80: 0x24a562a8  addiu       $a1, $a1, 0x62A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346E7Cu, 0x346E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E84u;
label_346e84:
    // 0x346e84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346e88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346E88u;
    {
        const bool branch_taken_0x346e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E88u;
        // 0x346e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e88) {
            ctx->pc = 0x346EA0u;
            goto label_346ea0;
        }
    }
    ctx->pc = 0x346E90u;
    // 0x346e90: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346E90u;
    SET_GPR_U32(ctx, 31, 0x346E98u);
    ctx->pc = 0x346E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346E90u;
    // 0x346e94: 0x26050038  addiu       $a1, $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346E90u, 0x346E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346E98u;
label_346e98:
    // 0x346e98: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x346E98u;
    {
        const bool branch_taken_0x346e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346E98u;
        // 0x346e9c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346e98) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346EA0u;
label_346ea0:
    // 0x346ea0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346ea8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346EA8u;
    SET_GPR_U32(ctx, 31, 0x346EB0u);
    ctx->pc = 0x346EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EA8u;
    // 0x346eac: 0x24a562b0  addiu       $a1, $a1, 0x62B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346EA8u, 0x346EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EB0u;
label_346eb0:
    // 0x346eb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346eb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x346EB4u;
    {
        const bool branch_taken_0x346eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EB4u;
        // 0x346eb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346eb4) {
            ctx->pc = 0x346ED4u;
            goto label_346ed4;
        }
    }
    ctx->pc = 0x346EBCu;
    // 0x346ebc: 0x26070048  addiu       $a3, $s0, 0x48
    ctx->pc = 0x346ebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    // 0x346ec0: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x346ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x346ec4: 0xc09df62  jal         func_277D88
    ctx->pc = 0x346EC4u;
    SET_GPR_U32(ctx, 31, 0x346ECCu);
    ctx->pc = 0x346EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EC4u;
    // 0x346ec8: 0x26060044  addiu       $a2, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x346EC4u, 0x346ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346ECCu;
label_346ecc:
    // 0x346ecc: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x346ECCu;
    {
        const bool branch_taken_0x346ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346ECCu;
        // 0x346ed0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ecc) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346ED4u;
label_346ed4:
    // 0x346ed4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346edc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346EDCu;
    SET_GPR_U32(ctx, 31, 0x346EE4u);
    ctx->pc = 0x346EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EDCu;
    // 0x346ee0: 0x24a562c0  addiu       $a1, $a1, 0x62C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346EDCu, 0x346EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346EE4u;
label_346ee4:
    // 0x346ee4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346ee8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x346EE8u;
    {
        const bool branch_taken_0x346ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346EE8u;
        // 0x346eec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346ee8) {
            ctx->pc = 0x346F08u;
            goto label_346f08;
        }
    }
    ctx->pc = 0x346EF0u;
    // 0x346ef0: 0x26070058  addiu       $a3, $s0, 0x58
    ctx->pc = 0x346ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x346ef4: 0x26050050  addiu       $a1, $s0, 0x50
    ctx->pc = 0x346ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x346ef8: 0xc09df62  jal         func_277D88
    ctx->pc = 0x346EF8u;
    SET_GPR_U32(ctx, 31, 0x346F00u);
    ctx->pc = 0x346EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346EF8u;
    // 0x346efc: 0x26060054  addiu       $a2, $s0, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x346EF8u, 0x346F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F00u;
label_346f00:
    // 0x346f00: 0x10000161  b           . + 4 + (0x161 << 2)
    ctx->pc = 0x346F00u;
    {
        const bool branch_taken_0x346f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F00u;
        // 0x346f04: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f00) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346F08u;
label_346f08:
    // 0x346f08: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346f08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f10: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346F10u;
    SET_GPR_U32(ctx, 31, 0x346F18u);
    ctx->pc = 0x346F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F10u;
    // 0x346f14: 0x24a562d0  addiu       $a1, $a1, 0x62D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346F10u, 0x346F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F18u;
label_346f18:
    // 0x346f18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346f1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x346F1Cu;
    {
        const bool branch_taken_0x346f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F1Cu;
        // 0x346f20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f1c) {
            ctx->pc = 0x346F3Cu;
            goto label_346f3c;
        }
    }
    ctx->pc = 0x346F24u;
    // 0x346f24: 0x26070078  addiu       $a3, $s0, 0x78
    ctx->pc = 0x346f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x346f28: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x346f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x346f2c: 0xc09df62  jal         func_277D88
    ctx->pc = 0x346F2Cu;
    SET_GPR_U32(ctx, 31, 0x346F34u);
    ctx->pc = 0x346F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F2Cu;
    // 0x346f30: 0x26060074  addiu       $a2, $s0, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x346F2Cu, 0x346F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F34u;
label_346f34:
    // 0x346f34: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x346F34u;
    {
        const bool branch_taken_0x346f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F34u;
        // 0x346f38: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f34) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346F3Cu;
label_346f3c:
    // 0x346f3c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f44: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346F44u;
    SET_GPR_U32(ctx, 31, 0x346F4Cu);
    ctx->pc = 0x346F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F44u;
    // 0x346f48: 0x24a562e0  addiu       $a1, $a1, 0x62E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346F44u, 0x346F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F4Cu;
label_346f4c:
    // 0x346f4c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346f50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x346F50u;
    {
        const bool branch_taken_0x346f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F50u;
        // 0x346f54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f50) {
            ctx->pc = 0x346F68u;
            goto label_346f68;
        }
    }
    ctx->pc = 0x346F58u;
    // 0x346f58: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x346F58u;
    SET_GPR_U32(ctx, 31, 0x346F60u);
    ctx->pc = 0x346F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F58u;
    // 0x346f5c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x346F58u, 0x346F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F60u;
label_346f60:
    // 0x346f60: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x346F60u;
    {
        const bool branch_taken_0x346f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F60u;
        // 0x346f64: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f60) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346F68u;
label_346f68:
    // 0x346f68: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346f70: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346F70u;
    SET_GPR_U32(ctx, 31, 0x346F78u);
    ctx->pc = 0x346F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F70u;
    // 0x346f74: 0x24a562e8  addiu       $a1, $a1, 0x62E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346F70u, 0x346F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F78u;
label_346f78:
    // 0x346f78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346f7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x346F7Cu;
    {
        const bool branch_taken_0x346f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F7Cu;
        // 0x346f80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f7c) {
            ctx->pc = 0x346F9Cu;
            goto label_346f9c;
        }
    }
    ctx->pc = 0x346F84u;
    // 0x346f84: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x346f84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x346f88: 0x26060094  addiu       $a2, $s0, 0x94
    ctx->pc = 0x346f88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x346f8c: 0xc09df62  jal         func_277D88
    ctx->pc = 0x346F8Cu;
    SET_GPR_U32(ctx, 31, 0x346F94u);
    ctx->pc = 0x346F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346F8Cu;
    // 0x346f90: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x346F8Cu, 0x346F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346F94u;
label_346f94:
    // 0x346f94: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x346F94u;
    {
        const bool branch_taken_0x346f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346F94u;
        // 0x346f98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346f94) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346F9Cu;
label_346f9c:
    // 0x346f9c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346fa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fa4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346FA4u;
    SET_GPR_U32(ctx, 31, 0x346FACu);
    ctx->pc = 0x346FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FA4u;
    // 0x346fa8: 0x24a562f8  addiu       $a1, $a1, 0x62F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346FA4u, 0x346FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FACu;
label_346fac:
    // 0x346fac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346fb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x346FB0u;
    {
        const bool branch_taken_0x346fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FB0u;
        // 0x346fb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346fb0) {
            ctx->pc = 0x346FD0u;
            goto label_346fd0;
        }
    }
    ctx->pc = 0x346FB8u;
    // 0x346fb8: 0x260700a8  addiu       $a3, $s0, 0xA8
    ctx->pc = 0x346fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    // 0x346fbc: 0x260500a0  addiu       $a1, $s0, 0xA0
    ctx->pc = 0x346fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x346fc0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x346FC0u;
    SET_GPR_U32(ctx, 31, 0x346FC8u);
    ctx->pc = 0x346FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FC0u;
    // 0x346fc4: 0x260600a4  addiu       $a2, $s0, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x346FC0u, 0x346FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FC8u;
label_346fc8:
    // 0x346fc8: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x346FC8u;
    {
        const bool branch_taken_0x346fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x346FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FC8u;
        // 0x346fcc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346fc8) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x346FD0u;
label_346fd0:
    // 0x346fd0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x346fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x346fd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x346fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346fd8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x346FD8u;
    SET_GPR_U32(ctx, 31, 0x346FE0u);
    ctx->pc = 0x346FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FD8u;
    // 0x346fdc: 0x24a56308  addiu       $a1, $a1, 0x6308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x346FD8u, 0x346FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346FE0u;
label_346fe0:
    // 0x346fe0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x346fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x346fe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x346FE4u;
    {
        const bool branch_taken_0x346fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x346FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346FE4u;
        // 0x346fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346fe4) {
            ctx->pc = 0x347008u;
            goto label_347008;
        }
    }
    ctx->pc = 0x346FECu;
    // 0x346fec: 0x260800b3  addiu       $t0, $s0, 0xB3
    ctx->pc = 0x346fecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 179));
    // 0x346ff0: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x346ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x346ff4: 0x260600b1  addiu       $a2, $s0, 0xB1
    ctx->pc = 0x346ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 177));
    // 0x346ff8: 0xc09dfb2  jal         func_277EC8
    ctx->pc = 0x346FF8u;
    SET_GPR_U32(ctx, 31, 0x347000u);
    ctx->pc = 0x346FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346FF8u;
    // 0x346ffc: 0x260700b2  addiu       $a3, $s0, 0xB2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 178));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EC8u, 0x346FF8u, 0x347000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347000u;
label_347000:
    // 0x347000: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x347000u;
    {
        const bool branch_taken_0x347000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347000u;
        // 0x347004: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347000) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x347008u;
label_347008:
    // 0x347008: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34700c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34700cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347010: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347010u;
    SET_GPR_U32(ctx, 31, 0x347018u);
    ctx->pc = 0x347014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347010u;
    // 0x347014: 0x24a56318  addiu       $a1, $a1, 0x6318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347010u, 0x347018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347018u;
label_347018:
    // 0x347018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34701c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34701Cu;
    {
        const bool branch_taken_0x34701c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34701Cu;
        // 0x347020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34701c) {
            ctx->pc = 0x347040u;
            goto label_347040;
        }
    }
    ctx->pc = 0x347024u;
    // 0x347024: 0x260800b7  addiu       $t0, $s0, 0xB7
    ctx->pc = 0x347024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 183));
    // 0x347028: 0x260500b4  addiu       $a1, $s0, 0xB4
    ctx->pc = 0x347028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 180));
    // 0x34702c: 0x260600b5  addiu       $a2, $s0, 0xB5
    ctx->pc = 0x34702cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 181));
    // 0x347030: 0xc09dfb2  jal         func_277EC8
    ctx->pc = 0x347030u;
    SET_GPR_U32(ctx, 31, 0x347038u);
    ctx->pc = 0x347034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347030u;
    // 0x347034: 0x260700b6  addiu       $a3, $s0, 0xB6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 182));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277EC8u, 0x347030u, 0x347038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347038u;
label_347038:
    // 0x347038: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x347038u;
    {
        const bool branch_taken_0x347038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347038u;
        // 0x34703c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347038) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x347040u;
label_347040:
    // 0x347040: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347044: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347048: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347048u;
    SET_GPR_U32(ctx, 31, 0x347050u);
    ctx->pc = 0x34704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347048u;
    // 0x34704c: 0x24a56328  addiu       $a1, $a1, 0x6328 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347048u, 0x347050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347050u;
label_347050:
    // 0x347050: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347054: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347054u;
    {
        const bool branch_taken_0x347054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347054u;
        // 0x347058: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347054) {
            ctx->pc = 0x34706Cu;
            goto label_34706c;
        }
    }
    ctx->pc = 0x34705Cu;
    // 0x34705c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x34705Cu;
    SET_GPR_U32(ctx, 31, 0x347064u);
    ctx->pc = 0x347060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34705Cu;
    // 0x347060: 0x260500b8  addiu       $a1, $s0, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x34705Cu, 0x347064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347064u;
label_347064:
    // 0x347064: 0x10000108  b           . + 4 + (0x108 << 2)
    ctx->pc = 0x347064u;
    {
        const bool branch_taken_0x347064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347064u;
        // 0x347068: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347064) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x34706Cu;
label_34706c:
    // 0x34706c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34706cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347074: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347074u;
    SET_GPR_U32(ctx, 31, 0x34707Cu);
    ctx->pc = 0x347078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347074u;
    // 0x347078: 0x24a56338  addiu       $a1, $a1, 0x6338 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347074u, 0x34707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34707Cu;
label_34707c:
    // 0x34707c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34707cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x347080u;
    {
        const bool branch_taken_0x347080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347080u;
        // 0x347084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347080) {
            ctx->pc = 0x3470A0u;
            goto label_3470a0;
        }
    }
    ctx->pc = 0x347088u;
    // 0x347088: 0x260700c8  addiu       $a3, $s0, 0xC8
    ctx->pc = 0x347088u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
    // 0x34708c: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x34708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x347090: 0xc09df62  jal         func_277D88
    ctx->pc = 0x347090u;
    SET_GPR_U32(ctx, 31, 0x347098u);
    ctx->pc = 0x347094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347090u;
    // 0x347094: 0x260600c4  addiu       $a2, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x347090u, 0x347098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347098u;
label_347098:
    // 0x347098: 0x100000fb  b           . + 4 + (0xFB << 2)
    ctx->pc = 0x347098u;
    {
        const bool branch_taken_0x347098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347098u;
        // 0x34709c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347098) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x3470A0u;
label_3470a0:
    // 0x3470a0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3470a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3470a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3470a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3470a8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3470A8u;
    SET_GPR_U32(ctx, 31, 0x3470B0u);
    ctx->pc = 0x3470ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3470A8u;
    // 0x3470ac: 0x24a56340  addiu       $a1, $a1, 0x6340 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3470A8u, 0x3470B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3470B0u;
label_3470b0:
    // 0x3470b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3470b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3470b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3470B4u;
    {
        const bool branch_taken_0x3470b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470B4u;
        // 0x3470b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470b4) {
            ctx->pc = 0x3470C4u;
            goto label_3470c4;
        }
    }
    ctx->pc = 0x3470BCu;
    // 0x3470bc: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x3470BCu;
    {
        const bool branch_taken_0x3470bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470BCu;
        // 0x3470c0: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470bc) {
            ctx->pc = 0x347484u;
            goto label_347484;
        }
    }
    ctx->pc = 0x3470C4u;
label_3470c4:
    // 0x3470c4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3470c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3470c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3470c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3470cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3470CCu;
    SET_GPR_U32(ctx, 31, 0x3470D4u);
    ctx->pc = 0x3470D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3470CCu;
    // 0x3470d0: 0x24a56348  addiu       $a1, $a1, 0x6348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3470CCu, 0x3470D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3470D4u;
label_3470d4:
    // 0x3470d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3470d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3470d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3470D8u;
    {
        const bool branch_taken_0x3470d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470D8u;
        // 0x3470dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470d8) {
            ctx->pc = 0x3470F0u;
            goto label_3470f0;
        }
    }
    ctx->pc = 0x3470E0u;
    // 0x3470e0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x3470E0u;
    SET_GPR_U32(ctx, 31, 0x3470E8u);
    ctx->pc = 0x3470E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3470E0u;
    // 0x3470e4: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x3470E0u, 0x3470E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3470E8u;
label_3470e8:
    // 0x3470e8: 0x100000e7  b           . + 4 + (0xE7 << 2)
    ctx->pc = 0x3470E8u;
    {
        const bool branch_taken_0x3470e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3470ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3470E8u;
        // 0x3470ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3470e8) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x3470F0u;
label_3470f0:
    // 0x3470f0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3470f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3470f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3470f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3470f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3470F8u;
    SET_GPR_U32(ctx, 31, 0x347100u);
    ctx->pc = 0x3470FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3470F8u;
    // 0x3470fc: 0x24a56358  addiu       $a1, $a1, 0x6358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3470F8u, 0x347100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347100u;
label_347100:
    // 0x347100: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347104u;
    {
        const bool branch_taken_0x347104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347104u;
        // 0x347108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347104) {
            ctx->pc = 0x34711Cu;
            goto label_34711c;
        }
    }
    ctx->pc = 0x34710Cu;
    // 0x34710c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x34710Cu;
    SET_GPR_U32(ctx, 31, 0x347114u);
    ctx->pc = 0x347110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34710Cu;
    // 0x347110: 0x26050104  addiu       $a1, $s0, 0x104 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x34710Cu, 0x347114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347114u;
label_347114:
    // 0x347114: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x347114u;
    {
        const bool branch_taken_0x347114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347114u;
        // 0x347118: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347114) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x34711Cu;
label_34711c:
    // 0x34711c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34711cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347120: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347124: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347124u;
    SET_GPR_U32(ctx, 31, 0x34712Cu);
    ctx->pc = 0x347128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347124u;
    // 0x347128: 0x24a56368  addiu       $a1, $a1, 0x6368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347124u, 0x34712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34712Cu;
label_34712c:
    // 0x34712c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347130: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x347130u;
    {
        const bool branch_taken_0x347130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347130u;
        // 0x347134: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347130) {
            ctx->pc = 0x347148u;
            goto label_347148;
        }
    }
    ctx->pc = 0x347138u;
    // 0x347138: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x347138u;
    SET_GPR_U32(ctx, 31, 0x347140u);
    ctx->pc = 0x34713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347138u;
    // 0x34713c: 0x26050108  addiu       $a1, $s0, 0x108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x347138u, 0x347140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347140u;
label_347140:
    // 0x347140: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x347140u;
    {
        const bool branch_taken_0x347140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347140u;
        // 0x347144: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347140) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x347148u;
label_347148:
    // 0x347148: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347148u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34714c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x34714cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347150: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347150u;
    SET_GPR_U32(ctx, 31, 0x347158u);
    ctx->pc = 0x347154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347150u;
    // 0x347154: 0x24a56378  addiu       $a1, $a1, 0x6378 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347150u, 0x347158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347158u;
label_347158:
    // 0x347158: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34715c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x34715Cu;
    {
        const bool branch_taken_0x34715c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34715Cu;
        // 0x347160: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34715c) {
            ctx->pc = 0x34718Cu;
            goto label_34718c;
        }
    }
    ctx->pc = 0x347164u;
    // 0x347164: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x347164u;
    SET_GPR_U32(ctx, 31, 0x34716Cu);
    ctx->pc = 0x347168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347164u;
    // 0x347168: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x347164u, 0x34716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34716Cu;
label_34716c:
    // 0x34716c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34716cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347170: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x347170u;
    SET_GPR_U32(ctx, 31, 0x347178u);
    ctx->pc = 0x347174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347170u;
    // 0x347174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x347170u, 0x347178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347178u;
label_347178:
    // 0x347178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x347178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34717c: 0xc0d1d28  jal         func_3474A0
    ctx->pc = 0x34717Cu;
    SET_GPR_U32(ctx, 31, 0x347184u);
    ctx->pc = 0x347180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34717Cu;
    // 0x347180: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3474A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3474A0u, 0x34717Cu, 0x347184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347184u;
label_347184:
    // 0x347184: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x347184u;
    {
        const bool branch_taken_0x347184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347184u;
        // 0x347188: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347184) {
            ctx->pc = 0x3473ECu;
            goto label_3473ec;
        }
    }
    ctx->pc = 0x34718Cu;
label_34718c:
    // 0x34718c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34718cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347194: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347194u;
    SET_GPR_U32(ctx, 31, 0x34719Cu);
    ctx->pc = 0x347198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347194u;
    // 0x347198: 0x24a56388  addiu       $a1, $a1, 0x6388 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347194u, 0x34719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34719Cu;
label_34719c:
    // 0x34719c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3471a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3471A0u;
    {
        const bool branch_taken_0x3471a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3471A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471A0u;
        // 0x3471a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471a0) {
            ctx->pc = 0x3471D0u;
            goto label_3471d0;
        }
    }
    ctx->pc = 0x3471A8u;
    // 0x3471a8: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x3471A8u;
    SET_GPR_U32(ctx, 31, 0x3471B0u);
    ctx->pc = 0x3471ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3471A8u;
    // 0x3471ac: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x3471A8u, 0x3471B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3471B0u;
label_3471b0:
    // 0x3471b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3471b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3471b4: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x3471B4u;
    SET_GPR_U32(ctx, 31, 0x3471BCu);
    ctx->pc = 0x3471B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3471B4u;
    // 0x3471b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x3471B4u, 0x3471BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3471BCu;
label_3471bc:
    // 0x3471bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3471bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3471c0: 0xc0d1d28  jal         func_3474A0
    ctx->pc = 0x3471C0u;
    SET_GPR_U32(ctx, 31, 0x3471C8u);
    ctx->pc = 0x3471C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3471C0u;
    // 0x3471c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3474A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3474A0u, 0x3471C0u, 0x3471C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3471C8u;
label_3471c8:
    // 0x3471c8: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3471C8u;
    {
        const bool branch_taken_0x3471c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3471CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3471C8u;
        // 0x3471cc: 0xae020110  sw          $v0, 0x110($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3471c8) {
            ctx->pc = 0x3473ECu;
            goto label_3473ec;
        }
    }
    ctx->pc = 0x3471D0u;
label_3471d0:
    // 0x3471d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3471d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3471d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3471d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3471d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3471D8u;
    SET_GPR_U32(ctx, 31, 0x3471E0u);
    ctx->pc = 0x3471DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3471D8u;
    // 0x3471dc: 0x24a56398  addiu       $a1, $a1, 0x6398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3471D8u, 0x3471E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3471E0u;
label_3471e0:
    // 0x3471e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3471e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3471e4: 0x544000a8  bnel        $v0, $zero, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3471E4u;
    {
        const bool branch_taken_0x3471e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3471e4) {
            ctx->pc = 0x3471E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3471E4u;
            // 0x3471e8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x3471ECu;
    // 0x3471ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3471ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3471f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3471f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3471f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3471F4u;
    SET_GPR_U32(ctx, 31, 0x3471FCu);
    ctx->pc = 0x3471F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3471F4u;
    // 0x3471f8: 0x24a563b0  addiu       $a1, $a1, 0x63B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3471F4u, 0x3471FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3471FCu;
label_3471fc:
    // 0x3471fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3471fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347200: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x347200u;
    {
        const bool branch_taken_0x347200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347200u;
        // 0x347204: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347200) {
            ctx->pc = 0x3472B0u;
            goto label_3472b0;
        }
    }
    ctx->pc = 0x347208u;
    // 0x347208: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x347208u;
    SET_GPR_U32(ctx, 31, 0x347210u);
    ctx->pc = 0x34720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347208u;
    // 0x34720c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x347208u, 0x347210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347210u;
label_347210:
    // 0x347210: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x347210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347214: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x347214u;
    SET_GPR_U32(ctx, 31, 0x34721Cu);
    ctx->pc = 0x347218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347214u;
    // 0x347218: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x347214u, 0x34721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34721Cu;
label_34721c:
    // 0x34721c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347220: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347224: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347224u;
    SET_GPR_U32(ctx, 31, 0x34722Cu);
    ctx->pc = 0x347228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347224u;
    // 0x347228: 0x24a563c0  addiu       $a1, $a1, 0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347224u, 0x34722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34722Cu;
label_34722c:
    // 0x34722c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34722cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347230: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347230u;
    {
        const bool branch_taken_0x347230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347230u;
        // 0x347234: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347230) {
            ctx->pc = 0x347240u;
            goto label_347240;
        }
    }
    ctx->pc = 0x347238u;
    // 0x347238: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x347238u;
    {
        const bool branch_taken_0x347238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347238u;
        // 0x34723c: 0x24424c78  addiu       $v0, $v0, 0x4C78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347238) {
            ctx->pc = 0x3472A8u;
            goto label_3472a8;
        }
    }
    ctx->pc = 0x347240u;
label_347240:
    // 0x347240: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347244: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347248: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347248u;
    SET_GPR_U32(ctx, 31, 0x347250u);
    ctx->pc = 0x34724Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347248u;
    // 0x34724c: 0x24a563d0  addiu       $a1, $a1, 0x63D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347248u, 0x347250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347250u;
label_347250:
    // 0x347250: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347254: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347254u;
    {
        const bool branch_taken_0x347254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347254u;
        // 0x347258: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347254) {
            ctx->pc = 0x347264u;
            goto label_347264;
        }
    }
    ctx->pc = 0x34725Cu;
    // 0x34725c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x34725Cu;
    {
        const bool branch_taken_0x34725c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34725Cu;
        // 0x347260: 0x24424cc8  addiu       $v0, $v0, 0x4CC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34725c) {
            ctx->pc = 0x3472A8u;
            goto label_3472a8;
        }
    }
    ctx->pc = 0x347264u;
label_347264:
    // 0x347264: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347268: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34726c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x34726Cu;
    SET_GPR_U32(ctx, 31, 0x347274u);
    ctx->pc = 0x347270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34726Cu;
    // 0x347270: 0x24a563e0  addiu       $a1, $a1, 0x63E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x34726Cu, 0x347274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347274u;
label_347274:
    // 0x347274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347278: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347278u;
    {
        const bool branch_taken_0x347278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347278u;
        // 0x34727c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347278) {
            ctx->pc = 0x347288u;
            goto label_347288;
        }
    }
    ctx->pc = 0x347280u;
    // 0x347280: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x347280u;
    {
        const bool branch_taken_0x347280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347280u;
        // 0x347284: 0x24424d58  addiu       $v0, $v0, 0x4D58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347280) {
            ctx->pc = 0x3472A8u;
            goto label_3472a8;
        }
    }
    ctx->pc = 0x347288u;
label_347288:
    // 0x347288: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34728c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347290: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347290u;
    SET_GPR_U32(ctx, 31, 0x347298u);
    ctx->pc = 0x347294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347290u;
    // 0x347294: 0x24a563f0  addiu       $a1, $a1, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347290u, 0x347298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347298u;
label_347298:
    // 0x347298: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34729c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x34729Cu;
    {
        const bool branch_taken_0x34729c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3472A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34729Cu;
        // 0x3472a0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34729c) {
            ctx->pc = 0x3473ECu;
            goto label_3473ec;
        }
    }
    ctx->pc = 0x3472A4u;
    // 0x3472a4: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x3472a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
label_3472a8:
    // 0x3472a8: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x3472A8u;
    {
        const bool branch_taken_0x3472a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3472ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472A8u;
        // 0x3472ac: 0xae020130  sw          $v0, 0x130($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472a8) {
            ctx->pc = 0x3473ECu;
            goto label_3473ec;
        }
    }
    ctx->pc = 0x3472B0u;
label_3472b0:
    // 0x3472b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3472b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3472b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3472b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3472b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3472B8u;
    SET_GPR_U32(ctx, 31, 0x3472C0u);
    ctx->pc = 0x3472BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472B8u;
    // 0x3472bc: 0x24a56400  addiu       $a1, $a1, 0x6400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3472B8u, 0x3472C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472C0u;
label_3472c0:
    // 0x3472c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3472c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3472c4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3472C4u;
    {
        const bool branch_taken_0x3472c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3472C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472C4u;
        // 0x3472c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472c4) {
            ctx->pc = 0x347374u;
            goto label_347374;
        }
    }
    ctx->pc = 0x3472CCu;
    // 0x3472cc: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x3472CCu;
    SET_GPR_U32(ctx, 31, 0x3472D4u);
    ctx->pc = 0x3472D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472CCu;
    // 0x3472d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x3472CCu, 0x3472D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472D4u;
label_3472d4:
    // 0x3472d4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3472d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3472d8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x3472D8u;
    SET_GPR_U32(ctx, 31, 0x3472E0u);
    ctx->pc = 0x3472DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472D8u;
    // 0x3472dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x3472D8u, 0x3472E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472E0u;
label_3472e0:
    // 0x3472e0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3472e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3472e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3472e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3472e8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3472E8u;
    SET_GPR_U32(ctx, 31, 0x3472F0u);
    ctx->pc = 0x3472ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3472E8u;
    // 0x3472ec: 0x24a563c0  addiu       $a1, $a1, 0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3472E8u, 0x3472F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3472F0u;
label_3472f0:
    // 0x3472f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3472f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3472f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3472F4u;
    {
        const bool branch_taken_0x3472f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3472F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472F4u;
        // 0x3472f8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472f4) {
            ctx->pc = 0x347304u;
            goto label_347304;
        }
    }
    ctx->pc = 0x3472FCu;
    // 0x3472fc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3472FCu;
    {
        const bool branch_taken_0x3472fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3472FCu;
        // 0x347300: 0x24424a28  addiu       $v0, $v0, 0x4A28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3472fc) {
            ctx->pc = 0x34736Cu;
            goto label_34736c;
        }
    }
    ctx->pc = 0x347304u;
label_347304:
    // 0x347304: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34730c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x34730Cu;
    SET_GPR_U32(ctx, 31, 0x347314u);
    ctx->pc = 0x347310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34730Cu;
    // 0x347310: 0x24a563d0  addiu       $a1, $a1, 0x63D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x34730Cu, 0x347314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347314u;
label_347314:
    // 0x347314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347318: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347318u;
    {
        const bool branch_taken_0x347318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347318u;
        // 0x34731c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347318) {
            ctx->pc = 0x347328u;
            goto label_347328;
        }
    }
    ctx->pc = 0x347320u;
    // 0x347320: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x347320u;
    {
        const bool branch_taken_0x347320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347320u;
        // 0x347324: 0x24424b18  addiu       $v0, $v0, 0x4B18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347320) {
            ctx->pc = 0x34736Cu;
            goto label_34736c;
        }
    }
    ctx->pc = 0x347328u;
label_347328:
    // 0x347328: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347328u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x34732c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34732cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347330: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347330u;
    SET_GPR_U32(ctx, 31, 0x347338u);
    ctx->pc = 0x347334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347330u;
    // 0x347334: 0x24a563e0  addiu       $a1, $a1, 0x63E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347330u, 0x347338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347338u;
label_347338:
    // 0x347338: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34733c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34733Cu;
    {
        const bool branch_taken_0x34733c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34733Cu;
        // 0x347340: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34733c) {
            ctx->pc = 0x34734Cu;
            goto label_34734c;
        }
    }
    ctx->pc = 0x347344u;
    // 0x347344: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x347344u;
    {
        const bool branch_taken_0x347344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347344u;
        // 0x347348: 0x24424b38  addiu       $v0, $v0, 0x4B38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347344) {
            ctx->pc = 0x34736Cu;
            goto label_34736c;
        }
    }
    ctx->pc = 0x34734Cu;
label_34734c:
    // 0x34734c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x34734cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347350: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347354: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347354u;
    SET_GPR_U32(ctx, 31, 0x34735Cu);
    ctx->pc = 0x347358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347354u;
    // 0x347358: 0x24a563f0  addiu       $a1, $a1, 0x63F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347354u, 0x34735Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34735Cu;
label_34735c:
    // 0x34735c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34735cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347360: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x347360u;
    {
        const bool branch_taken_0x347360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347360u;
        // 0x347364: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347360) {
            ctx->pc = 0x3473ECu;
            goto label_3473ec;
        }
    }
    ctx->pc = 0x347368u;
    // 0x347368: 0x24424be0  addiu       $v0, $v0, 0x4BE0
    ctx->pc = 0x347368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19424));
label_34736c:
    // 0x34736c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x34736Cu;
    {
        const bool branch_taken_0x34736c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x347370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34736Cu;
        // 0x347370: 0xae02012c  sw          $v0, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34736c) {
            ctx->pc = 0x3473ECu;
            goto label_3473ec;
        }
    }
    ctx->pc = 0x347374u;
label_347374:
    // 0x347374: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347374u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347378: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34737c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x34737Cu;
    SET_GPR_U32(ctx, 31, 0x347384u);
    ctx->pc = 0x347380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34737Cu;
    // 0x347380: 0x24a56410  addiu       $a1, $a1, 0x6410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x34737Cu, 0x347384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347384u;
label_347384:
    // 0x347384: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347388: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x347388u;
    {
        const bool branch_taken_0x347388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347388u;
        // 0x34738c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347388) {
            ctx->pc = 0x347400u;
            goto label_347400;
        }
    }
    ctx->pc = 0x347390u;
    // 0x347390: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x347390u;
    SET_GPR_U32(ctx, 31, 0x347398u);
    ctx->pc = 0x347394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347390u;
    // 0x347394: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x347390u, 0x347398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347398u;
label_347398:
    // 0x347398: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x347398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34739c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x34739Cu;
    SET_GPR_U32(ctx, 31, 0x3473A4u);
    ctx->pc = 0x3473A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34739Cu;
    // 0x3473a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x34739Cu, 0x3473A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473A4u;
label_3473a4:
    // 0x3473a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3473a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3473a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3473a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3473ACu;
    SET_GPR_U32(ctx, 31, 0x3473B4u);
    ctx->pc = 0x3473B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473ACu;
    // 0x3473b0: 0x24a563c0  addiu       $a1, $a1, 0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3473ACu, 0x3473B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473B4u;
label_3473b4:
    // 0x3473b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3473b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3473b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3473B8u;
    {
        const bool branch_taken_0x3473b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3473BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473B8u;
        // 0x3473bc: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473b8) {
            ctx->pc = 0x3473C8u;
            goto label_3473c8;
        }
    }
    ctx->pc = 0x3473C0u;
    // 0x3473c0: 0x24424f80  addiu       $v0, $v0, 0x4F80
    ctx->pc = 0x3473c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
    // 0x3473c4: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x3473c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_3473c8:
    // 0x3473c8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3473c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3473cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3473ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3473D0u;
    SET_GPR_U32(ctx, 31, 0x3473D8u);
    ctx->pc = 0x3473D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473D0u;
    // 0x3473d4: 0x24a56420  addiu       $a1, $a1, 0x6420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3473D0u, 0x3473D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473D8u;
label_3473d8:
    // 0x3473d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3473d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3473dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3473DCu;
    {
        const bool branch_taken_0x3473dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3473E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473DCu;
        // 0x3473e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473dc) {
            ctx->pc = 0x3473ECu;
            goto label_3473ec;
        }
    }
    ctx->pc = 0x3473E4u;
    // 0x3473e4: 0x24424f88  addiu       $v0, $v0, 0x4F88
    ctx->pc = 0x3473e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20360));
    // 0x3473e8: 0xae020138  sw          $v0, 0x138($s0)
    ctx->pc = 0x3473e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 312), GPR_U32(ctx, 2));
label_3473ec:
    // 0x3473ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3473ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3473f0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3473F0u;
    SET_GPR_U32(ctx, 31, 0x3473F8u);
    ctx->pc = 0x3473F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3473F0u;
    // 0x3473f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3473F0u, 0x3473F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3473F8u;
label_3473f8:
    // 0x3473f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x3473F8u;
    {
        const bool branch_taken_0x3473f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3473FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3473F8u;
        // 0x3473fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3473f8) {
            ctx->pc = 0x347488u;
            goto label_347488;
        }
    }
    ctx->pc = 0x347400u;
label_347400:
    // 0x347400: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x347404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347408: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347408u;
    SET_GPR_U32(ctx, 31, 0x347410u);
    ctx->pc = 0x34740Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347408u;
    // 0x34740c: 0x24a56428  addiu       $a1, $a1, 0x6428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347408u, 0x347410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347410u;
label_347410:
    // 0x347410: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347414: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x347414u;
    {
        const bool branch_taken_0x347414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347414u;
        // 0x347418: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347414) {
            ctx->pc = 0x347484u;
            goto label_347484;
        }
    }
    ctx->pc = 0x34741Cu;
    // 0x34741c: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x34741Cu;
    SET_GPR_U32(ctx, 31, 0x347424u);
    ctx->pc = 0x347420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34741Cu;
    // 0x347420: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x34741Cu, 0x347424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347424u;
label_347424:
    // 0x347424: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x347424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347428: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x347428u;
    SET_GPR_U32(ctx, 31, 0x347430u);
    ctx->pc = 0x34742Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347428u;
    // 0x34742c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x347428u, 0x347430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347430u;
label_347430:
    // 0x347430: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347438: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x347438u;
    SET_GPR_U32(ctx, 31, 0x347440u);
    ctx->pc = 0x34743Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347438u;
    // 0x34743c: 0x24a563c0  addiu       $a1, $a1, 0x63C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x347438u, 0x347440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347440u;
label_347440:
    // 0x347440: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347444: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347444u;
    {
        const bool branch_taken_0x347444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x347448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347444u;
        // 0x347448: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347444) {
            ctx->pc = 0x347454u;
            goto label_347454;
        }
    }
    ctx->pc = 0x34744Cu;
    // 0x34744c: 0x24424fa8  addiu       $v0, $v0, 0x4FA8
    ctx->pc = 0x34744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20392));
    // 0x347450: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x347450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_347454:
    // 0x347454: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x347454u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x347458: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34745c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x34745Cu;
    SET_GPR_U32(ctx, 31, 0x347464u);
    ctx->pc = 0x347460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34745Cu;
    // 0x347460: 0x24a56420  addiu       $a1, $a1, 0x6420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x34745Cu, 0x347464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347464u;
label_347464:
    // 0x347464: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x347464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x347468: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x347468u;
    {
        const bool branch_taken_0x347468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347468u;
        // 0x34746c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347468) {
            ctx->pc = 0x347478u;
            goto label_347478;
        }
    }
    ctx->pc = 0x347470u;
    // 0x347470: 0x24424fb0  addiu       $v0, $v0, 0x4FB0
    ctx->pc = 0x347470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20400));
    // 0x347474: 0xae020134  sw          $v0, 0x134($s0)
    ctx->pc = 0x347474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 308), GPR_U32(ctx, 2));
label_347478:
    // 0x347478: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x347478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34747c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x34747Cu;
    SET_GPR_U32(ctx, 31, 0x347484u);
    ctx->pc = 0x347480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34747Cu;
    // 0x347480: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x34747Cu, 0x347484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x347484u;
label_347484:
    // 0x347484: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x347484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_347488:
    // 0x347488: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x347488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34748c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x34748cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x347490: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x347490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x347494: 0x3e00008  jr          $ra
    ctx->pc = 0x347494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347494u;
        // 0x347498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x347494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34749Cu;
    // 0x34749c: 0x0  nop
    ctx->pc = 0x34749cu;
    // NOP
    ctx->pc = 0x3474a0u;
}
