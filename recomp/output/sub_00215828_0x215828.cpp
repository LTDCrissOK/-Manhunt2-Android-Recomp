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

// Function: sub_00215828
// Address: 0x215828 - 0x215bd0
void sub_00215828_0x215828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215828_0x215828");
#endif

    switch (ctx->pc) {
        case 0x215828u: goto label_215828;
        case 0x21582cu: goto label_21582c;
        case 0x215830u: goto label_215830;
        case 0x215834u: goto label_215834;
        case 0x215838u: goto label_215838;
        case 0x21583cu: goto label_21583c;
        case 0x215840u: goto label_215840;
        case 0x215844u: goto label_215844;
        case 0x215848u: goto label_215848;
        case 0x21584cu: goto label_21584c;
        case 0x215850u: goto label_215850;
        case 0x215854u: goto label_215854;
        case 0x215858u: goto label_215858;
        case 0x21585cu: goto label_21585c;
        case 0x215860u: goto label_215860;
        case 0x215864u: goto label_215864;
        case 0x215868u: goto label_215868;
        case 0x21586cu: goto label_21586c;
        case 0x215870u: goto label_215870;
        case 0x215874u: goto label_215874;
        case 0x215878u: goto label_215878;
        case 0x21587cu: goto label_21587c;
        case 0x215880u: goto label_215880;
        case 0x215884u: goto label_215884;
        case 0x215888u: goto label_215888;
        case 0x21588cu: goto label_21588c;
        case 0x215890u: goto label_215890;
        case 0x215894u: goto label_215894;
        case 0x215898u: goto label_215898;
        case 0x21589cu: goto label_21589c;
        case 0x2158a0u: goto label_2158a0;
        case 0x2158a4u: goto label_2158a4;
        case 0x2158a8u: goto label_2158a8;
        case 0x2158acu: goto label_2158ac;
        case 0x2158b0u: goto label_2158b0;
        case 0x2158b4u: goto label_2158b4;
        case 0x2158b8u: goto label_2158b8;
        case 0x2158bcu: goto label_2158bc;
        case 0x2158c0u: goto label_2158c0;
        case 0x2158c4u: goto label_2158c4;
        case 0x2158c8u: goto label_2158c8;
        case 0x2158ccu: goto label_2158cc;
        case 0x2158d0u: goto label_2158d0;
        case 0x2158d4u: goto label_2158d4;
        case 0x2158d8u: goto label_2158d8;
        case 0x2158dcu: goto label_2158dc;
        case 0x2158e0u: goto label_2158e0;
        case 0x2158e4u: goto label_2158e4;
        case 0x2158e8u: goto label_2158e8;
        case 0x2158ecu: goto label_2158ec;
        case 0x2158f0u: goto label_2158f0;
        case 0x2158f4u: goto label_2158f4;
        case 0x2158f8u: goto label_2158f8;
        case 0x2158fcu: goto label_2158fc;
        case 0x215900u: goto label_215900;
        case 0x215904u: goto label_215904;
        case 0x215908u: goto label_215908;
        case 0x21590cu: goto label_21590c;
        case 0x215910u: goto label_215910;
        case 0x215914u: goto label_215914;
        case 0x215918u: goto label_215918;
        case 0x21591cu: goto label_21591c;
        case 0x215920u: goto label_215920;
        case 0x215924u: goto label_215924;
        case 0x215928u: goto label_215928;
        case 0x21592cu: goto label_21592c;
        case 0x215930u: goto label_215930;
        case 0x215934u: goto label_215934;
        case 0x215938u: goto label_215938;
        case 0x21593cu: goto label_21593c;
        case 0x215940u: goto label_215940;
        case 0x215944u: goto label_215944;
        case 0x215948u: goto label_215948;
        case 0x21594cu: goto label_21594c;
        case 0x215950u: goto label_215950;
        case 0x215954u: goto label_215954;
        case 0x215958u: goto label_215958;
        case 0x21595cu: goto label_21595c;
        case 0x215960u: goto label_215960;
        case 0x215964u: goto label_215964;
        case 0x215968u: goto label_215968;
        case 0x21596cu: goto label_21596c;
        case 0x215970u: goto label_215970;
        case 0x215974u: goto label_215974;
        case 0x215978u: goto label_215978;
        case 0x21597cu: goto label_21597c;
        case 0x215980u: goto label_215980;
        case 0x215984u: goto label_215984;
        case 0x215988u: goto label_215988;
        case 0x21598cu: goto label_21598c;
        case 0x215990u: goto label_215990;
        case 0x215994u: goto label_215994;
        case 0x215998u: goto label_215998;
        case 0x21599cu: goto label_21599c;
        case 0x2159a0u: goto label_2159a0;
        case 0x2159a4u: goto label_2159a4;
        case 0x2159a8u: goto label_2159a8;
        case 0x2159acu: goto label_2159ac;
        case 0x2159b0u: goto label_2159b0;
        case 0x2159b4u: goto label_2159b4;
        case 0x2159b8u: goto label_2159b8;
        case 0x2159bcu: goto label_2159bc;
        case 0x2159c0u: goto label_2159c0;
        case 0x2159c4u: goto label_2159c4;
        case 0x2159c8u: goto label_2159c8;
        case 0x2159ccu: goto label_2159cc;
        case 0x2159d0u: goto label_2159d0;
        case 0x2159d4u: goto label_2159d4;
        case 0x2159d8u: goto label_2159d8;
        case 0x2159dcu: goto label_2159dc;
        case 0x2159e0u: goto label_2159e0;
        case 0x2159e4u: goto label_2159e4;
        case 0x2159e8u: goto label_2159e8;
        case 0x2159ecu: goto label_2159ec;
        case 0x2159f0u: goto label_2159f0;
        case 0x2159f4u: goto label_2159f4;
        case 0x2159f8u: goto label_2159f8;
        case 0x2159fcu: goto label_2159fc;
        case 0x215a00u: goto label_215a00;
        case 0x215a04u: goto label_215a04;
        case 0x215a08u: goto label_215a08;
        case 0x215a0cu: goto label_215a0c;
        case 0x215a10u: goto label_215a10;
        case 0x215a14u: goto label_215a14;
        case 0x215a18u: goto label_215a18;
        case 0x215a1cu: goto label_215a1c;
        case 0x215a20u: goto label_215a20;
        case 0x215a24u: goto label_215a24;
        case 0x215a28u: goto label_215a28;
        case 0x215a2cu: goto label_215a2c;
        case 0x215a30u: goto label_215a30;
        case 0x215a34u: goto label_215a34;
        case 0x215a38u: goto label_215a38;
        case 0x215a3cu: goto label_215a3c;
        case 0x215a40u: goto label_215a40;
        case 0x215a44u: goto label_215a44;
        case 0x215a48u: goto label_215a48;
        case 0x215a4cu: goto label_215a4c;
        case 0x215a50u: goto label_215a50;
        case 0x215a54u: goto label_215a54;
        case 0x215a58u: goto label_215a58;
        case 0x215a5cu: goto label_215a5c;
        case 0x215a60u: goto label_215a60;
        case 0x215a64u: goto label_215a64;
        case 0x215a68u: goto label_215a68;
        case 0x215a6cu: goto label_215a6c;
        case 0x215a70u: goto label_215a70;
        case 0x215a74u: goto label_215a74;
        case 0x215a78u: goto label_215a78;
        case 0x215a7cu: goto label_215a7c;
        case 0x215a80u: goto label_215a80;
        case 0x215a84u: goto label_215a84;
        case 0x215a88u: goto label_215a88;
        case 0x215a8cu: goto label_215a8c;
        case 0x215a90u: goto label_215a90;
        case 0x215a94u: goto label_215a94;
        case 0x215a98u: goto label_215a98;
        case 0x215a9cu: goto label_215a9c;
        case 0x215aa0u: goto label_215aa0;
        case 0x215aa4u: goto label_215aa4;
        case 0x215aa8u: goto label_215aa8;
        case 0x215aacu: goto label_215aac;
        case 0x215ab0u: goto label_215ab0;
        case 0x215ab4u: goto label_215ab4;
        case 0x215ab8u: goto label_215ab8;
        case 0x215abcu: goto label_215abc;
        case 0x215ac0u: goto label_215ac0;
        case 0x215ac4u: goto label_215ac4;
        case 0x215ac8u: goto label_215ac8;
        case 0x215accu: goto label_215acc;
        case 0x215ad0u: goto label_215ad0;
        case 0x215ad4u: goto label_215ad4;
        case 0x215ad8u: goto label_215ad8;
        case 0x215adcu: goto label_215adc;
        case 0x215ae0u: goto label_215ae0;
        case 0x215ae4u: goto label_215ae4;
        case 0x215ae8u: goto label_215ae8;
        case 0x215aecu: goto label_215aec;
        case 0x215af0u: goto label_215af0;
        case 0x215af4u: goto label_215af4;
        case 0x215af8u: goto label_215af8;
        case 0x215afcu: goto label_215afc;
        case 0x215b00u: goto label_215b00;
        case 0x215b04u: goto label_215b04;
        case 0x215b08u: goto label_215b08;
        case 0x215b0cu: goto label_215b0c;
        case 0x215b10u: goto label_215b10;
        case 0x215b14u: goto label_215b14;
        case 0x215b18u: goto label_215b18;
        case 0x215b1cu: goto label_215b1c;
        case 0x215b20u: goto label_215b20;
        case 0x215b24u: goto label_215b24;
        case 0x215b28u: goto label_215b28;
        case 0x215b2cu: goto label_215b2c;
        case 0x215b30u: goto label_215b30;
        case 0x215b34u: goto label_215b34;
        case 0x215b38u: goto label_215b38;
        case 0x215b3cu: goto label_215b3c;
        case 0x215b40u: goto label_215b40;
        case 0x215b44u: goto label_215b44;
        case 0x215b48u: goto label_215b48;
        case 0x215b4cu: goto label_215b4c;
        case 0x215b50u: goto label_215b50;
        case 0x215b54u: goto label_215b54;
        case 0x215b58u: goto label_215b58;
        case 0x215b5cu: goto label_215b5c;
        case 0x215b60u: goto label_215b60;
        case 0x215b64u: goto label_215b64;
        case 0x215b68u: goto label_215b68;
        case 0x215b6cu: goto label_215b6c;
        case 0x215b70u: goto label_215b70;
        case 0x215b74u: goto label_215b74;
        case 0x215b78u: goto label_215b78;
        case 0x215b7cu: goto label_215b7c;
        case 0x215b80u: goto label_215b80;
        case 0x215b84u: goto label_215b84;
        case 0x215b88u: goto label_215b88;
        case 0x215b8cu: goto label_215b8c;
        case 0x215b90u: goto label_215b90;
        case 0x215b94u: goto label_215b94;
        case 0x215b98u: goto label_215b98;
        case 0x215b9cu: goto label_215b9c;
        case 0x215ba0u: goto label_215ba0;
        case 0x215ba4u: goto label_215ba4;
        case 0x215ba8u: goto label_215ba8;
        case 0x215bacu: goto label_215bac;
        case 0x215bb0u: goto label_215bb0;
        case 0x215bb4u: goto label_215bb4;
        case 0x215bb8u: goto label_215bb8;
        case 0x215bbcu: goto label_215bbc;
        case 0x215bc0u: goto label_215bc0;
        case 0x215bc4u: goto label_215bc4;
        case 0x215bc8u: goto label_215bc8;
        case 0x215bccu: goto label_215bcc;
        default: break;
    }

    ctx->pc = 0x215828u;

label_215828:
    // 0x215828: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x215828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_21582c:
    // 0x21582c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x21582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_215830:
    // 0x215830: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x215830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_215834:
    // 0x215834: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x215834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_215838:
    // 0x215838: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x215838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21583c:
    // 0x21583c: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x21583cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_215840:
    // 0x215840: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x215840u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_215844:
    // 0x215844: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x215844u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_215848:
    // 0x215848: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x215848u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_21584c:
    // 0x21584c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x21584cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_215850:
    // 0x215850: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x215850u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_215854:
    // 0x215854: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x215854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
label_215858:
    // 0x215858: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x215858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_21585c:
    // 0x21585c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x21585cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_215860:
    // 0x215860: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x215860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_215864:
    // 0x215864: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x215864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_215868:
    // 0x215868: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x215868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_21586c:
    // 0x21586c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x21586cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_215870:
    // 0x215870: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x215870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_215874:
    // 0x215874: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x215874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_215878:
    // 0x215878: 0xc0f61a6  jal         func_3D8698
label_21587c:
    if (ctx->pc == 0x21587Cu) {
        ctx->pc = 0x21587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215878u;
        // 0x21587c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215880u;
        goto label_215880;
    }
    ctx->pc = 0x215878u;
    SET_GPR_U32(ctx, 31, 0x215880u);
    ctx->pc = 0x21587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215878u;
    // 0x21587c: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8698u, 0x215878u, 0x215880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215880u;
label_215880:
    // 0x215880: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x215880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
label_215884:
    // 0x215884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x215884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_215888:
    // 0x215888: 0x37a6000c  ori         $a2, $sp, 0xC
    ctx->pc = 0x215888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
label_21588c:
    // 0x21588c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x21588cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_215890:
    // 0x215890: 0xc0856f4  jal         func_215BD0
label_215894:
    if (ctx->pc == 0x215894u) {
        ctx->pc = 0x215894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215890u;
        // 0x215894: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215898u;
        goto label_215898;
    }
    ctx->pc = 0x215890u;
    SET_GPR_U32(ctx, 31, 0x215898u);
    ctx->pc = 0x215894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215890u;
    // 0x215894: 0x27a80014  addiu       $t0, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215BD0u, 0x215890u, 0x215898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215898u;
label_215898:
    // 0x215898: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x215898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_21589c:
    // 0x21589c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x21589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2158a0:
    // 0x2158a0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2158a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2158a4:
    // 0x2158a4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2158a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2158a8:
    // 0x2158a8: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2158a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2158ac:
    // 0x2158ac: 0x46001e40  add.s       $f25, $f3, $f0
    ctx->pc = 0x2158acu;
    ctx->f[25] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2158b0:
    // 0x2158b0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2158b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2158b4:
    // 0x2158b4: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x2158b4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2158b8:
    // 0x2158b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2158b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2158bc:
    // 0x2158bc: 0x46001600  add.s       $f24, $f2, $f0
    ctx->pc = 0x2158bcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2158c0:
    // 0x2158c0: 0x46001581  sub.s       $f22, $f2, $f0
    ctx->pc = 0x2158c0u;
    ctx->f[22] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2158c4:
    // 0x2158c4: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x2158c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2158c8:
    // 0x2158c8: 0x46000d41  sub.s       $f21, $f1, $f0
    ctx->pc = 0x2158c8u;
    ctx->f[21] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2158cc:
    // 0x2158cc: 0x144000a9  bnez        $v0, . + 4 + (0xA9 << 2)
label_2158d0:
    if (ctx->pc == 0x2158D0u) {
        ctx->pc = 0x2158D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158CCu;
        // 0x2158d0: 0x46001d01  sub.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158D4u;
        goto label_2158d4;
    }
    ctx->pc = 0x2158CCu;
    {
        const bool branch_taken_0x2158cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2158D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158CCu;
        // 0x2158d0: 0x46001d01  sub.s       $f20, $f3, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158cc) {
            ctx->pc = 0x215B74u;
            goto label_215b74;
        }
    }
    ctx->pc = 0x2158D4u;
label_2158d4:
    // 0x2158d4: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x2158d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2158d8:
    // 0x2158d8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2158d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2158dc:
    // 0x2158dc: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2158dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_2158e0:
    // 0x2158e0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2158e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2158e4:
    // 0x2158e4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2158e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_2158e8:
    // 0x2158e8: 0x1440009e  bnez        $v0, . + 4 + (0x9E << 2)
label_2158ec:
    if (ctx->pc == 0x2158ECu) {
        ctx->pc = 0x2158ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158E8u;
        // 0x2158ec: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2158F0u;
        goto label_2158f0;
    }
    ctx->pc = 0x2158E8u;
    {
        const bool branch_taken_0x2158e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2158ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2158E8u;
        // 0x2158ec: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158e8) {
            ctx->pc = 0x215B64u;
            goto label_215b64;
        }
    }
    ctx->pc = 0x2158F0u;
label_2158f0:
    // 0x2158f0: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x2158f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_2158f4:
    // 0x2158f4: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x2158f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2158f8:
    // 0x2158f8: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x2158f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
label_2158fc:
    // 0x2158fc: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2158fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_215900:
    // 0x215900: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x215900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_215904:
    // 0x215904: 0x2463e4c0  addiu       $v1, $v1, -0x1B40
    ctx->pc = 0x215904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960320));
label_215908:
    // 0x215908: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x215908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_21590c:
    // 0x21590c: 0x600013  mtlo        $v1
    ctx->pc = 0x21590cu;
    ctx->lo = GPR_U64(ctx, 3);
label_215910:
    // 0x215910: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x215910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215914:
    // 0x215914: 0x70821000  madd        $v0, $a0, $v0
    ctx->pc = 0x215914u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_215918:
    // 0x215918: 0xc2a021  addu        $s4, $a2, $v0
    ctx->pc = 0x215918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_21591c:
    // 0x21591c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x21591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_215920:
    // 0x215920: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x215920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_215924:
    // 0x215924: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_215928:
    if (ctx->pc == 0x215928u) {
        ctx->pc = 0x215928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215924u;
        // 0x215928: 0xae830010  sw          $v1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21592Cu;
        goto label_21592c;
    }
    ctx->pc = 0x215924u;
    {
        const bool branch_taken_0x215924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x215928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215924u;
        // 0x215928: 0xae830010  sw          $v1, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215924) {
            ctx->pc = 0x215930u;
            goto label_215930;
        }
    }
    ctx->pc = 0x21592Cu;
label_21592c:
    // 0x21592c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x21592cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_215930:
    // 0x215930: 0x12200086  beqz        $s1, . + 4 + (0x86 << 2)
label_215934:
    if (ctx->pc == 0x215934u) {
        ctx->pc = 0x215934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215930u;
        // 0x215934: 0x249e0001  addiu       $fp, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215938u;
        goto label_215938;
    }
    ctx->pc = 0x215930u;
    {
        const bool branch_taken_0x215930 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x215934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215930u;
        // 0x215934: 0x249e0001  addiu       $fp, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215930) {
            ctx->pc = 0x215B4Cu;
            goto label_215b4c;
        }
    }
    ctx->pc = 0x215938u;
label_215938:
    // 0x215938: 0x27b7001c  addiu       $s7, $sp, 0x1C
    ctx->pc = 0x215938u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_21593c:
    // 0x21593c: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x21593cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_215940:
    // 0x215940: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x215940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_215944:
    // 0x215944: 0x0  nop
    ctx->pc = 0x215944u;
    // NOP
label_215948:
    // 0x215948: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x215948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_21594c:
    // 0x21594c: 0x8c8294c8  lw          $v0, -0x6B38($a0)
    ctx->pc = 0x21594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294939848)));
label_215950:
    // 0x215950: 0x50620075  beql        $v1, $v0, . + 4 + (0x75 << 2)
label_215954:
    if (ctx->pc == 0x215954u) {
        ctx->pc = 0x215954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215950u;
        // 0x215954: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215958u;
        goto label_215958;
    }
    ctx->pc = 0x215950u;
    {
        const bool branch_taken_0x215950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x215950) {
            ctx->pc = 0x215954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215950u;
            // 0x215954: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215B28u;
            goto label_215b28;
        }
    }
    ctx->pc = 0x215958u;
label_215958:
    // 0x215958: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x215958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21595c:
    // 0x21595c: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x21595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_215960:
    // 0x215960: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x215960u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_215964:
    // 0x215964: 0x4600c034  c.lt.s      $f24, $f0
    ctx->pc = 0x215964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_215968:
    // 0x215968: 0x0  nop
    ctx->pc = 0x215968u;
    // NOP
label_21596c:
    // 0x21596c: 0x4501006d  bc1t        . + 4 + (0x6D << 2)
label_215970:
    if (ctx->pc == 0x215970u) {
        ctx->pc = 0x215970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21596Cu;
        // 0x215970: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215974u;
        goto label_215974;
    }
    ctx->pc = 0x21596Cu;
    {
        const bool branch_taken_0x21596c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x215970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21596Cu;
        // 0x215970: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21596c) {
            ctx->pc = 0x215B24u;
            goto label_215b24;
        }
    }
    ctx->pc = 0x215974u;
label_215974:
    // 0x215974: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x215974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_215978:
    // 0x215978: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x215978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_21597c:
    // 0x21597c: 0x0  nop
    ctx->pc = 0x21597cu;
    // NOP
label_215980:
    // 0x215980: 0x45030069  bc1tl       . + 4 + (0x69 << 2)
label_215984:
    if (ctx->pc == 0x215984u) {
        ctx->pc = 0x215984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215980u;
        // 0x215984: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215988u;
        goto label_215988;
    }
    ctx->pc = 0x215980u;
    {
        const bool branch_taken_0x215980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215980) {
            ctx->pc = 0x215984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215980u;
            // 0x215984: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215B28u;
            goto label_215b28;
        }
    }
    ctx->pc = 0x215988u;
label_215988:
    // 0x215988: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x215988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21598c:
    // 0x21598c: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x21598cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_215990:
    // 0x215990: 0x4600c834  c.lt.s      $f25, $f0
    ctx->pc = 0x215990u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_215994:
    // 0x215994: 0x0  nop
    ctx->pc = 0x215994u;
    // NOP
label_215998:
    // 0x215998: 0x45030063  bc1tl       . + 4 + (0x63 << 2)
label_21599c:
    if (ctx->pc == 0x21599Cu) {
        ctx->pc = 0x21599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215998u;
        // 0x21599c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159A0u;
        goto label_2159a0;
    }
    ctx->pc = 0x215998u;
    {
        const bool branch_taken_0x215998 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x215998) {
            ctx->pc = 0x21599Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215998u;
            // 0x21599c: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215B28u;
            goto label_215b28;
        }
    }
    ctx->pc = 0x2159A0u;
label_2159a0:
    // 0x2159a0: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2159a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2159a4:
    // 0x2159a4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2159a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2159a8:
    // 0x2159a8: 0x0  nop
    ctx->pc = 0x2159a8u;
    // NOP
label_2159ac:
    // 0x2159ac: 0x4503005e  bc1tl       . + 4 + (0x5E << 2)
label_2159b0:
    if (ctx->pc == 0x2159B0u) {
        ctx->pc = 0x2159B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159ACu;
        // 0x2159b0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159B4u;
        goto label_2159b4;
    }
    ctx->pc = 0x2159ACu;
    {
        const bool branch_taken_0x2159ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2159ac) {
            ctx->pc = 0x2159B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2159ACu;
            // 0x2159b0: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215B28u;
            goto label_215b28;
        }
    }
    ctx->pc = 0x2159B4u;
label_2159b4:
    // 0x2159b4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2159b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2159b8:
    // 0x2159b8: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x2159b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_2159bc:
    // 0x2159bc: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2159bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2159c0:
    // 0x2159c0: 0x0  nop
    ctx->pc = 0x2159c0u;
    // NOP
label_2159c4:
    // 0x2159c4: 0x45030058  bc1tl       . + 4 + (0x58 << 2)
label_2159c8:
    if (ctx->pc == 0x2159C8u) {
        ctx->pc = 0x2159C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159C4u;
        // 0x2159c8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159CCu;
        goto label_2159cc;
    }
    ctx->pc = 0x2159C4u;
    {
        const bool branch_taken_0x2159c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2159c4) {
            ctx->pc = 0x2159C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2159C4u;
            // 0x2159c8: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215B28u;
            goto label_215b28;
        }
    }
    ctx->pc = 0x2159CCu;
label_2159cc:
    // 0x2159cc: 0x46020800  add.s       $f0, $f1, $f2
    ctx->pc = 0x2159ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2159d0:
    // 0x2159d0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2159d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2159d4:
    // 0x2159d4: 0x0  nop
    ctx->pc = 0x2159d4u;
    // NOP
label_2159d8:
    // 0x2159d8: 0x45030053  bc1tl       . + 4 + (0x53 << 2)
label_2159dc:
    if (ctx->pc == 0x2159DCu) {
        ctx->pc = 0x2159DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159D8u;
        // 0x2159dc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159E0u;
        goto label_2159e0;
    }
    ctx->pc = 0x2159D8u;
    {
        const bool branch_taken_0x2159d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2159d8) {
            ctx->pc = 0x2159DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2159D8u;
            // 0x2159dc: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215B28u;
            goto label_215b28;
        }
    }
    ctx->pc = 0x2159E0u;
label_2159e0:
    // 0x2159e0: 0x97a20002  lhu         $v0, 0x2($sp)
    ctx->pc = 0x2159e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_2159e4:
    // 0x2159e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2159e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2159e8:
    // 0x2159e8: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x2159e8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
label_2159ec:
    // 0x2159ec: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_2159f0:
    if (ctx->pc == 0x2159F0u) {
        ctx->pc = 0x2159F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159ECu;
        // 0x2159f0: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159F4u;
        goto label_2159f4;
    }
    ctx->pc = 0x2159ECu;
    {
        const bool branch_taken_0x2159ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2159F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159ECu;
        // 0x2159f0: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159ec) {
            ctx->pc = 0x215A34u;
            goto label_215a34;
        }
    }
    ctx->pc = 0x2159F4u;
label_2159f4:
    // 0x2159f4: 0x4800009  bltz        $a0, . + 4 + (0x9 << 2)
label_2159f8:
    if (ctx->pc == 0x2159F8u) {
        ctx->pc = 0x2159F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159F4u;
        // 0x2159f8: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2159FCu;
        goto label_2159fc;
    }
    ctx->pc = 0x2159F4u;
    {
        const bool branch_taken_0x2159f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2159F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2159F4u;
        // 0x2159f8: 0x97a20004  lhu         $v0, 0x4($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2159f4) {
            ctx->pc = 0x215A1Cu;
            goto label_215a1c;
        }
    }
    ctx->pc = 0x2159FCu;
label_2159fc:
    // 0x2159fc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2159fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_215a00:
    // 0x215a00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_215a04:
    // 0x215a04: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x215a04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_215a08:
    // 0x215a08: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x215a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_215a0c:
    // 0x215a0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x215a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_215a10:
    // 0x215a10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x215a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_215a14:
    // 0x215a14: 0x10000002  b           . + 4 + (0x2 << 2)
label_215a18:
    if (ctx->pc == 0x215A18u) {
        ctx->pc = 0x215A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A14u;
        // 0x215a18: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A1Cu;
        goto label_215a1c;
    }
    ctx->pc = 0x215A14u;
    {
        const bool branch_taken_0x215a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A14u;
        // 0x215a18: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a14) {
            ctx->pc = 0x215A20u;
            goto label_215a20;
        }
    }
    ctx->pc = 0x215A1Cu;
label_215a1c:
    // 0x215a1c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x215a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_215a20:
    // 0x215a20: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x215a20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_215a24:
    // 0x215a24: 0x40f809  jalr        $v0
label_215a28:
    if (ctx->pc == 0x215A28u) {
        ctx->pc = 0x215A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A24u;
        // 0x215a28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A2Cu;
        goto label_215a2c;
    }
    ctx->pc = 0x215A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x215A2Cu);
        ctx->pc = 0x215A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A24u;
        // 0x215a28: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215A24u, 0x215A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x215A2Cu;
label_215a2c:
    // 0x215a2c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_215a30:
    if (ctx->pc == 0x215A30u) {
        ctx->pc = 0x215A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A2Cu;
        // 0x215a30: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A34u;
        goto label_215a34;
    }
    ctx->pc = 0x215A2Cu;
    {
        const bool branch_taken_0x215a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A2Cu;
        // 0x215a30: 0x3c060040  lui         $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a2c) {
            ctx->pc = 0x215B24u;
            goto label_215b24;
        }
    }
    ctx->pc = 0x215A34u;
label_215a34:
    // 0x215a34: 0x8cc294c8  lw          $v0, -0x6B38($a2)
    ctx->pc = 0x215a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939848)));
label_215a38:
    // 0x215a38: 0xae2200b0  sw          $v0, 0xB0($s1)
    ctx->pc = 0x215a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
label_215a3c:
    // 0x215a3c: 0x12200039  beqz        $s1, . + 4 + (0x39 << 2)
label_215a40:
    if (ctx->pc == 0x215A40u) {
        ctx->pc = 0x215A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A3Cu;
        // 0x215a40: 0xafb10018  sw          $s1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A44u;
        goto label_215a44;
    }
    ctx->pc = 0x215A3Cu;
    {
        const bool branch_taken_0x215a3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A3Cu;
        // 0x215a40: 0xafb10018  sw          $s1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a3c) {
            ctx->pc = 0x215B24u;
            goto label_215b24;
        }
    }
    ctx->pc = 0x215A44u;
label_215a44:
    // 0x215a44: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x215a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_215a48:
    // 0x215a48: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x215a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_215a4c:
    // 0x215a4c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_215a50:
    if (ctx->pc == 0x215A50u) {
        ctx->pc = 0x215A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A4Cu;
        // 0x215a50: 0x27b50018  addiu       $s5, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A54u;
        goto label_215a54;
    }
    ctx->pc = 0x215A4Cu;
    {
        const bool branch_taken_0x215a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x215A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A4Cu;
        // 0x215a50: 0x27b50018  addiu       $s5, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a4c) {
            ctx->pc = 0x215A6Cu;
            goto label_215a6c;
        }
    }
    ctx->pc = 0x215A54u;
label_215a54:
    // 0x215a54: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
label_215a58:
    if (ctx->pc == 0x215A58u) {
        ctx->pc = 0x215A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A54u;
        // 0x215a58: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A5Cu;
        goto label_215a5c;
    }
    ctx->pc = 0x215A54u;
    {
        const bool branch_taken_0x215a54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x215a54) {
            ctx->pc = 0x215A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x215A54u;
            // 0x215a58: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x215A5Cu;
            goto label_215a5c;
        }
    }
    ctx->pc = 0x215A5Cu;
label_215a5c:
    // 0x215a5c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x215a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_215a60:
    // 0x215a60: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x215a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_215a64:
    // 0x215a64: 0x1000002f  b           . + 4 + (0x2F << 2)
label_215a68:
    if (ctx->pc == 0x215A68u) {
        ctx->pc = 0x215A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A64u;
        // 0x215a68: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A6Cu;
        goto label_215a6c;
    }
    ctx->pc = 0x215A64u;
    {
        const bool branch_taken_0x215a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A64u;
        // 0x215a68: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a64) {
            ctx->pc = 0x215B24u;
            goto label_215b24;
        }
    }
    ctx->pc = 0x215A6Cu;
label_215a6c:
    // 0x215a6c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x215a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_215a70:
    // 0x215a70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x215a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_215a74:
    // 0x215a74: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x215a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_215a78:
    // 0x215a78: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x215a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_215a7c:
    // 0x215a7c: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x215a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_215a80:
    // 0x215a80: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x215a80u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_215a84:
    // 0x215a84: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x215a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_215a88:
    // 0x215a88: 0x2e3200b  movn        $a0, $s7, $v1
    ctx->pc = 0x215a88u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 23));
label_215a8c:
    // 0x215a8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x215a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_215a90:
    // 0x215a90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x215a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_215a94:
    // 0x215a94: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_215a98:
    if (ctx->pc == 0x215A98u) {
        ctx->pc = 0x215A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A94u;
        // 0x215a98: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215A9Cu;
        goto label_215a9c;
    }
    ctx->pc = 0x215A94u;
    {
        const bool branch_taken_0x215a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215A94u;
        // 0x215a98: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a94) {
            ctx->pc = 0x215AB0u;
            goto label_215ab0;
        }
    }
    ctx->pc = 0x215A9Cu;
label_215a9c:
    // 0x215a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x215a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_215aa0:
    // 0x215aa0: 0xc0f5240  jal         func_3D4900
label_215aa4:
    if (ctx->pc == 0x215AA4u) {
        ctx->pc = 0x215AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AA0u;
        // 0x215aa4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AA8u;
        goto label_215aa8;
    }
    ctx->pc = 0x215AA0u;
    SET_GPR_U32(ctx, 31, 0x215AA8u);
    ctx->pc = 0x215AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AA0u;
    // 0x215aa4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x215AA0u, 0x215AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AA8u;
label_215aa8:
    // 0x215aa8: 0x10000003  b           . + 4 + (0x3 << 2)
label_215aac:
    if (ctx->pc == 0x215AACu) {
        ctx->pc = 0x215AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AA8u;
        // 0x215aac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AB0u;
        goto label_215ab0;
    }
    ctx->pc = 0x215AA8u;
    {
        const bool branch_taken_0x215aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AA8u;
        // 0x215aac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215aa8) {
            ctx->pc = 0x215AB8u;
            goto label_215ab8;
        }
    }
    ctx->pc = 0x215AB0u;
label_215ab0:
    // 0x215ab0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x215ab0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ab4:
    // 0x215ab4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x215ab4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_215ab8:
    // 0x215ab8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x215ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_215abc:
    // 0x215abc: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
label_215ac0:
    if (ctx->pc == 0x215AC0u) {
        ctx->pc = 0x215AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ABCu;
        // 0x215ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AC4u;
        goto label_215ac4;
    }
    ctx->pc = 0x215ABCu;
    {
        const bool branch_taken_0x215abc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x215AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215ABCu;
        // 0x215ac0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215abc) {
            ctx->pc = 0x215AD8u;
            goto label_215ad8;
        }
    }
    ctx->pc = 0x215AC4u;
label_215ac4:
    // 0x215ac4: 0x2058023  subu        $s0, $s0, $a1
    ctx->pc = 0x215ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_215ac8:
    // 0x215ac8: 0xc0efa74  jal         func_3BE9D0
label_215acc:
    if (ctx->pc == 0x215ACCu) {
        ctx->pc = 0x215ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AC8u;
        // 0x215acc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AD0u;
        goto label_215ad0;
    }
    ctx->pc = 0x215AC8u;
    SET_GPR_U32(ctx, 31, 0x215AD0u);
    ctx->pc = 0x215ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x215AC8u;
    // 0x215acc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x215AC8u, 0x215AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215AD0u;
label_215ad0:
    // 0x215ad0: 0x10000002  b           . + 4 + (0x2 << 2)
label_215ad4:
    if (ctx->pc == 0x215AD4u) {
        ctx->pc = 0x215AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AD0u;
        // 0x215ad4: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AD8u;
        goto label_215ad8;
    }
    ctx->pc = 0x215AD0u;
    {
        const bool branch_taken_0x215ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AD0u;
        // 0x215ad4: 0x501021  addu        $v0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ad0) {
            ctx->pc = 0x215ADCu;
            goto label_215adc;
        }
    }
    ctx->pc = 0x215AD8u;
label_215ad8:
    // 0x215ad8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x215ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_215adc:
    // 0x215adc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x215adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_215ae0:
    // 0x215ae0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_215ae4:
    if (ctx->pc == 0x215AE4u) {
        ctx->pc = 0x215AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AE0u;
        // 0x215ae4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215AE8u;
        goto label_215ae8;
    }
    ctx->pc = 0x215AE0u;
    {
        const bool branch_taken_0x215ae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AE0u;
        // 0x215ae4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215ae0) {
            ctx->pc = 0x215B00u;
            goto label_215b00;
        }
    }
    ctx->pc = 0x215AE8u;
label_215ae8:
    // 0x215ae8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x215ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_215aec:
    // 0x215aec: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x215aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_215af0:
    // 0x215af0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x215af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_215af4:
    // 0x215af4: 0x0  nop
    ctx->pc = 0x215af4u;
    // NOP
label_215af8:
    // 0x215af8: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
label_215afc:
    if (ctx->pc == 0x215AFCu) {
        ctx->pc = 0x215AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AF8u;
        // 0x215afc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B00u;
        goto label_215b00;
    }
    ctx->pc = 0x215AF8u;
    {
        const bool branch_taken_0x215af8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x215AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215AF8u;
        // 0x215afc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215af8) {
            ctx->pc = 0x215AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215ae8;
        }
    }
    ctx->pc = 0x215B00u;
label_215b00:
    // 0x215b00: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x215b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_215b04:
    // 0x215b04: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_215b08:
    if (ctx->pc == 0x215B08u) {
        ctx->pc = 0x215B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B04u;
        // 0x215b08: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B0Cu;
        goto label_215b0c;
    }
    ctx->pc = 0x215B04u;
    {
        const bool branch_taken_0x215b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B04u;
        // 0x215b08: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b04) {
            ctx->pc = 0x215B18u;
            goto label_215b18;
        }
    }
    ctx->pc = 0x215B0Cu;
label_215b0c:
    // 0x215b0c: 0xc0f5222  jal         func_3D4888
label_215b10:
    if (ctx->pc == 0x215B10u) {
        ctx->pc = 0x215B14u;
        goto label_215b14;
    }
    ctx->pc = 0x215B0Cu;
    SET_GPR_U32(ctx, 31, 0x215B14u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x215B0Cu, 0x215B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x215B14u;
label_215b14:
    // 0x215b14: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x215b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_215b18:
    // 0x215b18: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x215b18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_215b1c:
    // 0x215b1c: 0xae700004  sw          $s0, 0x4($s3)
    ctx->pc = 0x215b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 16));
label_215b20:
    // 0x215b20: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x215b20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_215b24:
    // 0x215b24: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x215b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_215b28:
    // 0x215b28: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x215b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_215b2c:
    // 0x215b2c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_215b30:
    if (ctx->pc == 0x215B30u) {
        ctx->pc = 0x215B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B2Cu;
        // 0x215b30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B34u;
        goto label_215b34;
    }
    ctx->pc = 0x215B2Cu;
    {
        const bool branch_taken_0x215b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x215B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B2Cu;
        // 0x215b30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b2c) {
            ctx->pc = 0x215B44u;
            goto label_215b44;
        }
    }
    ctx->pc = 0x215B34u;
label_215b34:
    // 0x215b34: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x215b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_215b38:
    // 0x215b38: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
label_215b3c:
    if (ctx->pc == 0x215B3Cu) {
        ctx->pc = 0x215B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B38u;
        // 0x215b3c: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B40u;
        goto label_215b40;
    }
    ctx->pc = 0x215B38u;
    {
        const bool branch_taken_0x215b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x215B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B38u;
        // 0x215b3c: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b38) {
            ctx->pc = 0x215B44u;
            goto label_215b44;
        }
    }
    ctx->pc = 0x215B40u;
label_215b40:
    // 0x215b40: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x215b40u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_215b44:
    // 0x215b44: 0x1620ff80  bnez        $s1, . + 4 + (-0x80 << 2)
label_215b48:
    if (ctx->pc == 0x215B48u) {
        ctx->pc = 0x215B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B44u;
        // 0x215b48: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B4Cu;
        goto label_215b4c;
    }
    ctx->pc = 0x215B44u;
    {
        const bool branch_taken_0x215b44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x215B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B44u;
        // 0x215b48: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b44) {
            ctx->pc = 0x215948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215948;
        }
    }
    ctx->pc = 0x215B4Cu;
label_215b4c:
    // 0x215b4c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x215b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_215b50:
    // 0x215b50: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x215b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_215b54:
    // 0x215b54: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x215b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_215b58:
    // 0x215b58: 0x1040ff69  beqz        $v0, . + 4 + (-0x97 << 2)
label_215b5c:
    if (ctx->pc == 0x215B5Cu) {
        ctx->pc = 0x215B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B58u;
        // 0x215b5c: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B60u;
        goto label_215b60;
    }
    ctx->pc = 0x215B58u;
    {
        const bool branch_taken_0x215b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B58u;
        // 0x215b5c: 0x3c03004a  lui         $v1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b58) {
            ctx->pc = 0x215900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215900;
        }
    }
    ctx->pc = 0x215B60u;
label_215b60:
    // 0x215b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x215b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_215b64:
    // 0x215b64: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x215b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_215b68:
    // 0x215b68: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x215b68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_215b6c:
    // 0x215b6c: 0x1040ff5a  beqz        $v0, . + 4 + (-0xA6 << 2)
label_215b70:
    if (ctx->pc == 0x215B70u) {
        ctx->pc = 0x215B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B6Cu;
        // 0x215b70: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215B74u;
        goto label_215b74;
    }
    ctx->pc = 0x215B6Cu;
    {
        const bool branch_taken_0x215b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215B6Cu;
        // 0x215b70: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b6c) {
            ctx->pc = 0x2158D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2158d8;
        }
    }
    ctx->pc = 0x215B74u;
label_215b74:
    // 0x215b74: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x215b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_215b78:
    // 0x215b78: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x215b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_215b7c:
    // 0x215b7c: 0x8c6294c8  lw          $v0, -0x6B38($v1)
    ctx->pc = 0x215b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939848)));
label_215b80:
    // 0x215b80: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x215b80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_215b84:
    // 0x215b84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x215b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_215b88:
    // 0x215b88: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x215b88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_215b8c:
    // 0x215b8c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x215b8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_215b90:
    // 0x215b90: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x215b90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_215b94:
    // 0x215b94: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x215b94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_215b98:
    // 0x215b98: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x215b98u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_215b9c:
    // 0x215b9c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x215b9cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_215ba0:
    // 0x215ba0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x215ba0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_215ba4:
    // 0x215ba4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x215ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_215ba8:
    // 0x215ba8: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x215ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_215bac:
    // 0x215bac: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x215bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_215bb0:
    // 0x215bb0: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x215bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_215bb4:
    // 0x215bb4: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x215bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_215bb8:
    // 0x215bb8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x215bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_215bbc:
    // 0x215bbc: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x215bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_215bc0:
    // 0x215bc0: 0xac6294c8  sw          $v0, -0x6B38($v1)
    ctx->pc = 0x215bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294939848), GPR_U32(ctx, 2));
label_215bc4:
    // 0x215bc4: 0x3e00008  jr          $ra
label_215bc8:
    if (ctx->pc == 0x215BC8u) {
        ctx->pc = 0x215BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BC4u;
        // 0x215bc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x215BCCu;
        goto label_215bcc;
    }
    ctx->pc = 0x215BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215BC4u;
        // 0x215bc8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x215BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x215BCCu;
label_215bcc:
    // 0x215bcc: 0x0  nop
    ctx->pc = 0x215bccu;
    // NOP
    ctx->pc = 0x215bd0u;
}
