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

// Function: sub_003225A8
// Address: 0x3225a8 - 0x322868
void sub_003225A8_0x3225a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003225A8_0x3225a8");
#endif

    switch (ctx->pc) {
        case 0x3225a8u: goto label_3225a8;
        case 0x3225acu: goto label_3225ac;
        case 0x3225b0u: goto label_3225b0;
        case 0x3225b4u: goto label_3225b4;
        case 0x3225b8u: goto label_3225b8;
        case 0x3225bcu: goto label_3225bc;
        case 0x3225c0u: goto label_3225c0;
        case 0x3225c4u: goto label_3225c4;
        case 0x3225c8u: goto label_3225c8;
        case 0x3225ccu: goto label_3225cc;
        case 0x3225d0u: goto label_3225d0;
        case 0x3225d4u: goto label_3225d4;
        case 0x3225d8u: goto label_3225d8;
        case 0x3225dcu: goto label_3225dc;
        case 0x3225e0u: goto label_3225e0;
        case 0x3225e4u: goto label_3225e4;
        case 0x3225e8u: goto label_3225e8;
        case 0x3225ecu: goto label_3225ec;
        case 0x3225f0u: goto label_3225f0;
        case 0x3225f4u: goto label_3225f4;
        case 0x3225f8u: goto label_3225f8;
        case 0x3225fcu: goto label_3225fc;
        case 0x322600u: goto label_322600;
        case 0x322604u: goto label_322604;
        case 0x322608u: goto label_322608;
        case 0x32260cu: goto label_32260c;
        case 0x322610u: goto label_322610;
        case 0x322614u: goto label_322614;
        case 0x322618u: goto label_322618;
        case 0x32261cu: goto label_32261c;
        case 0x322620u: goto label_322620;
        case 0x322624u: goto label_322624;
        case 0x322628u: goto label_322628;
        case 0x32262cu: goto label_32262c;
        case 0x322630u: goto label_322630;
        case 0x322634u: goto label_322634;
        case 0x322638u: goto label_322638;
        case 0x32263cu: goto label_32263c;
        case 0x322640u: goto label_322640;
        case 0x322644u: goto label_322644;
        case 0x322648u: goto label_322648;
        case 0x32264cu: goto label_32264c;
        case 0x322650u: goto label_322650;
        case 0x322654u: goto label_322654;
        case 0x322658u: goto label_322658;
        case 0x32265cu: goto label_32265c;
        case 0x322660u: goto label_322660;
        case 0x322664u: goto label_322664;
        case 0x322668u: goto label_322668;
        case 0x32266cu: goto label_32266c;
        case 0x322670u: goto label_322670;
        case 0x322674u: goto label_322674;
        case 0x322678u: goto label_322678;
        case 0x32267cu: goto label_32267c;
        case 0x322680u: goto label_322680;
        case 0x322684u: goto label_322684;
        case 0x322688u: goto label_322688;
        case 0x32268cu: goto label_32268c;
        case 0x322690u: goto label_322690;
        case 0x322694u: goto label_322694;
        case 0x322698u: goto label_322698;
        case 0x32269cu: goto label_32269c;
        case 0x3226a0u: goto label_3226a0;
        case 0x3226a4u: goto label_3226a4;
        case 0x3226a8u: goto label_3226a8;
        case 0x3226acu: goto label_3226ac;
        case 0x3226b0u: goto label_3226b0;
        case 0x3226b4u: goto label_3226b4;
        case 0x3226b8u: goto label_3226b8;
        case 0x3226bcu: goto label_3226bc;
        case 0x3226c0u: goto label_3226c0;
        case 0x3226c4u: goto label_3226c4;
        case 0x3226c8u: goto label_3226c8;
        case 0x3226ccu: goto label_3226cc;
        case 0x3226d0u: goto label_3226d0;
        case 0x3226d4u: goto label_3226d4;
        case 0x3226d8u: goto label_3226d8;
        case 0x3226dcu: goto label_3226dc;
        case 0x3226e0u: goto label_3226e0;
        case 0x3226e4u: goto label_3226e4;
        case 0x3226e8u: goto label_3226e8;
        case 0x3226ecu: goto label_3226ec;
        case 0x3226f0u: goto label_3226f0;
        case 0x3226f4u: goto label_3226f4;
        case 0x3226f8u: goto label_3226f8;
        case 0x3226fcu: goto label_3226fc;
        case 0x322700u: goto label_322700;
        case 0x322704u: goto label_322704;
        case 0x322708u: goto label_322708;
        case 0x32270cu: goto label_32270c;
        case 0x322710u: goto label_322710;
        case 0x322714u: goto label_322714;
        case 0x322718u: goto label_322718;
        case 0x32271cu: goto label_32271c;
        case 0x322720u: goto label_322720;
        case 0x322724u: goto label_322724;
        case 0x322728u: goto label_322728;
        case 0x32272cu: goto label_32272c;
        case 0x322730u: goto label_322730;
        case 0x322734u: goto label_322734;
        case 0x322738u: goto label_322738;
        case 0x32273cu: goto label_32273c;
        case 0x322740u: goto label_322740;
        case 0x322744u: goto label_322744;
        case 0x322748u: goto label_322748;
        case 0x32274cu: goto label_32274c;
        case 0x322750u: goto label_322750;
        case 0x322754u: goto label_322754;
        case 0x322758u: goto label_322758;
        case 0x32275cu: goto label_32275c;
        case 0x322760u: goto label_322760;
        case 0x322764u: goto label_322764;
        case 0x322768u: goto label_322768;
        case 0x32276cu: goto label_32276c;
        case 0x322770u: goto label_322770;
        case 0x322774u: goto label_322774;
        case 0x322778u: goto label_322778;
        case 0x32277cu: goto label_32277c;
        case 0x322780u: goto label_322780;
        case 0x322784u: goto label_322784;
        case 0x322788u: goto label_322788;
        case 0x32278cu: goto label_32278c;
        case 0x322790u: goto label_322790;
        case 0x322794u: goto label_322794;
        case 0x322798u: goto label_322798;
        case 0x32279cu: goto label_32279c;
        case 0x3227a0u: goto label_3227a0;
        case 0x3227a4u: goto label_3227a4;
        case 0x3227a8u: goto label_3227a8;
        case 0x3227acu: goto label_3227ac;
        case 0x3227b0u: goto label_3227b0;
        case 0x3227b4u: goto label_3227b4;
        case 0x3227b8u: goto label_3227b8;
        case 0x3227bcu: goto label_3227bc;
        case 0x3227c0u: goto label_3227c0;
        case 0x3227c4u: goto label_3227c4;
        case 0x3227c8u: goto label_3227c8;
        case 0x3227ccu: goto label_3227cc;
        case 0x3227d0u: goto label_3227d0;
        case 0x3227d4u: goto label_3227d4;
        case 0x3227d8u: goto label_3227d8;
        case 0x3227dcu: goto label_3227dc;
        case 0x3227e0u: goto label_3227e0;
        case 0x3227e4u: goto label_3227e4;
        case 0x3227e8u: goto label_3227e8;
        case 0x3227ecu: goto label_3227ec;
        case 0x3227f0u: goto label_3227f0;
        case 0x3227f4u: goto label_3227f4;
        case 0x3227f8u: goto label_3227f8;
        case 0x3227fcu: goto label_3227fc;
        case 0x322800u: goto label_322800;
        case 0x322804u: goto label_322804;
        case 0x322808u: goto label_322808;
        case 0x32280cu: goto label_32280c;
        case 0x322810u: goto label_322810;
        case 0x322814u: goto label_322814;
        case 0x322818u: goto label_322818;
        case 0x32281cu: goto label_32281c;
        case 0x322820u: goto label_322820;
        case 0x322824u: goto label_322824;
        case 0x322828u: goto label_322828;
        case 0x32282cu: goto label_32282c;
        case 0x322830u: goto label_322830;
        case 0x322834u: goto label_322834;
        case 0x322838u: goto label_322838;
        case 0x32283cu: goto label_32283c;
        case 0x322840u: goto label_322840;
        case 0x322844u: goto label_322844;
        case 0x322848u: goto label_322848;
        case 0x32284cu: goto label_32284c;
        case 0x322850u: goto label_322850;
        case 0x322854u: goto label_322854;
        case 0x322858u: goto label_322858;
        case 0x32285cu: goto label_32285c;
        case 0x322860u: goto label_322860;
        case 0x322864u: goto label_322864;
        default: break;
    }

    ctx->pc = 0x3225a8u;

label_3225a8:
    // 0x3225a8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3225a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3225ac:
    // 0x3225ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3225acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_3225b0:
    // 0x3225b0: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x3225b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_3225b4:
    // 0x3225b4: 0x24a546a8  addiu       $a1, $a1, 0x46A8
    ctx->pc = 0x3225b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18088));
label_3225b8:
    // 0x3225b8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3225b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3225bc:
    // 0x3225bc: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x3225bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_3225c0:
    // 0x3225c0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3225c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_3225c4:
    // 0x3225c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3225c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3225c8:
    // 0x3225c8: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x3225c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_3225cc:
    // 0x3225cc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x3225ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_3225d0:
    // 0x3225d0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3225d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
label_3225d4:
    // 0x3225d4: 0xc0d7424  jal         func_35D090
label_3225d8:
    if (ctx->pc == 0x3225D8u) {
        ctx->pc = 0x3225D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3225D4u;
        // 0x3225d8: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3225DCu;
        goto label_3225dc;
    }
    ctx->pc = 0x3225D4u;
    SET_GPR_U32(ctx, 31, 0x3225DCu);
    ctx->pc = 0x3225D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3225D4u;
    // 0x3225d8: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x3225D4u, 0x3225DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3225DCu;
label_3225dc:
    // 0x3225dc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x3225dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_3225e0:
    // 0x3225e0: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x3225e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_3225e4:
    // 0x3225e4: 0x245234c0  addiu       $s2, $v0, 0x34C0
    ctx->pc = 0x3225e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 13504));
label_3225e8:
    // 0x3225e8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3225e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3225ec:
    // 0x3225ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3225ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3225f0:
    // 0x3225f0: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x3225f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_3225f4:
    // 0x3225f4: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3225f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_3225f8:
    // 0x3225f8: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x3225f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_3225fc:
    // 0x3225fc: 0xafb20020  sw          $s2, 0x20($sp)
    ctx->pc = 0x3225fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 18));
label_322600:
    // 0x322600: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x322600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_322604:
    // 0x322604: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x322604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_322608:
    // 0x322608: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_32260c:
    if (ctx->pc == 0x32260Cu) {
        ctx->pc = 0x32260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322608u;
        // 0x32260c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322610u;
        goto label_322610;
    }
    ctx->pc = 0x322608u;
    {
        const bool branch_taken_0x322608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322608u;
        // 0x32260c: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322608) {
            ctx->pc = 0x322670u;
            goto label_322670;
        }
    }
    ctx->pc = 0x322610u;
label_322610:
    // 0x322610: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x322610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_322614:
    // 0x322614: 0x0  nop
    ctx->pc = 0x322614u;
    // NOP
label_322618:
    // 0x322618: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x322618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_32261c:
    // 0x32261c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x32261cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_322620:
    // 0x322620: 0xc0d73cc  jal         func_35CF30
label_322624:
    if (ctx->pc == 0x322624u) {
        ctx->pc = 0x322624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322620u;
        // 0x322624: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322628u;
        goto label_322628;
    }
    ctx->pc = 0x322620u;
    SET_GPR_U32(ctx, 31, 0x322628u);
    ctx->pc = 0x322624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322620u;
    // 0x322624: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x322620u, 0x322628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322628u;
label_322628:
    // 0x322628: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x322628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32262c:
    // 0x32262c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_322630:
    if (ctx->pc == 0x322630u) {
        ctx->pc = 0x322630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32262Cu;
        // 0x322630: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322634u;
        goto label_322634;
    }
    ctx->pc = 0x32262Cu;
    {
        const bool branch_taken_0x32262c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32262Cu;
        // 0x322630: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32262c) {
            ctx->pc = 0x32263Cu;
            goto label_32263c;
        }
    }
    ctx->pc = 0x322634u;
label_322634:
    // 0x322634: 0x1000000e  b           . + 4 + (0xE << 2)
label_322638:
    if (ctx->pc == 0x322638u) {
        ctx->pc = 0x322638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322634u;
        // 0x322638: 0xae30be0c  sw          $s0, -0x41F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950412), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32263Cu;
        goto label_32263c;
    }
    ctx->pc = 0x322634u;
    {
        const bool branch_taken_0x322634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322634u;
        // 0x322638: 0xae30be0c  sw          $s0, -0x41F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950412), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322634) {
            ctx->pc = 0x322670u;
            goto label_322670;
        }
    }
    ctx->pc = 0x32263Cu;
label_32263c:
    // 0x32263c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_322640:
    if (ctx->pc == 0x322640u) {
        ctx->pc = 0x322640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32263Cu;
        // 0x322640: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322644u;
        goto label_322644;
    }
    ctx->pc = 0x32263Cu;
    {
        const bool branch_taken_0x32263c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32263c) {
            ctx->pc = 0x322640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32263Cu;
            // 0x322640: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322650u;
            goto label_322650;
        }
    }
    ctx->pc = 0x322644u;
label_322644:
    // 0x322644: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x322644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_322648:
    // 0x322648: 0x10000005  b           . + 4 + (0x5 << 2)
label_32264c:
    if (ctx->pc == 0x32264Cu) {
        ctx->pc = 0x32264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322648u;
        // 0x32264c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322650u;
        goto label_322650;
    }
    ctx->pc = 0x322648u;
    {
        const bool branch_taken_0x322648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322648u;
        // 0x32264c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322648) {
            ctx->pc = 0x322660u;
            goto label_322660;
        }
    }
    ctx->pc = 0x322650u;
label_322650:
    // 0x322650: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_322654:
    if (ctx->pc == 0x322654u) {
        ctx->pc = 0x322654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322650u;
        // 0x322654: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322658u;
        goto label_322658;
    }
    ctx->pc = 0x322650u;
    {
        const bool branch_taken_0x322650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322650u;
        // 0x322654: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322650) {
            ctx->pc = 0x322664u;
            goto label_322664;
        }
    }
    ctx->pc = 0x322658u;
label_322658:
    // 0x322658: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x322658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_32265c:
    // 0x32265c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x32265cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_322660:
    // 0x322660: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x322660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_322664:
    // 0x322664: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x322664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_322668:
    // 0x322668: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
label_32266c:
    if (ctx->pc == 0x32266Cu) {
        ctx->pc = 0x32266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322668u;
        // 0x32266c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322670u;
        goto label_322670;
    }
    ctx->pc = 0x322668u;
    {
        const bool branch_taken_0x322668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x32266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322668u;
        // 0x32266c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322668) {
            ctx->pc = 0x322618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322618;
        }
    }
    ctx->pc = 0x322670u;
label_322670:
    // 0x322670: 0x8e22be0c  lw          $v0, -0x41F4($s1)
    ctx->pc = 0x322670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950412)));
label_322674:
    // 0x322674: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_322678:
    if (ctx->pc == 0x322678u) {
        ctx->pc = 0x32267Cu;
        goto label_32267c;
    }
    ctx->pc = 0x322674u;
    {
        const bool branch_taken_0x322674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x322674) {
            ctx->pc = 0x3226E4u;
            goto label_3226e4;
        }
    }
    ctx->pc = 0x32267Cu;
label_32267c:
    // 0x32267c: 0xc0f5240  jal         func_3D4900
label_322680:
    if (ctx->pc == 0x322680u) {
        ctx->pc = 0x322680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32267Cu;
        // 0x322680: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322684u;
        goto label_322684;
    }
    ctx->pc = 0x32267Cu;
    SET_GPR_U32(ctx, 31, 0x322684u);
    ctx->pc = 0x322680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32267Cu;
    // 0x322680: 0x240401c0  addiu       $a0, $zero, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x32267Cu, 0x322684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322684u;
label_322684:
    // 0x322684: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322688:
    // 0x322688: 0x24050401  addiu       $a1, $zero, 0x401
    ctx->pc = 0x322688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_32268c:
    // 0x32268c: 0xc087380  jal         func_21CE00
label_322690:
    if (ctx->pc == 0x322690u) {
        ctx->pc = 0x322690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32268Cu;
        // 0x322690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322694u;
        goto label_322694;
    }
    ctx->pc = 0x32268Cu;
    SET_GPR_U32(ctx, 31, 0x322694u);
    ctx->pc = 0x322690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32268Cu;
    // 0x322690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CE00u, 0x32268Cu, 0x322694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322694u;
label_322694:
    // 0x322694: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x322694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_322698:
    // 0x322698: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x322698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_32269c:
    // 0x32269c: 0x246319a8  addiu       $v1, $v1, 0x19A8
    ctx->pc = 0x32269cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6568));
label_3226a0:
    // 0x3226a0: 0x260201a0  addiu       $v0, $s0, 0x1A0
    ctx->pc = 0x3226a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
label_3226a4:
    // 0x3226a4: 0xae030190  sw          $v1, 0x190($s0)
    ctx->pc = 0x3226a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 3));
label_3226a8:
    // 0x3226a8: 0x260601b0  addiu       $a2, $s0, 0x1B0
    ctx->pc = 0x3226a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
label_3226ac:
    // 0x3226ac: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3226acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_3226b0:
    // 0x3226b0: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3226b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_3226b4:
    // 0x3226b4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3226b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_3226b8:
    // 0x3226b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3226b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3226bc:
    // 0x3226bc: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3226bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_3226c0:
    // 0x3226c0: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x3226c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
label_3226c4:
    // 0x3226c4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x3226c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_3226c8:
    // 0x3226c8: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x3226c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_3226cc:
    // 0x3226cc: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x3226ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_3226d0:
    // 0x3226d0: 0xc0d745c  jal         func_35D170
label_3226d4:
    if (ctx->pc == 0x3226D4u) {
        ctx->pc = 0x3226D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226D0u;
        // 0x3226d4: 0xae30be0c  sw          $s0, -0x41F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950412), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3226D8u;
        goto label_3226d8;
    }
    ctx->pc = 0x3226D0u;
    SET_GPR_U32(ctx, 31, 0x3226D8u);
    ctx->pc = 0x3226D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226D0u;
    // 0x3226d4: 0xae30be0c  sw          $s0, -0x41F4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950412), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x3226D0u, 0x3226D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226D8u;
label_3226d8:
    // 0x3226d8: 0x8e25be0c  lw          $a1, -0x41F4($s1)
    ctx->pc = 0x3226d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950412)));
label_3226dc:
    // 0x3226dc: 0xc0f7834  jal         func_3DE0D0
label_3226e0:
    if (ctx->pc == 0x3226E0u) {
        ctx->pc = 0x3226E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226DCu;
        // 0x3226e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3226E4u;
        goto label_3226e4;
    }
    ctx->pc = 0x3226DCu;
    SET_GPR_U32(ctx, 31, 0x3226E4u);
    ctx->pc = 0x3226E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226DCu;
    // 0x3226e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DE0D0u, 0x3226DCu, 0x3226E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226E4u;
label_3226e4:
    // 0x3226e4: 0xc0f5240  jal         func_3D4900
label_3226e8:
    if (ctx->pc == 0x3226E8u) {
        ctx->pc = 0x3226E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226E4u;
        // 0x3226e8: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3226ECu;
        goto label_3226ec;
    }
    ctx->pc = 0x3226E4u;
    SET_GPR_U32(ctx, 31, 0x3226ECu);
    ctx->pc = 0x3226E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226E4u;
    // 0x3226e8: 0x240402e0  addiu       $a0, $zero, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3226E4u, 0x3226ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226ECu;
label_3226ec:
    // 0x3226ec: 0x8e25be0c  lw          $a1, -0x41F4($s1)
    ctx->pc = 0x3226ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950412)));
label_3226f0:
    // 0x3226f0: 0xc099b20  jal         func_266C80
label_3226f4:
    if (ctx->pc == 0x3226F4u) {
        ctx->pc = 0x3226F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3226F0u;
        // 0x3226f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3226F8u;
        goto label_3226f8;
    }
    ctx->pc = 0x3226F0u;
    SET_GPR_U32(ctx, 31, 0x3226F8u);
    ctx->pc = 0x3226F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3226F0u;
    // 0x3226f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266C80u, 0x3226F0u, 0x3226F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3226F8u;
label_3226f8:
    // 0x3226f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3226f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3226fc:
    // 0x3226fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3226fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_322700:
    // 0x322700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322704:
    // 0x322704: 0xc083942  jal         func_20E508
label_322708:
    if (ctx->pc == 0x322708u) {
        ctx->pc = 0x322708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322704u;
        // 0x322708: 0x8c45be08  lw          $a1, -0x41F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950408)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32270Cu;
        goto label_32270c;
    }
    ctx->pc = 0x322704u;
    SET_GPR_U32(ctx, 31, 0x32270Cu);
    ctx->pc = 0x322708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322704u;
    // 0x322708: 0x8c45be08  lw          $a1, -0x41F8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E508u, 0x322704u, 0x32270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32270Cu;
label_32270c:
    // 0x32270c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x32270cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_322710:
    // 0x322710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322714:
    // 0x322714: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x322714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_322718:
    // 0x322718: 0x40f809  jalr        $v0
label_32271c:
    if (ctx->pc == 0x32271Cu) {
        ctx->pc = 0x32271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322718u;
        // 0x32271c: 0x8e850104  lw          $a1, 0x104($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322720u;
        goto label_322720;
    }
    ctx->pc = 0x322718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322720u);
        ctx->pc = 0x32271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322718u;
        // 0x32271c: 0x8e850104  lw          $a1, 0x104($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322718u, 0x322720u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322720u;
label_322720:
    // 0x322720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322724:
    // 0x322724: 0xc099c02  jal         func_267008
label_322728:
    if (ctx->pc == 0x322728u) {
        ctx->pc = 0x322728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322724u;
        // 0x322728: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32272Cu;
        goto label_32272c;
    }
    ctx->pc = 0x322724u;
    SET_GPR_U32(ctx, 31, 0x32272Cu);
    ctx->pc = 0x322728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322724u;
    // 0x322728: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267008u, 0x322724u, 0x32272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32272Cu;
label_32272c:
    // 0x32272c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x32272cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_322730:
    // 0x322730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322734:
    // 0x322734: 0xa2000292  sb          $zero, 0x292($s0)
    ctx->pc = 0x322734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 658), (uint8_t)GPR_U32(ctx, 0));
label_322738:
    // 0x322738: 0xc099c64  jal         func_267190
label_32273c:
    if (ctx->pc == 0x32273Cu) {
        ctx->pc = 0x32273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322738u;
        // 0x32273c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322740u;
        goto label_322740;
    }
    ctx->pc = 0x322738u;
    SET_GPR_U32(ctx, 31, 0x322740u);
    ctx->pc = 0x32273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322738u;
    // 0x32273c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267190u, 0x322738u, 0x322740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322740u;
label_322740:
    // 0x322740: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x322740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_322744:
    // 0x322744: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x322744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_322748:
    // 0x322748: 0xc099c5c  jal         func_267170
label_32274c:
    if (ctx->pc == 0x32274Cu) {
        ctx->pc = 0x32274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322748u;
        // 0x32274c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322750u;
        goto label_322750;
    }
    ctx->pc = 0x322748u;
    SET_GPR_U32(ctx, 31, 0x322750u);
    ctx->pc = 0x32274Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322748u;
    // 0x32274c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267170u, 0x322748u, 0x322750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322750u;
label_322750:
    // 0x322750: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x322750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_322754:
    // 0x322754: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x322754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_322758:
    // 0x322758: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x322758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_32275c:
    // 0x32275c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x32275cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_322760:
    // 0x322760: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x322760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_322764:
    // 0x322764: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x322764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_322768:
    // 0x322768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_32276c:
    // 0x32276c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x32276cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_322770:
    // 0x322770: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_322774:
    // 0x322774: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x322774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_322778:
    // 0x322778: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x322778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_32277c:
    // 0x32277c: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x32277cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_322780:
    // 0x322780: 0xc099c44  jal         func_267110
label_322784:
    if (ctx->pc == 0x322784u) {
        ctx->pc = 0x322784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322780u;
        // 0x322784: 0xe7a20030  swc1        $f2, 0x30($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x322788u;
        goto label_322788;
    }
    ctx->pc = 0x322780u;
    SET_GPR_U32(ctx, 31, 0x322788u);
    ctx->pc = 0x322784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322780u;
    // 0x322784: 0xe7a20030  swc1        $f2, 0x30($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x267110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267110u, 0x322780u, 0x322788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322788u;
label_322788:
    // 0x322788: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x322788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_32278c:
    // 0x32278c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x32278cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_322790:
    // 0x322790: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x322790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_322794:
    // 0x322794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_322798:
    // 0x322798: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x322798u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_32279c:
    // 0x32279c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32279cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3227a0:
    // 0x3227a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3227a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3227a4:
    // 0x3227a4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x3227a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_3227a8:
    // 0x3227a8: 0xa200029a  sb          $zero, 0x29A($s0)
    ctx->pc = 0x3227a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 666), (uint8_t)GPR_U32(ctx, 0));
label_3227ac:
    // 0x3227ac: 0xa2000297  sb          $zero, 0x297($s0)
    ctx->pc = 0x3227acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 663), (uint8_t)GPR_U32(ctx, 0));
label_3227b0:
    // 0x3227b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3227b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3227b4:
    // 0x3227b4: 0xae000224  sw          $zero, 0x224($s0)
    ctx->pc = 0x3227b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
label_3227b8:
    // 0x3227b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3227b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3227bc:
    // 0x3227bc: 0xae00022c  sw          $zero, 0x22C($s0)
    ctx->pc = 0x3227bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_3227c0:
    // 0x3227c0: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x3227c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_3227c4:
    // 0x3227c4: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x3227c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
label_3227c8:
    // 0x3227c8: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x3227c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
label_3227cc:
    // 0x3227cc: 0xae000240  sw          $zero, 0x240($s0)
    ctx->pc = 0x3227ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
label_3227d0:
    // 0x3227d0: 0xa2000244  sb          $zero, 0x244($s0)
    ctx->pc = 0x3227d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 580), (uint8_t)GPR_U32(ctx, 0));
label_3227d4:
    // 0x3227d4: 0xa2110290  sb          $s1, 0x290($s0)
    ctx->pc = 0x3227d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 656), (uint8_t)GPR_U32(ctx, 17));
label_3227d8:
    // 0x3227d8: 0xae0202a0  sw          $v0, 0x2A0($s0)
    ctx->pc = 0x3227d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 2));
label_3227dc:
    // 0x3227dc: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x3227dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_3227e0:
    // 0x3227e0: 0xae0702a8  sw          $a3, 0x2A8($s0)
    ctx->pc = 0x3227e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 7));
label_3227e4:
    // 0x3227e4: 0xe600029c  swc1        $f0, 0x29C($s0)
    ctx->pc = 0x3227e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 668), bits); }
label_3227e8:
    // 0x3227e8: 0xa2060295  sb          $a2, 0x295($s0)
    ctx->pc = 0x3227e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 661), (uint8_t)GPR_U32(ctx, 6));
label_3227ec:
    // 0x3227ec: 0xae0702a4  sw          $a3, 0x2A4($s0)
    ctx->pc = 0x3227ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 7));
label_3227f0:
    // 0x3227f0: 0xc0f773a  jal         func_3DDCE8
label_3227f4:
    if (ctx->pc == 0x3227F4u) {
        ctx->pc = 0x3227F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3227F0u;
        // 0x3227f4: 0xa2060299  sb          $a2, 0x299($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 665), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3227F8u;
        goto label_3227f8;
    }
    ctx->pc = 0x3227F0u;
    SET_GPR_U32(ctx, 31, 0x3227F8u);
    ctx->pc = 0x3227F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3227F0u;
    // 0x3227f4: 0xa2060299  sb          $a2, 0x299($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 665), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDCE8u, 0x3227F0u, 0x3227F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3227F8u;
label_3227f8:
    // 0x3227f8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x3227f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_3227fc:
    // 0x3227fc: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x3227fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_322800:
    // 0x322800: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x322800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_322804:
    // 0x322804: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_322808:
    if (ctx->pc == 0x322808u) {
        ctx->pc = 0x322808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322804u;
        // 0x322808: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32280Cu;
        goto label_32280c;
    }
    ctx->pc = 0x322804u;
    {
        const bool branch_taken_0x322804 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322804u;
        // 0x322808: 0xae0200c0  sw          $v0, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322804) {
            ctx->pc = 0x322810u;
            goto label_322810;
        }
    }
    ctx->pc = 0x32280Cu;
label_32280c:
    // 0x32280c: 0xac710028  sw          $s1, 0x28($v1)
    ctx->pc = 0x32280cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 17));
label_322810:
    // 0x322810: 0x8e860104  lw          $a2, 0x104($s4)
    ctx->pc = 0x322810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_322814:
    // 0x322814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322818:
    // 0x322818: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x322818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_32281c:
    // 0x32281c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x32281cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_322820:
    // 0x322820: 0x8c43004c  lw          $v1, 0x4C($v0)
    ctx->pc = 0x322820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_322824:
    // 0x322824: 0x60f809  jalr        $v1
label_322828:
    if (ctx->pc == 0x322828u) {
        ctx->pc = 0x322828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322824u;
        // 0x322828: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32282Cu;
        goto label_32282c;
    }
    ctx->pc = 0x322824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32282Cu);
        ctx->pc = 0x322828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322824u;
        // 0x322828: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322824u, 0x32282Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32282Cu;
label_32282c:
    // 0x32282c: 0xc09a07e  jal         func_2681F8
label_322830:
    if (ctx->pc == 0x322830u) {
        ctx->pc = 0x322830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32282Cu;
        // 0x322830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322834u;
        goto label_322834;
    }
    ctx->pc = 0x32282Cu;
    SET_GPR_U32(ctx, 31, 0x322834u);
    ctx->pc = 0x322830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32282Cu;
    // 0x322830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2681F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2681F8u, 0x32282Cu, 0x322834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322834u;
label_322834:
    // 0x322834: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x322834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_322838:
    // 0x322838: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x322838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_32283c:
    // 0x32283c: 0xa051be10  sb          $s1, -0x41F0($v0)
    ctx->pc = 0x32283cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950416), (uint8_t)GPR_U32(ctx, 17));
label_322840:
    // 0x322840: 0xc0d7412  jal         func_35D048
label_322844:
    if (ctx->pc == 0x322844u) {
        ctx->pc = 0x322844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322840u;
        // 0x322844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322848u;
        goto label_322848;
    }
    ctx->pc = 0x322840u;
    SET_GPR_U32(ctx, 31, 0x322848u);
    ctx->pc = 0x322844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322840u;
    // 0x322844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x322840u, 0x322848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322848u;
label_322848:
    // 0x322848: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x322848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_32284c:
    // 0x32284c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x32284cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_322850:
    // 0x322850: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x322850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_322854:
    // 0x322854: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x322854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_322858:
    // 0x322858: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x322858u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_32285c:
    // 0x32285c: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x32285cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_322860:
    // 0x322860: 0x3e00008  jr          $ra
label_322864:
    if (ctx->pc == 0x322864u) {
        ctx->pc = 0x322864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322860u;
        // 0x322864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322868u;
        goto label_fallthrough_0x322860;
    }
    ctx->pc = 0x322860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322860u;
        // 0x322864: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x322860:
    ctx->pc = 0x322868u;
}
