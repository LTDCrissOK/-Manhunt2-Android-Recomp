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

// Function: sub_002105C8
// Address: 0x2105c8 - 0x2107e8
void sub_002105C8_0x2105c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002105C8_0x2105c8");
#endif

    switch (ctx->pc) {
        case 0x2105c8u: goto label_2105c8;
        case 0x2105ccu: goto label_2105cc;
        case 0x2105d0u: goto label_2105d0;
        case 0x2105d4u: goto label_2105d4;
        case 0x2105d8u: goto label_2105d8;
        case 0x2105dcu: goto label_2105dc;
        case 0x2105e0u: goto label_2105e0;
        case 0x2105e4u: goto label_2105e4;
        case 0x2105e8u: goto label_2105e8;
        case 0x2105ecu: goto label_2105ec;
        case 0x2105f0u: goto label_2105f0;
        case 0x2105f4u: goto label_2105f4;
        case 0x2105f8u: goto label_2105f8;
        case 0x2105fcu: goto label_2105fc;
        case 0x210600u: goto label_210600;
        case 0x210604u: goto label_210604;
        case 0x210608u: goto label_210608;
        case 0x21060cu: goto label_21060c;
        case 0x210610u: goto label_210610;
        case 0x210614u: goto label_210614;
        case 0x210618u: goto label_210618;
        case 0x21061cu: goto label_21061c;
        case 0x210620u: goto label_210620;
        case 0x210624u: goto label_210624;
        case 0x210628u: goto label_210628;
        case 0x21062cu: goto label_21062c;
        case 0x210630u: goto label_210630;
        case 0x210634u: goto label_210634;
        case 0x210638u: goto label_210638;
        case 0x21063cu: goto label_21063c;
        case 0x210640u: goto label_210640;
        case 0x210644u: goto label_210644;
        case 0x210648u: goto label_210648;
        case 0x21064cu: goto label_21064c;
        case 0x210650u: goto label_210650;
        case 0x210654u: goto label_210654;
        case 0x210658u: goto label_210658;
        case 0x21065cu: goto label_21065c;
        case 0x210660u: goto label_210660;
        case 0x210664u: goto label_210664;
        case 0x210668u: goto label_210668;
        case 0x21066cu: goto label_21066c;
        case 0x210670u: goto label_210670;
        case 0x210674u: goto label_210674;
        case 0x210678u: goto label_210678;
        case 0x21067cu: goto label_21067c;
        case 0x210680u: goto label_210680;
        case 0x210684u: goto label_210684;
        case 0x210688u: goto label_210688;
        case 0x21068cu: goto label_21068c;
        case 0x210690u: goto label_210690;
        case 0x210694u: goto label_210694;
        case 0x210698u: goto label_210698;
        case 0x21069cu: goto label_21069c;
        case 0x2106a0u: goto label_2106a0;
        case 0x2106a4u: goto label_2106a4;
        case 0x2106a8u: goto label_2106a8;
        case 0x2106acu: goto label_2106ac;
        case 0x2106b0u: goto label_2106b0;
        case 0x2106b4u: goto label_2106b4;
        case 0x2106b8u: goto label_2106b8;
        case 0x2106bcu: goto label_2106bc;
        case 0x2106c0u: goto label_2106c0;
        case 0x2106c4u: goto label_2106c4;
        case 0x2106c8u: goto label_2106c8;
        case 0x2106ccu: goto label_2106cc;
        case 0x2106d0u: goto label_2106d0;
        case 0x2106d4u: goto label_2106d4;
        case 0x2106d8u: goto label_2106d8;
        case 0x2106dcu: goto label_2106dc;
        case 0x2106e0u: goto label_2106e0;
        case 0x2106e4u: goto label_2106e4;
        case 0x2106e8u: goto label_2106e8;
        case 0x2106ecu: goto label_2106ec;
        case 0x2106f0u: goto label_2106f0;
        case 0x2106f4u: goto label_2106f4;
        case 0x2106f8u: goto label_2106f8;
        case 0x2106fcu: goto label_2106fc;
        case 0x210700u: goto label_210700;
        case 0x210704u: goto label_210704;
        case 0x210708u: goto label_210708;
        case 0x21070cu: goto label_21070c;
        case 0x210710u: goto label_210710;
        case 0x210714u: goto label_210714;
        case 0x210718u: goto label_210718;
        case 0x21071cu: goto label_21071c;
        case 0x210720u: goto label_210720;
        case 0x210724u: goto label_210724;
        case 0x210728u: goto label_210728;
        case 0x21072cu: goto label_21072c;
        case 0x210730u: goto label_210730;
        case 0x210734u: goto label_210734;
        case 0x210738u: goto label_210738;
        case 0x21073cu: goto label_21073c;
        case 0x210740u: goto label_210740;
        case 0x210744u: goto label_210744;
        case 0x210748u: goto label_210748;
        case 0x21074cu: goto label_21074c;
        case 0x210750u: goto label_210750;
        case 0x210754u: goto label_210754;
        case 0x210758u: goto label_210758;
        case 0x21075cu: goto label_21075c;
        case 0x210760u: goto label_210760;
        case 0x210764u: goto label_210764;
        case 0x210768u: goto label_210768;
        case 0x21076cu: goto label_21076c;
        case 0x210770u: goto label_210770;
        case 0x210774u: goto label_210774;
        case 0x210778u: goto label_210778;
        case 0x21077cu: goto label_21077c;
        case 0x210780u: goto label_210780;
        case 0x210784u: goto label_210784;
        case 0x210788u: goto label_210788;
        case 0x21078cu: goto label_21078c;
        case 0x210790u: goto label_210790;
        case 0x210794u: goto label_210794;
        case 0x210798u: goto label_210798;
        case 0x21079cu: goto label_21079c;
        case 0x2107a0u: goto label_2107a0;
        case 0x2107a4u: goto label_2107a4;
        case 0x2107a8u: goto label_2107a8;
        case 0x2107acu: goto label_2107ac;
        case 0x2107b0u: goto label_2107b0;
        case 0x2107b4u: goto label_2107b4;
        case 0x2107b8u: goto label_2107b8;
        case 0x2107bcu: goto label_2107bc;
        case 0x2107c0u: goto label_2107c0;
        case 0x2107c4u: goto label_2107c4;
        case 0x2107c8u: goto label_2107c8;
        case 0x2107ccu: goto label_2107cc;
        case 0x2107d0u: goto label_2107d0;
        case 0x2107d4u: goto label_2107d4;
        case 0x2107d8u: goto label_2107d8;
        case 0x2107dcu: goto label_2107dc;
        case 0x2107e0u: goto label_2107e0;
        case 0x2107e4u: goto label_2107e4;
        default: break;
    }

    ctx->pc = 0x2105c8u;

label_2105c8:
    // 0x2105c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2105c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2105cc:
    // 0x2105cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2105ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2105d0:
    // 0x2105d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2105d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2105d4:
    // 0x2105d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2105d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2105d8:
    // 0x2105d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2105d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2105dc:
    // 0x2105dc: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2105dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2105e0:
    // 0x2105e0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2105e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2105e4:
    // 0x2105e4: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_2105e8:
    if (ctx->pc == 0x2105E8u) {
        ctx->pc = 0x2105E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105E4u;
        // 0x2105e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2105ECu;
        goto label_2105ec;
    }
    ctx->pc = 0x2105E4u;
    {
        const bool branch_taken_0x2105e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2105E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105E4u;
        // 0x2105e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105e4) {
            ctx->pc = 0x2107D8u;
            goto label_2107d8;
        }
    }
    ctx->pc = 0x2105ECu;
label_2105ec:
    // 0x2105ec: 0xc0843aa  jal         func_210EA8
label_2105f0:
    if (ctx->pc == 0x2105F0u) {
        ctx->pc = 0x2105F4u;
        goto label_2105f4;
    }
    ctx->pc = 0x2105ECu;
    SET_GPR_U32(ctx, 31, 0x2105F4u);
    ctx->pc = 0x210EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210EA8u, 0x2105ECu, 0x2105F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105F4u;
label_2105f4:
    // 0x2105f4: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x2105f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2105f8:
    // 0x2105f8: 0x5080001f  beql        $a0, $zero, . + 4 + (0x1F << 2)
label_2105fc:
    if (ctx->pc == 0x2105FCu) {
        ctx->pc = 0x2105FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105F8u;
        // 0x2105fc: 0xc6210118  lwc1        $f1, 0x118($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x210600u;
        goto label_210600;
    }
    ctx->pc = 0x2105F8u;
    {
        const bool branch_taken_0x2105f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2105f8) {
            ctx->pc = 0x2105FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2105F8u;
            // 0x2105fc: 0xc6210118  lwc1        $f1, 0x118($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x210678u;
            goto label_210678;
        }
    }
    ctx->pc = 0x210600u;
label_210600:
    // 0x210600: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x210600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_210604:
    // 0x210604: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x210604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_210608:
    // 0x210608: 0x40f809  jalr        $v0
label_21060c:
    if (ctx->pc == 0x21060Cu) {
        ctx->pc = 0x210610u;
        goto label_210610;
    }
    ctx->pc = 0x210608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210610u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210608u, 0x210610u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210610u;
label_210610:
    // 0x210610: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_210614:
    if (ctx->pc == 0x210614u) {
        ctx->pc = 0x210614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210610u;
        // 0x210614: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210618u;
        goto label_210618;
    }
    ctx->pc = 0x210610u;
    {
        const bool branch_taken_0x210610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210610) {
            ctx->pc = 0x210614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210610u;
            // 0x210614: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210640u;
            goto label_210640;
        }
    }
    ctx->pc = 0x210618u;
label_210618:
    // 0x210618: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x210618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_21061c:
    // 0x21061c: 0x30421001  andi        $v0, $v0, 0x1001
    ctx->pc = 0x21061cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4097);
label_210620:
    // 0x210620: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x210620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_210624:
    // 0x210624: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_210628:
    if (ctx->pc == 0x210628u) {
        ctx->pc = 0x210628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210624u;
        // 0x210628: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21062Cu;
        goto label_21062c;
    }
    ctx->pc = 0x210624u;
    {
        const bool branch_taken_0x210624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210624) {
            ctx->pc = 0x210628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210624u;
            // 0x210628: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210640u;
            goto label_210640;
        }
    }
    ctx->pc = 0x21062Cu;
label_21062c:
    // 0x21062c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x21062cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_210630:
    // 0x210630: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x210630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_210634:
    // 0x210634: 0x40f809  jalr        $v0
label_210638:
    if (ctx->pc == 0x210638u) {
        ctx->pc = 0x210638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210634u;
        // 0x210638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21063Cu;
        goto label_21063c;
    }
    ctx->pc = 0x210634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21063Cu);
        ctx->pc = 0x210638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210634u;
        // 0x210638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210634u, 0x21063Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21063Cu;
label_21063c:
    // 0x21063c: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x21063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_210640:
    // 0x210640: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x210640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_210644:
    // 0x210644: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_210648:
    if (ctx->pc == 0x210648u) {
        ctx->pc = 0x210648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210644u;
        // 0x210648: 0xc6210118  lwc1        $f1, 0x118($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x21064Cu;
        goto label_21064c;
    }
    ctx->pc = 0x210644u;
    {
        const bool branch_taken_0x210644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210644) {
            ctx->pc = 0x210648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210644u;
            // 0x210648: 0xc6210118  lwc1        $f1, 0x118($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x210678u;
            goto label_210678;
        }
    }
    ctx->pc = 0x21064Cu;
label_21064c:
    // 0x21064c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x21064cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_210650:
    // 0x210650: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x210650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_210654:
    // 0x210654: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x210654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_210658:
    // 0x210658: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x210658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_21065c:
    // 0x21065c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x21065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_210660:
    // 0x210660: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x210660u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_210664:
    // 0x210664: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x210664u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_210668:
    // 0x210668: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x210668u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_21066c:
    // 0x21066c: 0x46000004  c1          0x4
    ctx->pc = 0x21066cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_210670:
    // 0x210670: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x210670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
label_210674:
    // 0x210674: 0xc6210118  lwc1        $f1, 0x118($s1)
    ctx->pc = 0x210674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_210678:
    // 0x210678: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x210678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_21067c:
    // 0x21067c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x21067cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_210680:
    // 0x210680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210684:
    // 0x210684: 0x0  nop
    ctx->pc = 0x210684u;
    // NOP
label_210688:
    // 0x210688: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x210688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21068c:
    // 0x21068c: 0x0  nop
    ctx->pc = 0x21068cu;
    // NOP
label_210690:
    // 0x210690: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_210694:
    if (ctx->pc == 0x210694u) {
        ctx->pc = 0x210694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210690u;
        // 0x210694: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210698u;
        goto label_210698;
    }
    ctx->pc = 0x210690u;
    {
        const bool branch_taken_0x210690 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x210690) {
            ctx->pc = 0x210694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210690u;
            // 0x210694: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2106B4u;
            goto label_2106b4;
        }
    }
    ctx->pc = 0x210698u;
label_210698:
    // 0x210698: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x210698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_21069c:
    // 0x21069c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2106a0:
    if (ctx->pc == 0x2106A0u) {
        ctx->pc = 0x2106A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21069Cu;
        // 0x2106a0: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106A4u;
        goto label_2106a4;
    }
    ctx->pc = 0x21069Cu;
    {
        const bool branch_taken_0x21069c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21069c) {
            ctx->pc = 0x2106A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21069Cu;
            // 0x2106a0: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2106F4u;
            goto label_2106f4;
        }
    }
    ctx->pc = 0x2106A4u;
label_2106a4:
    // 0x2106a4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2106a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_2106a8:
    // 0x2106a8: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_2106ac:
    if (ctx->pc == 0x2106ACu) {
        ctx->pc = 0x2106ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106A8u;
        // 0x2106ac: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106B0u;
        goto label_2106b0;
    }
    ctx->pc = 0x2106A8u;
    {
        const bool branch_taken_0x2106a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2106a8) {
            ctx->pc = 0x2106ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2106A8u;
            // 0x2106ac: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2106F4u;
            goto label_2106f4;
        }
    }
    ctx->pc = 0x2106B0u;
label_2106b0:
    // 0x2106b0: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2106b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2106b4:
    // 0x2106b4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2106b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2106b8:
    // 0x2106b8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2106bc:
    if (ctx->pc == 0x2106BCu) {
        ctx->pc = 0x2106BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106B8u;
        // 0x2106bc: 0x8e2300bc  lw          $v1, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106C0u;
        goto label_2106c0;
    }
    ctx->pc = 0x2106B8u;
    {
        const bool branch_taken_0x2106b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2106b8) {
            ctx->pc = 0x2106BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2106B8u;
            // 0x2106bc: 0x8e2300bc  lw          $v1, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2106CCu;
            goto label_2106cc;
        }
    }
    ctx->pc = 0x2106C0u;
label_2106c0:
    // 0x2106c0: 0xc0843ea  jal         func_210FA8
label_2106c4:
    if (ctx->pc == 0x2106C4u) {
        ctx->pc = 0x2106C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106C0u;
        // 0x2106c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106C8u;
        goto label_2106c8;
    }
    ctx->pc = 0x2106C0u;
    SET_GPR_U32(ctx, 31, 0x2106C8u);
    ctx->pc = 0x2106C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106C0u;
    // 0x2106c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210FA8u, 0x2106C0u, 0x2106C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106C8u;
label_2106c8:
    // 0x2106c8: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x2106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2106cc:
    // 0x2106cc: 0x30621001  andi        $v0, $v1, 0x1001
    ctx->pc = 0x2106ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
label_2106d0:
    // 0x2106d0: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x2106d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_2106d4:
    // 0x2106d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2106d8:
    if (ctx->pc == 0x2106D8u) {
        ctx->pc = 0x2106D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106D4u;
        // 0x2106d8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106DCu;
        goto label_2106dc;
    }
    ctx->pc = 0x2106D4u;
    {
        const bool branch_taken_0x2106d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2106D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106D4u;
        // 0x2106d8: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2106d4) {
            ctx->pc = 0x2106F0u;
            goto label_2106f0;
        }
    }
    ctx->pc = 0x2106DCu;
label_2106dc:
    // 0x2106dc: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2106dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_2106e0:
    // 0x2106e0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2106e4:
    if (ctx->pc == 0x2106E4u) {
        ctx->pc = 0x2106E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106E0u;
        // 0x2106e4: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106E8u;
        goto label_2106e8;
    }
    ctx->pc = 0x2106E0u;
    {
        const bool branch_taken_0x2106e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2106e0) {
            ctx->pc = 0x2106E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2106E0u;
            // 0x2106e4: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2106F4u;
            goto label_2106f4;
        }
    }
    ctx->pc = 0x2106E8u;
label_2106e8:
    // 0x2106e8: 0xc0846b0  jal         func_211AC0
label_2106ec:
    if (ctx->pc == 0x2106ECu) {
        ctx->pc = 0x2106ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2106E8u;
        // 0x2106ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2106F0u;
        goto label_2106f0;
    }
    ctx->pc = 0x2106E8u;
    SET_GPR_U32(ctx, 31, 0x2106F0u);
    ctx->pc = 0x2106ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106E8u;
    // 0x2106ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211AC0u, 0x2106E8u, 0x2106F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106F0u;
label_2106f0:
    // 0x2106f0: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x2106f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2106f4:
    // 0x2106f4: 0x3c01c348  lui         $at, 0xC348
    ctx->pc = 0x2106f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49992 << 16));
label_2106f8:
    // 0x2106f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2106f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2106fc:
    // 0x2106fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2106fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_210700:
    // 0x210700: 0xc4400074  lwc1        $f0, 0x74($v0)
    ctx->pc = 0x210700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210704:
    // 0x210704: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x210704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_210708:
    // 0x210708: 0x0  nop
    ctx->pc = 0x210708u;
    // NOP
label_21070c:
    // 0x21070c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_210710:
    if (ctx->pc == 0x210710u) {
        ctx->pc = 0x210710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21070Cu;
        // 0x210710: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210714u;
        goto label_210714;
    }
    ctx->pc = 0x21070Cu;
    {
        const bool branch_taken_0x21070c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21070Cu;
        // 0x210710: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21070c) {
            ctx->pc = 0x2107D8u;
            goto label_2107d8;
        }
    }
    ctx->pc = 0x210714u;
label_210714:
    // 0x210714: 0x8e2300bc  lw          $v1, 0xBC($s1)
    ctx->pc = 0x210714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_210718:
    // 0x210718: 0x3062020f  andi        $v0, $v1, 0x20F
    ctx->pc = 0x210718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)527);
label_21071c:
    // 0x21071c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x21071cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_210720:
    // 0x210720: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_210724:
    if (ctx->pc == 0x210724u) {
        ctx->pc = 0x210724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210720u;
        // 0x210724: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210728u;
        goto label_210728;
    }
    ctx->pc = 0x210720u;
    {
        const bool branch_taken_0x210720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210720u;
        // 0x210724: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210720) {
            ctx->pc = 0x210750u;
            goto label_210750;
        }
    }
    ctx->pc = 0x210728u;
label_210728:
    // 0x210728: 0x8e300218  lw          $s0, 0x218($s1)
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_21072c:
    // 0x21072c: 0xc095368  jal         func_254DA0
label_210730:
    if (ctx->pc == 0x210730u) {
        ctx->pc = 0x210730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21072Cu;
        // 0x210730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210734u;
        goto label_210734;
    }
    ctx->pc = 0x21072Cu;
    SET_GPR_U32(ctx, 31, 0x210734u);
    ctx->pc = 0x210730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21072Cu;
    // 0x210730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254DA0u, 0x21072Cu, 0x210734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210734u;
label_210734:
    // 0x210734: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x210734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_210738:
    // 0x210738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21073c:
    // 0x21073c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21073cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210740:
    // 0x210740: 0x60f809  jalr        $v1
label_210744:
    if (ctx->pc == 0x210744u) {
        ctx->pc = 0x210744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210740u;
        // 0x210744: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210748u;
        goto label_210748;
    }
    ctx->pc = 0x210740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x210748u);
        ctx->pc = 0x210744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210740u;
        // 0x210744: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210740u, 0x210748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210748u;
label_210748:
    // 0x210748: 0x10000023  b           . + 4 + (0x23 << 2)
label_21074c:
    if (ctx->pc == 0x21074Cu) {
        ctx->pc = 0x21074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210748u;
        // 0x21074c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210750u;
        goto label_210750;
    }
    ctx->pc = 0x210748u;
    {
        const bool branch_taken_0x210748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210748u;
        // 0x21074c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210748) {
            ctx->pc = 0x2107D8u;
            goto label_2107d8;
        }
    }
    ctx->pc = 0x210750u;
label_210750:
    // 0x210750: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x210750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_210754:
    // 0x210754: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_210758:
    if (ctx->pc == 0x210758u) {
        ctx->pc = 0x210758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210754u;
        // 0x210758: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21075Cu;
        goto label_21075c;
    }
    ctx->pc = 0x210754u;
    {
        const bool branch_taken_0x210754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210754) {
            ctx->pc = 0x210758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210754u;
            // 0x210758: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2107C4u;
            goto label_2107c4;
        }
    }
    ctx->pc = 0x21075Cu;
label_21075c:
    // 0x21075c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x21075cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_210760:
    // 0x210760: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x210760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
label_210764:
    // 0x210764: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_210768:
    if (ctx->pc == 0x210768u) {
        ctx->pc = 0x210768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210764u;
        // 0x210768: 0xae201068  sw          $zero, 0x1068($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21076Cu;
        goto label_21076c;
    }
    ctx->pc = 0x210764u;
    {
        const bool branch_taken_0x210764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210764) {
            ctx->pc = 0x210768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210764u;
            // 0x210768: 0xae201068  sw          $zero, 0x1068($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21076Cu;
            goto label_21076c;
        }
    }
    ctx->pc = 0x21076Cu;
label_21076c:
    // 0x21076c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x21076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_210770:
    // 0x210770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210774:
    // 0x210774: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x210774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_210778:
    // 0x210778: 0x40f809  jalr        $v0
label_21077c:
    if (ctx->pc == 0x21077Cu) {
        ctx->pc = 0x21077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210778u;
        // 0x21077c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210780u;
        goto label_210780;
    }
    ctx->pc = 0x210778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210780u);
        ctx->pc = 0x21077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210778u;
        // 0x21077c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210778u, 0x210780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210780u;
label_210780:
    // 0x210780: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x210780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_210784:
    // 0x210784: 0x3c01c347  lui         $at, 0xC347
    ctx->pc = 0x210784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49991 << 16));
label_210788:
    // 0x210788: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_21078c:
    // 0x21078c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_210790:
    // 0x210790: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x210790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
label_210794:
    // 0x210794: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x210794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_210798:
    // 0x210798: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x210798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_21079c:
    // 0x21079c: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2107a0:
    // 0x2107a0: 0x40f809  jalr        $v0
label_2107a4:
    if (ctx->pc == 0x2107A4u) {
        ctx->pc = 0x2107A8u;
        goto label_2107a8;
    }
    ctx->pc = 0x2107A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2107A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2107A0u, 0x2107A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2107A8u;
label_2107a8:
    // 0x2107a8: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x2107a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2107ac:
    // 0x2107ac: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x2107acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2107b0:
    // 0x2107b0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2107b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_2107b4:
    // 0x2107b4: 0x40f809  jalr        $v0
label_2107b8:
    if (ctx->pc == 0x2107B8u) {
        ctx->pc = 0x2107BCu;
        goto label_2107bc;
    }
    ctx->pc = 0x2107B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2107BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2107B4u, 0x2107BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2107BCu;
label_2107bc:
    // 0x2107bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2107c0:
    if (ctx->pc == 0x2107C0u) {
        ctx->pc = 0x2107C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107BCu;
        // 0x2107c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2107C4u;
        goto label_2107c4;
    }
    ctx->pc = 0x2107BCu;
    {
        const bool branch_taken_0x2107bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107BCu;
        // 0x2107c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107bc) {
            ctx->pc = 0x2107D8u;
            goto label_2107d8;
        }
    }
    ctx->pc = 0x2107C4u;
label_2107c4:
    // 0x2107c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2107c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2107c8:
    // 0x2107c8: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x2107c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_2107cc:
    // 0x2107cc: 0x40f809  jalr        $v0
label_2107d0:
    if (ctx->pc == 0x2107D0u) {
        ctx->pc = 0x2107D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107CCu;
        // 0x2107d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2107D4u;
        goto label_2107d4;
    }
    ctx->pc = 0x2107CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2107D4u);
        ctx->pc = 0x2107D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107CCu;
        // 0x2107d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2107CCu, 0x2107D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2107D4u;
label_2107d4:
    // 0x2107d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2107d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2107d8:
    // 0x2107d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2107d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2107dc:
    // 0x2107dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2107dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2107e0:
    // 0x2107e0: 0x3e00008  jr          $ra
label_2107e4:
    if (ctx->pc == 0x2107E4u) {
        ctx->pc = 0x2107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107E0u;
        // 0x2107e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2107E8u;
        goto label_fallthrough_0x2107e0;
    }
    ctx->pc = 0x2107E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107E0u;
        // 0x2107e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2107E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2107e0:
    ctx->pc = 0x2107E8u;
}
