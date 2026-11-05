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

// Function: sub_002ED4E8
// Address: 0x2ed4e8 - 0x2ed778
void sub_002ED4E8_0x2ed4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED4E8_0x2ed4e8");
#endif

    switch (ctx->pc) {
        case 0x2ed4e8u: goto label_2ed4e8;
        case 0x2ed4ecu: goto label_2ed4ec;
        case 0x2ed4f0u: goto label_2ed4f0;
        case 0x2ed4f4u: goto label_2ed4f4;
        case 0x2ed4f8u: goto label_2ed4f8;
        case 0x2ed4fcu: goto label_2ed4fc;
        case 0x2ed500u: goto label_2ed500;
        case 0x2ed504u: goto label_2ed504;
        case 0x2ed508u: goto label_2ed508;
        case 0x2ed50cu: goto label_2ed50c;
        case 0x2ed510u: goto label_2ed510;
        case 0x2ed514u: goto label_2ed514;
        case 0x2ed518u: goto label_2ed518;
        case 0x2ed51cu: goto label_2ed51c;
        case 0x2ed520u: goto label_2ed520;
        case 0x2ed524u: goto label_2ed524;
        case 0x2ed528u: goto label_2ed528;
        case 0x2ed52cu: goto label_2ed52c;
        case 0x2ed530u: goto label_2ed530;
        case 0x2ed534u: goto label_2ed534;
        case 0x2ed538u: goto label_2ed538;
        case 0x2ed53cu: goto label_2ed53c;
        case 0x2ed540u: goto label_2ed540;
        case 0x2ed544u: goto label_2ed544;
        case 0x2ed548u: goto label_2ed548;
        case 0x2ed54cu: goto label_2ed54c;
        case 0x2ed550u: goto label_2ed550;
        case 0x2ed554u: goto label_2ed554;
        case 0x2ed558u: goto label_2ed558;
        case 0x2ed55cu: goto label_2ed55c;
        case 0x2ed560u: goto label_2ed560;
        case 0x2ed564u: goto label_2ed564;
        case 0x2ed568u: goto label_2ed568;
        case 0x2ed56cu: goto label_2ed56c;
        case 0x2ed570u: goto label_2ed570;
        case 0x2ed574u: goto label_2ed574;
        case 0x2ed578u: goto label_2ed578;
        case 0x2ed57cu: goto label_2ed57c;
        case 0x2ed580u: goto label_2ed580;
        case 0x2ed584u: goto label_2ed584;
        case 0x2ed588u: goto label_2ed588;
        case 0x2ed58cu: goto label_2ed58c;
        case 0x2ed590u: goto label_2ed590;
        case 0x2ed594u: goto label_2ed594;
        case 0x2ed598u: goto label_2ed598;
        case 0x2ed59cu: goto label_2ed59c;
        case 0x2ed5a0u: goto label_2ed5a0;
        case 0x2ed5a4u: goto label_2ed5a4;
        case 0x2ed5a8u: goto label_2ed5a8;
        case 0x2ed5acu: goto label_2ed5ac;
        case 0x2ed5b0u: goto label_2ed5b0;
        case 0x2ed5b4u: goto label_2ed5b4;
        case 0x2ed5b8u: goto label_2ed5b8;
        case 0x2ed5bcu: goto label_2ed5bc;
        case 0x2ed5c0u: goto label_2ed5c0;
        case 0x2ed5c4u: goto label_2ed5c4;
        case 0x2ed5c8u: goto label_2ed5c8;
        case 0x2ed5ccu: goto label_2ed5cc;
        case 0x2ed5d0u: goto label_2ed5d0;
        case 0x2ed5d4u: goto label_2ed5d4;
        case 0x2ed5d8u: goto label_2ed5d8;
        case 0x2ed5dcu: goto label_2ed5dc;
        case 0x2ed5e0u: goto label_2ed5e0;
        case 0x2ed5e4u: goto label_2ed5e4;
        case 0x2ed5e8u: goto label_2ed5e8;
        case 0x2ed5ecu: goto label_2ed5ec;
        case 0x2ed5f0u: goto label_2ed5f0;
        case 0x2ed5f4u: goto label_2ed5f4;
        case 0x2ed5f8u: goto label_2ed5f8;
        case 0x2ed5fcu: goto label_2ed5fc;
        case 0x2ed600u: goto label_2ed600;
        case 0x2ed604u: goto label_2ed604;
        case 0x2ed608u: goto label_2ed608;
        case 0x2ed60cu: goto label_2ed60c;
        case 0x2ed610u: goto label_2ed610;
        case 0x2ed614u: goto label_2ed614;
        case 0x2ed618u: goto label_2ed618;
        case 0x2ed61cu: goto label_2ed61c;
        case 0x2ed620u: goto label_2ed620;
        case 0x2ed624u: goto label_2ed624;
        case 0x2ed628u: goto label_2ed628;
        case 0x2ed62cu: goto label_2ed62c;
        case 0x2ed630u: goto label_2ed630;
        case 0x2ed634u: goto label_2ed634;
        case 0x2ed638u: goto label_2ed638;
        case 0x2ed63cu: goto label_2ed63c;
        case 0x2ed640u: goto label_2ed640;
        case 0x2ed644u: goto label_2ed644;
        case 0x2ed648u: goto label_2ed648;
        case 0x2ed64cu: goto label_2ed64c;
        case 0x2ed650u: goto label_2ed650;
        case 0x2ed654u: goto label_2ed654;
        case 0x2ed658u: goto label_2ed658;
        case 0x2ed65cu: goto label_2ed65c;
        case 0x2ed660u: goto label_2ed660;
        case 0x2ed664u: goto label_2ed664;
        case 0x2ed668u: goto label_2ed668;
        case 0x2ed66cu: goto label_2ed66c;
        case 0x2ed670u: goto label_2ed670;
        case 0x2ed674u: goto label_2ed674;
        case 0x2ed678u: goto label_2ed678;
        case 0x2ed67cu: goto label_2ed67c;
        case 0x2ed680u: goto label_2ed680;
        case 0x2ed684u: goto label_2ed684;
        case 0x2ed688u: goto label_2ed688;
        case 0x2ed68cu: goto label_2ed68c;
        case 0x2ed690u: goto label_2ed690;
        case 0x2ed694u: goto label_2ed694;
        case 0x2ed698u: goto label_2ed698;
        case 0x2ed69cu: goto label_2ed69c;
        case 0x2ed6a0u: goto label_2ed6a0;
        case 0x2ed6a4u: goto label_2ed6a4;
        case 0x2ed6a8u: goto label_2ed6a8;
        case 0x2ed6acu: goto label_2ed6ac;
        case 0x2ed6b0u: goto label_2ed6b0;
        case 0x2ed6b4u: goto label_2ed6b4;
        case 0x2ed6b8u: goto label_2ed6b8;
        case 0x2ed6bcu: goto label_2ed6bc;
        case 0x2ed6c0u: goto label_2ed6c0;
        case 0x2ed6c4u: goto label_2ed6c4;
        case 0x2ed6c8u: goto label_2ed6c8;
        case 0x2ed6ccu: goto label_2ed6cc;
        case 0x2ed6d0u: goto label_2ed6d0;
        case 0x2ed6d4u: goto label_2ed6d4;
        case 0x2ed6d8u: goto label_2ed6d8;
        case 0x2ed6dcu: goto label_2ed6dc;
        case 0x2ed6e0u: goto label_2ed6e0;
        case 0x2ed6e4u: goto label_2ed6e4;
        case 0x2ed6e8u: goto label_2ed6e8;
        case 0x2ed6ecu: goto label_2ed6ec;
        case 0x2ed6f0u: goto label_2ed6f0;
        case 0x2ed6f4u: goto label_2ed6f4;
        case 0x2ed6f8u: goto label_2ed6f8;
        case 0x2ed6fcu: goto label_2ed6fc;
        case 0x2ed700u: goto label_2ed700;
        case 0x2ed704u: goto label_2ed704;
        case 0x2ed708u: goto label_2ed708;
        case 0x2ed70cu: goto label_2ed70c;
        case 0x2ed710u: goto label_2ed710;
        case 0x2ed714u: goto label_2ed714;
        case 0x2ed718u: goto label_2ed718;
        case 0x2ed71cu: goto label_2ed71c;
        case 0x2ed720u: goto label_2ed720;
        case 0x2ed724u: goto label_2ed724;
        case 0x2ed728u: goto label_2ed728;
        case 0x2ed72cu: goto label_2ed72c;
        case 0x2ed730u: goto label_2ed730;
        case 0x2ed734u: goto label_2ed734;
        case 0x2ed738u: goto label_2ed738;
        case 0x2ed73cu: goto label_2ed73c;
        case 0x2ed740u: goto label_2ed740;
        case 0x2ed744u: goto label_2ed744;
        case 0x2ed748u: goto label_2ed748;
        case 0x2ed74cu: goto label_2ed74c;
        case 0x2ed750u: goto label_2ed750;
        case 0x2ed754u: goto label_2ed754;
        case 0x2ed758u: goto label_2ed758;
        case 0x2ed75cu: goto label_2ed75c;
        case 0x2ed760u: goto label_2ed760;
        case 0x2ed764u: goto label_2ed764;
        case 0x2ed768u: goto label_2ed768;
        case 0x2ed76cu: goto label_2ed76c;
        case 0x2ed770u: goto label_2ed770;
        case 0x2ed774u: goto label_2ed774;
        default: break;
    }

    ctx->pc = 0x2ed4e8u;

label_2ed4e8:
    // 0x2ed4e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ed4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ed4ec:
    // 0x2ed4ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2ed4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2ed4f0:
    // 0x2ed4f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ed4f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed4f4:
    // 0x2ed4f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ed4f8:
    // 0x2ed4f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2ed4fc:
    // 0x2ed4fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2ed4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2ed500:
    // 0x2ed500: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2ed500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2ed504:
    // 0x2ed504: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2ed504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2ed508:
    // 0x2ed508: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2ed508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2ed50c:
    // 0x2ed50c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2ed50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2ed510:
    // 0x2ed510: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2ed510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2ed514:
    // 0x2ed514: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2ed514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2ed518:
    // 0x2ed518: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x2ed518u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2ed51c:
    // 0x2ed51c: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x2ed51cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_2ed520:
    // 0x2ed520: 0xc0b9400  jal         func_2E5000
label_2ed524:
    if (ctx->pc == 0x2ED524u) {
        ctx->pc = 0x2ED524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED520u;
        // 0x2ed524: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED528u;
        goto label_2ed528;
    }
    ctx->pc = 0x2ED520u;
    SET_GPR_U32(ctx, 31, 0x2ED528u);
    ctx->pc = 0x2ED524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED520u;
    // 0x2ed524: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2ED520u, 0x2ED528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED528u;
label_2ed528:
    // 0x2ed528: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
label_2ed52c:
    if (ctx->pc == 0x2ED52Cu) {
        ctx->pc = 0x2ED52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED528u;
        // 0x2ed52c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED530u;
        goto label_2ed530;
    }
    ctx->pc = 0x2ED528u;
    {
        const bool branch_taken_0x2ed528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED528u;
        // 0x2ed52c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed528) {
            ctx->pc = 0x2ED740u;
            goto label_2ed740;
        }
    }
    ctx->pc = 0x2ED530u;
label_2ed530:
    // 0x2ed530: 0x8e4211f8  lw          $v0, 0x11F8($s2)
    ctx->pc = 0x2ed530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4600)));
label_2ed534:
    // 0x2ed534: 0x14400083  bnez        $v0, . + 4 + (0x83 << 2)
label_2ed538:
    if (ctx->pc == 0x2ED538u) {
        ctx->pc = 0x2ED538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED534u;
        // 0x2ed538: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED53Cu;
        goto label_2ed53c;
    }
    ctx->pc = 0x2ED534u;
    {
        const bool branch_taken_0x2ed534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED534u;
        // 0x2ed538: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed534) {
            ctx->pc = 0x2ED744u;
            goto label_2ed744;
        }
    }
    ctx->pc = 0x2ED53Cu;
label_2ed53c:
    // 0x2ed53c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ed53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed540:
    // 0x2ed540: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ed540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ed544:
    // 0x2ed544: 0xae5111f8  sw          $s1, 0x11F8($s2)
    ctx->pc = 0x2ed544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4600), GPR_U32(ctx, 17));
label_2ed548:
    // 0x2ed548: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2ed548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_2ed54c:
    // 0x2ed54c: 0x24845870  addiu       $a0, $a0, 0x5870
    ctx->pc = 0x2ed54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22640));
label_2ed550:
    // 0x2ed550: 0xa040bdfc  sb          $zero, -0x4204($v0)
    ctx->pc = 0x2ed550u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294950396), (uint8_t)GPR_U32(ctx, 0));
label_2ed554:
    // 0x2ed554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ed554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed558:
    // 0x2ed558: 0xc0b8f3e  jal         func_2E3CF8
label_2ed55c:
    if (ctx->pc == 0x2ED55Cu) {
        ctx->pc = 0x2ED55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED558u;
        // 0x2ed55c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED560u;
        goto label_2ed560;
    }
    ctx->pc = 0x2ED558u;
    SET_GPR_U32(ctx, 31, 0x2ED560u);
    ctx->pc = 0x2ED55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED558u;
    // 0x2ed55c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3CF8u, 0x2ED558u, 0x2ED560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED560u;
label_2ed560:
    // 0x2ed560: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x2ed560u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed564:
    // 0x2ed564: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ed564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ed568:
    // 0x2ed568: 0x8e039194  lw          $v1, -0x6E6C($s0)
    ctx->pc = 0x2ed568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294939028)));
label_2ed56c:
    // 0x2ed56c: 0x8c549198  lw          $s4, -0x6E68($v0)
    ctx->pc = 0x2ed56cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939032)));
label_2ed570:
    // 0x2ed570: 0x240601f4  addiu       $a2, $zero, 0x1F4
    ctx->pc = 0x2ed570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2ed574:
    // 0x2ed574: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ed574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed578:
    // 0x2ed578: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2ed578u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed57c:
    // 0x2ed57c: 0xac469198  sw          $a2, -0x6E68($v0)
    ctx->pc = 0x2ed57cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294939032), GPR_U32(ctx, 6));
label_2ed580:
    // 0x2ed580: 0x3982b  sltu        $s3, $zero, $v1
    ctx->pc = 0x2ed580u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2ed584:
    // 0x2ed584: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed588:
    // 0x2ed588: 0xae119194  sw          $s1, -0x6E6C($s0)
    ctx->pc = 0x2ed588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939028), GPR_U32(ctx, 17));
label_2ed58c:
    // 0x2ed58c: 0xc0bfbbc  jal         func_2FEEF0
label_2ed590:
    if (ctx->pc == 0x2ED590u) {
        ctx->pc = 0x2ED590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED58Cu;
        // 0x2ed590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED594u;
        goto label_2ed594;
    }
    ctx->pc = 0x2ED58Cu;
    SET_GPR_U32(ctx, 31, 0x2ED594u);
    ctx->pc = 0x2ED590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED58Cu;
    // 0x2ed590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEEF0u, 0x2ED58Cu, 0x2ED594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED594u;
label_2ed594:
    // 0x2ed594: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2ed594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_2ed598:
    // 0x2ed598: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2ed598u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed59c:
    // 0x2ed59c: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2ed59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_2ed5a0:
    // 0x2ed5a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ed5a4:
    if (ctx->pc == 0x2ED5A4u) {
        ctx->pc = 0x2ED5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5A0u;
        // 0x2ed5a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED5A8u;
        goto label_2ed5a8;
    }
    ctx->pc = 0x2ED5A0u;
    {
        const bool branch_taken_0x2ed5a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ED5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5A0u;
        // 0x2ed5a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5a0) {
            ctx->pc = 0x2ED5BCu;
            goto label_2ed5bc;
        }
    }
    ctx->pc = 0x2ED5A8u;
label_2ed5a8:
    // 0x2ed5a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed5a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed5ac:
    // 0x2ed5ac: 0x0  nop
    ctx->pc = 0x2ed5acu;
    // NOP
label_2ed5b0:
    // 0x2ed5b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ed5b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ed5b4:
    // 0x2ed5b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ed5b8:
    if (ctx->pc == 0x2ED5B8u) {
        ctx->pc = 0x2ED5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5B4u;
        // 0x2ed5b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED5BCu;
        goto label_2ed5bc;
    }
    ctx->pc = 0x2ED5B4u;
    {
        const bool branch_taken_0x2ed5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5B4u;
        // 0x2ed5b8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5b4) {
            ctx->pc = 0x2ED5D8u;
            goto label_2ed5d8;
        }
    }
    ctx->pc = 0x2ED5BCu;
label_2ed5bc:
    // 0x2ed5bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ed5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ed5c0:
    // 0x2ed5c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ed5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ed5c4:
    // 0x2ed5c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ed5c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ed5c8:
    // 0x2ed5c8: 0x0  nop
    ctx->pc = 0x2ed5c8u;
    // NOP
label_2ed5cc:
    // 0x2ed5cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ed5ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2ed5d0:
    // 0x2ed5d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ed5d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ed5d4:
    // 0x2ed5d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ed5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ed5d8:
    // 0x2ed5d8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2ed5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_2ed5dc:
    // 0x2ed5dc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2ed5dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_2ed5e0:
    // 0x2ed5e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ed5e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ed5e4:
    // 0x2ed5e4: 0x9043b820  lbu         $v1, -0x47E0($v0)
    ctx->pc = 0x2ed5e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948896)));
label_2ed5e8:
    // 0x2ed5e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ed5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ed5ec:
    // 0x2ed5ec: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x2ed5ecu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2ed5f0:
    // 0x2ed5f0: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
label_2ed5f4:
    if (ctx->pc == 0x2ED5F4u) {
        ctx->pc = 0x2ED5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5F0u;
        // 0x2ed5f4: 0x3c15004a  lui         $s5, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED5F8u;
        goto label_2ed5f8;
    }
    ctx->pc = 0x2ED5F0u;
    {
        const bool branch_taken_0x2ed5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED5F0u;
        // 0x2ed5f4: 0x3c15004a  lui         $s5, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5f0) {
            ctx->pc = 0x2ED708u;
            goto label_2ed708;
        }
    }
    ctx->pc = 0x2ED5F8u;
label_2ed5f8:
    // 0x2ed5f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ed5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2ed5fc:
    // 0x2ed5fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2ed5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2ed600:
    // 0x2ed600: 0x46000d86  mov.s       $f22, $f1
    ctx->pc = 0x2ed600u;
    ctx->f[22] = FPU_MOV_S(ctx->f[1]);
label_2ed604:
    // 0x2ed604: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2ed604u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_2ed608:
    // 0x2ed608: 0xc075fc8  jal         func_1D7F20
label_2ed60c:
    if (ctx->pc == 0x2ED60Cu) {
        ctx->pc = 0x2ED610u;
        goto label_2ed610;
    }
    ctx->pc = 0x2ED608u;
    SET_GPR_U32(ctx, 31, 0x2ED610u);
    ctx->pc = 0x1D7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7F20u, 0x2ED608u, 0x2ED610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED610u;
label_2ed610:
    // 0x2ed610: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2ed610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2ed614:
    // 0x2ed614: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2ed614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2ed618:
    // 0x2ed618: 0x40f809  jalr        $v0
label_2ed61c:
    if (ctx->pc == 0x2ED61Cu) {
        ctx->pc = 0x2ED61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED618u;
        // 0x2ed61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED620u;
        goto label_2ed620;
    }
    ctx->pc = 0x2ED618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED620u);
        ctx->pc = 0x2ED61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED618u;
        // 0x2ed61c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED618u, 0x2ED620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED620u;
label_2ed620:
    // 0x2ed620: 0x8e4411e8  lw          $a0, 0x11E8($s2)
    ctx->pc = 0x2ed620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2ed624:
    // 0x2ed624: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ed628:
    if (ctx->pc == 0x2ED628u) {
        ctx->pc = 0x2ED628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED624u;
        // 0x2ed628: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED62Cu;
        goto label_2ed62c;
    }
    ctx->pc = 0x2ED624u;
    {
        const bool branch_taken_0x2ed624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed624) {
            ctx->pc = 0x2ED628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED624u;
            // 0x2ed628: 0x8e430218  lw          $v1, 0x218($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED640u;
            goto label_2ed640;
        }
    }
    ctx->pc = 0x2ED62Cu;
label_2ed62c:
    // 0x2ed62c: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2ed62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2ed630:
    // 0x2ed630: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2ed630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2ed634:
    // 0x2ed634: 0x40f809  jalr        $v0
label_2ed638:
    if (ctx->pc == 0x2ED638u) {
        ctx->pc = 0x2ED63Cu;
        goto label_2ed63c;
    }
    ctx->pc = 0x2ED634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED63Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED634u, 0x2ED63Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED63Cu;
label_2ed63c:
    // 0x2ed63c: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2ed63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2ed640:
    // 0x2ed640: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ed640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ed644:
    // 0x2ed644: 0x40f809  jalr        $v0
label_2ed648:
    if (ctx->pc == 0x2ED648u) {
        ctx->pc = 0x2ED648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED644u;
        // 0x2ed648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED64Cu;
        goto label_2ed64c;
    }
    ctx->pc = 0x2ED644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED64Cu);
        ctx->pc = 0x2ED648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED644u;
        // 0x2ed648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED644u, 0x2ED64Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED64Cu;
label_2ed64c:
    // 0x2ed64c: 0x8e4411e8  lw          $a0, 0x11E8($s2)
    ctx->pc = 0x2ed64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2ed650:
    // 0x2ed650: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2ed654:
    if (ctx->pc == 0x2ED654u) {
        ctx->pc = 0x2ED654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED650u;
        // 0x2ed654: 0x8ec22b00  lw          $v0, 0x2B00($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED658u;
        goto label_2ed658;
    }
    ctx->pc = 0x2ED650u;
    {
        const bool branch_taken_0x2ed650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED650u;
        // 0x2ed654: 0x8ec22b00  lw          $v0, 0x2B00($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed650) {
            ctx->pc = 0x2ED684u;
            goto label_2ed684;
        }
    }
    ctx->pc = 0x2ED658u;
label_2ed658:
    // 0x2ed658: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2ed658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2ed65c:
    // 0x2ed65c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2ed65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2ed660:
    // 0x2ed660: 0x40f809  jalr        $v0
label_2ed664:
    if (ctx->pc == 0x2ED664u) {
        ctx->pc = 0x2ED668u;
        goto label_2ed668;
    }
    ctx->pc = 0x2ED660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED668u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED660u, 0x2ED668u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED668u;
label_2ed668:
    // 0x2ed668: 0x8e4311e8  lw          $v1, 0x11E8($s2)
    ctx->pc = 0x2ed668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4584)));
label_2ed66c:
    // 0x2ed66c: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x2ed66cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2ed670:
    // 0x2ed670: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x2ed670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2ed674:
    // 0x2ed674: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2ed674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2ed678:
    // 0x2ed678: 0x40f809  jalr        $v0
label_2ed67c:
    if (ctx->pc == 0x2ED67Cu) {
        ctx->pc = 0x2ED680u;
        goto label_2ed680;
    }
    ctx->pc = 0x2ED678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED680u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED678u, 0x2ED680u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED680u;
label_2ed680:
    // 0x2ed680: 0x8ec22b00  lw          $v0, 0x2B00($s6)
    ctx->pc = 0x2ed680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 11008)));
label_2ed684:
    // 0x2ed684: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_2ed688:
    if (ctx->pc == 0x2ED688u) {
        ctx->pc = 0x2ED688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED684u;
        // 0x2ed688: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED68Cu;
        goto label_2ed68c;
    }
    ctx->pc = 0x2ED684u;
    {
        const bool branch_taken_0x2ed684 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2ED688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED684u;
        // 0x2ed688: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed684) {
            ctx->pc = 0x2ED6A0u;
            goto label_2ed6a0;
        }
    }
    ctx->pc = 0x2ED68Cu;
label_2ed68c:
    // 0x2ed68c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ed68cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed690:
    // 0x2ed690: 0x0  nop
    ctx->pc = 0x2ed690u;
    // NOP
label_2ed694:
    // 0x2ed694: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ed694u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2ed698:
    // 0x2ed698: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ed69c:
    if (ctx->pc == 0x2ED69Cu) {
        ctx->pc = 0x2ED69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED698u;
        // 0x2ed69c: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6A0u;
        goto label_2ed6a0;
    }
    ctx->pc = 0x2ED698u;
    {
        const bool branch_taken_0x2ed698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED698u;
        // 0x2ed69c: 0x46166302  mul.s       $f12, $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed698) {
            ctx->pc = 0x2ED6BCu;
            goto label_2ed6bc;
        }
    }
    ctx->pc = 0x2ED6A0u;
label_2ed6a0:
    // 0x2ed6a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ed6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ed6a4:
    // 0x2ed6a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ed6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2ed6a8:
    // 0x2ed6a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ed6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ed6ac:
    // 0x2ed6ac: 0x0  nop
    ctx->pc = 0x2ed6acu;
    // NOP
label_2ed6b0:
    // 0x2ed6b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2ed6b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2ed6b4:
    // 0x2ed6b4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2ed6b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_2ed6b8:
    // 0x2ed6b8: 0x46166302  mul.s       $f12, $f12, $f22
    ctx->pc = 0x2ed6b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[22]);
label_2ed6bc:
    // 0x2ed6bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed6c0:
    // 0x2ed6c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed6c4:
    // 0x2ed6c4: 0xc0bfbbc  jal         func_2FEEF0
label_2ed6c8:
    if (ctx->pc == 0x2ED6C8u) {
        ctx->pc = 0x2ED6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6C4u;
        // 0x2ed6c8: 0x46156301  sub.s       $f12, $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6CCu;
        goto label_2ed6cc;
    }
    ctx->pc = 0x2ED6C4u;
    SET_GPR_U32(ctx, 31, 0x2ED6CCu);
    ctx->pc = 0x2ED6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6C4u;
    // 0x2ed6c8: 0x46156301  sub.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FEEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FEEF0u, 0x2ED6C4u, 0x2ED6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6CCu;
label_2ed6cc:
    // 0x2ed6cc: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x2ed6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_2ed6d0:
    // 0x2ed6d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2ed6d4:
    // 0x2ed6d4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2ed6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2ed6d8:
    // 0x2ed6d8: 0x40f809  jalr        $v0
label_2ed6dc:
    if (ctx->pc == 0x2ED6DCu) {
        ctx->pc = 0x2ED6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6D8u;
        // 0x2ed6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6E0u;
        goto label_2ed6e0;
    }
    ctx->pc = 0x2ED6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ED6E0u);
        ctx->pc = 0x2ED6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6D8u;
        // 0x2ed6dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED6D8u, 0x2ED6E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED6E0u;
label_2ed6e0:
    // 0x2ed6e0: 0xc0d442a  jal         func_3510A8
label_2ed6e4:
    if (ctx->pc == 0x2ED6E4u) {
        ctx->pc = 0x2ED6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6E0u;
        // 0x2ed6e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6E8u;
        goto label_2ed6e8;
    }
    ctx->pc = 0x2ED6E0u;
    SET_GPR_U32(ctx, 31, 0x2ED6E8u);
    ctx->pc = 0x2ED6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6E0u;
    // 0x2ed6e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3510A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3510A8u, 0x2ED6E0u, 0x2ED6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6E8u;
label_2ed6e8:
    // 0x2ed6e8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ed6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ed6ec:
    // 0x2ed6ec: 0x26044f18  addiu       $a0, $s0, 0x4F18
    ctx->pc = 0x2ed6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20248));
label_2ed6f0:
    // 0x2ed6f0: 0x8c45bd48  lw          $a1, -0x42B8($v0)
    ctx->pc = 0x2ed6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_2ed6f4:
    // 0x2ed6f4: 0xc0aee1a  jal         func_2BB868
label_2ed6f8:
    if (ctx->pc == 0x2ED6F8u) {
        ctx->pc = 0x2ED6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED6F4u;
        // 0x2ed6f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED6FCu;
        goto label_2ed6fc;
    }
    ctx->pc = 0x2ED6F4u;
    SET_GPR_U32(ctx, 31, 0x2ED6FCu);
    ctx->pc = 0x2ED6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED6F4u;
    // 0x2ed6f8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB868u, 0x2ED6F4u, 0x2ED6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED6FCu;
label_2ed6fc:
    // 0x2ed6fc: 0x9222b820  lbu         $v0, -0x47E0($s1)
    ctx->pc = 0x2ed6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294948896)));
label_2ed700:
    // 0x2ed700: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
label_2ed704:
    if (ctx->pc == 0x2ED704u) {
        ctx->pc = 0x2ED708u;
        goto label_2ed708;
    }
    ctx->pc = 0x2ED700u;
    {
        const bool branch_taken_0x2ed700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ed700) {
            ctx->pc = 0x2ED608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed608;
        }
    }
    ctx->pc = 0x2ED708u;
label_2ed708:
    // 0x2ed708: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
label_2ed70c:
    if (ctx->pc == 0x2ED70Cu) {
        ctx->pc = 0x2ED70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED708u;
        // 0x2ed70c: 0xafc09194  sw          $zero, -0x6E6C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294939028), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED710u;
        goto label_2ed710;
    }
    ctx->pc = 0x2ED708u;
    {
        const bool branch_taken_0x2ed708 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed708) {
            ctx->pc = 0x2ED70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED708u;
            // 0x2ed70c: 0xafc09194  sw          $zero, -0x6E6C($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 4294939028), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED710u;
            goto label_2ed710;
        }
    }
    ctx->pc = 0x2ED710u;
label_2ed710:
    // 0x2ed710: 0xaef49198  sw          $s4, -0x6E68($s7)
    ctx->pc = 0x2ed710u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294939032), GPR_U32(ctx, 20));
label_2ed714:
    // 0x2ed714: 0xc075fc8  jal         func_1D7F20
label_2ed718:
    if (ctx->pc == 0x2ED718u) {
        ctx->pc = 0x2ED718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED714u;
        // 0x2ed718: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED71Cu;
        goto label_2ed71c;
    }
    ctx->pc = 0x2ED714u;
    SET_GPR_U32(ctx, 31, 0x2ED71Cu);
    ctx->pc = 0x2ED718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED714u;
    // 0x2ed718: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7F20u, 0x2ED714u, 0x2ED71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED71Cu;
label_2ed71c:
    // 0x2ed71c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ed71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ed720:
    // 0x2ed720: 0xc07f95c  jal         func_1FE570
label_2ed724:
    if (ctx->pc == 0x2ED724u) {
        ctx->pc = 0x2ED724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED720u;
        // 0x2ed724: 0x26a49b28  addiu       $a0, $s5, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED728u;
        goto label_2ed728;
    }
    ctx->pc = 0x2ED720u;
    SET_GPR_U32(ctx, 31, 0x2ED728u);
    ctx->pc = 0x2ED724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED720u;
    // 0x2ed724: 0x26a49b28  addiu       $a0, $s5, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE570u, 0x2ED720u, 0x2ED728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED728u;
label_2ed728:
    // 0x2ed728: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ed728u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ed72c:
    // 0x2ed72c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2ed72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_2ed730:
    // 0x2ed730: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2ed734:
    if (ctx->pc == 0x2ED734u) {
        ctx->pc = 0x2ED734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED730u;
        // 0x2ed734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED738u;
        goto label_2ed738;
    }
    ctx->pc = 0x2ED730u;
    {
        const bool branch_taken_0x2ed730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED730u;
        // 0x2ed734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed730) {
            ctx->pc = 0x2ED720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ed720;
        }
    }
    ctx->pc = 0x2ED738u;
label_2ed738:
    // 0x2ed738: 0xae4011f8  sw          $zero, 0x11F8($s2)
    ctx->pc = 0x2ed738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4600), GPR_U32(ctx, 0));
label_2ed73c:
    // 0x2ed73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed740:
    // 0x2ed740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2ed740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ed744:
    // 0x2ed744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2ed744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2ed748:
    // 0x2ed748: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2ed748u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2ed74c:
    // 0x2ed74c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2ed74cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2ed750:
    // 0x2ed750: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2ed750u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2ed754:
    // 0x2ed754: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2ed754u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ed758:
    // 0x2ed758: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2ed758u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2ed75c:
    // 0x2ed75c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2ed75cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ed760:
    // 0x2ed760: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2ed760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2ed764:
    // 0x2ed764: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x2ed764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2ed768:
    // 0x2ed768: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x2ed768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2ed76c:
    // 0x2ed76c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2ed76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ed770:
    // 0x2ed770: 0x3e00008  jr          $ra
label_2ed774:
    if (ctx->pc == 0x2ED774u) {
        ctx->pc = 0x2ED774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED770u;
        // 0x2ed774: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED778u;
        goto label_fallthrough_0x2ed770;
    }
    ctx->pc = 0x2ED770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED770u;
        // 0x2ed774: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed770:
    ctx->pc = 0x2ED778u;
}
