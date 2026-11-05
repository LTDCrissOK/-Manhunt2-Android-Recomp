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

// Function: sub_003950B8
// Address: 0x3950b8 - 0x3953d0
void sub_003950B8_0x3950b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003950B8_0x3950b8");
#endif

    switch (ctx->pc) {
        case 0x3950b8u: goto label_3950b8;
        case 0x3950bcu: goto label_3950bc;
        case 0x3950c0u: goto label_3950c0;
        case 0x3950c4u: goto label_3950c4;
        case 0x3950c8u: goto label_3950c8;
        case 0x3950ccu: goto label_3950cc;
        case 0x3950d0u: goto label_3950d0;
        case 0x3950d4u: goto label_3950d4;
        case 0x3950d8u: goto label_3950d8;
        case 0x3950dcu: goto label_3950dc;
        case 0x3950e0u: goto label_3950e0;
        case 0x3950e4u: goto label_3950e4;
        case 0x3950e8u: goto label_3950e8;
        case 0x3950ecu: goto label_3950ec;
        case 0x3950f0u: goto label_3950f0;
        case 0x3950f4u: goto label_3950f4;
        case 0x3950f8u: goto label_3950f8;
        case 0x3950fcu: goto label_3950fc;
        case 0x395100u: goto label_395100;
        case 0x395104u: goto label_395104;
        case 0x395108u: goto label_395108;
        case 0x39510cu: goto label_39510c;
        case 0x395110u: goto label_395110;
        case 0x395114u: goto label_395114;
        case 0x395118u: goto label_395118;
        case 0x39511cu: goto label_39511c;
        case 0x395120u: goto label_395120;
        case 0x395124u: goto label_395124;
        case 0x395128u: goto label_395128;
        case 0x39512cu: goto label_39512c;
        case 0x395130u: goto label_395130;
        case 0x395134u: goto label_395134;
        case 0x395138u: goto label_395138;
        case 0x39513cu: goto label_39513c;
        case 0x395140u: goto label_395140;
        case 0x395144u: goto label_395144;
        case 0x395148u: goto label_395148;
        case 0x39514cu: goto label_39514c;
        case 0x395150u: goto label_395150;
        case 0x395154u: goto label_395154;
        case 0x395158u: goto label_395158;
        case 0x39515cu: goto label_39515c;
        case 0x395160u: goto label_395160;
        case 0x395164u: goto label_395164;
        case 0x395168u: goto label_395168;
        case 0x39516cu: goto label_39516c;
        case 0x395170u: goto label_395170;
        case 0x395174u: goto label_395174;
        case 0x395178u: goto label_395178;
        case 0x39517cu: goto label_39517c;
        case 0x395180u: goto label_395180;
        case 0x395184u: goto label_395184;
        case 0x395188u: goto label_395188;
        case 0x39518cu: goto label_39518c;
        case 0x395190u: goto label_395190;
        case 0x395194u: goto label_395194;
        case 0x395198u: goto label_395198;
        case 0x39519cu: goto label_39519c;
        case 0x3951a0u: goto label_3951a0;
        case 0x3951a4u: goto label_3951a4;
        case 0x3951a8u: goto label_3951a8;
        case 0x3951acu: goto label_3951ac;
        case 0x3951b0u: goto label_3951b0;
        case 0x3951b4u: goto label_3951b4;
        case 0x3951b8u: goto label_3951b8;
        case 0x3951bcu: goto label_3951bc;
        case 0x3951c0u: goto label_3951c0;
        case 0x3951c4u: goto label_3951c4;
        case 0x3951c8u: goto label_3951c8;
        case 0x3951ccu: goto label_3951cc;
        case 0x3951d0u: goto label_3951d0;
        case 0x3951d4u: goto label_3951d4;
        case 0x3951d8u: goto label_3951d8;
        case 0x3951dcu: goto label_3951dc;
        case 0x3951e0u: goto label_3951e0;
        case 0x3951e4u: goto label_3951e4;
        case 0x3951e8u: goto label_3951e8;
        case 0x3951ecu: goto label_3951ec;
        case 0x3951f0u: goto label_3951f0;
        case 0x3951f4u: goto label_3951f4;
        case 0x3951f8u: goto label_3951f8;
        case 0x3951fcu: goto label_3951fc;
        case 0x395200u: goto label_395200;
        case 0x395204u: goto label_395204;
        case 0x395208u: goto label_395208;
        case 0x39520cu: goto label_39520c;
        case 0x395210u: goto label_395210;
        case 0x395214u: goto label_395214;
        case 0x395218u: goto label_395218;
        case 0x39521cu: goto label_39521c;
        case 0x395220u: goto label_395220;
        case 0x395224u: goto label_395224;
        case 0x395228u: goto label_395228;
        case 0x39522cu: goto label_39522c;
        case 0x395230u: goto label_395230;
        case 0x395234u: goto label_395234;
        case 0x395238u: goto label_395238;
        case 0x39523cu: goto label_39523c;
        case 0x395240u: goto label_395240;
        case 0x395244u: goto label_395244;
        case 0x395248u: goto label_395248;
        case 0x39524cu: goto label_39524c;
        case 0x395250u: goto label_395250;
        case 0x395254u: goto label_395254;
        case 0x395258u: goto label_395258;
        case 0x39525cu: goto label_39525c;
        case 0x395260u: goto label_395260;
        case 0x395264u: goto label_395264;
        case 0x395268u: goto label_395268;
        case 0x39526cu: goto label_39526c;
        case 0x395270u: goto label_395270;
        case 0x395274u: goto label_395274;
        case 0x395278u: goto label_395278;
        case 0x39527cu: goto label_39527c;
        case 0x395280u: goto label_395280;
        case 0x395284u: goto label_395284;
        case 0x395288u: goto label_395288;
        case 0x39528cu: goto label_39528c;
        case 0x395290u: goto label_395290;
        case 0x395294u: goto label_395294;
        case 0x395298u: goto label_395298;
        case 0x39529cu: goto label_39529c;
        case 0x3952a0u: goto label_3952a0;
        case 0x3952a4u: goto label_3952a4;
        case 0x3952a8u: goto label_3952a8;
        case 0x3952acu: goto label_3952ac;
        case 0x3952b0u: goto label_3952b0;
        case 0x3952b4u: goto label_3952b4;
        case 0x3952b8u: goto label_3952b8;
        case 0x3952bcu: goto label_3952bc;
        case 0x3952c0u: goto label_3952c0;
        case 0x3952c4u: goto label_3952c4;
        case 0x3952c8u: goto label_3952c8;
        case 0x3952ccu: goto label_3952cc;
        case 0x3952d0u: goto label_3952d0;
        case 0x3952d4u: goto label_3952d4;
        case 0x3952d8u: goto label_3952d8;
        case 0x3952dcu: goto label_3952dc;
        case 0x3952e0u: goto label_3952e0;
        case 0x3952e4u: goto label_3952e4;
        case 0x3952e8u: goto label_3952e8;
        case 0x3952ecu: goto label_3952ec;
        case 0x3952f0u: goto label_3952f0;
        case 0x3952f4u: goto label_3952f4;
        case 0x3952f8u: goto label_3952f8;
        case 0x3952fcu: goto label_3952fc;
        case 0x395300u: goto label_395300;
        case 0x395304u: goto label_395304;
        case 0x395308u: goto label_395308;
        case 0x39530cu: goto label_39530c;
        case 0x395310u: goto label_395310;
        case 0x395314u: goto label_395314;
        case 0x395318u: goto label_395318;
        case 0x39531cu: goto label_39531c;
        case 0x395320u: goto label_395320;
        case 0x395324u: goto label_395324;
        case 0x395328u: goto label_395328;
        case 0x39532cu: goto label_39532c;
        case 0x395330u: goto label_395330;
        case 0x395334u: goto label_395334;
        case 0x395338u: goto label_395338;
        case 0x39533cu: goto label_39533c;
        case 0x395340u: goto label_395340;
        case 0x395344u: goto label_395344;
        case 0x395348u: goto label_395348;
        case 0x39534cu: goto label_39534c;
        case 0x395350u: goto label_395350;
        case 0x395354u: goto label_395354;
        case 0x395358u: goto label_395358;
        case 0x39535cu: goto label_39535c;
        case 0x395360u: goto label_395360;
        case 0x395364u: goto label_395364;
        case 0x395368u: goto label_395368;
        case 0x39536cu: goto label_39536c;
        case 0x395370u: goto label_395370;
        case 0x395374u: goto label_395374;
        case 0x395378u: goto label_395378;
        case 0x39537cu: goto label_39537c;
        case 0x395380u: goto label_395380;
        case 0x395384u: goto label_395384;
        case 0x395388u: goto label_395388;
        case 0x39538cu: goto label_39538c;
        case 0x395390u: goto label_395390;
        case 0x395394u: goto label_395394;
        case 0x395398u: goto label_395398;
        case 0x39539cu: goto label_39539c;
        case 0x3953a0u: goto label_3953a0;
        case 0x3953a4u: goto label_3953a4;
        case 0x3953a8u: goto label_3953a8;
        case 0x3953acu: goto label_3953ac;
        case 0x3953b0u: goto label_3953b0;
        case 0x3953b4u: goto label_3953b4;
        case 0x3953b8u: goto label_3953b8;
        case 0x3953bcu: goto label_3953bc;
        case 0x3953c0u: goto label_3953c0;
        case 0x3953c4u: goto label_3953c4;
        case 0x3953c8u: goto label_3953c8;
        case 0x3953ccu: goto label_3953cc;
        default: break;
    }

    ctx->pc = 0x3950b8u;

label_3950b8:
    // 0x3950b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3950b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3950bc:
    // 0x3950bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3950bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3950c0:
    // 0x3950c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3950c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3950c4:
    // 0x3950c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3950c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3950c8:
    // 0x3950c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3950c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3950cc:
    // 0x3950cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3950ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3950d0:
    // 0x3950d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3950d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3950d4:
    // 0x3950d4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3950d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3950d8:
    // 0x3950d8: 0xc0e66ac  jal         func_399AB0
label_3950dc:
    if (ctx->pc == 0x3950DCu) {
        ctx->pc = 0x3950DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950D8u;
        // 0x3950dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3950E0u;
        goto label_3950e0;
    }
    ctx->pc = 0x3950D8u;
    SET_GPR_U32(ctx, 31, 0x3950E0u);
    ctx->pc = 0x3950DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3950D8u;
    // 0x3950dc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AB0u, 0x3950D8u, 0x3950E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3950E0u;
label_3950e0:
    // 0x3950e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3950e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3950e4:
    // 0x3950e4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_3950e8:
    if (ctx->pc == 0x3950E8u) {
        ctx->pc = 0x3950ECu;
        goto label_3950ec;
    }
    ctx->pc = 0x3950E4u;
    {
        const bool branch_taken_0x3950e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3950e4) {
            ctx->pc = 0x3950F4u;
            goto label_3950f4;
        }
    }
    ctx->pc = 0x3950ECu;
label_3950ec:
    // 0x3950ec: 0xc0e6760  jal         func_399D80
label_3950f0:
    if (ctx->pc == 0x3950F0u) {
        ctx->pc = 0x3950F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3950ECu;
        // 0x3950f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3950F4u;
        goto label_3950f4;
    }
    ctx->pc = 0x3950ECu;
    SET_GPR_U32(ctx, 31, 0x3950F4u);
    ctx->pc = 0x3950F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3950ECu;
    // 0x3950f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399D80u, 0x3950ECu, 0x3950F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3950F4u;
label_3950f4:
    // 0x3950f4: 0xc0ebe50  jal         func_3AF940
label_3950f8:
    if (ctx->pc == 0x3950F8u) {
        ctx->pc = 0x3950FCu;
        goto label_3950fc;
    }
    ctx->pc = 0x3950F4u;
    SET_GPR_U32(ctx, 31, 0x3950FCu);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x3950F4u, 0x3950FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3950FCu;
label_3950fc:
    // 0x3950fc: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x3950fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_395100:
    // 0x395100: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x395100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_395104:
    // 0x395104: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x395104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_395108:
    // 0x395108: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x395108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_39510c:
    // 0x39510c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x39510cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_395110:
    // 0x395110: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x395110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_395114:
    // 0x395114: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x395114u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_395118:
    // 0x395118: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x395118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_39511c:
    // 0x39511c: 0x224100b  movn        $v0, $s1, $a0
    ctx->pc = 0x39511cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 17));
label_395120:
    // 0x395120: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x395120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_395124:
    // 0x395124: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_395128:
    if (ctx->pc == 0x395128u) {
        ctx->pc = 0x395128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395124u;
        // 0x395128: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39512Cu;
        goto label_39512c;
    }
    ctx->pc = 0x395124u;
    {
        const bool branch_taken_0x395124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x395128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395124u;
        // 0x395128: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395124) {
            ctx->pc = 0x395140u;
            goto label_395140;
        }
    }
    ctx->pc = 0x39512Cu;
label_39512c:
    // 0x39512c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x39512cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_395130:
    // 0x395130: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x395130u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_395134:
    // 0x395134: 0x10000017  b           . + 4 + (0x17 << 2)
label_395138:
    if (ctx->pc == 0x395138u) {
        ctx->pc = 0x395138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395134u;
        // 0x395138: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39513Cu;
        goto label_39513c;
    }
    ctx->pc = 0x395134u;
    {
        const bool branch_taken_0x395134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395134u;
        // 0x395138: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395134) {
            ctx->pc = 0x395194u;
            goto label_395194;
        }
    }
    ctx->pc = 0x39513Cu;
label_39513c:
    // 0x39513c: 0x0  nop
    ctx->pc = 0x39513cu;
    // NOP
label_395140:
    // 0x395140: 0xc0e6798  jal         func_399E60
label_395144:
    if (ctx->pc == 0x395144u) {
        ctx->pc = 0x395144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395140u;
        // 0x395144: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395148u;
        goto label_395148;
    }
    ctx->pc = 0x395140u;
    SET_GPR_U32(ctx, 31, 0x395148u);
    ctx->pc = 0x395144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395140u;
    // 0x395144: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x395140u, 0x395148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395148u;
label_395148:
    // 0x395148: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x395148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39514c:
    // 0x39514c: 0xc0e6a20  jal         func_39A880
label_395150:
    if (ctx->pc == 0x395150u) {
        ctx->pc = 0x395150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39514Cu;
        // 0x395150: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395154u;
        goto label_395154;
    }
    ctx->pc = 0x39514Cu;
    SET_GPR_U32(ctx, 31, 0x395154u);
    ctx->pc = 0x395150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39514Cu;
    // 0x395150: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A880u, 0x39514Cu, 0x395154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395154u;
label_395154:
    // 0x395154: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x395154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_395158:
    // 0x395158: 0xc0e69dc  jal         func_39A770
label_39515c:
    if (ctx->pc == 0x39515Cu) {
        ctx->pc = 0x39515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395158u;
        // 0x39515c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395160u;
        goto label_395160;
    }
    ctx->pc = 0x395158u;
    SET_GPR_U32(ctx, 31, 0x395160u);
    ctx->pc = 0x39515Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395158u;
    // 0x39515c: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A770u, 0x395158u, 0x395160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395160u;
label_395160:
    // 0x395160: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x395160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395164:
    // 0x395164: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x395164u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_395168:
    // 0x395168: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x395168u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39516c:
    // 0x39516c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39516cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_395170:
    // 0x395170: 0xc0e6a08  jal         func_39A820
label_395174:
    if (ctx->pc == 0x395174u) {
        ctx->pc = 0x395174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395170u;
        // 0x395174: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395178u;
        goto label_395178;
    }
    ctx->pc = 0x395170u;
    SET_GPR_U32(ctx, 31, 0x395178u);
    ctx->pc = 0x395174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395170u;
    // 0x395174: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A820u, 0x395170u, 0x395178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395178u;
label_395178:
    // 0x395178: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x395178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39517c:
    // 0x39517c: 0xc0e66bc  jal         func_399AF0
label_395180:
    if (ctx->pc == 0x395180u) {
        ctx->pc = 0x395180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39517Cu;
        // 0x395180: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395184u;
        goto label_395184;
    }
    ctx->pc = 0x39517Cu;
    SET_GPR_U32(ctx, 31, 0x395184u);
    ctx->pc = 0x395180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39517Cu;
    // 0x395180: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x39517Cu, 0x395184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395184u;
label_395184:
    // 0x395184: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x395184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_395188:
    // 0x395188: 0xc0e6716  jal         func_399C58
label_39518c:
    if (ctx->pc == 0x39518Cu) {
        ctx->pc = 0x39518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395188u;
        // 0x39518c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395190u;
        goto label_395190;
    }
    ctx->pc = 0x395188u;
    SET_GPR_U32(ctx, 31, 0x395190u);
    ctx->pc = 0x39518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395188u;
    // 0x39518c: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399C58u, 0x395188u, 0x395190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395190u;
label_395190:
    // 0x395190: 0x8e100018  lw          $s0, 0x18($s0)
    ctx->pc = 0x395190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_395194:
    // 0x395194: 0xc0ebe56  jal         func_3AF958
label_395198:
    if (ctx->pc == 0x395198u) {
        ctx->pc = 0x39519Cu;
        goto label_39519c;
    }
    ctx->pc = 0x395194u;
    SET_GPR_U32(ctx, 31, 0x39519Cu);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x395194u, 0x39519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39519Cu;
label_39519c:
    // 0x39519c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39519cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3951a0:
    // 0x3951a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3951a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3951a4:
    // 0x3951a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3951a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3951a8:
    // 0x3951a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3951a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3951ac:
    // 0x3951ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3951acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3951b0:
    // 0x3951b0: 0x3e00008  jr          $ra
label_3951b4:
    if (ctx->pc == 0x3951B4u) {
        ctx->pc = 0x3951B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951B0u;
        // 0x3951b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3951B8u;
        goto label_3951b8;
    }
    ctx->pc = 0x3951B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3951B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3951B0u;
        // 0x3951b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3951B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3951B8u;
label_3951b8:
    // 0x3951b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3951b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3951bc:
    // 0x3951bc: 0x0  nop
    ctx->pc = 0x3951bcu;
    // NOP
label_3951c0:
    // 0x3951c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3951c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3951c4:
    // 0x3951c4: 0x0  nop
    ctx->pc = 0x3951c4u;
    // NOP
label_3951c8:
    // 0x3951c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3951c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3951cc:
    // 0x3951cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3951ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3951d0:
    // 0x3951d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3951d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3951d4:
    // 0x3951d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3951d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3951d8:
    // 0x3951d8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3951d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3951dc:
    // 0x3951dc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3951dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3951e0:
    // 0x3951e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3951e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3951e4:
    // 0x3951e4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3951e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3951e8:
    // 0x3951e8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3951e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3951ec:
    // 0x3951ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3951ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3951f0:
    // 0x3951f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3951f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3951f4:
    // 0x3951f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3951f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3951f8:
    // 0x3951f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3951f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3951fc:
    // 0x3951fc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3951fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_395200:
    // 0x395200: 0xc0e4fb8  jal         func_393EE0
label_395204:
    if (ctx->pc == 0x395204u) {
        ctx->pc = 0x395204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395200u;
        // 0x395204: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395208u;
        goto label_395208;
    }
    ctx->pc = 0x395200u;
    SET_GPR_U32(ctx, 31, 0x395208u);
    ctx->pc = 0x395204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395200u;
    // 0x395204: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x395200u, 0x395208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395208u;
label_395208:
    // 0x395208: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_39520c:
    if (ctx->pc == 0x39520Cu) {
        ctx->pc = 0x39520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395208u;
        // 0x39520c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395210u;
        goto label_395210;
    }
    ctx->pc = 0x395208u;
    {
        const bool branch_taken_0x395208 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395208u;
        // 0x39520c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395208) {
            ctx->pc = 0x395218u;
            goto label_395218;
        }
    }
    ctx->pc = 0x395210u;
label_395210:
    // 0x395210: 0x10000011  b           . + 4 + (0x11 << 2)
label_395214:
    if (ctx->pc == 0x395214u) {
        ctx->pc = 0x395214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395210u;
        // 0x395214: 0x2484a938  addiu       $a0, $a0, -0x56C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395218u;
        goto label_395218;
    }
    ctx->pc = 0x395210u;
    {
        const bool branch_taken_0x395210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395210u;
        // 0x395214: 0x2484a938  addiu       $a0, $a0, -0x56C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395210) {
            ctx->pc = 0x395258u;
            goto label_395258;
        }
    }
    ctx->pc = 0x395218u;
label_395218:
    // 0x395218: 0x6810005  bgez        $s4, . + 4 + (0x5 << 2)
label_39521c:
    if (ctx->pc == 0x39521Cu) {
        ctx->pc = 0x39521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395218u;
        // 0x39521c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395220u;
        goto label_395220;
    }
    ctx->pc = 0x395218u;
    {
        const bool branch_taken_0x395218 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x39521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395218u;
        // 0x39521c: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395218) {
            ctx->pc = 0x395230u;
            goto label_395230;
        }
    }
    ctx->pc = 0x395220u;
label_395220:
    // 0x395220: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_395224:
    // 0x395224: 0x1000000c  b           . + 4 + (0xC << 2)
label_395228:
    if (ctx->pc == 0x395228u) {
        ctx->pc = 0x395228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395224u;
        // 0x395228: 0x2484a960  addiu       $a0, $a0, -0x56A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39522Cu;
        goto label_39522c;
    }
    ctx->pc = 0x395224u;
    {
        const bool branch_taken_0x395224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395224u;
        // 0x395228: 0x2484a960  addiu       $a0, $a0, -0x56A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395224) {
            ctx->pc = 0x395258u;
            goto label_395258;
        }
    }
    ctx->pc = 0x39522Cu;
label_39522c:
    // 0x39522c: 0x0  nop
    ctx->pc = 0x39522cu;
    // NOP
label_395230:
    // 0x395230: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x395230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_395234:
    // 0x395234: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x395234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_395238:
    // 0x395238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39523c:
    if (ctx->pc == 0x39523Cu) {
        ctx->pc = 0x39523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395238u;
        // 0x39523c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395240u;
        goto label_395240;
    }
    ctx->pc = 0x395238u;
    {
        const bool branch_taken_0x395238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395238u;
        // 0x39523c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395238) {
            ctx->pc = 0x395248u;
            goto label_395248;
        }
    }
    ctx->pc = 0x395240u;
label_395240:
    // 0x395240: 0x10000005  b           . + 4 + (0x5 << 2)
label_395244:
    if (ctx->pc == 0x395244u) {
        ctx->pc = 0x395244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395240u;
        // 0x395244: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395248u;
        goto label_395248;
    }
    ctx->pc = 0x395240u;
    {
        const bool branch_taken_0x395240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395240u;
        // 0x395244: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395240) {
            ctx->pc = 0x395258u;
            goto label_395258;
        }
    }
    ctx->pc = 0x395248u;
label_395248:
    // 0x395248: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_39524c:
    if (ctx->pc == 0x39524Cu) {
        ctx->pc = 0x39524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395248u;
        // 0x39524c: 0x82240001  lb          $a0, 0x1($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395250u;
        goto label_395250;
    }
    ctx->pc = 0x395248u;
    {
        const bool branch_taken_0x395248 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x395248) {
            ctx->pc = 0x39524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395248u;
            // 0x39524c: 0x82240001  lb          $a0, 0x1($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395268u;
            goto label_395268;
        }
    }
    ctx->pc = 0x395250u;
label_395250:
    // 0x395250: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x395250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_395254:
    // 0x395254: 0x2484a9c0  addiu       $a0, $a0, -0x5640
    ctx->pc = 0x395254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
label_395258:
    // 0x395258: 0xc0ec0fe  jal         func_3B03F8
label_39525c:
    if (ctx->pc == 0x39525Cu) {
        ctx->pc = 0x395260u;
        goto label_395260;
    }
    ctx->pc = 0x395258u;
    SET_GPR_U32(ctx, 31, 0x395260u);
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x395258u, 0x395260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395260u;
label_395260:
    // 0x395260: 0x10000053  b           . + 4 + (0x53 << 2)
label_395264:
    if (ctx->pc == 0x395264u) {
        ctx->pc = 0x395264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395260u;
        // 0x395264: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395268u;
        goto label_395268;
    }
    ctx->pc = 0x395260u;
    {
        const bool branch_taken_0x395260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395260u;
        // 0x395264: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395260) {
            ctx->pc = 0x3953B0u;
            goto label_3953b0;
        }
    }
    ctx->pc = 0x395268u;
label_395268:
    // 0x395268: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x395268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39526c:
    // 0x39526c: 0x10830050  beq         $a0, $v1, . + 4 + (0x50 << 2)
label_395270:
    if (ctx->pc == 0x395270u) {
        ctx->pc = 0x395270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39526Cu;
        // 0x395270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395274u;
        goto label_395274;
    }
    ctx->pc = 0x39526Cu;
    {
        const bool branch_taken_0x39526c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x395270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39526Cu;
        // 0x395270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39526c) {
            ctx->pc = 0x3953B0u;
            goto label_3953b0;
        }
    }
    ctx->pc = 0x395274u;
label_395274:
    // 0x395274: 0xc0ebe50  jal         func_3AF940
label_395278:
    if (ctx->pc == 0x395278u) {
        ctx->pc = 0x39527Cu;
        goto label_39527c;
    }
    ctx->pc = 0x395274u;
    SET_GPR_U32(ctx, 31, 0x39527Cu);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x395274u, 0x39527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39527Cu;
label_39527c:
    // 0x39527c: 0xc0e66a4  jal         func_399A90
label_395280:
    if (ctx->pc == 0x395280u) {
        ctx->pc = 0x395280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39527Cu;
        // 0x395280: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395284u;
        goto label_395284;
    }
    ctx->pc = 0x39527Cu;
    SET_GPR_U32(ctx, 31, 0x395284u);
    ctx->pc = 0x395280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39527Cu;
    // 0x395280: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399A90u, 0x39527Cu, 0x395284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395284u;
label_395284:
    // 0x395284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x395284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_395288:
    // 0x395288: 0xc0e52f0  jal         func_394BC0
label_39528c:
    if (ctx->pc == 0x39528Cu) {
        ctx->pc = 0x39528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395288u;
        // 0x39528c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395290u;
        goto label_395290;
    }
    ctx->pc = 0x395288u;
    SET_GPR_U32(ctx, 31, 0x395290u);
    ctx->pc = 0x39528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395288u;
    // 0x39528c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394BC0u, 0x395288u, 0x395290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395290u;
label_395290:
    // 0x395290: 0xc0ebe56  jal         func_3AF958
label_395294:
    if (ctx->pc == 0x395294u) {
        ctx->pc = 0x395294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395290u;
        // 0x395294: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395298u;
        goto label_395298;
    }
    ctx->pc = 0x395290u;
    SET_GPR_U32(ctx, 31, 0x395298u);
    ctx->pc = 0x395294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395290u;
    // 0x395294: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x395290u, 0x395298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395298u;
label_395298:
    // 0x395298: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_39529c:
    if (ctx->pc == 0x39529Cu) {
        ctx->pc = 0x3952A0u;
        goto label_3952a0;
    }
    ctx->pc = 0x395298u;
    {
        const bool branch_taken_0x395298 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x395298) {
            ctx->pc = 0x3952B8u;
            goto label_3952b8;
        }
    }
    ctx->pc = 0x3952A0u;
label_3952a0:
    // 0x3952a0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_3952a4:
    if (ctx->pc == 0x3952A4u) {
        ctx->pc = 0x3952A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952A0u;
        // 0x3952a4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952A8u;
        goto label_3952a8;
    }
    ctx->pc = 0x3952A0u;
    {
        const bool branch_taken_0x3952a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3952A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952A0u;
        // 0x3952a4: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952a0) {
            ctx->pc = 0x3952B8u;
            goto label_3952b8;
        }
    }
    ctx->pc = 0x3952A8u;
label_3952a8:
    // 0x3952a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3952ac:
    // 0x3952ac: 0x10000040  b           . + 4 + (0x40 << 2)
label_3952b0:
    if (ctx->pc == 0x3952B0u) {
        ctx->pc = 0x3952B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952ACu;
        // 0x3952b0: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952B4u;
        goto label_3952b4;
    }
    ctx->pc = 0x3952ACu;
    {
        const bool branch_taken_0x3952ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3952B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952ACu;
        // 0x3952b0: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952ac) {
            ctx->pc = 0x3953B0u;
            goto label_3953b0;
        }
    }
    ctx->pc = 0x3952B4u;
label_3952b4:
    // 0x3952b4: 0x0  nop
    ctx->pc = 0x3952b4u;
    // NOP
label_3952b8:
    // 0x3952b8: 0xc0ebe50  jal         func_3AF940
label_3952bc:
    if (ctx->pc == 0x3952BCu) {
        ctx->pc = 0x3952C0u;
        goto label_3952c0;
    }
    ctx->pc = 0x3952B8u;
    SET_GPR_U32(ctx, 31, 0x3952C0u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x3952B8u, 0x3952C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3952C0u;
label_3952c0:
    // 0x3952c0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3952c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_3952c4:
    // 0x3952c4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3952c8:
    if (ctx->pc == 0x3952C8u) {
        ctx->pc = 0x3952C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952C4u;
        // 0x3952c8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952CCu;
        goto label_3952cc;
    }
    ctx->pc = 0x3952C4u;
    {
        const bool branch_taken_0x3952c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3952C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952C4u;
        // 0x3952c8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952c4) {
            ctx->pc = 0x3952E8u;
            goto label_3952e8;
        }
    }
    ctx->pc = 0x3952CCu;
label_3952cc:
    // 0x3952cc: 0xc0ec0fe  jal         func_3B03F8
label_3952d0:
    if (ctx->pc == 0x3952D0u) {
        ctx->pc = 0x3952D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952CCu;
        // 0x3952d0: 0x2484a9e8  addiu       $a0, $a0, -0x5618 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952D4u;
        goto label_3952d4;
    }
    ctx->pc = 0x3952CCu;
    SET_GPR_U32(ctx, 31, 0x3952D4u);
    ctx->pc = 0x3952D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3952CCu;
    // 0x3952d0: 0x2484a9e8  addiu       $a0, $a0, -0x5618 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x3952CCu, 0x3952D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3952D4u;
label_3952d4:
    // 0x3952d4: 0xc0ebe56  jal         func_3AF958
label_3952d8:
    if (ctx->pc == 0x3952D8u) {
        ctx->pc = 0x3952DCu;
        goto label_3952dc;
    }
    ctx->pc = 0x3952D4u;
    SET_GPR_U32(ctx, 31, 0x3952DCu);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x3952D4u, 0x3952DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3952DCu;
label_3952dc:
    // 0x3952dc: 0x10000034  b           . + 4 + (0x34 << 2)
label_3952e0:
    if (ctx->pc == 0x3952E0u) {
        ctx->pc = 0x3952E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952DCu;
        // 0x3952e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952E4u;
        goto label_3952e4;
    }
    ctx->pc = 0x3952DCu;
    {
        const bool branch_taken_0x3952dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3952E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952DCu;
        // 0x3952e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952dc) {
            ctx->pc = 0x3953B0u;
            goto label_3953b0;
        }
    }
    ctx->pc = 0x3952E4u;
label_3952e4:
    // 0x3952e4: 0x0  nop
    ctx->pc = 0x3952e4u;
    // NOP
label_3952e8:
    // 0x3952e8: 0xc0ebe56  jal         func_3AF958
label_3952ec:
    if (ctx->pc == 0x3952ECu) {
        ctx->pc = 0x3952ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952E8u;
        // 0x3952ec: 0x1492c0  sll         $s2, $s4, 11 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3952F0u;
        goto label_3952f0;
    }
    ctx->pc = 0x3952E8u;
    SET_GPR_U32(ctx, 31, 0x3952F0u);
    ctx->pc = 0x3952ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3952E8u;
    // 0x3952ec: 0x1492c0  sll         $s2, $s4, 11 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 20), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x3952E8u, 0x3952F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3952F0u;
label_3952f0:
    // 0x3952f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3952f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3952f4:
    // 0x3952f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3952f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3952f8:
    // 0x3952f8: 0xc0eaac0  jal         func_3AAB00
label_3952fc:
    if (ctx->pc == 0x3952FCu) {
        ctx->pc = 0x3952FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952F8u;
        // 0x3952fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395300u;
        goto label_395300;
    }
    ctx->pc = 0x3952F8u;
    SET_GPR_U32(ctx, 31, 0x395300u);
    ctx->pc = 0x3952FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3952F8u;
    // 0x3952fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAB00u, 0x3952F8u, 0x395300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395300u;
label_395300:
    // 0x395300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x395300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395304:
    // 0x395304: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_395308:
    if (ctx->pc == 0x395308u) {
        ctx->pc = 0x395308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395304u;
        // 0x395308: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39530Cu;
        goto label_39530c;
    }
    ctx->pc = 0x395304u;
    {
        const bool branch_taken_0x395304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x395308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395304u;
        // 0x395308: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395304) {
            ctx->pc = 0x3953B0u;
            goto label_3953b0;
        }
    }
    ctx->pc = 0x39530Cu;
label_39530c:
    // 0x39530c: 0xc0ebe50  jal         func_3AF940
label_395310:
    if (ctx->pc == 0x395310u) {
        ctx->pc = 0x395314u;
        goto label_395314;
    }
    ctx->pc = 0x39530Cu;
    SET_GPR_U32(ctx, 31, 0x395314u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39530Cu, 0x395314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395314u;
label_395314:
    // 0x395314: 0xae330020  sw          $s3, 0x20($s1)
    ctx->pc = 0x395314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
label_395318:
    // 0x395318: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x395318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_39531c:
    // 0x39531c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x39531cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_395320:
    // 0x395320: 0xae320024  sw          $s2, 0x24($s1)
    ctx->pc = 0x395320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 18));
label_395324:
    // 0x395324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x395324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395328:
    // 0x395328: 0x8c82e948  lw          $v0, -0x16B8($a0)
    ctx->pc = 0x395328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961480)));
label_39532c:
    // 0x39532c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_395330:
    if (ctx->pc == 0x395330u) {
        ctx->pc = 0x395330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39532Cu;
        // 0x395330: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395334u;
        goto label_395334;
    }
    ctx->pc = 0x39532Cu;
    {
        const bool branch_taken_0x39532c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x395330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39532Cu;
        // 0x395330: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39532c) {
            ctx->pc = 0x39533Cu;
            goto label_39533c;
        }
    }
    ctx->pc = 0x395334u;
label_395334:
    // 0x395334: 0xc0ec1a6  jal         func_3B0698
label_395338:
    if (ctx->pc == 0x395338u) {
        ctx->pc = 0x395338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395334u;
        // 0x395338: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39533Cu;
        goto label_39533c;
    }
    ctx->pc = 0x395334u;
    SET_GPR_U32(ctx, 31, 0x39533Cu);
    ctx->pc = 0x395338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395334u;
    // 0x395338: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0698u, 0x395334u, 0x39533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39533Cu;
label_39533c:
    // 0x39533c: 0xc0ebe56  jal         func_3AF958
label_395340:
    if (ctx->pc == 0x395340u) {
        ctx->pc = 0x395344u;
        goto label_395344;
    }
    ctx->pc = 0x39533Cu;
    SET_GPR_U32(ctx, 31, 0x395344u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x39533Cu, 0x395344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395344u;
label_395344:
    // 0x395344: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x395344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_395348:
    // 0x395348: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x395348u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39534c:
    // 0x39534c: 0xc0e542e  jal         func_3950B8
label_395350:
    if (ctx->pc == 0x395350u) {
        ctx->pc = 0x395350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39534Cu;
        // 0x395350: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395354u;
        goto label_395354;
    }
    ctx->pc = 0x39534Cu;
    SET_GPR_U32(ctx, 31, 0x395354u);
    ctx->pc = 0x395350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39534Cu;
    // 0x395350: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3950B8u;
    goto label_3950b8;
    ctx->pc = 0x395354u;
label_395354:
    // 0x395354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x395354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395358:
    // 0x395358: 0x5e00000e  bgtzl       $s0, . + 4 + (0xE << 2)
label_39535c:
    if (ctx->pc == 0x39535Cu) {
        ctx->pc = 0x39535Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395358u;
        // 0x39535c: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x395360u;
        goto label_395360;
    }
    ctx->pc = 0x395358u;
    {
        const bool branch_taken_0x395358 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x395358) {
            ctx->pc = 0x39535Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x395358u;
            // 0x39535c: 0xa2200002  sb          $zero, 0x2($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395394u;
            goto label_395394;
        }
    }
    ctx->pc = 0x395360u;
label_395360:
    // 0x395360: 0xc0ebe50  jal         func_3AF940
label_395364:
    if (ctx->pc == 0x395364u) {
        ctx->pc = 0x395368u;
        goto label_395368;
    }
    ctx->pc = 0x395360u;
    SET_GPR_U32(ctx, 31, 0x395368u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x395360u, 0x395368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395368u;
label_395368:
    // 0x395368: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x395368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39536c:
    // 0x39536c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_395370:
    if (ctx->pc == 0x395370u) {
        ctx->pc = 0x395374u;
        goto label_395374;
    }
    ctx->pc = 0x39536Cu;
    {
        const bool branch_taken_0x39536c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39536c) {
            ctx->pc = 0x395388u;
            goto label_395388;
        }
    }
    ctx->pc = 0x395374u;
label_395374:
    // 0x395374: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x395374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_395378:
    // 0x395378: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x395378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39537c:
    // 0x39537c: 0x40f809  jalr        $v0
label_395380:
    if (ctx->pc == 0x395380u) {
        ctx->pc = 0x395384u;
        goto label_395384;
    }
    ctx->pc = 0x39537Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x395384u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39537Cu, 0x395384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x395384u;
label_395384:
    // 0x395384: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x395384u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_395388:
    // 0x395388: 0xc0ebe56  jal         func_3AF958
label_39538c:
    if (ctx->pc == 0x39538Cu) {
        ctx->pc = 0x395390u;
        goto label_395390;
    }
    ctx->pc = 0x395388u;
    SET_GPR_U32(ctx, 31, 0x395390u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x395388u, 0x395390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395390u;
label_395390:
    // 0x395390: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x395390u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
label_395394:
    // 0x395394: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x395394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_395398:
    // 0x395398: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x395398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39539c:
    // 0x39539c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x39539cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3953a0:
    // 0x3953a0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3953a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3953a4:
    // 0x3953a4: 0xc0e4fb8  jal         func_393EE0
label_3953a8:
    if (ctx->pc == 0x3953A8u) {
        ctx->pc = 0x3953A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953A4u;
        // 0x3953a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3953ACu;
        goto label_3953ac;
    }
    ctx->pc = 0x3953A4u;
    SET_GPR_U32(ctx, 31, 0x3953ACu);
    ctx->pc = 0x3953A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3953A4u;
    // 0x3953a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393EE0u, 0x3953A4u, 0x3953ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3953ACu;
label_3953ac:
    // 0x3953ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3953acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3953b0:
    // 0x3953b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3953b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3953b4:
    // 0x3953b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3953b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3953b8:
    // 0x3953b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3953b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3953bc:
    // 0x3953bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3953bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3953c0:
    // 0x3953c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3953c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3953c4:
    // 0x3953c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3953c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3953c8:
    // 0x3953c8: 0x3e00008  jr          $ra
label_3953cc:
    if (ctx->pc == 0x3953CCu) {
        ctx->pc = 0x3953CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953C8u;
        // 0x3953cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3953D0u;
        goto label_fallthrough_0x3953c8;
    }
    ctx->pc = 0x3953C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3953CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3953C8u;
        // 0x3953cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3953C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3953c8:
    ctx->pc = 0x3953D0u;
}
