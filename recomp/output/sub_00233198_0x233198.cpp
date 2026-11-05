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

// Function: sub_00233198
// Address: 0x233198 - 0x2334a8
void sub_00233198_0x233198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233198_0x233198");
#endif

    switch (ctx->pc) {
        case 0x233198u: goto label_233198;
        case 0x23319cu: goto label_23319c;
        case 0x2331a0u: goto label_2331a0;
        case 0x2331a4u: goto label_2331a4;
        case 0x2331a8u: goto label_2331a8;
        case 0x2331acu: goto label_2331ac;
        case 0x2331b0u: goto label_2331b0;
        case 0x2331b4u: goto label_2331b4;
        case 0x2331b8u: goto label_2331b8;
        case 0x2331bcu: goto label_2331bc;
        case 0x2331c0u: goto label_2331c0;
        case 0x2331c4u: goto label_2331c4;
        case 0x2331c8u: goto label_2331c8;
        case 0x2331ccu: goto label_2331cc;
        case 0x2331d0u: goto label_2331d0;
        case 0x2331d4u: goto label_2331d4;
        case 0x2331d8u: goto label_2331d8;
        case 0x2331dcu: goto label_2331dc;
        case 0x2331e0u: goto label_2331e0;
        case 0x2331e4u: goto label_2331e4;
        case 0x2331e8u: goto label_2331e8;
        case 0x2331ecu: goto label_2331ec;
        case 0x2331f0u: goto label_2331f0;
        case 0x2331f4u: goto label_2331f4;
        case 0x2331f8u: goto label_2331f8;
        case 0x2331fcu: goto label_2331fc;
        case 0x233200u: goto label_233200;
        case 0x233204u: goto label_233204;
        case 0x233208u: goto label_233208;
        case 0x23320cu: goto label_23320c;
        case 0x233210u: goto label_233210;
        case 0x233214u: goto label_233214;
        case 0x233218u: goto label_233218;
        case 0x23321cu: goto label_23321c;
        case 0x233220u: goto label_233220;
        case 0x233224u: goto label_233224;
        case 0x233228u: goto label_233228;
        case 0x23322cu: goto label_23322c;
        case 0x233230u: goto label_233230;
        case 0x233234u: goto label_233234;
        case 0x233238u: goto label_233238;
        case 0x23323cu: goto label_23323c;
        case 0x233240u: goto label_233240;
        case 0x233244u: goto label_233244;
        case 0x233248u: goto label_233248;
        case 0x23324cu: goto label_23324c;
        case 0x233250u: goto label_233250;
        case 0x233254u: goto label_233254;
        case 0x233258u: goto label_233258;
        case 0x23325cu: goto label_23325c;
        case 0x233260u: goto label_233260;
        case 0x233264u: goto label_233264;
        case 0x233268u: goto label_233268;
        case 0x23326cu: goto label_23326c;
        case 0x233270u: goto label_233270;
        case 0x233274u: goto label_233274;
        case 0x233278u: goto label_233278;
        case 0x23327cu: goto label_23327c;
        case 0x233280u: goto label_233280;
        case 0x233284u: goto label_233284;
        case 0x233288u: goto label_233288;
        case 0x23328cu: goto label_23328c;
        case 0x233290u: goto label_233290;
        case 0x233294u: goto label_233294;
        case 0x233298u: goto label_233298;
        case 0x23329cu: goto label_23329c;
        case 0x2332a0u: goto label_2332a0;
        case 0x2332a4u: goto label_2332a4;
        case 0x2332a8u: goto label_2332a8;
        case 0x2332acu: goto label_2332ac;
        case 0x2332b0u: goto label_2332b0;
        case 0x2332b4u: goto label_2332b4;
        case 0x2332b8u: goto label_2332b8;
        case 0x2332bcu: goto label_2332bc;
        case 0x2332c0u: goto label_2332c0;
        case 0x2332c4u: goto label_2332c4;
        case 0x2332c8u: goto label_2332c8;
        case 0x2332ccu: goto label_2332cc;
        case 0x2332d0u: goto label_2332d0;
        case 0x2332d4u: goto label_2332d4;
        case 0x2332d8u: goto label_2332d8;
        case 0x2332dcu: goto label_2332dc;
        case 0x2332e0u: goto label_2332e0;
        case 0x2332e4u: goto label_2332e4;
        case 0x2332e8u: goto label_2332e8;
        case 0x2332ecu: goto label_2332ec;
        case 0x2332f0u: goto label_2332f0;
        case 0x2332f4u: goto label_2332f4;
        case 0x2332f8u: goto label_2332f8;
        case 0x2332fcu: goto label_2332fc;
        case 0x233300u: goto label_233300;
        case 0x233304u: goto label_233304;
        case 0x233308u: goto label_233308;
        case 0x23330cu: goto label_23330c;
        case 0x233310u: goto label_233310;
        case 0x233314u: goto label_233314;
        case 0x233318u: goto label_233318;
        case 0x23331cu: goto label_23331c;
        case 0x233320u: goto label_233320;
        case 0x233324u: goto label_233324;
        case 0x233328u: goto label_233328;
        case 0x23332cu: goto label_23332c;
        case 0x233330u: goto label_233330;
        case 0x233334u: goto label_233334;
        case 0x233338u: goto label_233338;
        case 0x23333cu: goto label_23333c;
        case 0x233340u: goto label_233340;
        case 0x233344u: goto label_233344;
        case 0x233348u: goto label_233348;
        case 0x23334cu: goto label_23334c;
        case 0x233350u: goto label_233350;
        case 0x233354u: goto label_233354;
        case 0x233358u: goto label_233358;
        case 0x23335cu: goto label_23335c;
        case 0x233360u: goto label_233360;
        case 0x233364u: goto label_233364;
        case 0x233368u: goto label_233368;
        case 0x23336cu: goto label_23336c;
        case 0x233370u: goto label_233370;
        case 0x233374u: goto label_233374;
        case 0x233378u: goto label_233378;
        case 0x23337cu: goto label_23337c;
        case 0x233380u: goto label_233380;
        case 0x233384u: goto label_233384;
        case 0x233388u: goto label_233388;
        case 0x23338cu: goto label_23338c;
        case 0x233390u: goto label_233390;
        case 0x233394u: goto label_233394;
        case 0x233398u: goto label_233398;
        case 0x23339cu: goto label_23339c;
        case 0x2333a0u: goto label_2333a0;
        case 0x2333a4u: goto label_2333a4;
        case 0x2333a8u: goto label_2333a8;
        case 0x2333acu: goto label_2333ac;
        case 0x2333b0u: goto label_2333b0;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333b8u: goto label_2333b8;
        case 0x2333bcu: goto label_2333bc;
        case 0x2333c0u: goto label_2333c0;
        case 0x2333c4u: goto label_2333c4;
        case 0x2333c8u: goto label_2333c8;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333d0u: goto label_2333d0;
        case 0x2333d4u: goto label_2333d4;
        case 0x2333d8u: goto label_2333d8;
        case 0x2333dcu: goto label_2333dc;
        case 0x2333e0u: goto label_2333e0;
        case 0x2333e4u: goto label_2333e4;
        case 0x2333e8u: goto label_2333e8;
        case 0x2333ecu: goto label_2333ec;
        case 0x2333f0u: goto label_2333f0;
        case 0x2333f4u: goto label_2333f4;
        case 0x2333f8u: goto label_2333f8;
        case 0x2333fcu: goto label_2333fc;
        case 0x233400u: goto label_233400;
        case 0x233404u: goto label_233404;
        case 0x233408u: goto label_233408;
        case 0x23340cu: goto label_23340c;
        case 0x233410u: goto label_233410;
        case 0x233414u: goto label_233414;
        case 0x233418u: goto label_233418;
        case 0x23341cu: goto label_23341c;
        case 0x233420u: goto label_233420;
        case 0x233424u: goto label_233424;
        case 0x233428u: goto label_233428;
        case 0x23342cu: goto label_23342c;
        case 0x233430u: goto label_233430;
        case 0x233434u: goto label_233434;
        case 0x233438u: goto label_233438;
        case 0x23343cu: goto label_23343c;
        case 0x233440u: goto label_233440;
        case 0x233444u: goto label_233444;
        case 0x233448u: goto label_233448;
        case 0x23344cu: goto label_23344c;
        case 0x233450u: goto label_233450;
        case 0x233454u: goto label_233454;
        case 0x233458u: goto label_233458;
        case 0x23345cu: goto label_23345c;
        case 0x233460u: goto label_233460;
        case 0x233464u: goto label_233464;
        case 0x233468u: goto label_233468;
        case 0x23346cu: goto label_23346c;
        case 0x233470u: goto label_233470;
        case 0x233474u: goto label_233474;
        case 0x233478u: goto label_233478;
        case 0x23347cu: goto label_23347c;
        case 0x233480u: goto label_233480;
        case 0x233484u: goto label_233484;
        case 0x233488u: goto label_233488;
        case 0x23348cu: goto label_23348c;
        case 0x233490u: goto label_233490;
        case 0x233494u: goto label_233494;
        case 0x233498u: goto label_233498;
        case 0x23349cu: goto label_23349c;
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a4u: goto label_2334a4;
        default: break;
    }

    ctx->pc = 0x233198u;

label_233198:
    // 0x233198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x233198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_23319c:
    // 0x23319c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_2331a0:
    // 0x2331a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2331a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2331a4:
    // 0x2331a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2331a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_2331a8:
    // 0x2331a8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2331a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_2331ac:
    // 0x2331ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2331acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2331b0:
    // 0x2331b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2331b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2331b4:
    // 0x2331b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2331b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2331b8:
    // 0x2331b8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2331b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2331bc:
    // 0x2331bc: 0x260203c0  addiu       $v0, $s0, 0x3C0
    ctx->pc = 0x2331bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
label_2331c0:
    // 0x2331c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2331c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2331c4:
    // 0x2331c4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2331c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2331c8:
    // 0x2331c8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2331c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2331cc:
    // 0x2331cc: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2331ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2331d0:
    // 0x2331d0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2331d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2331d4:
    // 0x2331d4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2331d4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2331d8:
    // 0x2331d8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2331d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2331dc:
    // 0x2331dc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2331dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2331e0:
    // 0x2331e0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2331e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2331e4:
    // 0x2331e4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2331e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2331e8:
    // 0x2331e8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2331e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2331ec:
    // 0x2331ec: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x2331ecu;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2331f0:
    // 0x2331f0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2331f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2331f4:
    // 0x2331f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2331f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2331f8:
    // 0x2331f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2331f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2331fc:
    // 0x2331fc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_233200:
    if (ctx->pc == 0x233200u) {
        ctx->pc = 0x233204u;
        goto label_233204;
    }
    ctx->pc = 0x2331FCu;
    {
        const bool branch_taken_0x2331fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2331fc) {
            ctx->pc = 0x23320Cu;
            goto label_23320c;
        }
    }
    ctx->pc = 0x233204u;
label_233204:
    // 0x233204: 0x10000005  b           . + 4 + (0x5 << 2)
label_233208:
    if (ctx->pc == 0x233208u) {
        ctx->pc = 0x233208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233204u;
        // 0x233208: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23320Cu;
        goto label_23320c;
    }
    ctx->pc = 0x233204u;
    {
        const bool branch_taken_0x233204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233204u;
        // 0x233208: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233204) {
            ctx->pc = 0x23321Cu;
            goto label_23321c;
        }
    }
    ctx->pc = 0x23320Cu;
label_23320c:
    // 0x23320c: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x23320cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233210:
    // 0x233210: 0x0  nop
    ctx->pc = 0x233210u;
    // NOP
label_233214:
    // 0x233214: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_233218:
    if (ctx->pc == 0x233218u) {
        ctx->pc = 0x233218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233214u;
        // 0x233218: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23321Cu;
        goto label_23321c;
    }
    ctx->pc = 0x233214u;
    {
        const bool branch_taken_0x233214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x233214) {
            ctx->pc = 0x233218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x233214u;
            // 0x233218: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23321Cu;
            goto label_23321c;
        }
    }
    ctx->pc = 0x23321Cu;
label_23321c:
    // 0x23321c: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x23321cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_233220:
    // 0x233220: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_233224:
    // 0x233224: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x233224u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_233228:
    // 0x233228: 0x0  nop
    ctx->pc = 0x233228u;
    // NOP
label_23322c:
    // 0x23322c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x23322cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_233230:
    // 0x233230: 0x460c0304  c1          0xC0304
    ctx->pc = 0x233230u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_233234:
    // 0x233234: 0xc0e404c  jal         func_390130
label_233238:
    if (ctx->pc == 0x233238u) {
        ctx->pc = 0x23323Cu;
        goto label_23323c;
    }
    ctx->pc = 0x233234u;
    SET_GPR_U32(ctx, 31, 0x23323Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x233234u, 0x23323Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23323Cu;
label_23323c:
    // 0x23323c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x23323cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_233240:
    // 0x233240: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x233240u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_233244:
    // 0x233244: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x233244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_233248:
    // 0x233248: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x233248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_23324c:
    // 0x23324c: 0x24425b30  addiu       $v0, $v0, 0x5B30
    ctx->pc = 0x23324cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
label_233250:
    // 0x233250: 0x260303c0  addiu       $v1, $s0, 0x3C0
    ctx->pc = 0x233250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 960));
label_233254:
    // 0x233254: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x233254u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_233258:
    // 0x233258: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x233258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23325c:
    // 0x23325c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x23325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_233260:
    // 0x233260: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x233260u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_233264:
    // 0x233264: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x233264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233268:
    // 0x233268: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x233268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23326c:
    // 0x23326c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x23326cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_233270:
    // 0x233270: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x233270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233274:
    // 0x233274: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x233274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_233278:
    // 0x233278: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x233278u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_23327c:
    // 0x23327c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23327cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233280:
    // 0x233280: 0x0  nop
    ctx->pc = 0x233280u;
    // NOP
label_233284:
    // 0x233284: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x233284u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233288:
    // 0x233288: 0x0  nop
    ctx->pc = 0x233288u;
    // NOP
label_23328c:
    // 0x23328c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_233290:
    if (ctx->pc == 0x233290u) {
        ctx->pc = 0x233290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23328Cu;
        // 0x233290: 0xc6000374  lwc1        $f0, 0x374($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x233294u;
        goto label_233294;
    }
    ctx->pc = 0x23328Cu;
    {
        const bool branch_taken_0x23328c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23328c) {
            ctx->pc = 0x233290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23328Cu;
            // 0x233290: 0xc6000374  lwc1        $f0, 0x374($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2332A8u;
            goto label_2332a8;
        }
    }
    ctx->pc = 0x233294u;
label_233294:
    // 0x233294: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x233294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_233298:
    // 0x233298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23329c:
    // 0x23329c: 0x0  nop
    ctx->pc = 0x23329cu;
    // NOP
label_2332a0:
    // 0x2332a0: 0x46040101  sub.s       $f4, $f0, $f4
    ctx->pc = 0x2332a0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_2332a4:
    // 0x2332a4: 0xc6000374  lwc1        $f0, 0x374($s0)
    ctx->pc = 0x2332a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2332a8:
    // 0x2332a8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2332a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
label_2332ac:
    // 0x2332ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2332acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2332b0:
    // 0x2332b0: 0x46002081  sub.s       $f2, $f4, $f0
    ctx->pc = 0x2332b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_2332b4:
    // 0x2332b4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2332b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2332b8:
    // 0x2332b8: 0x0  nop
    ctx->pc = 0x2332b8u;
    // NOP
label_2332bc:
    // 0x2332bc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2332c0:
    if (ctx->pc == 0x2332C0u) {
        ctx->pc = 0x2332C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332BCu;
        // 0x2332c0: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332C4u;
        goto label_2332c4;
    }
    ctx->pc = 0x2332BCu;
    {
        const bool branch_taken_0x2332bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2332C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332BCu;
        // 0x2332c0: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332bc) {
            ctx->pc = 0x2332D4u;
            goto label_2332d4;
        }
    }
    ctx->pc = 0x2332C4u;
label_2332c4:
    // 0x2332c4: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2332c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2332c8:
    // 0x2332c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2332c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2332cc:
    // 0x2332cc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2332d0:
    if (ctx->pc == 0x2332D0u) {
        ctx->pc = 0x2332D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332CCu;
        // 0x2332d0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332D4u;
        goto label_2332d4;
    }
    ctx->pc = 0x2332CCu;
    {
        const bool branch_taken_0x2332cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332CCu;
        // 0x2332d0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332cc) {
            ctx->pc = 0x233300u;
            goto label_233300;
        }
    }
    ctx->pc = 0x2332D4u;
label_2332d4:
    // 0x2332d4: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x2332d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
label_2332d8:
    // 0x2332d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2332d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2332dc:
    // 0x2332dc: 0x0  nop
    ctx->pc = 0x2332dcu;
    // NOP
label_2332e0:
    // 0x2332e0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2332e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2332e4:
    // 0x2332e4: 0x0  nop
    ctx->pc = 0x2332e4u;
    // NOP
label_2332e8:
    // 0x2332e8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2332ec:
    if (ctx->pc == 0x2332ECu) {
        ctx->pc = 0x2332ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2332E8u;
        // 0x2332ec: 0x46001005  abs.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ABS_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2332F0u;
        goto label_2332f0;
    }
    ctx->pc = 0x2332E8u;
    {
        const bool branch_taken_0x2332e8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2332e8) {
            ctx->pc = 0x2332ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2332E8u;
            // 0x2332ec: 0x46001005  abs.s       $f0, $f2 (Delay Slot)
            ctx->f[0] = FPU_ABS_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x233304u;
            goto label_233304;
        }
    }
    ctx->pc = 0x2332F0u;
label_2332f0:
    // 0x2332f0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2332f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_2332f4:
    // 0x2332f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2332f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2332f8:
    // 0x2332f8: 0x0  nop
    ctx->pc = 0x2332f8u;
    // NOP
label_2332fc:
    // 0x2332fc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2332fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_233300:
    // 0x233300: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x233300u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
label_233304:
    // 0x233304: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x233304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_233308:
    // 0x233308: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x233308u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23330c:
    // 0x23330c: 0x0  nop
    ctx->pc = 0x23330cu;
    // NOP
label_233310:
    // 0x233310: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x233310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233314:
    // 0x233314: 0x0  nop
    ctx->pc = 0x233314u;
    // NOP
label_233318:
    // 0x233318: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_23331c:
    if (ctx->pc == 0x23331Cu) {
        ctx->pc = 0x23331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233318u;
        // 0x23331c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233320u;
        goto label_233320;
    }
    ctx->pc = 0x233318u;
    {
        const bool branch_taken_0x233318 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23331Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233318u;
        // 0x23331c: 0x460000c6  mov.s       $f3, $f0 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233318) {
            ctx->pc = 0x233330u;
            goto label_233330;
        }
    }
    ctx->pc = 0x233320u;
label_233320:
    // 0x233320: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x233320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_233324:
    // 0x233324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_233328:
    // 0x233328: 0x10000003  b           . + 4 + (0x3 << 2)
label_23332c:
    if (ctx->pc == 0x23332Cu) {
        ctx->pc = 0x23332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233328u;
        // 0x23332c: 0x46001b02  mul.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x233330u;
        goto label_233330;
    }
    ctx->pc = 0x233328u;
    {
        const bool branch_taken_0x233328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233328u;
        // 0x23332c: 0x46001b02  mul.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x233328) {
            ctx->pc = 0x233338u;
            goto label_233338;
        }
    }
    ctx->pc = 0x233330u;
label_233330:
    // 0x233330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_233334:
    // 0x233334: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x233334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_233338:
    // 0x233338: 0x0  nop
    ctx->pc = 0x233338u;
    // NOP
label_23333c:
    // 0x23333c: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x23333cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233340:
    // 0x233340: 0x0  nop
    ctx->pc = 0x233340u;
    // NOP
label_233344:
    // 0x233344: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_233348:
    if (ctx->pc == 0x233348u) {
        ctx->pc = 0x233348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233344u;
        // 0x233348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23334Cu;
        goto label_23334c;
    }
    ctx->pc = 0x233344u;
    {
        const bool branch_taken_0x233344 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233344u;
        // 0x233348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233344) {
            ctx->pc = 0x233368u;
            goto label_233368;
        }
    }
    ctx->pc = 0x23334Cu;
label_23334c:
    // 0x23334c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x23334cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_233350:
    // 0x233350: 0x46002306  mov.s       $f12, $f4
    ctx->pc = 0x233350u;
    ctx->f[12] = FPU_MOV_S(ctx->f[4]);
label_233354:
    // 0x233354: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x233354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_233358:
    // 0x233358: 0x40f809  jalr        $v0
label_23335c:
    if (ctx->pc == 0x23335Cu) {
        ctx->pc = 0x23335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233358u;
        // 0x23335c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233360u;
        goto label_233360;
    }
    ctx->pc = 0x233358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x233360u);
        ctx->pc = 0x23335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233358u;
        // 0x23335c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233358u, 0x233360u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x233360u;
label_233360:
    // 0x233360: 0x10000011  b           . + 4 + (0x11 << 2)
label_233364:
    if (ctx->pc == 0x233364u) {
        ctx->pc = 0x233368u;
        goto label_233368;
    }
    ctx->pc = 0x233360u;
    {
        const bool branch_taken_0x233360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233360) {
            ctx->pc = 0x2333A8u;
            goto label_2333a8;
        }
    }
    ctx->pc = 0x233368u;
label_233368:
    // 0x233368: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x233368u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23336c:
    // 0x23336c: 0x0  nop
    ctx->pc = 0x23336cu;
    // NOP
label_233370:
    // 0x233370: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x233370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233374:
    // 0x233374: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x233374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_233378:
    // 0x233378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23337c:
    // 0x23337c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_233380:
    if (ctx->pc == 0x233380u) {
        ctx->pc = 0x233380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23337Cu;
        // 0x233380: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x233384u;
        goto label_233384;
    }
    ctx->pc = 0x23337Cu;
    {
        const bool branch_taken_0x23337c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23337Cu;
        // 0x233380: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23337c) {
            ctx->pc = 0x23338Cu;
            goto label_23338c;
        }
    }
    ctx->pc = 0x233384u;
label_233384:
    // 0x233384: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x233384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_233388:
    // 0x233388: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x233388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23338c:
    // 0x23338c: 0x0  nop
    ctx->pc = 0x23338cu;
    // NOP
label_233390:
    // 0x233390: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x233390u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_233394:
    // 0x233394: 0x8c4201c8  lw          $v0, 0x1C8($v0)
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 456)));
label_233398:
    // 0x233398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x233398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23339c:
    // 0x23339c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23339cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2333a0:
    // 0x2333a0: 0x40f809  jalr        $v0
label_2333a4:
    if (ctx->pc == 0x2333A4u) {
        ctx->pc = 0x2333A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333A0u;
        // 0x2333a4: 0x460c2b00  add.s       $f12, $f5, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333A8u;
        goto label_2333a8;
    }
    ctx->pc = 0x2333A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2333A8u);
        ctx->pc = 0x2333A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333A0u;
        // 0x2333a4: 0x460c2b00  add.s       $f12, $f5, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2333A0u, 0x2333A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2333A8u;
label_2333a8:
    // 0x2333a8: 0x5620003b  bnel        $s1, $zero, . + 4 + (0x3B << 2)
label_2333ac:
    if (ctx->pc == 0x2333ACu) {
        ctx->pc = 0x2333ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2333A8u;
        // 0x2333ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2333B0u;
        goto label_2333b0;
    }
    ctx->pc = 0x2333A8u;
    {
        const bool branch_taken_0x2333a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2333a8) {
            ctx->pc = 0x2333ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2333A8u;
            // 0x2333ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x2333B0u;
label_2333b0:
    // 0x2333b0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2333b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2333b4:
    // 0x2333b4: 0x260303d0  addiu       $v1, $s0, 0x3D0
    ctx->pc = 0x2333b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
label_2333b8:
    // 0x2333b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2333b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2333bc:
    // 0x2333bc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2333bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2333c0:
    // 0x2333c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2333c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2333c4:
    // 0x2333c4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2333c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2333c8:
    // 0x2333c8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2333c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2333cc:
    // 0x2333cc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2333ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2333d0:
    // 0x2333d0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2333d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2333d4:
    // 0x2333d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2333d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2333d8:
    // 0x2333d8: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x2333d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2333dc:
    // 0x2333dc: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x2333dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2333e0:
    // 0x2333e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2333e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2333e4:
    // 0x2333e4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2333e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2333e8:
    // 0x2333e8: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2333e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2333ec:
    // 0x2333ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2333ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2333f0:
    // 0x2333f0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2333f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2333f4:
    // 0x2333f4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2333f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2333f8:
    // 0x2333f8: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2333f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2333fc:
    // 0x2333fc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2333fcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_233400:
    // 0x233400: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x233400u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_233404:
    // 0x233404: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x233404u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_233408:
    // 0x233408: 0x46000004  c1          0x4
    ctx->pc = 0x233408u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_23340c:
    // 0x23340c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x23340cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_233410:
    // 0x233410: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x233410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_233414:
    // 0x233414: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x233414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_233418:
    // 0x233418: 0x0  nop
    ctx->pc = 0x233418u;
    // NOP
label_23341c:
    // 0x23341c: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x23341cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_233420:
    // 0x233420: 0x0  nop
    ctx->pc = 0x233420u;
    // NOP
label_233424:
    // 0x233424: 0x4500001c  bc1f        . + 4 + (0x1C << 2)
label_233428:
    if (ctx->pc == 0x233428u) {
        ctx->pc = 0x233428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233424u;
        // 0x233428: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23342Cu;
        goto label_23342c;
    }
    ctx->pc = 0x233424u;
    {
        const bool branch_taken_0x233424 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233424u;
        // 0x233428: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233424) {
            ctx->pc = 0x233498u;
            goto label_233498;
        }
    }
    ctx->pc = 0x23342Cu;
label_23342c:
    // 0x23342c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x23342cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_233430:
    // 0x233430: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x233430u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_233434:
    // 0x233434: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x233434u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_233438:
    // 0x233438: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x233438u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23343c:
    // 0x23343c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x23343cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_233440:
    // 0x233440: 0x4a0003bf  vwaitq
    ctx->pc = 0x233440u;
    // VWAITQ (Q already resolved in this runtime)
label_233444:
    // 0x233444: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x233444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_233448:
    // 0x233448: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x233448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_23344c:
    // 0x23344c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x23344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_233450:
    // 0x233450: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x233450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_233454:
    // 0x233454: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x233454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_233458:
    // 0x233458: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x233458u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_23345c:
    // 0x23345c: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x23345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_233460:
    // 0x233460: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x233460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_233464:
    // 0x233464: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x233464u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_233468:
    // 0x233468: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x233468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23346c:
    // 0x23346c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x23346cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_233470:
    // 0x233470: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x233470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_233474:
    // 0x233474: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x233474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_233478:
    // 0x233478: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x233478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_23347c:
    // 0x23347c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x23347cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_233480:
    // 0x233480: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x233480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_233484:
    // 0x233484: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x233484u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_233488:
    // 0x233488: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x233488u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23348c:
    // 0x23348c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23348cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_233490:
    // 0x233490: 0xf8610070  sqc2        $vf1, 0x70($v1)
    ctx->pc = 0x233490u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_233494:
    // 0x233494: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x233494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_233498:
    // 0x233498: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x233498u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_23349c:
    // 0x23349c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23349cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2334a0:
    // 0x2334a0: 0x3e00008  jr          $ra
label_2334a4:
    if (ctx->pc == 0x2334A4u) {
        ctx->pc = 0x2334A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334A0u;
        // 0x2334a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2334A8u;
        goto label_fallthrough_0x2334a0;
    }
    ctx->pc = 0x2334A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2334A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2334A0u;
        // 0x2334a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2334A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2334a0:
    ctx->pc = 0x2334A8u;
}
