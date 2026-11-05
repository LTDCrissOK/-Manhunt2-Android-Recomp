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

// Function: sub_001BC588
// Address: 0x1bc588 - 0x1bca38
void sub_001BC588_0x1bc588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC588_0x1bc588");
#endif

    switch (ctx->pc) {
        case 0x1bc588u: goto label_1bc588;
        case 0x1bc58cu: goto label_1bc58c;
        case 0x1bc590u: goto label_1bc590;
        case 0x1bc594u: goto label_1bc594;
        case 0x1bc598u: goto label_1bc598;
        case 0x1bc59cu: goto label_1bc59c;
        case 0x1bc5a0u: goto label_1bc5a0;
        case 0x1bc5a4u: goto label_1bc5a4;
        case 0x1bc5a8u: goto label_1bc5a8;
        case 0x1bc5acu: goto label_1bc5ac;
        case 0x1bc5b0u: goto label_1bc5b0;
        case 0x1bc5b4u: goto label_1bc5b4;
        case 0x1bc5b8u: goto label_1bc5b8;
        case 0x1bc5bcu: goto label_1bc5bc;
        case 0x1bc5c0u: goto label_1bc5c0;
        case 0x1bc5c4u: goto label_1bc5c4;
        case 0x1bc5c8u: goto label_1bc5c8;
        case 0x1bc5ccu: goto label_1bc5cc;
        case 0x1bc5d0u: goto label_1bc5d0;
        case 0x1bc5d4u: goto label_1bc5d4;
        case 0x1bc5d8u: goto label_1bc5d8;
        case 0x1bc5dcu: goto label_1bc5dc;
        case 0x1bc5e0u: goto label_1bc5e0;
        case 0x1bc5e4u: goto label_1bc5e4;
        case 0x1bc5e8u: goto label_1bc5e8;
        case 0x1bc5ecu: goto label_1bc5ec;
        case 0x1bc5f0u: goto label_1bc5f0;
        case 0x1bc5f4u: goto label_1bc5f4;
        case 0x1bc5f8u: goto label_1bc5f8;
        case 0x1bc5fcu: goto label_1bc5fc;
        case 0x1bc600u: goto label_1bc600;
        case 0x1bc604u: goto label_1bc604;
        case 0x1bc608u: goto label_1bc608;
        case 0x1bc60cu: goto label_1bc60c;
        case 0x1bc610u: goto label_1bc610;
        case 0x1bc614u: goto label_1bc614;
        case 0x1bc618u: goto label_1bc618;
        case 0x1bc61cu: goto label_1bc61c;
        case 0x1bc620u: goto label_1bc620;
        case 0x1bc624u: goto label_1bc624;
        case 0x1bc628u: goto label_1bc628;
        case 0x1bc62cu: goto label_1bc62c;
        case 0x1bc630u: goto label_1bc630;
        case 0x1bc634u: goto label_1bc634;
        case 0x1bc638u: goto label_1bc638;
        case 0x1bc63cu: goto label_1bc63c;
        case 0x1bc640u: goto label_1bc640;
        case 0x1bc644u: goto label_1bc644;
        case 0x1bc648u: goto label_1bc648;
        case 0x1bc64cu: goto label_1bc64c;
        case 0x1bc650u: goto label_1bc650;
        case 0x1bc654u: goto label_1bc654;
        case 0x1bc658u: goto label_1bc658;
        case 0x1bc65cu: goto label_1bc65c;
        case 0x1bc660u: goto label_1bc660;
        case 0x1bc664u: goto label_1bc664;
        case 0x1bc668u: goto label_1bc668;
        case 0x1bc66cu: goto label_1bc66c;
        case 0x1bc670u: goto label_1bc670;
        case 0x1bc674u: goto label_1bc674;
        case 0x1bc678u: goto label_1bc678;
        case 0x1bc67cu: goto label_1bc67c;
        case 0x1bc680u: goto label_1bc680;
        case 0x1bc684u: goto label_1bc684;
        case 0x1bc688u: goto label_1bc688;
        case 0x1bc68cu: goto label_1bc68c;
        case 0x1bc690u: goto label_1bc690;
        case 0x1bc694u: goto label_1bc694;
        case 0x1bc698u: goto label_1bc698;
        case 0x1bc69cu: goto label_1bc69c;
        case 0x1bc6a0u: goto label_1bc6a0;
        case 0x1bc6a4u: goto label_1bc6a4;
        case 0x1bc6a8u: goto label_1bc6a8;
        case 0x1bc6acu: goto label_1bc6ac;
        case 0x1bc6b0u: goto label_1bc6b0;
        case 0x1bc6b4u: goto label_1bc6b4;
        case 0x1bc6b8u: goto label_1bc6b8;
        case 0x1bc6bcu: goto label_1bc6bc;
        case 0x1bc6c0u: goto label_1bc6c0;
        case 0x1bc6c4u: goto label_1bc6c4;
        case 0x1bc6c8u: goto label_1bc6c8;
        case 0x1bc6ccu: goto label_1bc6cc;
        case 0x1bc6d0u: goto label_1bc6d0;
        case 0x1bc6d4u: goto label_1bc6d4;
        case 0x1bc6d8u: goto label_1bc6d8;
        case 0x1bc6dcu: goto label_1bc6dc;
        case 0x1bc6e0u: goto label_1bc6e0;
        case 0x1bc6e4u: goto label_1bc6e4;
        case 0x1bc6e8u: goto label_1bc6e8;
        case 0x1bc6ecu: goto label_1bc6ec;
        case 0x1bc6f0u: goto label_1bc6f0;
        case 0x1bc6f4u: goto label_1bc6f4;
        case 0x1bc6f8u: goto label_1bc6f8;
        case 0x1bc6fcu: goto label_1bc6fc;
        case 0x1bc700u: goto label_1bc700;
        case 0x1bc704u: goto label_1bc704;
        case 0x1bc708u: goto label_1bc708;
        case 0x1bc70cu: goto label_1bc70c;
        case 0x1bc710u: goto label_1bc710;
        case 0x1bc714u: goto label_1bc714;
        case 0x1bc718u: goto label_1bc718;
        case 0x1bc71cu: goto label_1bc71c;
        case 0x1bc720u: goto label_1bc720;
        case 0x1bc724u: goto label_1bc724;
        case 0x1bc728u: goto label_1bc728;
        case 0x1bc72cu: goto label_1bc72c;
        case 0x1bc730u: goto label_1bc730;
        case 0x1bc734u: goto label_1bc734;
        case 0x1bc738u: goto label_1bc738;
        case 0x1bc73cu: goto label_1bc73c;
        case 0x1bc740u: goto label_1bc740;
        case 0x1bc744u: goto label_1bc744;
        case 0x1bc748u: goto label_1bc748;
        case 0x1bc74cu: goto label_1bc74c;
        case 0x1bc750u: goto label_1bc750;
        case 0x1bc754u: goto label_1bc754;
        case 0x1bc758u: goto label_1bc758;
        case 0x1bc75cu: goto label_1bc75c;
        case 0x1bc760u: goto label_1bc760;
        case 0x1bc764u: goto label_1bc764;
        case 0x1bc768u: goto label_1bc768;
        case 0x1bc76cu: goto label_1bc76c;
        case 0x1bc770u: goto label_1bc770;
        case 0x1bc774u: goto label_1bc774;
        case 0x1bc778u: goto label_1bc778;
        case 0x1bc77cu: goto label_1bc77c;
        case 0x1bc780u: goto label_1bc780;
        case 0x1bc784u: goto label_1bc784;
        case 0x1bc788u: goto label_1bc788;
        case 0x1bc78cu: goto label_1bc78c;
        case 0x1bc790u: goto label_1bc790;
        case 0x1bc794u: goto label_1bc794;
        case 0x1bc798u: goto label_1bc798;
        case 0x1bc79cu: goto label_1bc79c;
        case 0x1bc7a0u: goto label_1bc7a0;
        case 0x1bc7a4u: goto label_1bc7a4;
        case 0x1bc7a8u: goto label_1bc7a8;
        case 0x1bc7acu: goto label_1bc7ac;
        case 0x1bc7b0u: goto label_1bc7b0;
        case 0x1bc7b4u: goto label_1bc7b4;
        case 0x1bc7b8u: goto label_1bc7b8;
        case 0x1bc7bcu: goto label_1bc7bc;
        case 0x1bc7c0u: goto label_1bc7c0;
        case 0x1bc7c4u: goto label_1bc7c4;
        case 0x1bc7c8u: goto label_1bc7c8;
        case 0x1bc7ccu: goto label_1bc7cc;
        case 0x1bc7d0u: goto label_1bc7d0;
        case 0x1bc7d4u: goto label_1bc7d4;
        case 0x1bc7d8u: goto label_1bc7d8;
        case 0x1bc7dcu: goto label_1bc7dc;
        case 0x1bc7e0u: goto label_1bc7e0;
        case 0x1bc7e4u: goto label_1bc7e4;
        case 0x1bc7e8u: goto label_1bc7e8;
        case 0x1bc7ecu: goto label_1bc7ec;
        case 0x1bc7f0u: goto label_1bc7f0;
        case 0x1bc7f4u: goto label_1bc7f4;
        case 0x1bc7f8u: goto label_1bc7f8;
        case 0x1bc7fcu: goto label_1bc7fc;
        case 0x1bc800u: goto label_1bc800;
        case 0x1bc804u: goto label_1bc804;
        case 0x1bc808u: goto label_1bc808;
        case 0x1bc80cu: goto label_1bc80c;
        case 0x1bc810u: goto label_1bc810;
        case 0x1bc814u: goto label_1bc814;
        case 0x1bc818u: goto label_1bc818;
        case 0x1bc81cu: goto label_1bc81c;
        case 0x1bc820u: goto label_1bc820;
        case 0x1bc824u: goto label_1bc824;
        case 0x1bc828u: goto label_1bc828;
        case 0x1bc82cu: goto label_1bc82c;
        case 0x1bc830u: goto label_1bc830;
        case 0x1bc834u: goto label_1bc834;
        case 0x1bc838u: goto label_1bc838;
        case 0x1bc83cu: goto label_1bc83c;
        case 0x1bc840u: goto label_1bc840;
        case 0x1bc844u: goto label_1bc844;
        case 0x1bc848u: goto label_1bc848;
        case 0x1bc84cu: goto label_1bc84c;
        case 0x1bc850u: goto label_1bc850;
        case 0x1bc854u: goto label_1bc854;
        case 0x1bc858u: goto label_1bc858;
        case 0x1bc85cu: goto label_1bc85c;
        case 0x1bc860u: goto label_1bc860;
        case 0x1bc864u: goto label_1bc864;
        case 0x1bc868u: goto label_1bc868;
        case 0x1bc86cu: goto label_1bc86c;
        case 0x1bc870u: goto label_1bc870;
        case 0x1bc874u: goto label_1bc874;
        case 0x1bc878u: goto label_1bc878;
        case 0x1bc87cu: goto label_1bc87c;
        case 0x1bc880u: goto label_1bc880;
        case 0x1bc884u: goto label_1bc884;
        case 0x1bc888u: goto label_1bc888;
        case 0x1bc88cu: goto label_1bc88c;
        case 0x1bc890u: goto label_1bc890;
        case 0x1bc894u: goto label_1bc894;
        case 0x1bc898u: goto label_1bc898;
        case 0x1bc89cu: goto label_1bc89c;
        case 0x1bc8a0u: goto label_1bc8a0;
        case 0x1bc8a4u: goto label_1bc8a4;
        case 0x1bc8a8u: goto label_1bc8a8;
        case 0x1bc8acu: goto label_1bc8ac;
        case 0x1bc8b0u: goto label_1bc8b0;
        case 0x1bc8b4u: goto label_1bc8b4;
        case 0x1bc8b8u: goto label_1bc8b8;
        case 0x1bc8bcu: goto label_1bc8bc;
        case 0x1bc8c0u: goto label_1bc8c0;
        case 0x1bc8c4u: goto label_1bc8c4;
        case 0x1bc8c8u: goto label_1bc8c8;
        case 0x1bc8ccu: goto label_1bc8cc;
        case 0x1bc8d0u: goto label_1bc8d0;
        case 0x1bc8d4u: goto label_1bc8d4;
        case 0x1bc8d8u: goto label_1bc8d8;
        case 0x1bc8dcu: goto label_1bc8dc;
        case 0x1bc8e0u: goto label_1bc8e0;
        case 0x1bc8e4u: goto label_1bc8e4;
        case 0x1bc8e8u: goto label_1bc8e8;
        case 0x1bc8ecu: goto label_1bc8ec;
        case 0x1bc8f0u: goto label_1bc8f0;
        case 0x1bc8f4u: goto label_1bc8f4;
        case 0x1bc8f8u: goto label_1bc8f8;
        case 0x1bc8fcu: goto label_1bc8fc;
        case 0x1bc900u: goto label_1bc900;
        case 0x1bc904u: goto label_1bc904;
        case 0x1bc908u: goto label_1bc908;
        case 0x1bc90cu: goto label_1bc90c;
        case 0x1bc910u: goto label_1bc910;
        case 0x1bc914u: goto label_1bc914;
        case 0x1bc918u: goto label_1bc918;
        case 0x1bc91cu: goto label_1bc91c;
        case 0x1bc920u: goto label_1bc920;
        case 0x1bc924u: goto label_1bc924;
        case 0x1bc928u: goto label_1bc928;
        case 0x1bc92cu: goto label_1bc92c;
        case 0x1bc930u: goto label_1bc930;
        case 0x1bc934u: goto label_1bc934;
        case 0x1bc938u: goto label_1bc938;
        case 0x1bc93cu: goto label_1bc93c;
        case 0x1bc940u: goto label_1bc940;
        case 0x1bc944u: goto label_1bc944;
        case 0x1bc948u: goto label_1bc948;
        case 0x1bc94cu: goto label_1bc94c;
        case 0x1bc950u: goto label_1bc950;
        case 0x1bc954u: goto label_1bc954;
        case 0x1bc958u: goto label_1bc958;
        case 0x1bc95cu: goto label_1bc95c;
        case 0x1bc960u: goto label_1bc960;
        case 0x1bc964u: goto label_1bc964;
        case 0x1bc968u: goto label_1bc968;
        case 0x1bc96cu: goto label_1bc96c;
        case 0x1bc970u: goto label_1bc970;
        case 0x1bc974u: goto label_1bc974;
        case 0x1bc978u: goto label_1bc978;
        case 0x1bc97cu: goto label_1bc97c;
        case 0x1bc980u: goto label_1bc980;
        case 0x1bc984u: goto label_1bc984;
        case 0x1bc988u: goto label_1bc988;
        case 0x1bc98cu: goto label_1bc98c;
        case 0x1bc990u: goto label_1bc990;
        case 0x1bc994u: goto label_1bc994;
        case 0x1bc998u: goto label_1bc998;
        case 0x1bc99cu: goto label_1bc99c;
        case 0x1bc9a0u: goto label_1bc9a0;
        case 0x1bc9a4u: goto label_1bc9a4;
        case 0x1bc9a8u: goto label_1bc9a8;
        case 0x1bc9acu: goto label_1bc9ac;
        case 0x1bc9b0u: goto label_1bc9b0;
        case 0x1bc9b4u: goto label_1bc9b4;
        case 0x1bc9b8u: goto label_1bc9b8;
        case 0x1bc9bcu: goto label_1bc9bc;
        case 0x1bc9c0u: goto label_1bc9c0;
        case 0x1bc9c4u: goto label_1bc9c4;
        case 0x1bc9c8u: goto label_1bc9c8;
        case 0x1bc9ccu: goto label_1bc9cc;
        case 0x1bc9d0u: goto label_1bc9d0;
        case 0x1bc9d4u: goto label_1bc9d4;
        case 0x1bc9d8u: goto label_1bc9d8;
        case 0x1bc9dcu: goto label_1bc9dc;
        case 0x1bc9e0u: goto label_1bc9e0;
        case 0x1bc9e4u: goto label_1bc9e4;
        case 0x1bc9e8u: goto label_1bc9e8;
        case 0x1bc9ecu: goto label_1bc9ec;
        case 0x1bc9f0u: goto label_1bc9f0;
        case 0x1bc9f4u: goto label_1bc9f4;
        case 0x1bc9f8u: goto label_1bc9f8;
        case 0x1bc9fcu: goto label_1bc9fc;
        case 0x1bca00u: goto label_1bca00;
        case 0x1bca04u: goto label_1bca04;
        case 0x1bca08u: goto label_1bca08;
        case 0x1bca0cu: goto label_1bca0c;
        case 0x1bca10u: goto label_1bca10;
        case 0x1bca14u: goto label_1bca14;
        case 0x1bca18u: goto label_1bca18;
        case 0x1bca1cu: goto label_1bca1c;
        case 0x1bca20u: goto label_1bca20;
        case 0x1bca24u: goto label_1bca24;
        case 0x1bca28u: goto label_1bca28;
        case 0x1bca2cu: goto label_1bca2c;
        case 0x1bca30u: goto label_1bca30;
        case 0x1bca34u: goto label_1bca34;
        default: break;
    }

    ctx->pc = 0x1bc588u;

label_1bc588:
    // 0x1bc588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bc58c:
    // 0x1bc58c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc58cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc590:
    // 0x1bc590: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bc594:
    // 0x1bc594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc598:
    // 0x1bc598: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc59c:
    // 0x1bc59c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1bc59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1bc5a0:
    // 0x1bc5a0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1bc5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1bc5a4:
    // 0x1bc5a4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1bc5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1bc5a8:
    // 0x1bc5a8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1bc5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1bc5ac:
    // 0x1bc5ac: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1bc5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_1bc5b0:
    // 0x1bc5b0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1bc5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1bc5b4:
    // 0x1bc5b4: 0xc6210240  lwc1        $f1, 0x240($s1)
    ctx->pc = 0x1bc5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc5b8:
    // 0x1bc5b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bc5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc5bc:
    // 0x1bc5bc: 0x0  nop
    ctx->pc = 0x1bc5bcu;
    // NOP
label_1bc5c0:
    // 0x1bc5c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bc5c4:
    if (ctx->pc == 0x1BC5C4u) {
        ctx->pc = 0x1BC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5C0u;
        // 0x1bc5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5C8u;
        goto label_1bc5c8;
    }
    ctx->pc = 0x1BC5C0u;
    {
        const bool branch_taken_0x1bc5c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5C0u;
        // 0x1bc5c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5c0) {
            ctx->pc = 0x1BC5CCu;
            goto label_1bc5cc;
        }
    }
    ctx->pc = 0x1BC5C8u;
label_1bc5c8:
    // 0x1bc5c8: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x1bc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1bc5cc:
    // 0x1bc5cc: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
label_1bc5d0:
    if (ctx->pc == 0x1BC5D0u) {
        ctx->pc = 0x1BC5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5CCu;
        // 0x1bc5d0: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5D4u;
        goto label_1bc5d4;
    }
    ctx->pc = 0x1BC5CCu;
    {
        const bool branch_taken_0x1bc5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc5cc) {
            ctx->pc = 0x1BC5D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC5CCu;
            // 0x1bc5d0: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC700u;
            goto label_1bc700;
        }
    }
    ctx->pc = 0x1BC5D4u;
label_1bc5d4:
    // 0x1bc5d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bc5d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc5d8:
    // 0x1bc5d8: 0x0  nop
    ctx->pc = 0x1bc5d8u;
    // NOP
label_1bc5dc:
    // 0x1bc5dc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bc5e0:
    if (ctx->pc == 0x1BC5E0u) {
        ctx->pc = 0x1BC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5DCu;
        // 0x1bc5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC5E4u;
        goto label_1bc5e4;
    }
    ctx->pc = 0x1BC5DCu;
    {
        const bool branch_taken_0x1bc5dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC5DCu;
        // 0x1bc5e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc5dc) {
            ctx->pc = 0x1BC5E8u;
            goto label_1bc5e8;
        }
    }
    ctx->pc = 0x1BC5E4u;
label_1bc5e4:
    // 0x1bc5e4: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x1bc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_1bc5e8:
    // 0x1bc5e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1bc5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc5ec:
    // 0x1bc5ec: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bc5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1bc5f0:
    // 0x1bc5f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bc5f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bc5f4:
    // 0x1bc5f4: 0x0  nop
    ctx->pc = 0x1bc5f4u;
    // NOP
label_1bc5f8:
    // 0x1bc5f8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1bc5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc5fc:
    // 0x1bc5fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bc5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bc600:
    // 0x1bc600: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc604:
    // 0x1bc604: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1bc608:
    if (ctx->pc == 0x1BC608u) {
        ctx->pc = 0x1BC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC604u;
        // 0x1bc608: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC60Cu;
        goto label_1bc60c;
    }
    ctx->pc = 0x1BC604u;
    {
        const bool branch_taken_0x1bc604 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC604u;
        // 0x1bc608: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc604) {
            ctx->pc = 0x1BC614u;
            goto label_1bc614;
        }
    }
    ctx->pc = 0x1BC60Cu;
label_1bc60c:
    // 0x1bc60c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bc610:
    if (ctx->pc == 0x1BC610u) {
        ctx->pc = 0x1BC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC60Cu;
        // 0x1bc610: 0xe6220384  swc1        $f2, 0x384($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC614u;
        goto label_1bc614;
    }
    ctx->pc = 0x1BC60Cu;
    {
        const bool branch_taken_0x1bc60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC60Cu;
        // 0x1bc610: 0xe6220384  swc1        $f2, 0x384($s1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc60c) {
            ctx->pc = 0x1BC624u;
            goto label_1bc624;
        }
    }
    ctx->pc = 0x1BC614u;
label_1bc614:
    // 0x1bc614: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bc614u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc618:
    // 0x1bc618: 0x0  nop
    ctx->pc = 0x1bc618u;
    // NOP
label_1bc61c:
    // 0x1bc61c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1bc620:
    if (ctx->pc == 0x1BC620u) {
        ctx->pc = 0x1BC620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC61Cu;
        // 0x1bc620: 0xe6210384  swc1        $f1, 0x384($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC624u;
        goto label_1bc624;
    }
    ctx->pc = 0x1BC61Cu;
    {
        const bool branch_taken_0x1bc61c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc61c) {
            ctx->pc = 0x1BC620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC61Cu;
            // 0x1bc620: 0xe6210384  swc1        $f1, 0x384($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC624u;
            goto label_1bc624;
        }
    }
    ctx->pc = 0x1BC624u;
label_1bc624:
    // 0x1bc624: 0xc62c0384  lwc1        $f12, 0x384($s1)
    ctx->pc = 0x1bc624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc628:
    // 0x1bc628: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bc628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bc62c:
    // 0x1bc62c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bc62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bc630:
    // 0x1bc630: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1bc630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1bc634:
    // 0x1bc634: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x1bc634u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_1bc638:
    // 0x1bc638: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1bc638u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1bc63c:
    // 0x1bc63c: 0xc0e404c  jal         func_390130
label_1bc640:
    if (ctx->pc == 0x1BC640u) {
        ctx->pc = 0x1BC644u;
        goto label_1bc644;
    }
    ctx->pc = 0x1BC63Cu;
    SET_GPR_U32(ctx, 31, 0x1BC644u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1BC63Cu, 0x1BC644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC644u;
label_1bc644:
    // 0x1bc644: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1bc644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_1bc648:
    // 0x1bc648: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1bc648u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_1bc64c:
    // 0x1bc64c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc64cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc650:
    // 0x1bc650: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1bc650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_1bc654:
    // 0x1bc654: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bc654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bc658:
    // 0x1bc658: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bc658u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bc65c:
    // 0x1bc65c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1bc65cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc660:
    // 0x1bc660: 0x0  nop
    ctx->pc = 0x1bc660u;
    // NOP
label_1bc664:
    // 0x1bc664: 0x45000026  bc1f        . + 4 + (0x26 << 2)
label_1bc668:
    if (ctx->pc == 0x1BC668u) {
        ctx->pc = 0x1BC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC664u;
        // 0x1bc668: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC66Cu;
        goto label_1bc66c;
    }
    ctx->pc = 0x1BC664u;
    {
        const bool branch_taken_0x1bc664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC664u;
        // 0x1bc668: 0xe6200384  swc1        $f0, 0x384($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc664) {
            ctx->pc = 0x1BC700u;
            goto label_1bc700;
        }
    }
    ctx->pc = 0x1BC66Cu;
label_1bc66c:
    // 0x1bc66c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc670:
    // 0x1bc670: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1bc670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1bc674:
    // 0x1bc674: 0xae220344  sw          $v0, 0x344($s1)
    ctx->pc = 0x1bc674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 2));
label_1bc678:
    // 0x1bc678: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x1bc678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_1bc67c:
    // 0x1bc67c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1bc680:
    if (ctx->pc == 0x1BC680u) {
        ctx->pc = 0x1BC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC67Cu;
        // 0x1bc680: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC684u;
        goto label_1bc684;
    }
    ctx->pc = 0x1BC67Cu;
    {
        const bool branch_taken_0x1bc67c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BC680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC67Cu;
        // 0x1bc680: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc67c) {
            ctx->pc = 0x1BC698u;
            goto label_1bc698;
        }
    }
    ctx->pc = 0x1BC684u;
label_1bc684:
    // 0x1bc684: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bc688:
    // 0x1bc688: 0x0  nop
    ctx->pc = 0x1bc688u;
    // NOP
label_1bc68c:
    // 0x1bc68c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bc68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bc690:
    // 0x1bc690: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bc694:
    if (ctx->pc == 0x1BC694u) {
        ctx->pc = 0x1BC698u;
        goto label_1bc698;
    }
    ctx->pc = 0x1BC690u;
    {
        const bool branch_taken_0x1bc690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc690) {
            ctx->pc = 0x1BC6B0u;
            goto label_1bc6b0;
        }
    }
    ctx->pc = 0x1BC698u;
label_1bc698:
    // 0x1bc698: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bc69c:
    // 0x1bc69c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bc6a0:
    // 0x1bc6a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bc6a4:
    // 0x1bc6a4: 0x0  nop
    ctx->pc = 0x1bc6a4u;
    // NOP
label_1bc6a8:
    // 0x1bc6a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bc6a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bc6ac:
    // 0x1bc6ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bc6acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bc6b0:
    // 0x1bc6b0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bc6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1bc6b4:
    // 0x1bc6b4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bc6b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bc6b8:
    // 0x1bc6b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bc6b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc6bc:
    // 0x1bc6bc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bc6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1bc6c0:
    // 0x1bc6c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc6c4:
    // 0x1bc6c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bc6c8:
    // 0x1bc6c8: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x1bc6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_1bc6cc:
    // 0x1bc6cc: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x1bc6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_1bc6d0:
    // 0x1bc6d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc6d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bc6d4:
    // 0x1bc6d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1bc6d8:
    if (ctx->pc == 0x1BC6D8u) {
        ctx->pc = 0x1BC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6D4u;
        // 0x1bc6d8: 0xe6200364  swc1        $f0, 0x364($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6DCu;
        goto label_1bc6dc;
    }
    ctx->pc = 0x1BC6D4u;
    {
        const bool branch_taken_0x1bc6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6D4u;
        // 0x1bc6d8: 0xe6200364  swc1        $f0, 0x364($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6d4) {
            ctx->pc = 0x1BC704u;
            goto label_1bc704;
        }
    }
    ctx->pc = 0x1BC6DCu;
label_1bc6dc:
    // 0x1bc6dc: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1bc6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_1bc6e0:
    // 0x1bc6e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1bc6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1bc6e4:
    // 0x1bc6e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1bc6e8:
    if (ctx->pc == 0x1BC6E8u) {
        ctx->pc = 0x1BC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6E4u;
        // 0x1bc6e8: 0x8e230394  lw          $v1, 0x394($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6ECu;
        goto label_1bc6ec;
    }
    ctx->pc = 0x1BC6E4u;
    {
        const bool branch_taken_0x1bc6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6E4u;
        // 0x1bc6e8: 0x8e230394  lw          $v1, 0x394($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6e4) {
            ctx->pc = 0x1BC708u;
            goto label_1bc708;
        }
    }
    ctx->pc = 0x1BC6ECu;
label_1bc6ec:
    // 0x1bc6ec: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bc6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bc6f0:
    // 0x1bc6f0: 0x40f809  jalr        $v0
label_1bc6f4:
    if (ctx->pc == 0x1BC6F4u) {
        ctx->pc = 0x1BC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6F0u;
        // 0x1bc6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC6F8u;
        goto label_1bc6f8;
    }
    ctx->pc = 0x1BC6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC6F8u);
        ctx->pc = 0x1BC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6F0u;
        // 0x1bc6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC6F0u, 0x1BC6F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC6F8u;
label_1bc6f8:
    // 0x1bc6f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bc6fc:
    if (ctx->pc == 0x1BC6FCu) {
        ctx->pc = 0x1BC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6F8u;
        // 0x1bc6fc: 0x8e230394  lw          $v1, 0x394($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC700u;
        goto label_1bc700;
    }
    ctx->pc = 0x1BC6F8u;
    {
        const bool branch_taken_0x1bc6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC6F8u;
        // 0x1bc6fc: 0x8e230394  lw          $v1, 0x394($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc6f8) {
            ctx->pc = 0x1BC708u;
            goto label_1bc708;
        }
    }
    ctx->pc = 0x1BC700u;
label_1bc700:
    // 0x1bc700: 0xae200344  sw          $zero, 0x344($s1)
    ctx->pc = 0x1bc700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 836), GPR_U32(ctx, 0));
label_1bc704:
    // 0x1bc704: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bc704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bc708:
    // 0x1bc708: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bc708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1bc70c:
    // 0x1bc70c: 0x40f809  jalr        $v0
label_1bc710:
    if (ctx->pc == 0x1BC710u) {
        ctx->pc = 0x1BC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC70Cu;
        // 0x1bc710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC714u;
        goto label_1bc714;
    }
    ctx->pc = 0x1BC70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC714u);
        ctx->pc = 0x1BC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC70Cu;
        // 0x1bc710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC70Cu, 0x1BC714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC714u;
label_1bc714:
    // 0x1bc714: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bc718:
    if (ctx->pc == 0x1BC718u) {
        ctx->pc = 0x1BC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC714u;
        // 0x1bc718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC71Cu;
        goto label_1bc71c;
    }
    ctx->pc = 0x1BC714u;
    {
        const bool branch_taken_0x1bc714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC714u;
        // 0x1bc718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc714) {
            ctx->pc = 0x1BC72Cu;
            goto label_1bc72c;
        }
    }
    ctx->pc = 0x1BC71Cu;
label_1bc71c:
    // 0x1bc71c: 0xc06f2ba  jal         func_1BCAE8
label_1bc720:
    if (ctx->pc == 0x1BC720u) {
        ctx->pc = 0x1BC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC71Cu;
        // 0x1bc720: 0xc48c0384  lwc1        $f12, 0x384($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC724u;
        goto label_1bc724;
    }
    ctx->pc = 0x1BC71Cu;
    SET_GPR_U32(ctx, 31, 0x1BC724u);
    ctx->pc = 0x1BC720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC71Cu;
    // 0x1bc720: 0xc48c0384  lwc1        $f12, 0x384($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCAE8u, 0x1BC71Cu, 0x1BC724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC724u;
label_1bc724:
    // 0x1bc724: 0x100000ba  b           . + 4 + (0xBA << 2)
label_1bc728:
    if (ctx->pc == 0x1BC728u) {
        ctx->pc = 0x1BC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC724u;
        // 0x1bc728: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC72Cu;
        goto label_1bc72c;
    }
    ctx->pc = 0x1BC724u;
    {
        const bool branch_taken_0x1bc724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC724u;
        // 0x1bc728: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc724) {
            ctx->pc = 0x1BCA10u;
            goto label_1bca10;
        }
    }
    ctx->pc = 0x1BC72Cu;
label_1bc72c:
    // 0x1bc72c: 0xc06f3f6  jal         func_1BCFD8
label_1bc730:
    if (ctx->pc == 0x1BC730u) {
        ctx->pc = 0x1BC730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC72Cu;
        // 0x1bc730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC734u;
        goto label_1bc734;
    }
    ctx->pc = 0x1BC72Cu;
    SET_GPR_U32(ctx, 31, 0x1BC734u);
    ctx->pc = 0x1BC730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC72Cu;
    // 0x1bc730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCFD8u, 0x1BC72Cu, 0x1BC734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC734u;
label_1bc734:
    // 0x1bc734: 0x144000b6  bnez        $v0, . + 4 + (0xB6 << 2)
label_1bc738:
    if (ctx->pc == 0x1BC738u) {
        ctx->pc = 0x1BC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC734u;
        // 0x1bc738: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC73Cu;
        goto label_1bc73c;
    }
    ctx->pc = 0x1BC734u;
    {
        const bool branch_taken_0x1bc734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC734u;
        // 0x1bc738: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc734) {
            ctx->pc = 0x1BCA10u;
            goto label_1bca10;
        }
    }
    ctx->pc = 0x1BC73Cu;
label_1bc73c:
    // 0x1bc73c: 0xc6200290  lwc1        $f0, 0x290($s1)
    ctx->pc = 0x1bc73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc740:
    // 0x1bc740: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1bc740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1bc744:
    // 0x1bc744: 0x0  nop
    ctx->pc = 0x1bc744u;
    // NOP
label_1bc748:
    // 0x1bc748: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1bc748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc74c:
    // 0x1bc74c: 0x0  nop
    ctx->pc = 0x1bc74cu;
    // NOP
label_1bc750:
    // 0x1bc750: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bc754:
    if (ctx->pc == 0x1BC754u) {
        ctx->pc = 0x1BC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC750u;
        // 0x1bc754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC758u;
        goto label_1bc758;
    }
    ctx->pc = 0x1BC750u;
    {
        const bool branch_taken_0x1bc750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC750u;
        // 0x1bc754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc750) {
            ctx->pc = 0x1BC75Cu;
            goto label_1bc75c;
        }
    }
    ctx->pc = 0x1BC758u;
label_1bc758:
    // 0x1bc758: 0x26220270  addiu       $v0, $s1, 0x270
    ctx->pc = 0x1bc758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_1bc75c:
    // 0x1bc75c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1bc760:
    if (ctx->pc == 0x1BC760u) {
        ctx->pc = 0x1BC764u;
        goto label_1bc764;
    }
    ctx->pc = 0x1BC75Cu;
    {
        const bool branch_taken_0x1bc75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc75c) {
            ctx->pc = 0x1BC7E8u;
            goto label_1bc7e8;
        }
    }
    ctx->pc = 0x1BC764u;
label_1bc764:
    // 0x1bc764: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1bc764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc768:
    // 0x1bc768: 0x0  nop
    ctx->pc = 0x1bc768u;
    // NOP
label_1bc76c:
    // 0x1bc76c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bc770:
    if (ctx->pc == 0x1BC770u) {
        ctx->pc = 0x1BC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC76Cu;
        // 0x1bc770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC774u;
        goto label_1bc774;
    }
    ctx->pc = 0x1BC76Cu;
    {
        const bool branch_taken_0x1bc76c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC76Cu;
        // 0x1bc770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc76c) {
            ctx->pc = 0x1BC778u;
            goto label_1bc778;
        }
    }
    ctx->pc = 0x1BC774u;
label_1bc774:
    // 0x1bc774: 0x26220270  addiu       $v0, $s1, 0x270
    ctx->pc = 0x1bc774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_1bc778:
    // 0x1bc778: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1bc778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bc77c:
    // 0x1bc77c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bc77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1bc780:
    // 0x1bc780: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bc780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc784:
    // 0x1bc784: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bc784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bc788:
    // 0x1bc788: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc78c:
    // 0x1bc78c: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1bc78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc790:
    // 0x1bc790: 0x0  nop
    ctx->pc = 0x1bc790u;
    // NOP
label_1bc794:
    // 0x1bc794: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1bc798:
    if (ctx->pc == 0x1BC798u) {
        ctx->pc = 0x1BC79Cu;
        goto label_1bc79c;
    }
    ctx->pc = 0x1BC794u;
    {
        const bool branch_taken_0x1bc794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc794) {
            ctx->pc = 0x1BC7A4u;
            goto label_1bc7a4;
        }
    }
    ctx->pc = 0x1BC79Cu;
label_1bc79c:
    // 0x1bc79c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bc7a0:
    if (ctx->pc == 0x1BC7A0u) {
        ctx->pc = 0x1BC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC79Cu;
        // 0x1bc7a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC7A4u;
        goto label_1bc7a4;
    }
    ctx->pc = 0x1BC79Cu;
    {
        const bool branch_taken_0x1bc79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC79Cu;
        // 0x1bc7a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc79c) {
            ctx->pc = 0x1BC7B4u;
            goto label_1bc7b4;
        }
    }
    ctx->pc = 0x1BC7A4u;
label_1bc7a4:
    // 0x1bc7a4: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1bc7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc7a8:
    // 0x1bc7a8: 0x0  nop
    ctx->pc = 0x1bc7a8u;
    // NOP
label_1bc7ac:
    // 0x1bc7ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1bc7b0:
    if (ctx->pc == 0x1BC7B0u) {
        ctx->pc = 0x1BC7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7ACu;
        // 0x1bc7b0: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC7B4u;
        goto label_1bc7b4;
    }
    ctx->pc = 0x1BC7ACu;
    {
        const bool branch_taken_0x1bc7ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bc7ac) {
            ctx->pc = 0x1BC7B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC7ACu;
            // 0x1bc7b0: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC7B4u;
            goto label_1bc7b4;
        }
    }
    ctx->pc = 0x1BC7B4u;
label_1bc7b4:
    // 0x1bc7b4: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1bc7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1bc7b8:
    // 0x1bc7b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bc7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bc7bc:
    // 0x1bc7bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1bc7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1bc7c0:
    // 0x1bc7c0: 0x0  nop
    ctx->pc = 0x1bc7c0u;
    // NOP
label_1bc7c4:
    // 0x1bc7c4: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x1bc7c4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_1bc7c8:
    // 0x1bc7c8: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1bc7c8u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1bc7cc:
    // 0x1bc7cc: 0xc0e404c  jal         func_390130
label_1bc7d0:
    if (ctx->pc == 0x1BC7D0u) {
        ctx->pc = 0x1BC7D4u;
        goto label_1bc7d4;
    }
    ctx->pc = 0x1BC7CCu;
    SET_GPR_U32(ctx, 31, 0x1BC7D4u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1BC7CCu, 0x1BC7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC7D4u;
label_1bc7d4:
    // 0x1bc7d4: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1bc7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_1bc7d8:
    // 0x1bc7d8: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1bc7d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_1bc7dc:
    // 0x1bc7dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc7dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc7e0:
    // 0x1bc7e0: 0x0  nop
    ctx->pc = 0x1bc7e0u;
    // NOP
label_1bc7e4:
    // 0x1bc7e4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1bc7e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bc7e8:
    // 0x1bc7e8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x1bc7e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_1bc7ec:
    // 0x1bc7ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bc7ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc7f0:
    // 0x1bc7f0: 0x0  nop
    ctx->pc = 0x1bc7f0u;
    // NOP
label_1bc7f4:
    // 0x1bc7f4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1bc7f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bc7f8:
    // 0x1bc7f8: 0x0  nop
    ctx->pc = 0x1bc7f8u;
    // NOP
label_1bc7fc:
    // 0x1bc7fc: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1bc800:
    if (ctx->pc == 0x1BC800u) {
        ctx->pc = 0x1BC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7FCu;
        // 0x1bc800: 0x263500f0  addiu       $s5, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC804u;
        goto label_1bc804;
    }
    ctx->pc = 0x1BC7FCu;
    {
        const bool branch_taken_0x1bc7fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BC800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC7FCu;
        // 0x1bc800: 0x263500f0  addiu       $s5, $s1, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc7fc) {
            ctx->pc = 0x1BC84Cu;
            goto label_1bc84c;
        }
    }
    ctx->pc = 0x1BC804u;
label_1bc804:
    // 0x1bc804: 0x8e230124  lw          $v1, 0x124($s1)
    ctx->pc = 0x1bc804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
label_1bc808:
    // 0x1bc808: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1bc808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1bc80c:
    // 0x1bc80c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1bc810:
    if (ctx->pc == 0x1BC810u) {
        ctx->pc = 0x1BC814u;
        goto label_1bc814;
    }
    ctx->pc = 0x1BC80Cu;
    {
        const bool branch_taken_0x1bc80c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc80c) {
            ctx->pc = 0x1BC820u;
            goto label_1bc820;
        }
    }
    ctx->pc = 0x1BC814u;
label_1bc814:
    // 0x1bc814: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1bc814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1bc818:
    // 0x1bc818: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1bc81c:
    if (ctx->pc == 0x1BC81Cu) {
        ctx->pc = 0x1BC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC818u;
        // 0x1bc81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC820u;
        goto label_1bc820;
    }
    ctx->pc = 0x1BC818u;
    {
        const bool branch_taken_0x1bc818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC818u;
        // 0x1bc81c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc818) {
            ctx->pc = 0x1BC850u;
            goto label_1bc850;
        }
    }
    ctx->pc = 0x1BC820u;
label_1bc820:
    // 0x1bc820: 0xc06f4ee  jal         func_1BD3B8
label_1bc824:
    if (ctx->pc == 0x1BC824u) {
        ctx->pc = 0x1BC824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC820u;
        // 0x1bc824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC828u;
        goto label_1bc828;
    }
    ctx->pc = 0x1BC820u;
    SET_GPR_U32(ctx, 31, 0x1BC828u);
    ctx->pc = 0x1BC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC820u;
    // 0x1bc824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD3B8u, 0x1BC820u, 0x1BC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC828u;
label_1bc828:
    // 0x1bc828: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
label_1bc82c:
    if (ctx->pc == 0x1BC82Cu) {
        ctx->pc = 0x1BC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC828u;
        // 0x1bc82c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC830u;
        goto label_1bc830;
    }
    ctx->pc = 0x1BC828u;
    {
        const bool branch_taken_0x1bc828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC828u;
        // 0x1bc82c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc828) {
            ctx->pc = 0x1BCA10u;
            goto label_1bca10;
        }
    }
    ctx->pc = 0x1BC830u;
label_1bc830:
    // 0x1bc830: 0x8e220340  lw          $v0, 0x340($s1)
    ctx->pc = 0x1bc830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_1bc834:
    // 0x1bc834: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1bc838:
    if (ctx->pc == 0x1BC838u) {
        ctx->pc = 0x1BC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC834u;
        // 0x1bc838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC83Cu;
        goto label_1bc83c;
    }
    ctx->pc = 0x1BC834u;
    {
        const bool branch_taken_0x1bc834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC834u;
        // 0x1bc838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc834) {
            ctx->pc = 0x1BC850u;
            goto label_1bc850;
        }
    }
    ctx->pc = 0x1BC83Cu;
label_1bc83c:
    // 0x1bc83c: 0xc06f5fa  jal         func_1BD7E8
label_1bc840:
    if (ctx->pc == 0x1BC840u) {
        ctx->pc = 0x1BC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC83Cu;
        // 0x1bc840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC844u;
        goto label_1bc844;
    }
    ctx->pc = 0x1BC83Cu;
    SET_GPR_U32(ctx, 31, 0x1BC844u);
    ctx->pc = 0x1BC840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC83Cu;
    // 0x1bc840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BD7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BD7E8u, 0x1BC83Cu, 0x1BC844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC844u;
label_1bc844:
    // 0x1bc844: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
label_1bc848:
    if (ctx->pc == 0x1BC848u) {
        ctx->pc = 0x1BC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC844u;
        // 0x1bc848: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC84Cu;
        goto label_1bc84c;
    }
    ctx->pc = 0x1BC844u;
    {
        const bool branch_taken_0x1bc844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC844u;
        // 0x1bc848: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc844) {
            ctx->pc = 0x1BCA10u;
            goto label_1bca10;
        }
    }
    ctx->pc = 0x1BC84Cu;
label_1bc84c:
    // 0x1bc84c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc850:
    // 0x1bc850: 0xc06f3ac  jal         func_1BCEB0
label_1bc854:
    if (ctx->pc == 0x1BC854u) {
        ctx->pc = 0x1BC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC850u;
        // 0x1bc854: 0x26300210  addiu       $s0, $s1, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC858u;
        goto label_1bc858;
    }
    ctx->pc = 0x1BC850u;
    SET_GPR_U32(ctx, 31, 0x1BC858u);
    ctx->pc = 0x1BC854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC850u;
    // 0x1bc854: 0x26300210  addiu       $s0, $s1, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCEB0u, 0x1BC850u, 0x1BC858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC858u;
label_1bc858:
    // 0x1bc858: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x1bc858u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc85c:
    // 0x1bc85c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1bc85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc860:
    // 0x1bc860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bc860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc864:
    // 0x1bc864: 0xc06f688  jal         func_1BDA20
label_1bc868:
    if (ctx->pc == 0x1BC868u) {
        ctx->pc = 0x1BC868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC864u;
        // 0x1bc868: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC86Cu;
        goto label_1bc86c;
    }
    ctx->pc = 0x1BC864u;
    SET_GPR_U32(ctx, 31, 0x1BC86Cu);
    ctx->pc = 0x1BC868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC864u;
    // 0x1bc868: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDA20u, 0x1BC864u, 0x1BC86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC86Cu;
label_1bc86c:
    // 0x1bc86c: 0x14400033  bnez        $v0, . + 4 + (0x33 << 2)
label_1bc870:
    if (ctx->pc == 0x1BC870u) {
        ctx->pc = 0x1BC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC86Cu;
        // 0x1bc870: 0x26340130  addiu       $s4, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC874u;
        goto label_1bc874;
    }
    ctx->pc = 0x1BC86Cu;
    {
        const bool branch_taken_0x1bc86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC86Cu;
        // 0x1bc870: 0x26340130  addiu       $s4, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc86c) {
            ctx->pc = 0x1BC93Cu;
            goto label_1bc93c;
        }
    }
    ctx->pc = 0x1BC874u;
label_1bc874:
    // 0x1bc874: 0xc06f298  jal         func_1BCA60
label_1bc878:
    if (ctx->pc == 0x1BC878u) {
        ctx->pc = 0x1BC878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC874u;
        // 0x1bc878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC87Cu;
        goto label_1bc87c;
    }
    ctx->pc = 0x1BC874u;
    SET_GPR_U32(ctx, 31, 0x1BC87Cu);
    ctx->pc = 0x1BC878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC874u;
    // 0x1bc878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA60u, 0x1BC874u, 0x1BC87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC87Cu;
label_1bc87c:
    // 0x1bc87c: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bc880:
    // 0x1bc880: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1bc884:
    // 0x1bc884: 0x40f809  jalr        $v0
label_1bc888:
    if (ctx->pc == 0x1BC888u) {
        ctx->pc = 0x1BC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC884u;
        // 0x1bc888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC88Cu;
        goto label_1bc88c;
    }
    ctx->pc = 0x1BC884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC88Cu);
        ctx->pc = 0x1BC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC884u;
        // 0x1bc888: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC884u, 0x1BC88Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC88Cu;
label_1bc88c:
    // 0x1bc88c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x1bc88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
label_1bc890:
    // 0x1bc890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bc890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc894:
    // 0x1bc894: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_1bc898:
    if (ctx->pc == 0x1BC898u) {
        ctx->pc = 0x1BC89Cu;
        goto label_1bc89c;
    }
    ctx->pc = 0x1BC894u;
    {
        const bool branch_taken_0x1bc894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bc894) {
            ctx->pc = 0x1BC8B0u;
            goto label_1bc8b0;
        }
    }
    ctx->pc = 0x1BC89Cu;
label_1bc89c:
    // 0x1bc89c: 0x8ea30014  lw          $v1, 0x14($s5)
    ctx->pc = 0x1bc89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1bc8a0:
    // 0x1bc8a0: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x1bc8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_1bc8a4:
    // 0x1bc8a4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1bc8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1bc8a8:
    // 0x1bc8a8: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bc8ac:
    if (ctx->pc == 0x1BC8ACu) {
        ctx->pc = 0x1BC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8A8u;
        // 0x1bc8ac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8B0u;
        goto label_1bc8b0;
    }
    ctx->pc = 0x1BC8A8u;
    {
        const bool branch_taken_0x1bc8a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8A8u;
        // 0x1bc8ac: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8a8) {
            ctx->pc = 0x1BC8D4u;
            goto label_1bc8d4;
        }
    }
    ctx->pc = 0x1BC8B0u;
label_1bc8b0:
    // 0x1bc8b0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1bc8b4:
    if (ctx->pc == 0x1BC8B4u) {
        ctx->pc = 0x1BC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8B0u;
        // 0x1bc8b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8B8u;
        goto label_1bc8b8;
    }
    ctx->pc = 0x1BC8B0u;
    {
        const bool branch_taken_0x1bc8b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8B0u;
        // 0x1bc8b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8b0) {
            ctx->pc = 0x1BC8CCu;
            goto label_1bc8cc;
        }
    }
    ctx->pc = 0x1BC8B8u;
label_1bc8b8:
    // 0x1bc8b8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bc8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bc8bc:
    // 0x1bc8bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1bc8c0:
    if (ctx->pc == 0x1BC8C0u) {
        ctx->pc = 0x1BC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8BCu;
        // 0x1bc8c0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8C4u;
        goto label_1bc8c4;
    }
    ctx->pc = 0x1BC8BCu;
    {
        const bool branch_taken_0x1bc8bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8BCu;
        // 0x1bc8c0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8bc) {
            ctx->pc = 0x1BC8CCu;
            goto label_1bc8cc;
        }
    }
    ctx->pc = 0x1BC8C4u;
label_1bc8c4:
    // 0x1bc8c4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1bc8c8:
    if (ctx->pc == 0x1BC8C8u) {
        ctx->pc = 0x1BC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8C4u;
        // 0x1bc8c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8CCu;
        goto label_1bc8cc;
    }
    ctx->pc = 0x1BC8C4u;
    {
        const bool branch_taken_0x1bc8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8C4u;
        // 0x1bc8c8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8c4) {
            ctx->pc = 0x1BC8D4u;
            goto label_1bc8d4;
        }
    }
    ctx->pc = 0x1BC8CCu;
label_1bc8cc:
    // 0x1bc8cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bc8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bc8d0:
    // 0x1bc8d0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bc8d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc8d4:
    // 0x1bc8d4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1bc8d8:
    if (ctx->pc == 0x1BC8D8u) {
        ctx->pc = 0x1BC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D4u;
        // 0x1bc8d8: 0x26340130  addiu       $s4, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8DCu;
        goto label_1bc8dc;
    }
    ctx->pc = 0x1BC8D4u;
    {
        const bool branch_taken_0x1bc8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D4u;
        // 0x1bc8d8: 0x26340130  addiu       $s4, $s1, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8d4) {
            ctx->pc = 0x1BC93Cu;
            goto label_1bc93c;
        }
    }
    ctx->pc = 0x1BC8DCu;
label_1bc8dc:
    // 0x1bc8dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1bc8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1bc8e0:
    // 0x1bc8e0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1bc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1bc8e4:
    // 0x1bc8e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1bc8e8:
    if (ctx->pc == 0x1BC8E8u) {
        ctx->pc = 0x1BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8E4u;
        // 0x1bc8e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC8ECu;
        goto label_1bc8ec;
    }
    ctx->pc = 0x1BC8E4u;
    {
        const bool branch_taken_0x1bc8e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8E4u;
        // 0x1bc8e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8e4) {
            ctx->pc = 0x1BC900u;
            goto label_1bc900;
        }
    }
    ctx->pc = 0x1BC8ECu;
label_1bc8ec:
    // 0x1bc8ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc8ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bc8f0:
    // 0x1bc8f0: 0x0  nop
    ctx->pc = 0x1bc8f0u;
    // NOP
label_1bc8f4:
    // 0x1bc8f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bc8f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bc8f8:
    // 0x1bc8f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bc8fc:
    if (ctx->pc == 0x1BC8FCu) {
        ctx->pc = 0x1BC900u;
        goto label_1bc900;
    }
    ctx->pc = 0x1BC8F8u;
    {
        const bool branch_taken_0x1bc8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8f8) {
            ctx->pc = 0x1BC918u;
            goto label_1bc918;
        }
    }
    ctx->pc = 0x1BC900u;
label_1bc900:
    // 0x1bc900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bc900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bc904:
    // 0x1bc904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bc904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bc908:
    // 0x1bc908: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bc908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bc90c:
    // 0x1bc90c: 0x0  nop
    ctx->pc = 0x1bc90cu;
    // NOP
label_1bc910:
    // 0x1bc910: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bc910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bc914:
    // 0x1bc914: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bc914u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bc918:
    // 0x1bc918: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bc918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1bc91c:
    // 0x1bc91c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1bc91cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1bc920:
    // 0x1bc920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bc920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bc924:
    // 0x1bc924: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bc924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1bc928:
    // 0x1bc928: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bc928u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bc92c:
    // 0x1bc92c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1bc92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1bc930:
    // 0x1bc930: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bc934:
    // 0x1bc934: 0xe6200364  swc1        $f0, 0x364($s1)
    ctx->pc = 0x1bc934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 868), bits); }
label_1bc938:
    // 0x1bc938: 0x26340130  addiu       $s4, $s1, 0x130
    ctx->pc = 0x1bc938u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_1bc93c:
    // 0x1bc93c: 0x26330310  addiu       $s3, $s1, 0x310
    ctx->pc = 0x1bc93cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
label_1bc940:
    // 0x1bc940: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x1bc940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bc944:
    // 0x1bc944: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x1bc944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bc948:
    // 0x1bc948: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1bc948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1bc94c:
    // 0x1bc94c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bc950:
    if (ctx->pc == 0x1BC950u) {
        ctx->pc = 0x1BC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC94Cu;
        // 0x1bc950: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC954u;
        goto label_1bc954;
    }
    ctx->pc = 0x1BC94Cu;
    {
        const bool branch_taken_0x1bc94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC94Cu;
        // 0x1bc950: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc94c) {
            ctx->pc = 0x1BC958u;
            goto label_1bc958;
        }
    }
    ctx->pc = 0x1BC954u;
label_1bc954:
    // 0x1bc954: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bc954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bc958:
    // 0x1bc958: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_1bc95c:
    if (ctx->pc == 0x1BC95Cu) {
        ctx->pc = 0x1BC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC958u;
        // 0x1bc95c: 0xc62000f0  lwc1        $f0, 0xF0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC960u;
        goto label_1bc960;
    }
    ctx->pc = 0x1BC958u;
    {
        const bool branch_taken_0x1bc958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc958) {
            ctx->pc = 0x1BC95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC958u;
            // 0x1bc95c: 0xc62000f0  lwc1        $f0, 0xF0($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC97Cu;
            goto label_1bc97c;
        }
    }
    ctx->pc = 0x1BC960u;
label_1bc960:
    // 0x1bc960: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bc964:
    if (ctx->pc == 0x1BC964u) {
        ctx->pc = 0x1BC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC960u;
        // 0x1bc964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC968u;
        goto label_1bc968;
    }
    ctx->pc = 0x1BC960u;
    {
        const bool branch_taken_0x1bc960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC960u;
        // 0x1bc964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc960) {
            ctx->pc = 0x1BC96Cu;
            goto label_1bc96c;
        }
    }
    ctx->pc = 0x1BC968u;
label_1bc968:
    // 0x1bc968: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1bc968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bc96c:
    // 0x1bc96c: 0xc06fb38  jal         func_1BECE0
label_1bc970:
    if (ctx->pc == 0x1BC970u) {
        ctx->pc = 0x1BC970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC96Cu;
        // 0x1bc970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC974u;
        goto label_1bc974;
    }
    ctx->pc = 0x1BC96Cu;
    SET_GPR_U32(ctx, 31, 0x1BC974u);
    ctx->pc = 0x1BC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC96Cu;
    // 0x1bc970: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x1BC96Cu, 0x1BC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC974u;
label_1bc974:
    // 0x1bc974: 0x1000000a  b           . + 4 + (0xA << 2)
label_1bc978:
    if (ctx->pc == 0x1BC978u) {
        ctx->pc = 0x1BC97Cu;
        goto label_1bc97c;
    }
    ctx->pc = 0x1BC974u;
    {
        const bool branch_taken_0x1bc974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc974) {
            ctx->pc = 0x1BC9A0u;
            goto label_1bc9a0;
        }
    }
    ctx->pc = 0x1BC97Cu;
label_1bc97c:
    // 0x1bc97c: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x1bc97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
label_1bc980:
    // 0x1bc980: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1bc980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc984:
    // 0x1bc984: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1bc984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1bc988:
    // 0x1bc988: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1bc988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc98c:
    // 0x1bc98c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1bc98cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_1bc990:
    // 0x1bc990: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1bc990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1bc994:
    // 0x1bc994: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x1bc994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_1bc998:
    // 0x1bc998: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1bc998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1bc99c:
    // 0x1bc99c: 0xae430014  sw          $v1, 0x14($s2)
    ctx->pc = 0x1bc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 3));
label_1bc9a0:
    // 0x1bc9a0: 0xc06fc34  jal         func_1BF0D0
label_1bc9a4:
    if (ctx->pc == 0x1BC9A4u) {
        ctx->pc = 0x1BC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9A0u;
        // 0x1bc9a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9A8u;
        goto label_1bc9a8;
    }
    ctx->pc = 0x1BC9A0u;
    SET_GPR_U32(ctx, 31, 0x1BC9A8u);
    ctx->pc = 0x1BC9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9A0u;
    // 0x1bc9a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BC9A0u, 0x1BC9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9A8u;
label_1bc9a8:
    // 0x1bc9a8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_1bc9ac:
    // 0x1bc9ac: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1bc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_1bc9b0:
    // 0x1bc9b0: 0x5062000f  beql        $v1, $v0, . + 4 + (0xF << 2)
label_1bc9b4:
    if (ctx->pc == 0x1BC9B4u) {
        ctx->pc = 0x1BC9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9B0u;
        // 0x1bc9b4: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9B8u;
        goto label_1bc9b8;
    }
    ctx->pc = 0x1BC9B0u;
    {
        const bool branch_taken_0x1bc9b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc9b0) {
            ctx->pc = 0x1BC9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC9B0u;
            // 0x1bc9b4: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9F0u;
            goto label_1bc9f0;
        }
    }
    ctx->pc = 0x1BC9B8u;
label_1bc9b8:
    // 0x1bc9b8: 0x8e230394  lw          $v1, 0x394($s1)
    ctx->pc = 0x1bc9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 916)));
label_1bc9bc:
    // 0x1bc9bc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1bc9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1bc9c0:
    // 0x1bc9c0: 0x40f809  jalr        $v0
label_1bc9c4:
    if (ctx->pc == 0x1BC9C4u) {
        ctx->pc = 0x1BC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9C0u;
        // 0x1bc9c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9C8u;
        goto label_1bc9c8;
    }
    ctx->pc = 0x1BC9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC9C8u);
        ctx->pc = 0x1BC9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9C0u;
        // 0x1bc9c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC9C0u, 0x1BC9C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC9C8u;
label_1bc9c8:
    // 0x1bc9c8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1bc9cc:
    if (ctx->pc == 0x1BC9CCu) {
        ctx->pc = 0x1BC9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9C8u;
        // 0x1bc9cc: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9D0u;
        goto label_1bc9d0;
    }
    ctx->pc = 0x1BC9C8u;
    {
        const bool branch_taken_0x1bc9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc9c8) {
            ctx->pc = 0x1BC9CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC9C8u;
            // 0x1bc9cc: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9F0u;
            goto label_1bc9f0;
        }
    }
    ctx->pc = 0x1BC9D0u;
label_1bc9d0:
    // 0x1bc9d0: 0x8e220310  lw          $v0, 0x310($s1)
    ctx->pc = 0x1bc9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 784)));
label_1bc9d4:
    // 0x1bc9d4: 0x58400006  blezl       $v0, . + 4 + (0x6 << 2)
label_1bc9d8:
    if (ctx->pc == 0x1BC9D8u) {
        ctx->pc = 0x1BC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9D4u;
        // 0x1bc9d8: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9DCu;
        goto label_1bc9dc;
    }
    ctx->pc = 0x1BC9D4u;
    {
        const bool branch_taken_0x1bc9d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1bc9d4) {
            ctx->pc = 0x1BC9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC9D4u;
            // 0x1bc9d8: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC9F0u;
            goto label_1bc9f0;
        }
    }
    ctx->pc = 0x1BC9DCu;
label_1bc9dc:
    // 0x1bc9dc: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1bc9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1bc9e0:
    // 0x1bc9e0: 0xc0f61e8  jal         func_3D87A0
label_1bc9e4:
    if (ctx->pc == 0x1BC9E4u) {
        ctx->pc = 0x1BC9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9E0u;
        // 0x1bc9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9E8u;
        goto label_1bc9e8;
    }
    ctx->pc = 0x1BC9E0u;
    SET_GPR_U32(ctx, 31, 0x1BC9E8u);
    ctx->pc = 0x1BC9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9E0u;
    // 0x1bc9e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1BC9E0u, 0x1BC9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9E8u;
label_1bc9e8:
    // 0x1bc9e8: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_1bc9ec:
    if (ctx->pc == 0x1BC9ECu) {
        ctx->pc = 0x1BC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9E8u;
        // 0x1bc9ec: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9F0u;
        goto label_1bc9f0;
    }
    ctx->pc = 0x1BC9E8u;
    {
        const bool branch_taken_0x1bc9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9E8u;
        // 0x1bc9ec: 0xae600020  sw          $zero, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9e8) {
            ctx->pc = 0x1BC948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc948;
        }
    }
    ctx->pc = 0x1BC9F0u;
label_1bc9f0:
    // 0x1bc9f0: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1bc9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1bc9f4:
    // 0x1bc9f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1bc9f8:
    if (ctx->pc == 0x1BC9F8u) {
        ctx->pc = 0x1BC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9F4u;
        // 0x1bc9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9FCu;
        goto label_1bc9fc;
    }
    ctx->pc = 0x1BC9F4u;
    {
        const bool branch_taken_0x1bc9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9F4u;
        // 0x1bc9f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9f4) {
            ctx->pc = 0x1BCA04u;
            goto label_1bca04;
        }
    }
    ctx->pc = 0x1BC9FCu;
label_1bc9fc:
    // 0x1bc9fc: 0xc06f2ba  jal         func_1BCAE8
label_1bca00:
    if (ctx->pc == 0x1BCA00u) {
        ctx->pc = 0x1BCA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9FCu;
        // 0x1bca00: 0xc48c0384  lwc1        $f12, 0x384($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA04u;
        goto label_1bca04;
    }
    ctx->pc = 0x1BC9FCu;
    SET_GPR_U32(ctx, 31, 0x1BCA04u);
    ctx->pc = 0x1BCA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9FCu;
    // 0x1bca00: 0xc48c0384  lwc1        $f12, 0x384($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCAE8u, 0x1BC9FCu, 0x1BCA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA04u;
label_1bca04:
    // 0x1bca04: 0xc06fc34  jal         func_1BF0D0
label_1bca08:
    if (ctx->pc == 0x1BCA08u) {
        ctx->pc = 0x1BCA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA04u;
        // 0x1bca08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA0Cu;
        goto label_1bca0c;
    }
    ctx->pc = 0x1BCA04u;
    SET_GPR_U32(ctx, 31, 0x1BCA0Cu);
    ctx->pc = 0x1BCA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA04u;
    // 0x1bca08: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BCA04u, 0x1BCA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA0Cu;
label_1bca0c:
    // 0x1bca0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bca0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bca10:
    // 0x1bca10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bca10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bca14:
    // 0x1bca14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bca14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bca18:
    // 0x1bca18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bca18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bca1c:
    // 0x1bca1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1bca1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bca20:
    // 0x1bca20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1bca20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bca24:
    // 0x1bca24: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1bca24u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bca28:
    // 0x1bca28: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1bca28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bca2c:
    // 0x1bca2c: 0x3e00008  jr          $ra
label_1bca30:
    if (ctx->pc == 0x1BCA30u) {
        ctx->pc = 0x1BCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA2Cu;
        // 0x1bca30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA34u;
        goto label_1bca34;
    }
    ctx->pc = 0x1BCA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA2Cu;
        // 0x1bca30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA34u;
label_1bca34:
    // 0x1bca34: 0x0  nop
    ctx->pc = 0x1bca34u;
    // NOP
    ctx->pc = 0x1bca38u;
}
