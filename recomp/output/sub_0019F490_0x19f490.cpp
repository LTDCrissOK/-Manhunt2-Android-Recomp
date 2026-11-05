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

// Function: sub_0019F490
// Address: 0x19f490 - 0x19f720
void sub_0019F490_0x19f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F490_0x19f490");
#endif

    switch (ctx->pc) {
        case 0x19f490u: goto label_19f490;
        case 0x19f494u: goto label_19f494;
        case 0x19f498u: goto label_19f498;
        case 0x19f49cu: goto label_19f49c;
        case 0x19f4a0u: goto label_19f4a0;
        case 0x19f4a4u: goto label_19f4a4;
        case 0x19f4a8u: goto label_19f4a8;
        case 0x19f4acu: goto label_19f4ac;
        case 0x19f4b0u: goto label_19f4b0;
        case 0x19f4b4u: goto label_19f4b4;
        case 0x19f4b8u: goto label_19f4b8;
        case 0x19f4bcu: goto label_19f4bc;
        case 0x19f4c0u: goto label_19f4c0;
        case 0x19f4c4u: goto label_19f4c4;
        case 0x19f4c8u: goto label_19f4c8;
        case 0x19f4ccu: goto label_19f4cc;
        case 0x19f4d0u: goto label_19f4d0;
        case 0x19f4d4u: goto label_19f4d4;
        case 0x19f4d8u: goto label_19f4d8;
        case 0x19f4dcu: goto label_19f4dc;
        case 0x19f4e0u: goto label_19f4e0;
        case 0x19f4e4u: goto label_19f4e4;
        case 0x19f4e8u: goto label_19f4e8;
        case 0x19f4ecu: goto label_19f4ec;
        case 0x19f4f0u: goto label_19f4f0;
        case 0x19f4f4u: goto label_19f4f4;
        case 0x19f4f8u: goto label_19f4f8;
        case 0x19f4fcu: goto label_19f4fc;
        case 0x19f500u: goto label_19f500;
        case 0x19f504u: goto label_19f504;
        case 0x19f508u: goto label_19f508;
        case 0x19f50cu: goto label_19f50c;
        case 0x19f510u: goto label_19f510;
        case 0x19f514u: goto label_19f514;
        case 0x19f518u: goto label_19f518;
        case 0x19f51cu: goto label_19f51c;
        case 0x19f520u: goto label_19f520;
        case 0x19f524u: goto label_19f524;
        case 0x19f528u: goto label_19f528;
        case 0x19f52cu: goto label_19f52c;
        case 0x19f530u: goto label_19f530;
        case 0x19f534u: goto label_19f534;
        case 0x19f538u: goto label_19f538;
        case 0x19f53cu: goto label_19f53c;
        case 0x19f540u: goto label_19f540;
        case 0x19f544u: goto label_19f544;
        case 0x19f548u: goto label_19f548;
        case 0x19f54cu: goto label_19f54c;
        case 0x19f550u: goto label_19f550;
        case 0x19f554u: goto label_19f554;
        case 0x19f558u: goto label_19f558;
        case 0x19f55cu: goto label_19f55c;
        case 0x19f560u: goto label_19f560;
        case 0x19f564u: goto label_19f564;
        case 0x19f568u: goto label_19f568;
        case 0x19f56cu: goto label_19f56c;
        case 0x19f570u: goto label_19f570;
        case 0x19f574u: goto label_19f574;
        case 0x19f578u: goto label_19f578;
        case 0x19f57cu: goto label_19f57c;
        case 0x19f580u: goto label_19f580;
        case 0x19f584u: goto label_19f584;
        case 0x19f588u: goto label_19f588;
        case 0x19f58cu: goto label_19f58c;
        case 0x19f590u: goto label_19f590;
        case 0x19f594u: goto label_19f594;
        case 0x19f598u: goto label_19f598;
        case 0x19f59cu: goto label_19f59c;
        case 0x19f5a0u: goto label_19f5a0;
        case 0x19f5a4u: goto label_19f5a4;
        case 0x19f5a8u: goto label_19f5a8;
        case 0x19f5acu: goto label_19f5ac;
        case 0x19f5b0u: goto label_19f5b0;
        case 0x19f5b4u: goto label_19f5b4;
        case 0x19f5b8u: goto label_19f5b8;
        case 0x19f5bcu: goto label_19f5bc;
        case 0x19f5c0u: goto label_19f5c0;
        case 0x19f5c4u: goto label_19f5c4;
        case 0x19f5c8u: goto label_19f5c8;
        case 0x19f5ccu: goto label_19f5cc;
        case 0x19f5d0u: goto label_19f5d0;
        case 0x19f5d4u: goto label_19f5d4;
        case 0x19f5d8u: goto label_19f5d8;
        case 0x19f5dcu: goto label_19f5dc;
        case 0x19f5e0u: goto label_19f5e0;
        case 0x19f5e4u: goto label_19f5e4;
        case 0x19f5e8u: goto label_19f5e8;
        case 0x19f5ecu: goto label_19f5ec;
        case 0x19f5f0u: goto label_19f5f0;
        case 0x19f5f4u: goto label_19f5f4;
        case 0x19f5f8u: goto label_19f5f8;
        case 0x19f5fcu: goto label_19f5fc;
        case 0x19f600u: goto label_19f600;
        case 0x19f604u: goto label_19f604;
        case 0x19f608u: goto label_19f608;
        case 0x19f60cu: goto label_19f60c;
        case 0x19f610u: goto label_19f610;
        case 0x19f614u: goto label_19f614;
        case 0x19f618u: goto label_19f618;
        case 0x19f61cu: goto label_19f61c;
        case 0x19f620u: goto label_19f620;
        case 0x19f624u: goto label_19f624;
        case 0x19f628u: goto label_19f628;
        case 0x19f62cu: goto label_19f62c;
        case 0x19f630u: goto label_19f630;
        case 0x19f634u: goto label_19f634;
        case 0x19f638u: goto label_19f638;
        case 0x19f63cu: goto label_19f63c;
        case 0x19f640u: goto label_19f640;
        case 0x19f644u: goto label_19f644;
        case 0x19f648u: goto label_19f648;
        case 0x19f64cu: goto label_19f64c;
        case 0x19f650u: goto label_19f650;
        case 0x19f654u: goto label_19f654;
        case 0x19f658u: goto label_19f658;
        case 0x19f65cu: goto label_19f65c;
        case 0x19f660u: goto label_19f660;
        case 0x19f664u: goto label_19f664;
        case 0x19f668u: goto label_19f668;
        case 0x19f66cu: goto label_19f66c;
        case 0x19f670u: goto label_19f670;
        case 0x19f674u: goto label_19f674;
        case 0x19f678u: goto label_19f678;
        case 0x19f67cu: goto label_19f67c;
        case 0x19f680u: goto label_19f680;
        case 0x19f684u: goto label_19f684;
        case 0x19f688u: goto label_19f688;
        case 0x19f68cu: goto label_19f68c;
        case 0x19f690u: goto label_19f690;
        case 0x19f694u: goto label_19f694;
        case 0x19f698u: goto label_19f698;
        case 0x19f69cu: goto label_19f69c;
        case 0x19f6a0u: goto label_19f6a0;
        case 0x19f6a4u: goto label_19f6a4;
        case 0x19f6a8u: goto label_19f6a8;
        case 0x19f6acu: goto label_19f6ac;
        case 0x19f6b0u: goto label_19f6b0;
        case 0x19f6b4u: goto label_19f6b4;
        case 0x19f6b8u: goto label_19f6b8;
        case 0x19f6bcu: goto label_19f6bc;
        case 0x19f6c0u: goto label_19f6c0;
        case 0x19f6c4u: goto label_19f6c4;
        case 0x19f6c8u: goto label_19f6c8;
        case 0x19f6ccu: goto label_19f6cc;
        case 0x19f6d0u: goto label_19f6d0;
        case 0x19f6d4u: goto label_19f6d4;
        case 0x19f6d8u: goto label_19f6d8;
        case 0x19f6dcu: goto label_19f6dc;
        case 0x19f6e0u: goto label_19f6e0;
        case 0x19f6e4u: goto label_19f6e4;
        case 0x19f6e8u: goto label_19f6e8;
        case 0x19f6ecu: goto label_19f6ec;
        case 0x19f6f0u: goto label_19f6f0;
        case 0x19f6f4u: goto label_19f6f4;
        case 0x19f6f8u: goto label_19f6f8;
        case 0x19f6fcu: goto label_19f6fc;
        case 0x19f700u: goto label_19f700;
        case 0x19f704u: goto label_19f704;
        case 0x19f708u: goto label_19f708;
        case 0x19f70cu: goto label_19f70c;
        case 0x19f710u: goto label_19f710;
        case 0x19f714u: goto label_19f714;
        case 0x19f718u: goto label_19f718;
        case 0x19f71cu: goto label_19f71c;
        default: break;
    }

    ctx->pc = 0x19f490u;

label_19f490:
    // 0x19f490: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19f494:
    // 0x19f494: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19f498:
    // 0x19f498: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19f498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f49c:
    // 0x19f49c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19f49cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19f4a0:
    // 0x19f4a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19f4a4:
    // 0x19f4a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x19f4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_19f4a8:
    // 0x19f4a8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x19f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_19f4ac:
    // 0x19f4ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19f4acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f4b0:
    // 0x19f4b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x19f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_19f4b4:
    // 0x19f4b4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19f4b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f4b8:
    // 0x19f4b8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x19f4b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_19f4bc:
    // 0x19f4bc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x19f4bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f4c0:
    // 0x19f4c0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x19f4c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19f4c4:
    // 0x19f4c4: 0x2484f010  addiu       $a0, $a0, -0xFF0
    ctx->pc = 0x19f4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963216));
label_19f4c8:
    // 0x19f4c8: 0xc0f71b8  jal         func_3DC6E0
label_19f4cc:
    if (ctx->pc == 0x19F4CCu) {
        ctx->pc = 0x19F4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4C8u;
        // 0x19f4cc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F4D0u;
        goto label_19f4d0;
    }
    ctx->pc = 0x19F4C8u;
    SET_GPR_U32(ctx, 31, 0x19F4D0u);
    ctx->pc = 0x19F4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F4C8u;
    // 0x19f4cc: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x19F4C8u, 0x19F4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F4D0u;
label_19f4d0:
    // 0x19f4d0: 0xae5100c0  sw          $s1, 0xC0($s2)
    ctx->pc = 0x19f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 17));
label_19f4d4:
    // 0x19f4d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19f4d8:
    // 0x19f4d8: 0xae50001c  sw          $s0, 0x1C($s2)
    ctx->pc = 0x19f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 16));
label_19f4dc:
    // 0x19f4dc: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x19f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_19f4e0:
    // 0x19f4e0: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x19f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_19f4e4:
    // 0x19f4e4: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x19f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_19f4e8:
    // 0x19f4e8: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x19f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_19f4ec:
    // 0x19f4ec: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x19f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_19f4f0:
    // 0x19f4f0: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x19f4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_19f4f4:
    // 0x19f4f4: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x19f4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_19f4f8:
    // 0x19f4f8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19f4fc:
    // 0x19f4fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19f500:
    if (ctx->pc == 0x19F500u) {
        ctx->pc = 0x19F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4FCu;
        // 0x19f500: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F504u;
        goto label_19f504;
    }
    ctx->pc = 0x19F4FCu;
    {
        const bool branch_taken_0x19f4fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19F500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F4FCu;
        // 0x19f500: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f4fc) {
            ctx->pc = 0x19F518u;
            goto label_19f518;
        }
    }
    ctx->pc = 0x19F504u;
label_19f504:
    // 0x19f504: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19f504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19f508:
    // 0x19f508: 0x0  nop
    ctx->pc = 0x19f508u;
    // NOP
label_19f50c:
    // 0x19f50c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19f50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19f510:
    // 0x19f510: 0x10000007  b           . + 4 + (0x7 << 2)
label_19f514:
    if (ctx->pc == 0x19F514u) {
        ctx->pc = 0x19F518u;
        goto label_19f518;
    }
    ctx->pc = 0x19F510u;
    {
        const bool branch_taken_0x19f510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f510) {
            ctx->pc = 0x19F530u;
            goto label_19f530;
        }
    }
    ctx->pc = 0x19F518u;
label_19f518:
    // 0x19f518: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19f518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19f51c:
    // 0x19f51c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19f51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19f520:
    // 0x19f520: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19f520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19f524:
    // 0x19f524: 0x0  nop
    ctx->pc = 0x19f524u;
    // NOP
label_19f528:
    // 0x19f528: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19f528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19f52c:
    // 0x19f52c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19f52cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19f530:
    // 0x19f530: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19f530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19f534:
    // 0x19f534: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19f534u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19f538:
    // 0x19f538: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f53c:
    // 0x19f53c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f540:
    // 0x19f540: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x19f540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_19f544:
    // 0x19f544: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19f544u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19f548:
    // 0x19f548: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19f548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19f54c:
    // 0x19f54c: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x19f54cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_19f550:
    // 0x19f550: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x19f550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_19f554:
    // 0x19f554: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x19f554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_19f558:
    // 0x19f558: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19f558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19f55c:
    // 0x19f55c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19f55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19f560:
    // 0x19f560: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x19f560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
label_19f564:
    // 0x19f564: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x19f564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_19f568:
    // 0x19f568: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x19f568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_19f56c:
    // 0x19f56c: 0xc061a16  jal         func_186858
label_19f570:
    if (ctx->pc == 0x19F570u) {
        ctx->pc = 0x19F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F56Cu;
        // 0x19f570: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F574u;
        goto label_19f574;
    }
    ctx->pc = 0x19F56Cu;
    SET_GPR_U32(ctx, 31, 0x19F574u);
    ctx->pc = 0x19F570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F56Cu;
    // 0x19f570: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F56Cu, 0x19F574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F574u;
label_19f574:
    // 0x19f574: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x19f574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
label_19f578:
    // 0x19f578: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x19f578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_19f57c:
    // 0x19f57c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19f57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f580:
    // 0x19f580: 0xc06ee70  jal         func_1BB9C0
label_19f584:
    if (ctx->pc == 0x19F584u) {
        ctx->pc = 0x19F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F580u;
        // 0x19f584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F588u;
        goto label_19f588;
    }
    ctx->pc = 0x19F580u;
    SET_GPR_U32(ctx, 31, 0x19F588u);
    ctx->pc = 0x19F584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F580u;
    // 0x19f584: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x19F580u, 0x19F588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F588u;
label_19f588:
    // 0x19f588: 0xc061a16  jal         func_186858
label_19f58c:
    if (ctx->pc == 0x19F58Cu) {
        ctx->pc = 0x19F58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F588u;
        // 0x19f58c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F590u;
        goto label_19f590;
    }
    ctx->pc = 0x19F588u;
    SET_GPR_U32(ctx, 31, 0x19F590u);
    ctx->pc = 0x19F58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F588u;
    // 0x19f58c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F588u, 0x19F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F590u;
label_19f590:
    // 0x19f590: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x19f590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
label_19f594:
    // 0x19f594: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f598:
    // 0x19f598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f59c:
    // 0x19f59c: 0xe454004c  swc1        $f20, 0x4C($v0)
    ctx->pc = 0x19f59cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
label_19f5a0:
    // 0x19f5a0: 0xc061a16  jal         func_186858
label_19f5a4:
    if (ctx->pc == 0x19F5A4u) {
        ctx->pc = 0x19F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5A0u;
        // 0x19f5a4: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5A8u;
        goto label_19f5a8;
    }
    ctx->pc = 0x19F5A0u;
    SET_GPR_U32(ctx, 31, 0x19F5A8u);
    ctx->pc = 0x19F5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5A0u;
    // 0x19f5a4: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F5A0u, 0x19F5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5A8u;
label_19f5a8:
    // 0x19f5a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f5a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f5ac:
    // 0x19f5ac: 0xc061a16  jal         func_186858
label_19f5b0:
    if (ctx->pc == 0x19F5B0u) {
        ctx->pc = 0x19F5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5ACu;
        // 0x19f5b0: 0xe4550050  swc1        $f21, 0x50($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5B4u;
        goto label_19f5b4;
    }
    ctx->pc = 0x19F5ACu;
    SET_GPR_U32(ctx, 31, 0x19F5B4u);
    ctx->pc = 0x19F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5ACu;
    // 0x19f5b0: 0xe4550050  swc1        $f21, 0x50($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F5ACu, 0x19F5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5B4u;
label_19f5b4:
    // 0x19f5b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f5b8:
    // 0x19f5b8: 0xc061a16  jal         func_186858
label_19f5bc:
    if (ctx->pc == 0x19F5BCu) {
        ctx->pc = 0x19F5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5B8u;
        // 0x19f5bc: 0xe4540054  swc1        $f20, 0x54($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5C0u;
        goto label_19f5c0;
    }
    ctx->pc = 0x19F5B8u;
    SET_GPR_U32(ctx, 31, 0x19F5C0u);
    ctx->pc = 0x19F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5B8u;
    // 0x19f5bc: 0xe4540054  swc1        $f20, 0x54($v0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F5B8u, 0x19F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5C0u;
label_19f5c0:
    // 0x19f5c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f5c4:
    // 0x19f5c4: 0xc061a16  jal         func_186858
label_19f5c8:
    if (ctx->pc == 0x19F5C8u) {
        ctx->pc = 0x19F5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5C4u;
        // 0x19f5c8: 0xe4550058  swc1        $f21, 0x58($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5CCu;
        goto label_19f5cc;
    }
    ctx->pc = 0x19F5C4u;
    SET_GPR_U32(ctx, 31, 0x19F5CCu);
    ctx->pc = 0x19F5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5C4u;
    // 0x19f5c8: 0xe4550058  swc1        $f21, 0x58($v0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F5C4u, 0x19F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5CCu;
label_19f5cc:
    // 0x19f5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f5d0:
    // 0x19f5d0: 0xc06eebe  jal         func_1BBAF8
label_19f5d4:
    if (ctx->pc == 0x19F5D4u) {
        ctx->pc = 0x19F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5D0u;
        // 0x19f5d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5D8u;
        goto label_19f5d8;
    }
    ctx->pc = 0x19F5D0u;
    SET_GPR_U32(ctx, 31, 0x19F5D8u);
    ctx->pc = 0x19F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5D0u;
    // 0x19f5d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x19F5D0u, 0x19F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5D8u;
label_19f5d8:
    // 0x19f5d8: 0xc061a16  jal         func_186858
label_19f5dc:
    if (ctx->pc == 0x19F5DCu) {
        ctx->pc = 0x19F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F5D8u;
        // 0x19f5dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F5E0u;
        goto label_19f5e0;
    }
    ctx->pc = 0x19F5D8u;
    SET_GPR_U32(ctx, 31, 0x19F5E0u);
    ctx->pc = 0x19F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F5D8u;
    // 0x19f5dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19F5D8u, 0x19F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F5E0u;
label_19f5e0:
    // 0x19f5e0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19f5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19f5e4:
    // 0x19f5e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f5e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f5e8:
    // 0x19f5e8: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x19f5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_19f5ec:
    // 0x19f5ec: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x19f5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_19f5f0:
    // 0x19f5f0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19f5f4:
    // 0x19f5f4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19f5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_19f5f8:
    // 0x19f5f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19f5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19f5fc:
    // 0x19f5fc: 0xae460010  sw          $a2, 0x10($s2)
    ctx->pc = 0x19f5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 6));
label_19f600:
    // 0x19f600: 0x264200a0  addiu       $v0, $s2, 0xA0
    ctx->pc = 0x19f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_19f604:
    // 0x19f604: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x19f604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_19f608:
    // 0x19f608: 0xac650010  sw          $a1, 0x10($v1)
    ctx->pc = 0x19f608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
label_19f60c:
    // 0x19f60c: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x19f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_19f610:
    // 0x19f610: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x19f610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_19f614:
    // 0x19f614: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x19f614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_19f618:
    // 0x19f618: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x19f618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_19f61c:
    // 0x19f61c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x19f61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
label_19f620:
    // 0x19f620: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19f620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19f624:
    // 0x19f624: 0xc068766  jal         func_1A1D98
label_19f628:
    if (ctx->pc == 0x19F628u) {
        ctx->pc = 0x19F628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F624u;
        // 0x19f628: 0xae460054  sw          $a2, 0x54($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F62Cu;
        goto label_19f62c;
    }
    ctx->pc = 0x19F624u;
    SET_GPR_U32(ctx, 31, 0x19F62Cu);
    ctx->pc = 0x19F628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F624u;
    // 0x19f628: 0xae460054  sw          $a2, 0x54($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1D98u, 0x19F624u, 0x19F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F62Cu;
label_19f62c:
    // 0x19f62c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_19f630:
    if (ctx->pc == 0x19F630u) {
        ctx->pc = 0x19F634u;
        goto label_19f634;
    }
    ctx->pc = 0x19F62Cu;
    {
        const bool branch_taken_0x19f62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19f62c) {
            ctx->pc = 0x19F654u;
            goto label_19f654;
        }
    }
    ctx->pc = 0x19F634u;
label_19f634:
    // 0x19f634: 0xc064c8e  jal         func_193238
label_19f638:
    if (ctx->pc == 0x19F638u) {
        ctx->pc = 0x19F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F634u;
        // 0x19f638: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F63Cu;
        goto label_19f63c;
    }
    ctx->pc = 0x19F634u;
    SET_GPR_U32(ctx, 31, 0x19F63Cu);
    ctx->pc = 0x19F638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F634u;
    // 0x19f638: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193238u, 0x19F634u, 0x19F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F63Cu;
label_19f63c:
    // 0x19f63c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f640:
    if (ctx->pc == 0x19F640u) {
        ctx->pc = 0x19F644u;
        goto label_19f644;
    }
    ctx->pc = 0x19F63Cu;
    {
        const bool branch_taken_0x19f63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f63c) {
            ctx->pc = 0x19F654u;
            goto label_19f654;
        }
    }
    ctx->pc = 0x19F644u;
label_19f644:
    // 0x19f644: 0xc068eb8  jal         func_1A3AE0
label_19f648:
    if (ctx->pc == 0x19F648u) {
        ctx->pc = 0x19F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F644u;
        // 0x19f648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F64Cu;
        goto label_19f64c;
    }
    ctx->pc = 0x19F644u;
    SET_GPR_U32(ctx, 31, 0x19F64Cu);
    ctx->pc = 0x19F648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F644u;
    // 0x19f648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AE0u, 0x19F644u, 0x19F64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F64Cu;
label_19f64c:
    // 0x19f64c: 0x10000028  b           . + 4 + (0x28 << 2)
label_19f650:
    if (ctx->pc == 0x19F650u) {
        ctx->pc = 0x19F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F64Cu;
        // 0x19f650: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F654u;
        goto label_19f654;
    }
    ctx->pc = 0x19F64Cu;
    {
        const bool branch_taken_0x19f64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F64Cu;
        // 0x19f650: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f64c) {
            ctx->pc = 0x19F6F0u;
            goto label_19f6f0;
        }
    }
    ctx->pc = 0x19F654u;
label_19f654:
    // 0x19f654: 0xc061a1e  jal         func_186878
label_19f658:
    if (ctx->pc == 0x19F658u) {
        ctx->pc = 0x19F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F654u;
        // 0x19f658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F65Cu;
        goto label_19f65c;
    }
    ctx->pc = 0x19F654u;
    SET_GPR_U32(ctx, 31, 0x19F65Cu);
    ctx->pc = 0x19F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F654u;
    // 0x19f658: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19F654u, 0x19F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F65Cu;
label_19f65c:
    // 0x19f65c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x19f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19f660:
    // 0x19f660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19f660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f664:
    // 0x19f664: 0xc06cdda  jal         func_1B3768
label_19f668:
    if (ctx->pc == 0x19F668u) {
        ctx->pc = 0x19F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F664u;
        // 0x19f668: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F66Cu;
        goto label_19f66c;
    }
    ctx->pc = 0x19F664u;
    SET_GPR_U32(ctx, 31, 0x19F66Cu);
    ctx->pc = 0x19F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F664u;
    // 0x19f668: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x19F664u, 0x19F66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F66Cu;
label_19f66c:
    // 0x19f66c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x19f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_19f670:
    // 0x19f670: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_19f674:
    if (ctx->pc == 0x19F674u) {
        ctx->pc = 0x19F678u;
        goto label_19f678;
    }
    ctx->pc = 0x19F670u;
    {
        const bool branch_taken_0x19f670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f670) {
            ctx->pc = 0x19F698u;
            goto label_19f698;
        }
    }
    ctx->pc = 0x19F678u;
label_19f678:
    // 0x19f678: 0xc064cfe  jal         func_1933F8
label_19f67c:
    if (ctx->pc == 0x19F67Cu) {
        ctx->pc = 0x19F67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F678u;
        // 0x19f67c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F680u;
        goto label_19f680;
    }
    ctx->pc = 0x19F678u;
    SET_GPR_U32(ctx, 31, 0x19F680u);
    ctx->pc = 0x19F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F678u;
    // 0x19f67c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1933F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1933F8u, 0x19F678u, 0x19F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F680u;
label_19f680:
    // 0x19f680: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f684:
    if (ctx->pc == 0x19F684u) {
        ctx->pc = 0x19F688u;
        goto label_19f688;
    }
    ctx->pc = 0x19F680u;
    {
        const bool branch_taken_0x19f680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f680) {
            ctx->pc = 0x19F698u;
            goto label_19f698;
        }
    }
    ctx->pc = 0x19F688u;
label_19f688:
    // 0x19f688: 0xc068ede  jal         func_1A3B78
label_19f68c:
    if (ctx->pc == 0x19F68Cu) {
        ctx->pc = 0x19F68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F688u;
        // 0x19f68c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F690u;
        goto label_19f690;
    }
    ctx->pc = 0x19F688u;
    SET_GPR_U32(ctx, 31, 0x19F690u);
    ctx->pc = 0x19F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F688u;
    // 0x19f68c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3B78u, 0x19F688u, 0x19F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F690u;
label_19f690:
    // 0x19f690: 0x10000017  b           . + 4 + (0x17 << 2)
label_19f694:
    if (ctx->pc == 0x19F694u) {
        ctx->pc = 0x19F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F690u;
        // 0x19f694: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F698u;
        goto label_19f698;
    }
    ctx->pc = 0x19F690u;
    {
        const bool branch_taken_0x19f690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F690u;
        // 0x19f694: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f690) {
            ctx->pc = 0x19F6F0u;
            goto label_19f6f0;
        }
    }
    ctx->pc = 0x19F698u;
label_19f698:
    // 0x19f698: 0xc061a26  jal         func_186898
label_19f69c:
    if (ctx->pc == 0x19F69Cu) {
        ctx->pc = 0x19F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F698u;
        // 0x19f69c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6A0u;
        goto label_19f6a0;
    }
    ctx->pc = 0x19F698u;
    SET_GPR_U32(ctx, 31, 0x19F6A0u);
    ctx->pc = 0x19F69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F698u;
    // 0x19f69c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19F698u, 0x19F6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6A0u;
label_19f6a0:
    // 0x19f6a0: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x19f6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19f6a4:
    // 0x19f6a4: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x19f6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_19f6a8:
    // 0x19f6a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19f6a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19f6ac:
    // 0x19f6ac: 0x0  nop
    ctx->pc = 0x19f6acu;
    // NOP
label_19f6b0:
    // 0x19f6b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19f6b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19f6b4:
    // 0x19f6b4: 0x0  nop
    ctx->pc = 0x19f6b4u;
    // NOP
label_19f6b8:
    // 0x19f6b8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_19f6bc:
    if (ctx->pc == 0x19F6BCu) {
        ctx->pc = 0x19F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6B8u;
        // 0x19f6bc: 0x2665f010  addiu       $a1, $s3, -0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6C0u;
        goto label_19f6c0;
    }
    ctx->pc = 0x19F6B8u;
    {
        const bool branch_taken_0x19f6b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6B8u;
        // 0x19f6bc: 0x2665f010  addiu       $a1, $s3, -0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6b8) {
            ctx->pc = 0x19F6E4u;
            goto label_19f6e4;
        }
    }
    ctx->pc = 0x19F6C0u;
label_19f6c0:
    // 0x19f6c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x19f6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_19f6c4:
    // 0x19f6c4: 0xc064dc2  jal         func_193708
label_19f6c8:
    if (ctx->pc == 0x19F6C8u) {
        ctx->pc = 0x19F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6C4u;
        // 0x19f6c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6CCu;
        goto label_19f6cc;
    }
    ctx->pc = 0x19F6C4u;
    SET_GPR_U32(ctx, 31, 0x19F6CCu);
    ctx->pc = 0x19F6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6C4u;
    // 0x19f6c8: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193708u, 0x19F6C4u, 0x19F6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6CCu;
label_19f6cc:
    // 0x19f6cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19f6d0:
    if (ctx->pc == 0x19F6D0u) {
        ctx->pc = 0x19F6D4u;
        goto label_19f6d4;
    }
    ctx->pc = 0x19F6CCu;
    {
        const bool branch_taken_0x19f6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f6cc) {
            ctx->pc = 0x19F6E4u;
            goto label_19f6e4;
        }
    }
    ctx->pc = 0x19F6D4u;
label_19f6d4:
    // 0x19f6d4: 0xc06916a  jal         func_1A45A8
label_19f6d8:
    if (ctx->pc == 0x19F6D8u) {
        ctx->pc = 0x19F6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6D4u;
        // 0x19f6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6DCu;
        goto label_19f6dc;
    }
    ctx->pc = 0x19F6D4u;
    SET_GPR_U32(ctx, 31, 0x19F6DCu);
    ctx->pc = 0x19F6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6D4u;
    // 0x19f6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A45A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45A8u, 0x19F6D4u, 0x19F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6DCu;
label_19f6dc:
    // 0x19f6dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_19f6e0:
    if (ctx->pc == 0x19F6E0u) {
        ctx->pc = 0x19F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6DCu;
        // 0x19f6e0: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6E4u;
        goto label_19f6e4;
    }
    ctx->pc = 0x19F6DCu;
    {
        const bool branch_taken_0x19f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6DCu;
        // 0x19f6e0: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f6dc) {
            ctx->pc = 0x19F6F0u;
            goto label_19f6f0;
        }
    }
    ctx->pc = 0x19F6E4u;
label_19f6e4:
    // 0x19f6e4: 0xc068f6e  jal         func_1A3DB8
label_19f6e8:
    if (ctx->pc == 0x19F6E8u) {
        ctx->pc = 0x19F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6E4u;
        // 0x19f6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6ECu;
        goto label_19f6ec;
    }
    ctx->pc = 0x19F6E4u;
    SET_GPR_U32(ctx, 31, 0x19F6ECu);
    ctx->pc = 0x19F6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F6E4u;
    // 0x19f6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x19F6E4u, 0x19F6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F6ECu;
label_19f6ec:
    // 0x19f6ec: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x19f6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_19f6f0:
    // 0x19f6f0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19f6f4:
    // 0x19f6f4: 0x40f809  jalr        $v0
label_19f6f8:
    if (ctx->pc == 0x19F6F8u) {
        ctx->pc = 0x19F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6F4u;
        // 0x19f6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F6FCu;
        goto label_19f6fc;
    }
    ctx->pc = 0x19F6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F6FCu);
        ctx->pc = 0x19F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F6F4u;
        // 0x19f6f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F6F4u, 0x19F6FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F6FCu;
label_19f6fc:
    // 0x19f6fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19f6fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f700:
    // 0x19f700: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19f700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19f704:
    // 0x19f704: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19f704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19f708:
    // 0x19f708: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19f708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19f70c:
    // 0x19f70c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19f70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19f710:
    // 0x19f710: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x19f710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19f714:
    // 0x19f714: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x19f714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19f718:
    // 0x19f718: 0x3e00008  jr          $ra
label_19f71c:
    if (ctx->pc == 0x19F71Cu) {
        ctx->pc = 0x19F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F718u;
        // 0x19f71c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F720u;
        goto label_fallthrough_0x19f718;
    }
    ctx->pc = 0x19F718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F718u;
        // 0x19f71c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19f718:
    ctx->pc = 0x19F720u;
}
