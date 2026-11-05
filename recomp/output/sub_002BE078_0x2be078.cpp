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

// Function: sub_002BE078
// Address: 0x2be078 - 0x2be468
void sub_002BE078_0x2be078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE078_0x2be078");
#endif

    switch (ctx->pc) {
        case 0x2be218u: goto label_2be218;
        case 0x2be230u: goto label_2be230;
        case 0x2be248u: goto label_2be248;
        case 0x2be260u: goto label_2be260;
        case 0x2be278u: goto label_2be278;
        case 0x2be290u: goto label_2be290;
        case 0x2be2a8u: goto label_2be2a8;
        case 0x2be2c0u: goto label_2be2c0;
        case 0x2be2d8u: goto label_2be2d8;
        case 0x2be2f0u: goto label_2be2f0;
        case 0x2be308u: goto label_2be308;
        case 0x2be320u: goto label_2be320;
        case 0x2be338u: goto label_2be338;
        case 0x2be350u: goto label_2be350;
        case 0x2be368u: goto label_2be368;
        case 0x2be380u: goto label_2be380;
        case 0x2be398u: goto label_2be398;
        case 0x2be3b0u: goto label_2be3b0;
        case 0x2be3c8u: goto label_2be3c8;
        case 0x2be3e0u: goto label_2be3e0;
        case 0x2be3f8u: goto label_2be3f8;
        case 0x2be410u: goto label_2be410;
        case 0x2be428u: goto label_2be428;
        case 0x2be440u: goto label_2be440;
        case 0x2be458u: goto label_2be458;
        default: break;
    }

    ctx->pc = 0x2be078u;

    // 0x2be078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be07c: 0x24022020  addiu       $v0, $zero, 0x2020
    ctx->pc = 0x2be07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8224));
    // 0x2be080: 0x10a200a9  beq         $a1, $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x2BE080u;
    {
        const bool branch_taken_0x2be080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE080u;
        // 0x2be084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be080) {
            ctx->pc = 0x2BE328u;
            goto label_2be328;
        }
    }
    ctx->pc = 0x2BE088u;
    // 0x2be088: 0x28a22021  slti        $v0, $a1, 0x2021
    ctx->pc = 0x2be088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8225) ? 1 : 0);
    // 0x2be08c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2BE08Cu;
    {
        const bool branch_taken_0x2be08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE08Cu;
        // 0x2be090: 0x24021040  addiu       $v0, $zero, 0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be08c) {
            ctx->pc = 0x2BE14Cu;
            goto label_2be14c;
        }
    }
    ctx->pc = 0x2BE094u;
    // 0x2be094: 0x10a2007a  beq         $a1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2BE094u;
    {
        const bool branch_taken_0x2be094 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE094u;
        // 0x2be098: 0x28a21041  slti        $v0, $a1, 0x1041 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4161) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be094) {
            ctx->pc = 0x2BE280u;
            goto label_2be280;
        }
    }
    ctx->pc = 0x2BE09Cu;
    // 0x2be09c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE09Cu;
    {
        const bool branch_taken_0x2be09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE09Cu;
        // 0x2be0a0: 0x24021008  addiu       $v0, $zero, 0x1008 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be09c) {
            ctx->pc = 0x2BE0E8u;
            goto label_2be0e8;
        }
    }
    ctx->pc = 0x2BE0A4u;
    // 0x2be0a4: 0x10a20064  beq         $a1, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2BE0A4u;
    {
        const bool branch_taken_0x2be0a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0A4u;
        // 0x2be0a8: 0x28a21009  slti        $v0, $a1, 0x1009 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4105) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0a4) {
            ctx->pc = 0x2BE238u;
            goto label_2be238;
        }
    }
    ctx->pc = 0x2BE0ACu;
    // 0x2be0ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE0ACu;
    {
        const bool branch_taken_0x2be0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0ACu;
        // 0x2be0b0: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0ac) {
            ctx->pc = 0x2BE0CCu;
            goto label_2be0cc;
        }
    }
    ctx->pc = 0x2BE0B4u;
    // 0x2be0b4: 0x10a20054  beq         $a1, $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2BE0B4u;
    {
        const bool branch_taken_0x2be0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0B4u;
        // 0x2be0b8: 0x24021004  addiu       $v0, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0b4) {
            ctx->pc = 0x2BE208u;
            goto label_2be208;
        }
    }
    ctx->pc = 0x2BE0BCu;
    // 0x2be0bc: 0x10a20058  beq         $a1, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2BE0BCu;
    {
        const bool branch_taken_0x2be0bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0BCu;
        // 0x2be0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0bc) {
            ctx->pc = 0x2BE220u;
            goto label_2be220;
        }
    }
    ctx->pc = 0x2BE0C4u;
    // 0x2be0c4: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x2BE0C4u;
    {
        const bool branch_taken_0x2be0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0C4u;
        // 0x2be0c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0c4) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE0CCu;
label_2be0cc:
    // 0x2be0cc: 0x24021010  addiu       $v0, $zero, 0x1010
    ctx->pc = 0x2be0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4112));
    // 0x2be0d0: 0x10a2005f  beq         $a1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x2BE0D0u;
    {
        const bool branch_taken_0x2be0d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0D0u;
        // 0x2be0d4: 0x24021020  addiu       $v0, $zero, 0x1020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0d0) {
            ctx->pc = 0x2BE250u;
            goto label_2be250;
        }
    }
    ctx->pc = 0x2BE0D8u;
    // 0x2be0d8: 0x10a20063  beq         $a1, $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x2BE0D8u;
    {
        const bool branch_taken_0x2be0d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0D8u;
        // 0x2be0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0d8) {
            ctx->pc = 0x2BE268u;
            goto label_2be268;
        }
    }
    ctx->pc = 0x2BE0E0u;
    // 0x2be0e0: 0x100000de  b           . + 4 + (0xDE << 2)
    ctx->pc = 0x2BE0E0u;
    {
        const bool branch_taken_0x2be0e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0E0u;
        // 0x2be0e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0e0) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE0E8u;
label_2be0e8:
    // 0x2be0e8: 0x24022002  addiu       $v0, $zero, 0x2002
    ctx->pc = 0x2be0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8194));
    // 0x2be0ec: 0x10a20076  beq         $a1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x2BE0ECu;
    {
        const bool branch_taken_0x2be0ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0ECu;
        // 0x2be0f0: 0x28a22003  slti        $v0, $a1, 0x2003 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8195) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0ec) {
            ctx->pc = 0x2BE2C8u;
            goto label_2be2c8;
        }
    }
    ctx->pc = 0x2BE0F4u;
    // 0x2be0f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE0F4u;
    {
        const bool branch_taken_0x2be0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0F4u;
        // 0x2be0f8: 0x24021080  addiu       $v0, $zero, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0f4) {
            ctx->pc = 0x2BE114u;
            goto label_2be114;
        }
    }
    ctx->pc = 0x2BE0FCu;
    // 0x2be0fc: 0x10a20066  beq         $a1, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x2BE0FCu;
    {
        const bool branch_taken_0x2be0fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE0FCu;
        // 0x2be100: 0x24022001  addiu       $v0, $zero, 0x2001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be0fc) {
            ctx->pc = 0x2BE298u;
            goto label_2be298;
        }
    }
    ctx->pc = 0x2BE104u;
    // 0x2be104: 0x10a2006a  beq         $a1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x2BE104u;
    {
        const bool branch_taken_0x2be104 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE104u;
        // 0x2be108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be104) {
            ctx->pc = 0x2BE2B0u;
            goto label_2be2b0;
        }
    }
    ctx->pc = 0x2BE10Cu;
    // 0x2be10c: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x2BE10Cu;
    {
        const bool branch_taken_0x2be10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE10Cu;
        // 0x2be110: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be10c) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE114u;
label_2be114:
    // 0x2be114: 0x24022008  addiu       $v0, $zero, 0x2008
    ctx->pc = 0x2be114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8200));
    // 0x2be118: 0x10a20077  beq         $a1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2BE118u;
    {
        const bool branch_taken_0x2be118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE118u;
        // 0x2be11c: 0x28a22009  slti        $v0, $a1, 0x2009 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8201) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be118) {
            ctx->pc = 0x2BE2F8u;
            goto label_2be2f8;
        }
    }
    ctx->pc = 0x2BE120u;
    // 0x2be120: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE120u;
    {
        const bool branch_taken_0x2be120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE120u;
        // 0x2be124: 0x24022004  addiu       $v0, $zero, 0x2004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be120) {
            ctx->pc = 0x2BE138u;
            goto label_2be138;
        }
    }
    ctx->pc = 0x2BE128u;
    // 0x2be128: 0x10a2006d  beq         $a1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2BE128u;
    {
        const bool branch_taken_0x2be128 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE128u;
        // 0x2be12c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be128) {
            ctx->pc = 0x2BE2E0u;
            goto label_2be2e0;
        }
    }
    ctx->pc = 0x2BE130u;
    // 0x2be130: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x2BE130u;
    {
        const bool branch_taken_0x2be130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE130u;
        // 0x2be134: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be130) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE138u;
label_2be138:
    // 0x2be138: 0x24022010  addiu       $v0, $zero, 0x2010
    ctx->pc = 0x2be138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x2be13c: 0x10a20074  beq         $a1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x2BE13Cu;
    {
        const bool branch_taken_0x2be13c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE13Cu;
        // 0x2be140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be13c) {
            ctx->pc = 0x2BE310u;
            goto label_2be310;
        }
    }
    ctx->pc = 0x2BE144u;
    // 0x2be144: 0x100000c5  b           . + 4 + (0xC5 << 2)
    ctx->pc = 0x2BE144u;
    {
        const bool branch_taken_0x2be144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE144u;
        // 0x2be148: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be144) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE14Cu;
label_2be14c:
    // 0x2be14c: 0x24024008  addiu       $v0, $zero, 0x4008
    ctx->pc = 0x2be14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16392));
    // 0x2be150: 0x10a20099  beq         $a1, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x2BE150u;
    {
        const bool branch_taken_0x2be150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE150u;
        // 0x2be154: 0x28a24009  slti        $v0, $a1, 0x4009 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16393) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be150) {
            ctx->pc = 0x2BE3B8u;
            goto label_2be3b8;
        }
    }
    ctx->pc = 0x2BE158u;
    // 0x2be158: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE158u;
    {
        const bool branch_taken_0x2be158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE158u;
        // 0x2be15c: 0x24024001  addiu       $v0, $zero, 0x4001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be158) {
            ctx->pc = 0x2BE1A4u;
            goto label_2be1a4;
        }
    }
    ctx->pc = 0x2BE160u;
    // 0x2be160: 0x10a20083  beq         $a1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x2BE160u;
    {
        const bool branch_taken_0x2be160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE160u;
        // 0x2be164: 0x28a24002  slti        $v0, $a1, 0x4002 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16386) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be160) {
            ctx->pc = 0x2BE370u;
            goto label_2be370;
        }
    }
    ctx->pc = 0x2BE168u;
    // 0x2be168: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE168u;
    {
        const bool branch_taken_0x2be168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE168u;
        // 0x2be16c: 0x24022040  addiu       $v0, $zero, 0x2040 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be168) {
            ctx->pc = 0x2BE188u;
            goto label_2be188;
        }
    }
    ctx->pc = 0x2BE170u;
    // 0x2be170: 0x10a20073  beq         $a1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x2BE170u;
    {
        const bool branch_taken_0x2be170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE170u;
        // 0x2be174: 0x24022080  addiu       $v0, $zero, 0x2080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be170) {
            ctx->pc = 0x2BE340u;
            goto label_2be340;
        }
    }
    ctx->pc = 0x2BE178u;
    // 0x2be178: 0x10a20077  beq         $a1, $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x2BE178u;
    {
        const bool branch_taken_0x2be178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE178u;
        // 0x2be17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be178) {
            ctx->pc = 0x2BE358u;
            goto label_2be358;
        }
    }
    ctx->pc = 0x2BE180u;
    // 0x2be180: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x2BE180u;
    {
        const bool branch_taken_0x2be180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE180u;
        // 0x2be184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be180) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE188u;
label_2be188:
    // 0x2be188: 0x24024002  addiu       $v0, $zero, 0x4002
    ctx->pc = 0x2be188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16386));
    // 0x2be18c: 0x10a2007e  beq         $a1, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x2BE18Cu;
    {
        const bool branch_taken_0x2be18c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE18Cu;
        // 0x2be190: 0x24024004  addiu       $v0, $zero, 0x4004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be18c) {
            ctx->pc = 0x2BE388u;
            goto label_2be388;
        }
    }
    ctx->pc = 0x2BE194u;
    // 0x2be194: 0x10a20082  beq         $a1, $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x2BE194u;
    {
        const bool branch_taken_0x2be194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE194u;
        // 0x2be198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be194) {
            ctx->pc = 0x2BE3A0u;
            goto label_2be3a0;
        }
    }
    ctx->pc = 0x2BE19Cu;
    // 0x2be19c: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x2BE19Cu;
    {
        const bool branch_taken_0x2be19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE19Cu;
        // 0x2be1a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be19c) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE1A4u;
label_2be1a4:
    // 0x2be1a4: 0x24024040  addiu       $v0, $zero, 0x4040
    ctx->pc = 0x2be1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16448));
    // 0x2be1a8: 0x10a2009b  beq         $a1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x2BE1A8u;
    {
        const bool branch_taken_0x2be1a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1A8u;
        // 0x2be1ac: 0x28a24041  slti        $v0, $a1, 0x4041 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16449) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1a8) {
            ctx->pc = 0x2BE418u;
            goto label_2be418;
        }
    }
    ctx->pc = 0x2BE1B0u;
    // 0x2be1b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BE1B0u;
    {
        const bool branch_taken_0x2be1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1B0u;
        // 0x2be1b4: 0x24024010  addiu       $v0, $zero, 0x4010 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1b0) {
            ctx->pc = 0x2BE1D0u;
            goto label_2be1d0;
        }
    }
    ctx->pc = 0x2BE1B8u;
    // 0x2be1b8: 0x10a2008b  beq         $a1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x2BE1B8u;
    {
        const bool branch_taken_0x2be1b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1B8u;
        // 0x2be1bc: 0x24024020  addiu       $v0, $zero, 0x4020 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1b8) {
            ctx->pc = 0x2BE3E8u;
            goto label_2be3e8;
        }
    }
    ctx->pc = 0x2BE1C0u;
    // 0x2be1c0: 0x10a2008f  beq         $a1, $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x2BE1C0u;
    {
        const bool branch_taken_0x2be1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1C0u;
        // 0x2be1c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1c0) {
            ctx->pc = 0x2BE400u;
            goto label_2be400;
        }
    }
    ctx->pc = 0x2BE1C8u;
    // 0x2be1c8: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2BE1C8u;
    {
        const bool branch_taken_0x2be1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1C8u;
        // 0x2be1cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1c8) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE1D0u;
label_2be1d0:
    // 0x2be1d0: 0x24024100  addiu       $v0, $zero, 0x4100
    ctx->pc = 0x2be1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16640));
    // 0x2be1d4: 0x10a2009c  beq         $a1, $v0, . + 4 + (0x9C << 2)
    ctx->pc = 0x2BE1D4u;
    {
        const bool branch_taken_0x2be1d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1D4u;
        // 0x2be1d8: 0x28a24101  slti        $v0, $a1, 0x4101 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16641) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1d4) {
            ctx->pc = 0x2BE448u;
            goto label_2be448;
        }
    }
    ctx->pc = 0x2BE1DCu;
    // 0x2be1dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BE1DCu;
    {
        const bool branch_taken_0x2be1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1DCu;
        // 0x2be1e0: 0x24024080  addiu       $v0, $zero, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1dc) {
            ctx->pc = 0x2BE1F4u;
            goto label_2be1f4;
        }
    }
    ctx->pc = 0x2BE1E4u;
    // 0x2be1e4: 0x10a20092  beq         $a1, $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x2BE1E4u;
    {
        const bool branch_taken_0x2be1e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1E4u;
        // 0x2be1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1e4) {
            ctx->pc = 0x2BE430u;
            goto label_2be430;
        }
    }
    ctx->pc = 0x2BE1ECu;
    // 0x2be1ec: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x2BE1ECu;
    {
        const bool branch_taken_0x2be1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1ECu;
        // 0x2be1f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1ec) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE1F4u;
label_2be1f4:
    // 0x2be1f4: 0x24024200  addiu       $v0, $zero, 0x4200
    ctx->pc = 0x2be1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16896));
    // 0x2be1f8: 0x10a20075  beq         $a1, $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2BE1F8u;
    {
        const bool branch_taken_0x2be1f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE1F8u;
        // 0x2be1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be1f8) {
            ctx->pc = 0x2BE3D0u;
            goto label_2be3d0;
        }
    }
    ctx->pc = 0x2BE200u;
    // 0x2be200: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x2BE200u;
    {
        const bool branch_taken_0x2be200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE200u;
        // 0x2be204: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be200) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE208u;
label_2be208:
    // 0x2be208: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be20c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be210: 0xc0f93b8  jal         func_3E4EE0
    ctx->pc = 0x2BE210u;
    SET_GPR_U32(ctx, 31, 0x2BE218u);
    ctx->pc = 0x2BE214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE210u;
    // 0x2be214: 0x24845350  addiu       $a0, $a0, 0x5350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E4EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E4EE0u, 0x2BE210u, 0x2BE218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE218u;
label_2be218:
    // 0x2be218: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x2BE218u;
    {
        const bool branch_taken_0x2be218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE218u;
        // 0x2be21c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be218) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE220u;
label_2be220:
    // 0x2be220: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be224: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be228: 0xc0f9428  jal         func_3E50A0
    ctx->pc = 0x2BE228u;
    SET_GPR_U32(ctx, 31, 0x2BE230u);
    ctx->pc = 0x2BE22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE228u;
    // 0x2be22c: 0x2484539c  addiu       $a0, $a0, 0x539C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21404));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E50A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E50A0u, 0x2BE228u, 0x2BE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE230u;
label_2be230:
    // 0x2be230: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2BE230u;
    {
        const bool branch_taken_0x2be230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE230u;
        // 0x2be234: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be230) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE238u;
label_2be238:
    // 0x2be238: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be23c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be240: 0xc0f9498  jal         func_3E5260
    ctx->pc = 0x2BE240u;
    SET_GPR_U32(ctx, 31, 0x2BE248u);
    ctx->pc = 0x2BE244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE240u;
    // 0x2be244: 0x248453e8  addiu       $a0, $a0, 0x53E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5260u, 0x2BE240u, 0x2BE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE248u;
label_2be248:
    // 0x2be248: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x2BE248u;
    {
        const bool branch_taken_0x2be248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE248u;
        // 0x2be24c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be248) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE250u;
label_2be250:
    // 0x2be250: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be254: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be258: 0xc0f9508  jal         func_3E5420
    ctx->pc = 0x2BE258u;
    SET_GPR_U32(ctx, 31, 0x2BE260u);
    ctx->pc = 0x2BE25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE258u;
    // 0x2be25c: 0x24845434  addiu       $a0, $a0, 0x5434 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21556));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5420u, 0x2BE258u, 0x2BE260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE260u;
label_2be260:
    // 0x2be260: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x2BE260u;
    {
        const bool branch_taken_0x2be260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE260u;
        // 0x2be264: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be260) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE268u;
label_2be268:
    // 0x2be268: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be26c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be270: 0xc0f9578  jal         func_3E55E0
    ctx->pc = 0x2BE270u;
    SET_GPR_U32(ctx, 31, 0x2BE278u);
    ctx->pc = 0x2BE274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE270u;
    // 0x2be274: 0x24845480  addiu       $a0, $a0, 0x5480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E55E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E55E0u, 0x2BE270u, 0x2BE278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE278u;
label_2be278:
    // 0x2be278: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x2BE278u;
    {
        const bool branch_taken_0x2be278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE278u;
        // 0x2be27c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be278) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE280u;
label_2be280:
    // 0x2be280: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be284: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be288: 0xc0f95e8  jal         func_3E57A0
    ctx->pc = 0x2BE288u;
    SET_GPR_U32(ctx, 31, 0x2BE290u);
    ctx->pc = 0x2BE28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE288u;
    // 0x2be28c: 0x248454cc  addiu       $a0, $a0, 0x54CC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21708));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E57A0u, 0x2BE288u, 0x2BE290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE290u;
label_2be290:
    // 0x2be290: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2BE290u;
    {
        const bool branch_taken_0x2be290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE290u;
        // 0x2be294: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be290) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE298u;
label_2be298:
    // 0x2be298: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be29c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be29cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be2a0: 0xc0f9658  jal         func_3E5960
    ctx->pc = 0x2BE2A0u;
    SET_GPR_U32(ctx, 31, 0x2BE2A8u);
    ctx->pc = 0x2BE2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2A0u;
    // 0x2be2a4: 0x24845518  addiu       $a0, $a0, 0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5960u, 0x2BE2A0u, 0x2BE2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2A8u;
label_2be2a8:
    // 0x2be2a8: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2BE2A8u;
    {
        const bool branch_taken_0x2be2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2A8u;
        // 0x2be2ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2a8) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE2B0u;
label_2be2b0:
    // 0x2be2b0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be2b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be2b8: 0xc0f96c8  jal         func_3E5B20
    ctx->pc = 0x2BE2B8u;
    SET_GPR_U32(ctx, 31, 0x2BE2C0u);
    ctx->pc = 0x2BE2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2B8u;
    // 0x2be2bc: 0x24845564  addiu       $a0, $a0, 0x5564 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21860));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5B20u, 0x2BE2B8u, 0x2BE2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2C0u;
label_2be2c0:
    // 0x2be2c0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2BE2C0u;
    {
        const bool branch_taken_0x2be2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2C0u;
        // 0x2be2c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2c0) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE2C8u;
label_2be2c8:
    // 0x2be2c8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be2cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be2d0: 0xc0f9738  jal         func_3E5CE0
    ctx->pc = 0x2BE2D0u;
    SET_GPR_U32(ctx, 31, 0x2BE2D8u);
    ctx->pc = 0x2BE2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2D0u;
    // 0x2be2d4: 0x248455b0  addiu       $a0, $a0, 0x55B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5CE0u, 0x2BE2D0u, 0x2BE2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2D8u;
label_2be2d8:
    // 0x2be2d8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x2BE2D8u;
    {
        const bool branch_taken_0x2be2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2D8u;
        // 0x2be2dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2d8) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE2E0u;
label_2be2e0:
    // 0x2be2e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be2e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be2e8: 0xc0f97a8  jal         func_3E5EA0
    ctx->pc = 0x2BE2E8u;
    SET_GPR_U32(ctx, 31, 0x2BE2F0u);
    ctx->pc = 0x2BE2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE2E8u;
    // 0x2be2ec: 0x248455fc  addiu       $a0, $a0, 0x55FC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22012));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5EA0u, 0x2BE2E8u, 0x2BE2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE2F0u;
label_2be2f0:
    // 0x2be2f0: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x2BE2F0u;
    {
        const bool branch_taken_0x2be2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE2F0u;
        // 0x2be2f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be2f0) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE2F8u;
label_2be2f8:
    // 0x2be2f8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be2fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be300: 0xc0f9818  jal         func_3E6060
    ctx->pc = 0x2BE300u;
    SET_GPR_U32(ctx, 31, 0x2BE308u);
    ctx->pc = 0x2BE304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE300u;
    // 0x2be304: 0x24845648  addiu       $a0, $a0, 0x5648 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6060u, 0x2BE300u, 0x2BE308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE308u;
label_2be308:
    // 0x2be308: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2BE308u;
    {
        const bool branch_taken_0x2be308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE308u;
        // 0x2be30c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be308) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE310u;
label_2be310:
    // 0x2be310: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be314: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be318: 0xc0f9888  jal         func_3E6220
    ctx->pc = 0x2BE318u;
    SET_GPR_U32(ctx, 31, 0x2BE320u);
    ctx->pc = 0x2BE31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE318u;
    // 0x2be31c: 0x24845694  addiu       $a0, $a0, 0x5694 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6220u, 0x2BE318u, 0x2BE320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE320u;
label_2be320:
    // 0x2be320: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2BE320u;
    {
        const bool branch_taken_0x2be320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE320u;
        // 0x2be324: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be320) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE328u;
label_2be328:
    // 0x2be328: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be32c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be330: 0xc0f98f8  jal         func_3E63E0
    ctx->pc = 0x2BE330u;
    SET_GPR_U32(ctx, 31, 0x2BE338u);
    ctx->pc = 0x2BE334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE330u;
    // 0x2be334: 0x248456e0  addiu       $a0, $a0, 0x56E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E63E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E63E0u, 0x2BE330u, 0x2BE338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE338u;
label_2be338:
    // 0x2be338: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x2BE338u;
    {
        const bool branch_taken_0x2be338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE338u;
        // 0x2be33c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be338) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE340u;
label_2be340:
    // 0x2be340: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be344: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be348: 0xc0f9968  jal         func_3E65A0
    ctx->pc = 0x2BE348u;
    SET_GPR_U32(ctx, 31, 0x2BE350u);
    ctx->pc = 0x2BE34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE348u;
    // 0x2be34c: 0x2484572c  addiu       $a0, $a0, 0x572C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E65A0u, 0x2BE348u, 0x2BE350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE350u;
label_2be350:
    // 0x2be350: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2BE350u;
    {
        const bool branch_taken_0x2be350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE350u;
        // 0x2be354: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be350) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE358u;
label_2be358:
    // 0x2be358: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be358u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be35c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be360: 0xc0f99d8  jal         func_3E6760
    ctx->pc = 0x2BE360u;
    SET_GPR_U32(ctx, 31, 0x2BE368u);
    ctx->pc = 0x2BE364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE360u;
    // 0x2be364: 0x24845778  addiu       $a0, $a0, 0x5778 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6760u, 0x2BE360u, 0x2BE368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE368u;
label_2be368:
    // 0x2be368: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2BE368u;
    {
        const bool branch_taken_0x2be368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE368u;
        // 0x2be36c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be368) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE370u;
label_2be370:
    // 0x2be370: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be370u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be378: 0xc0f9a48  jal         func_3E6920
    ctx->pc = 0x2BE378u;
    SET_GPR_U32(ctx, 31, 0x2BE380u);
    ctx->pc = 0x2BE37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE378u;
    // 0x2be37c: 0x248457c4  addiu       $a0, $a0, 0x57C4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6920u, 0x2BE378u, 0x2BE380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE380u;
label_2be380:
    // 0x2be380: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2BE380u;
    {
        const bool branch_taken_0x2be380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE380u;
        // 0x2be384: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be380) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE388u;
label_2be388:
    // 0x2be388: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be38c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be390: 0xc0f9ab8  jal         func_3E6AE0
    ctx->pc = 0x2BE390u;
    SET_GPR_U32(ctx, 31, 0x2BE398u);
    ctx->pc = 0x2BE394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE390u;
    // 0x2be394: 0x24845810  addiu       $a0, $a0, 0x5810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6AE0u, 0x2BE390u, 0x2BE398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE398u;
label_2be398:
    // 0x2be398: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2BE398u;
    {
        const bool branch_taken_0x2be398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE398u;
        // 0x2be39c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be398) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE3A0u;
label_2be3a0:
    // 0x2be3a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be3a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be3a8: 0xc0f9b28  jal         func_3E6CA0
    ctx->pc = 0x2BE3A8u;
    SET_GPR_U32(ctx, 31, 0x2BE3B0u);
    ctx->pc = 0x2BE3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3A8u;
    // 0x2be3ac: 0x2484585c  addiu       $a0, $a0, 0x585C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6CA0u, 0x2BE3A8u, 0x2BE3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3B0u;
label_2be3b0:
    // 0x2be3b0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2BE3B0u;
    {
        const bool branch_taken_0x2be3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3B0u;
        // 0x2be3b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3b0) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE3B8u;
label_2be3b8:
    // 0x2be3b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be3bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be3c0: 0xc0f9b98  jal         func_3E6E60
    ctx->pc = 0x2BE3C0u;
    SET_GPR_U32(ctx, 31, 0x2BE3C8u);
    ctx->pc = 0x2BE3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3C0u;
    // 0x2be3c4: 0x248458a8  addiu       $a0, $a0, 0x58A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E6E60u, 0x2BE3C0u, 0x2BE3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3C8u;
label_2be3c8:
    // 0x2be3c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2BE3C8u;
    {
        const bool branch_taken_0x2be3c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3C8u;
        // 0x2be3cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3c8) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE3D0u;
label_2be3d0:
    // 0x2be3d0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be3d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be3d8: 0xc0f9c08  jal         func_3E7020
    ctx->pc = 0x2BE3D8u;
    SET_GPR_U32(ctx, 31, 0x2BE3E0u);
    ctx->pc = 0x2BE3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3D8u;
    // 0x2be3dc: 0x248458f4  addiu       $a0, $a0, 0x58F4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7020u, 0x2BE3D8u, 0x2BE3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3E0u;
label_2be3e0:
    // 0x2be3e0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2BE3E0u;
    {
        const bool branch_taken_0x2be3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3E0u;
        // 0x2be3e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3e0) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE3E8u;
label_2be3e8:
    // 0x2be3e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be3ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be3f0: 0xc0f9c78  jal         func_3E71E0
    ctx->pc = 0x2BE3F0u;
    SET_GPR_U32(ctx, 31, 0x2BE3F8u);
    ctx->pc = 0x2BE3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE3F0u;
    // 0x2be3f4: 0x24845940  addiu       $a0, $a0, 0x5940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E71E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E71E0u, 0x2BE3F0u, 0x2BE3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE3F8u;
label_2be3f8:
    // 0x2be3f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2BE3F8u;
    {
        const bool branch_taken_0x2be3f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE3F8u;
        // 0x2be3fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be3f8) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE400u;
label_2be400:
    // 0x2be400: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be404: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be408: 0xc0f9ce8  jal         func_3E73A0
    ctx->pc = 0x2BE408u;
    SET_GPR_U32(ctx, 31, 0x2BE410u);
    ctx->pc = 0x2BE40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE408u;
    // 0x2be40c: 0x2484598c  addiu       $a0, $a0, 0x598C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22924));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E73A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E73A0u, 0x2BE408u, 0x2BE410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE410u;
label_2be410:
    // 0x2be410: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BE410u;
    {
        const bool branch_taken_0x2be410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE410u;
        // 0x2be414: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be410) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE418u;
label_2be418:
    // 0x2be418: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be418u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be41c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be420: 0xc0f9d58  jal         func_3E7560
    ctx->pc = 0x2BE420u;
    SET_GPR_U32(ctx, 31, 0x2BE428u);
    ctx->pc = 0x2BE424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE420u;
    // 0x2be424: 0x248459d8  addiu       $a0, $a0, 0x59D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7560u, 0x2BE420u, 0x2BE428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE428u;
label_2be428:
    // 0x2be428: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BE428u;
    {
        const bool branch_taken_0x2be428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE428u;
        // 0x2be42c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be428) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE430u;
label_2be430:
    // 0x2be430: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be434: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be438: 0xc0f9dc8  jal         func_3E7720
    ctx->pc = 0x2BE438u;
    SET_GPR_U32(ctx, 31, 0x2BE440u);
    ctx->pc = 0x2BE43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE438u;
    // 0x2be43c: 0x24845a24  addiu       $a0, $a0, 0x5A24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23076));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7720u, 0x2BE438u, 0x2BE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE440u;
label_2be440:
    // 0x2be440: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BE440u;
    {
        const bool branch_taken_0x2be440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BE444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE440u;
        // 0x2be444: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be440) {
            ctx->pc = 0x2BE45Cu;
            goto label_2be45c;
        }
    }
    ctx->pc = 0x2BE448u;
label_2be448:
    // 0x2be448: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2be448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2be44c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2be44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2be450: 0xc0f9e38  jal         func_3E78E0
    ctx->pc = 0x2BE450u;
    SET_GPR_U32(ctx, 31, 0x2BE458u);
    ctx->pc = 0x2BE454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BE450u;
    // 0x2be454: 0x24845a70  addiu       $a0, $a0, 0x5A70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E78E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E78E0u, 0x2BE450u, 0x2BE458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE458u;
label_2be458:
    // 0x2be458: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2be45c:
    // 0x2be45c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE45Cu;
        // 0x2be460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE464u;
    // 0x2be464: 0x0  nop
    ctx->pc = 0x2be464u;
    // NOP
    ctx->pc = 0x2be468u;
}
