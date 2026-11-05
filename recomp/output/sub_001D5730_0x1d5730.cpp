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

// Function: sub_001D5730
// Address: 0x1d5730 - 0x1d5be0
void sub_001D5730_0x1d5730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5730_0x1d5730");
#endif

    switch (ctx->pc) {
        case 0x1d5730u: goto label_1d5730;
        case 0x1d5734u: goto label_1d5734;
        case 0x1d5738u: goto label_1d5738;
        case 0x1d573cu: goto label_1d573c;
        case 0x1d5740u: goto label_1d5740;
        case 0x1d5744u: goto label_1d5744;
        case 0x1d5748u: goto label_1d5748;
        case 0x1d574cu: goto label_1d574c;
        case 0x1d5750u: goto label_1d5750;
        case 0x1d5754u: goto label_1d5754;
        case 0x1d5758u: goto label_1d5758;
        case 0x1d575cu: goto label_1d575c;
        case 0x1d5760u: goto label_1d5760;
        case 0x1d5764u: goto label_1d5764;
        case 0x1d5768u: goto label_1d5768;
        case 0x1d576cu: goto label_1d576c;
        case 0x1d5770u: goto label_1d5770;
        case 0x1d5774u: goto label_1d5774;
        case 0x1d5778u: goto label_1d5778;
        case 0x1d577cu: goto label_1d577c;
        case 0x1d5780u: goto label_1d5780;
        case 0x1d5784u: goto label_1d5784;
        case 0x1d5788u: goto label_1d5788;
        case 0x1d578cu: goto label_1d578c;
        case 0x1d5790u: goto label_1d5790;
        case 0x1d5794u: goto label_1d5794;
        case 0x1d5798u: goto label_1d5798;
        case 0x1d579cu: goto label_1d579c;
        case 0x1d57a0u: goto label_1d57a0;
        case 0x1d57a4u: goto label_1d57a4;
        case 0x1d57a8u: goto label_1d57a8;
        case 0x1d57acu: goto label_1d57ac;
        case 0x1d57b0u: goto label_1d57b0;
        case 0x1d57b4u: goto label_1d57b4;
        case 0x1d57b8u: goto label_1d57b8;
        case 0x1d57bcu: goto label_1d57bc;
        case 0x1d57c0u: goto label_1d57c0;
        case 0x1d57c4u: goto label_1d57c4;
        case 0x1d57c8u: goto label_1d57c8;
        case 0x1d57ccu: goto label_1d57cc;
        case 0x1d57d0u: goto label_1d57d0;
        case 0x1d57d4u: goto label_1d57d4;
        case 0x1d57d8u: goto label_1d57d8;
        case 0x1d57dcu: goto label_1d57dc;
        case 0x1d57e0u: goto label_1d57e0;
        case 0x1d57e4u: goto label_1d57e4;
        case 0x1d57e8u: goto label_1d57e8;
        case 0x1d57ecu: goto label_1d57ec;
        case 0x1d57f0u: goto label_1d57f0;
        case 0x1d57f4u: goto label_1d57f4;
        case 0x1d57f8u: goto label_1d57f8;
        case 0x1d57fcu: goto label_1d57fc;
        case 0x1d5800u: goto label_1d5800;
        case 0x1d5804u: goto label_1d5804;
        case 0x1d5808u: goto label_1d5808;
        case 0x1d580cu: goto label_1d580c;
        case 0x1d5810u: goto label_1d5810;
        case 0x1d5814u: goto label_1d5814;
        case 0x1d5818u: goto label_1d5818;
        case 0x1d581cu: goto label_1d581c;
        case 0x1d5820u: goto label_1d5820;
        case 0x1d5824u: goto label_1d5824;
        case 0x1d5828u: goto label_1d5828;
        case 0x1d582cu: goto label_1d582c;
        case 0x1d5830u: goto label_1d5830;
        case 0x1d5834u: goto label_1d5834;
        case 0x1d5838u: goto label_1d5838;
        case 0x1d583cu: goto label_1d583c;
        case 0x1d5840u: goto label_1d5840;
        case 0x1d5844u: goto label_1d5844;
        case 0x1d5848u: goto label_1d5848;
        case 0x1d584cu: goto label_1d584c;
        case 0x1d5850u: goto label_1d5850;
        case 0x1d5854u: goto label_1d5854;
        case 0x1d5858u: goto label_1d5858;
        case 0x1d585cu: goto label_1d585c;
        case 0x1d5860u: goto label_1d5860;
        case 0x1d5864u: goto label_1d5864;
        case 0x1d5868u: goto label_1d5868;
        case 0x1d586cu: goto label_1d586c;
        case 0x1d5870u: goto label_1d5870;
        case 0x1d5874u: goto label_1d5874;
        case 0x1d5878u: goto label_1d5878;
        case 0x1d587cu: goto label_1d587c;
        case 0x1d5880u: goto label_1d5880;
        case 0x1d5884u: goto label_1d5884;
        case 0x1d5888u: goto label_1d5888;
        case 0x1d588cu: goto label_1d588c;
        case 0x1d5890u: goto label_1d5890;
        case 0x1d5894u: goto label_1d5894;
        case 0x1d5898u: goto label_1d5898;
        case 0x1d589cu: goto label_1d589c;
        case 0x1d58a0u: goto label_1d58a0;
        case 0x1d58a4u: goto label_1d58a4;
        case 0x1d58a8u: goto label_1d58a8;
        case 0x1d58acu: goto label_1d58ac;
        case 0x1d58b0u: goto label_1d58b0;
        case 0x1d58b4u: goto label_1d58b4;
        case 0x1d58b8u: goto label_1d58b8;
        case 0x1d58bcu: goto label_1d58bc;
        case 0x1d58c0u: goto label_1d58c0;
        case 0x1d58c4u: goto label_1d58c4;
        case 0x1d58c8u: goto label_1d58c8;
        case 0x1d58ccu: goto label_1d58cc;
        case 0x1d58d0u: goto label_1d58d0;
        case 0x1d58d4u: goto label_1d58d4;
        case 0x1d58d8u: goto label_1d58d8;
        case 0x1d58dcu: goto label_1d58dc;
        case 0x1d58e0u: goto label_1d58e0;
        case 0x1d58e4u: goto label_1d58e4;
        case 0x1d58e8u: goto label_1d58e8;
        case 0x1d58ecu: goto label_1d58ec;
        case 0x1d58f0u: goto label_1d58f0;
        case 0x1d58f4u: goto label_1d58f4;
        case 0x1d58f8u: goto label_1d58f8;
        case 0x1d58fcu: goto label_1d58fc;
        case 0x1d5900u: goto label_1d5900;
        case 0x1d5904u: goto label_1d5904;
        case 0x1d5908u: goto label_1d5908;
        case 0x1d590cu: goto label_1d590c;
        case 0x1d5910u: goto label_1d5910;
        case 0x1d5914u: goto label_1d5914;
        case 0x1d5918u: goto label_1d5918;
        case 0x1d591cu: goto label_1d591c;
        case 0x1d5920u: goto label_1d5920;
        case 0x1d5924u: goto label_1d5924;
        case 0x1d5928u: goto label_1d5928;
        case 0x1d592cu: goto label_1d592c;
        case 0x1d5930u: goto label_1d5930;
        case 0x1d5934u: goto label_1d5934;
        case 0x1d5938u: goto label_1d5938;
        case 0x1d593cu: goto label_1d593c;
        case 0x1d5940u: goto label_1d5940;
        case 0x1d5944u: goto label_1d5944;
        case 0x1d5948u: goto label_1d5948;
        case 0x1d594cu: goto label_1d594c;
        case 0x1d5950u: goto label_1d5950;
        case 0x1d5954u: goto label_1d5954;
        case 0x1d5958u: goto label_1d5958;
        case 0x1d595cu: goto label_1d595c;
        case 0x1d5960u: goto label_1d5960;
        case 0x1d5964u: goto label_1d5964;
        case 0x1d5968u: goto label_1d5968;
        case 0x1d596cu: goto label_1d596c;
        case 0x1d5970u: goto label_1d5970;
        case 0x1d5974u: goto label_1d5974;
        case 0x1d5978u: goto label_1d5978;
        case 0x1d597cu: goto label_1d597c;
        case 0x1d5980u: goto label_1d5980;
        case 0x1d5984u: goto label_1d5984;
        case 0x1d5988u: goto label_1d5988;
        case 0x1d598cu: goto label_1d598c;
        case 0x1d5990u: goto label_1d5990;
        case 0x1d5994u: goto label_1d5994;
        case 0x1d5998u: goto label_1d5998;
        case 0x1d599cu: goto label_1d599c;
        case 0x1d59a0u: goto label_1d59a0;
        case 0x1d59a4u: goto label_1d59a4;
        case 0x1d59a8u: goto label_1d59a8;
        case 0x1d59acu: goto label_1d59ac;
        case 0x1d59b0u: goto label_1d59b0;
        case 0x1d59b4u: goto label_1d59b4;
        case 0x1d59b8u: goto label_1d59b8;
        case 0x1d59bcu: goto label_1d59bc;
        case 0x1d59c0u: goto label_1d59c0;
        case 0x1d59c4u: goto label_1d59c4;
        case 0x1d59c8u: goto label_1d59c8;
        case 0x1d59ccu: goto label_1d59cc;
        case 0x1d59d0u: goto label_1d59d0;
        case 0x1d59d4u: goto label_1d59d4;
        case 0x1d59d8u: goto label_1d59d8;
        case 0x1d59dcu: goto label_1d59dc;
        case 0x1d59e0u: goto label_1d59e0;
        case 0x1d59e4u: goto label_1d59e4;
        case 0x1d59e8u: goto label_1d59e8;
        case 0x1d59ecu: goto label_1d59ec;
        case 0x1d59f0u: goto label_1d59f0;
        case 0x1d59f4u: goto label_1d59f4;
        case 0x1d59f8u: goto label_1d59f8;
        case 0x1d59fcu: goto label_1d59fc;
        case 0x1d5a00u: goto label_1d5a00;
        case 0x1d5a04u: goto label_1d5a04;
        case 0x1d5a08u: goto label_1d5a08;
        case 0x1d5a0cu: goto label_1d5a0c;
        case 0x1d5a10u: goto label_1d5a10;
        case 0x1d5a14u: goto label_1d5a14;
        case 0x1d5a18u: goto label_1d5a18;
        case 0x1d5a1cu: goto label_1d5a1c;
        case 0x1d5a20u: goto label_1d5a20;
        case 0x1d5a24u: goto label_1d5a24;
        case 0x1d5a28u: goto label_1d5a28;
        case 0x1d5a2cu: goto label_1d5a2c;
        case 0x1d5a30u: goto label_1d5a30;
        case 0x1d5a34u: goto label_1d5a34;
        case 0x1d5a38u: goto label_1d5a38;
        case 0x1d5a3cu: goto label_1d5a3c;
        case 0x1d5a40u: goto label_1d5a40;
        case 0x1d5a44u: goto label_1d5a44;
        case 0x1d5a48u: goto label_1d5a48;
        case 0x1d5a4cu: goto label_1d5a4c;
        case 0x1d5a50u: goto label_1d5a50;
        case 0x1d5a54u: goto label_1d5a54;
        case 0x1d5a58u: goto label_1d5a58;
        case 0x1d5a5cu: goto label_1d5a5c;
        case 0x1d5a60u: goto label_1d5a60;
        case 0x1d5a64u: goto label_1d5a64;
        case 0x1d5a68u: goto label_1d5a68;
        case 0x1d5a6cu: goto label_1d5a6c;
        case 0x1d5a70u: goto label_1d5a70;
        case 0x1d5a74u: goto label_1d5a74;
        case 0x1d5a78u: goto label_1d5a78;
        case 0x1d5a7cu: goto label_1d5a7c;
        case 0x1d5a80u: goto label_1d5a80;
        case 0x1d5a84u: goto label_1d5a84;
        case 0x1d5a88u: goto label_1d5a88;
        case 0x1d5a8cu: goto label_1d5a8c;
        case 0x1d5a90u: goto label_1d5a90;
        case 0x1d5a94u: goto label_1d5a94;
        case 0x1d5a98u: goto label_1d5a98;
        case 0x1d5a9cu: goto label_1d5a9c;
        case 0x1d5aa0u: goto label_1d5aa0;
        case 0x1d5aa4u: goto label_1d5aa4;
        case 0x1d5aa8u: goto label_1d5aa8;
        case 0x1d5aacu: goto label_1d5aac;
        case 0x1d5ab0u: goto label_1d5ab0;
        case 0x1d5ab4u: goto label_1d5ab4;
        case 0x1d5ab8u: goto label_1d5ab8;
        case 0x1d5abcu: goto label_1d5abc;
        case 0x1d5ac0u: goto label_1d5ac0;
        case 0x1d5ac4u: goto label_1d5ac4;
        case 0x1d5ac8u: goto label_1d5ac8;
        case 0x1d5accu: goto label_1d5acc;
        case 0x1d5ad0u: goto label_1d5ad0;
        case 0x1d5ad4u: goto label_1d5ad4;
        case 0x1d5ad8u: goto label_1d5ad8;
        case 0x1d5adcu: goto label_1d5adc;
        case 0x1d5ae0u: goto label_1d5ae0;
        case 0x1d5ae4u: goto label_1d5ae4;
        case 0x1d5ae8u: goto label_1d5ae8;
        case 0x1d5aecu: goto label_1d5aec;
        case 0x1d5af0u: goto label_1d5af0;
        case 0x1d5af4u: goto label_1d5af4;
        case 0x1d5af8u: goto label_1d5af8;
        case 0x1d5afcu: goto label_1d5afc;
        case 0x1d5b00u: goto label_1d5b00;
        case 0x1d5b04u: goto label_1d5b04;
        case 0x1d5b08u: goto label_1d5b08;
        case 0x1d5b0cu: goto label_1d5b0c;
        case 0x1d5b10u: goto label_1d5b10;
        case 0x1d5b14u: goto label_1d5b14;
        case 0x1d5b18u: goto label_1d5b18;
        case 0x1d5b1cu: goto label_1d5b1c;
        case 0x1d5b20u: goto label_1d5b20;
        case 0x1d5b24u: goto label_1d5b24;
        case 0x1d5b28u: goto label_1d5b28;
        case 0x1d5b2cu: goto label_1d5b2c;
        case 0x1d5b30u: goto label_1d5b30;
        case 0x1d5b34u: goto label_1d5b34;
        case 0x1d5b38u: goto label_1d5b38;
        case 0x1d5b3cu: goto label_1d5b3c;
        case 0x1d5b40u: goto label_1d5b40;
        case 0x1d5b44u: goto label_1d5b44;
        case 0x1d5b48u: goto label_1d5b48;
        case 0x1d5b4cu: goto label_1d5b4c;
        case 0x1d5b50u: goto label_1d5b50;
        case 0x1d5b54u: goto label_1d5b54;
        case 0x1d5b58u: goto label_1d5b58;
        case 0x1d5b5cu: goto label_1d5b5c;
        case 0x1d5b60u: goto label_1d5b60;
        case 0x1d5b64u: goto label_1d5b64;
        case 0x1d5b68u: goto label_1d5b68;
        case 0x1d5b6cu: goto label_1d5b6c;
        case 0x1d5b70u: goto label_1d5b70;
        case 0x1d5b74u: goto label_1d5b74;
        case 0x1d5b78u: goto label_1d5b78;
        case 0x1d5b7cu: goto label_1d5b7c;
        case 0x1d5b80u: goto label_1d5b80;
        case 0x1d5b84u: goto label_1d5b84;
        case 0x1d5b88u: goto label_1d5b88;
        case 0x1d5b8cu: goto label_1d5b8c;
        case 0x1d5b90u: goto label_1d5b90;
        case 0x1d5b94u: goto label_1d5b94;
        case 0x1d5b98u: goto label_1d5b98;
        case 0x1d5b9cu: goto label_1d5b9c;
        case 0x1d5ba0u: goto label_1d5ba0;
        case 0x1d5ba4u: goto label_1d5ba4;
        case 0x1d5ba8u: goto label_1d5ba8;
        case 0x1d5bacu: goto label_1d5bac;
        case 0x1d5bb0u: goto label_1d5bb0;
        case 0x1d5bb4u: goto label_1d5bb4;
        case 0x1d5bb8u: goto label_1d5bb8;
        case 0x1d5bbcu: goto label_1d5bbc;
        case 0x1d5bc0u: goto label_1d5bc0;
        case 0x1d5bc4u: goto label_1d5bc4;
        case 0x1d5bc8u: goto label_1d5bc8;
        case 0x1d5bccu: goto label_1d5bcc;
        case 0x1d5bd0u: goto label_1d5bd0;
        case 0x1d5bd4u: goto label_1d5bd4;
        case 0x1d5bd8u: goto label_1d5bd8;
        case 0x1d5bdcu: goto label_1d5bdc;
        default: break;
    }

    ctx->pc = 0x1d5730u;

label_1d5730:
    // 0x1d5730: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1d5730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_1d5734:
    // 0x1d5734: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x1d5734u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
label_1d5738:
    // 0x1d5738: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x1d5738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
label_1d573c:
    // 0x1d573c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d573cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d5740:
    // 0x1d5740: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x1d5740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
label_1d5744:
    // 0x1d5744: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x1d5744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
label_1d5748:
    // 0x1d5748: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x1d5748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
label_1d574c:
    // 0x1d574c: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x1d574cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
label_1d5750:
    // 0x1d5750: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1d5750u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d5754:
    // 0x1d5754: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x1d5754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
label_1d5758:
    // 0x1d5758: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x1d5758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
label_1d575c:
    // 0x1d575c: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x1d575cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
label_1d5760:
    // 0x1d5760: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x1d5760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
label_1d5764:
    // 0x1d5764: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x1d5764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
label_1d5768:
    // 0x1d5768: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d576c:
    // 0x1d576c: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x1d576cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
label_1d5770:
    // 0x1d5770: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5774:
    // 0x1d5774: 0x40f809  jalr        $v0
label_1d5778:
    if (ctx->pc == 0x1D5778u) {
        ctx->pc = 0x1D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5774u;
        // 0x1d5778: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D577Cu;
        goto label_1d577c;
    }
    ctx->pc = 0x1D5774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D577Cu);
        ctx->pc = 0x1D5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5774u;
        // 0x1d5778: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5774u, 0x1D577Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D577Cu;
label_1d577c:
    // 0x1d577c: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1d5780:
    // 0x1d5780: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5784:
    // 0x1d5784: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d5788:
    // 0x1d5788: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x1d5788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d578c:
    // 0x1d578c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5790:
    // 0x1d5790: 0x40f809  jalr        $v0
label_1d5794:
    if (ctx->pc == 0x1D5794u) {
        ctx->pc = 0x1D5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5790u;
        // 0x1d5794: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5798u;
        goto label_1d5798;
    }
    ctx->pc = 0x1D5790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5798u);
        ctx->pc = 0x1D5794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5790u;
        // 0x1d5794: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5790u, 0x1D5798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5798u;
label_1d5798:
    // 0x1d5798: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1d5798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1d579c:
    // 0x1d579c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1d579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d57a0:
    // 0x1d57a0: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1d57a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d57a4:
    // 0x1d57a4: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x1d57a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1d57a8:
    // 0x1d57a8: 0x2612ffff  addiu       $s2, $s0, -0x1
    ctx->pc = 0x1d57a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1d57ac:
    // 0x1d57ac: 0xc0f52a8  jal         func_3D4AA0
label_1d57b0:
    if (ctx->pc == 0x1D57B0u) {
        ctx->pc = 0x1D57B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57ACu;
        // 0x1d57b0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57B4u;
        goto label_1d57b4;
    }
    ctx->pc = 0x1D57ACu;
    SET_GPR_U32(ctx, 31, 0x1D57B4u);
    ctx->pc = 0x1D57B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57ACu;
    // 0x1d57b0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1D57ACu, 0x1D57B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57B4u;
label_1d57b4:
    // 0x1d57b4: 0x24540010  addiu       $s4, $v0, 0x10
    ctx->pc = 0x1d57b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_1d57b8:
    // 0x1d57b8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1d57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1d57bc:
    // 0x1d57bc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1d57c0:
    if (ctx->pc == 0x1D57C0u) {
        ctx->pc = 0x1D57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57BCu;
        // 0x1d57c0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57C4u;
        goto label_1d57c4;
    }
    ctx->pc = 0x1D57BCu;
    {
        const bool branch_taken_0x1d57bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D57C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57BCu;
        // 0x1d57c0: 0x280882d  daddu       $s1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57bc) {
            ctx->pc = 0x1D57E0u;
            goto label_1d57e0;
        }
    }
    ctx->pc = 0x1D57C4u;
label_1d57c4:
    // 0x1d57c4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x1d57c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d57c8:
    // 0x1d57c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d57c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d57cc:
    // 0x1d57cc: 0xc074762  jal         func_1D1D88
label_1d57d0:
    if (ctx->pc == 0x1D57D0u) {
        ctx->pc = 0x1D57D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57CCu;
        // 0x1d57d0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57D4u;
        goto label_1d57d4;
    }
    ctx->pc = 0x1D57CCu;
    SET_GPR_U32(ctx, 31, 0x1D57D4u);
    ctx->pc = 0x1D57D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D57CCu;
    // 0x1d57d0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1D88u, 0x1D57CCu, 0x1D57D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D57D4u;
label_1d57d4:
    // 0x1d57d4: 0x0  nop
    ctx->pc = 0x1d57d4u;
    // NOP
label_1d57d8:
    // 0x1d57d8: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
label_1d57dc:
    if (ctx->pc == 0x1D57DCu) {
        ctx->pc = 0x1D57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57D8u;
        // 0x1d57dc: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57E0u;
        goto label_1d57e0;
    }
    ctx->pc = 0x1D57D8u;
    {
        const bool branch_taken_0x1d57d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D57DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57D8u;
        // 0x1d57dc: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57d8) {
            ctx->pc = 0x1D57C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d57c8;
        }
    }
    ctx->pc = 0x1D57E0u;
label_1d57e0:
    // 0x1d57e0: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1d57e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1d57e4:
    // 0x1d57e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1d57e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d57e8:
    // 0x1d57e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d57ec:
    // 0x1d57ec: 0x184000f0  blez        $v0, . + 4 + (0xF0 << 2)
label_1d57f0:
    if (ctx->pc == 0x1D57F0u) {
        ctx->pc = 0x1D57F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57ECu;
        // 0x1d57f0: 0xac94000c  sw          $s4, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D57F4u;
        goto label_1d57f4;
    }
    ctx->pc = 0x1D57ECu;
    {
        const bool branch_taken_0x1d57ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D57F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D57ECu;
        // 0x1d57f0: 0xac94000c  sw          $s4, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d57ec) {
            ctx->pc = 0x1D5BB0u;
            goto label_1d5bb0;
        }
    }
    ctx->pc = 0x1D57F4u;
label_1d57f4:
    // 0x1d57f4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x1d57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1d57f8:
    // 0x1d57f8: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x1d57f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_1d57fc:
    // 0x1d57fc: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1d57fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1d5800:
    // 0x1d5800: 0x27a400a4  addiu       $a0, $sp, 0xA4
    ctx->pc = 0x1d5800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
label_1d5804:
    // 0x1d5804: 0x27a200a8  addiu       $v0, $sp, 0xA8
    ctx->pc = 0x1d5804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
label_1d5808:
    // 0x1d5808: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x1d5808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_1d580c:
    // 0x1d580c: 0xafa400c8  sw          $a0, 0xC8($sp)
    ctx->pc = 0x1d580cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 4));
label_1d5810:
    // 0x1d5810: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x1d5810u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d5814:
    // 0x1d5814: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x1d5814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_1d5818:
    // 0x1d5818: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x1d5818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d581c:
    // 0x1d581c: 0x0  nop
    ctx->pc = 0x1d581cu;
    // NOP
label_1d5820:
    // 0x1d5820: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1d5820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1d5824:
    // 0x1d5824: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x1d5824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1d5828:
    // 0x1d5828: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d5828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d582c:
    // 0x1d582c: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x1d582cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1d5830:
    // 0x1d5830: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d5830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d5834:
    // 0x1d5834: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1d5834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1d5838:
    // 0x1d5838: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d5838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d583c:
    // 0x1d583c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5840:
    // 0x1d5840: 0x40f809  jalr        $v0
label_1d5844:
    if (ctx->pc == 0x1D5844u) {
        ctx->pc = 0x1D5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5840u;
        // 0x1d5844: 0xe39021  addu        $s2, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5848u;
        goto label_1d5848;
    }
    ctx->pc = 0x1D5840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5848u);
        ctx->pc = 0x1D5844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5840u;
        // 0x1d5844: 0xe39021  addu        $s2, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5840u, 0x1D5848u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5848u;
label_1d5848:
    // 0x1d5848: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d584c:
    // 0x1d584c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5850:
    // 0x1d5850: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d5850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d5854:
    // 0x1d5854: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5858:
    // 0x1d5858: 0x40f809  jalr        $v0
label_1d585c:
    if (ctx->pc == 0x1D585Cu) {
        ctx->pc = 0x1D585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5858u;
        // 0x1d585c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5860u;
        goto label_1d5860;
    }
    ctx->pc = 0x1D5858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5860u);
        ctx->pc = 0x1D585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5858u;
        // 0x1d585c: 0x8fa60014  lw          $a2, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5858u, 0x1D5860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5860u;
label_1d5860:
    // 0x1d5860: 0xc0f0adc  jal         func_3C2B70
label_1d5864:
    if (ctx->pc == 0x1D5864u) {
        ctx->pc = 0x1D5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5860u;
        // 0x1d5864: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5868u;
        goto label_1d5868;
    }
    ctx->pc = 0x1D5860u;
    SET_GPR_U32(ctx, 31, 0x1D5868u);
    ctx->pc = 0x1D5864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5860u;
    // 0x1d5864: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2B70u, 0x1D5860u, 0x1D5868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5868u;
label_1d5868:
    // 0x1d5868: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x1d5868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d586c:
    // 0x1d586c: 0xc074984  jal         func_1D2610
label_1d5870:
    if (ctx->pc == 0x1D5870u) {
        ctx->pc = 0x1D5870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D586Cu;
        // 0x1d5870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5874u;
        goto label_1d5874;
    }
    ctx->pc = 0x1D586Cu;
    SET_GPR_U32(ctx, 31, 0x1D5874u);
    ctx->pc = 0x1D5870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D586Cu;
    // 0x1d5870: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2610u, 0x1D586Cu, 0x1D5874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5874u;
label_1d5874:
    // 0x1d5874: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d5874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d5878:
    // 0x1d5878: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d5878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d587c:
    // 0x1d587c: 0xc0d5f28  jal         func_357CA0
label_1d5880:
    if (ctx->pc == 0x1D5880u) {
        ctx->pc = 0x1D5880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D587Cu;
        // 0x1d5880: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5884u;
        goto label_1d5884;
    }
    ctx->pc = 0x1D587Cu;
    SET_GPR_U32(ctx, 31, 0x1D5884u);
    ctx->pc = 0x1D5880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D587Cu;
    // 0x1d5880: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CA0u, 0x1D587Cu, 0x1D5884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5884u;
label_1d5884:
    // 0x1d5884: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x1d5884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d5888:
    // 0x1d5888: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
label_1d588c:
    if (ctx->pc == 0x1D588Cu) {
        ctx->pc = 0x1D588Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5888u;
        // 0x1d588c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5890u;
        goto label_1d5890;
    }
    ctx->pc = 0x1D5888u;
    {
        const bool branch_taken_0x1d5888 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d5888) {
            ctx->pc = 0x1D588Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5888u;
            // 0x1d588c: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5890u;
            goto label_1d5890;
        }
    }
    ctx->pc = 0x1D5890u;
label_1d5890:
    // 0x1d5890: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x1d5890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_1d5894:
    // 0x1d5894: 0xafb20090  sw          $s2, 0x90($sp)
    ctx->pc = 0x1d5894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 18));
label_1d5898:
    // 0x1d5898: 0xafa30094  sw          $v1, 0x94($sp)
    ctx->pc = 0x1d5898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 3));
label_1d589c:
    // 0x1d589c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1d589cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1d58a0:
    // 0x1d58a0: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x1d58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1d58a4:
    // 0x1d58a4: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1d58a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d58a8:
    // 0x1d58a8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1d58a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d58ac:
    // 0x1d58ac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d58acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d58b0:
    // 0x1d58b0: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_1d58b4:
    if (ctx->pc == 0x1D58B4u) {
        ctx->pc = 0x1D58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B0u;
        // 0x1d58b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58B8u;
        goto label_1d58b8;
    }
    ctx->pc = 0x1D58B0u;
    {
        const bool branch_taken_0x1d58b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D58B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B0u;
        // 0x1d58b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58b0) {
            ctx->pc = 0x1D58E8u;
            goto label_1d58e8;
        }
    }
    ctx->pc = 0x1D58B8u;
label_1d58b8:
    // 0x1d58b8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_1d58bc:
    if (ctx->pc == 0x1D58BCu) {
        ctx->pc = 0x1D58BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58B8u;
        // 0x1d58bc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58C0u;
        goto label_1d58c0;
    }
    ctx->pc = 0x1D58B8u;
    {
        const bool branch_taken_0x1d58b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d58b8) {
            ctx->pc = 0x1D58BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D58B8u;
            // 0x1d58bc: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D58D0u;
            goto label_1d58d0;
        }
    }
    ctx->pc = 0x1D58C0u;
label_1d58c0:
    // 0x1d58c0: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1d58c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
label_1d58c4:
    // 0x1d58c4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x1d58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1d58c8:
    // 0x1d58c8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1d58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1d58cc:
    // 0x1d58cc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d58ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d58d0:
    // 0x1d58d0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d58d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1d58d4:
    // 0x1d58d4: 0xafb600d0  sw          $s6, 0xD0($sp)
    ctx->pc = 0x1d58d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 22));
label_1d58d8:
    // 0x1d58d8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d58d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d58dc:
    // 0x1d58dc: 0x27b600ac  addiu       $s6, $sp, 0xAC
    ctx->pc = 0x1d58dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_1d58e0:
    // 0x1d58e0: 0x10000055  b           . + 4 + (0x55 << 2)
label_1d58e4:
    if (ctx->pc == 0x1D58E4u) {
        ctx->pc = 0x1D58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58E0u;
        // 0x1d58e4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D58E8u;
        goto label_1d58e8;
    }
    ctx->pc = 0x1D58E0u;
    {
        const bool branch_taken_0x1d58e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D58E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D58E0u;
        // 0x1d58e4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d58e0) {
            ctx->pc = 0x1D5A38u;
            goto label_1d5a38;
        }
    }
    ctx->pc = 0x1D58E8u;
label_1d58e8:
    // 0x1d58e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d58e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d58ec:
    // 0x1d58ec: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1d58ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_1d58f0:
    // 0x1d58f0: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1d58f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1d58f4:
    // 0x1d58f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d58f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d58f8:
    // 0x1d58f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d58fc:
    // 0x1d58fc: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x1d58fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_1d5900:
    // 0x1d5900: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d5900u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d5904:
    // 0x1d5904: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d5904u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1d5908:
    // 0x1d5908: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1d5908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1d590c:
    // 0x1d590c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1d590cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1d5910:
    // 0x1d5910: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x1d5910u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_1d5914:
    // 0x1d5914: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1d5914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d5918:
    // 0x1d5918: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d5918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d591c:
    // 0x1d591c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d5920:
    if (ctx->pc == 0x1D5920u) {
        ctx->pc = 0x1D5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D591Cu;
        // 0x1d5920: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5924u;
        goto label_1d5924;
    }
    ctx->pc = 0x1D591Cu;
    {
        const bool branch_taken_0x1d591c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D591Cu;
        // 0x1d5920: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d591c) {
            ctx->pc = 0x1D5938u;
            goto label_1d5938;
        }
    }
    ctx->pc = 0x1D5924u;
label_1d5924:
    // 0x1d5924: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5928:
    // 0x1d5928: 0xc0f5240  jal         func_3D4900
label_1d592c:
    if (ctx->pc == 0x1D592Cu) {
        ctx->pc = 0x1D592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5928u;
        // 0x1d592c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5930u;
        goto label_1d5930;
    }
    ctx->pc = 0x1D5928u;
    SET_GPR_U32(ctx, 31, 0x1D5930u);
    ctx->pc = 0x1D592Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5928u;
    // 0x1d592c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1D5928u, 0x1D5930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5930u;
label_1d5930:
    // 0x1d5930: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d5934:
    if (ctx->pc == 0x1D5934u) {
        ctx->pc = 0x1D5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5930u;
        // 0x1d5934: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5938u;
        goto label_1d5938;
    }
    ctx->pc = 0x1D5930u;
    {
        const bool branch_taken_0x1d5930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5930u;
        // 0x1d5934: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5930) {
            ctx->pc = 0x1D5944u;
            goto label_1d5944;
        }
    }
    ctx->pc = 0x1D5938u;
label_1d5938:
    // 0x1d5938: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d5938u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d593c:
    // 0x1d593c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1d593cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d5940:
    // 0x1d5940: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1d5940u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1d5944:
    // 0x1d5944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d5944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5948:
    // 0x1d5948: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1d5948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d594c:
    // 0x1d594c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x1d594cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5950:
    // 0x1d5950: 0xafb600d0  sw          $s6, 0xD0($sp)
    ctx->pc = 0x1d5950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 22));
label_1d5954:
    // 0x1d5954: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1d5954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d5958:
    // 0x1d5958: 0x10b5000a  beq         $a1, $s5, . + 4 + (0xA << 2)
label_1d595c:
    if (ctx->pc == 0x1D595Cu) {
        ctx->pc = 0x1D595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5958u;
        // 0x1d595c: 0x27b600ac  addiu       $s6, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5960u;
        goto label_1d5960;
    }
    ctx->pc = 0x1D5958u;
    {
        const bool branch_taken_0x1d5958 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        ctx->pc = 0x1D595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5958u;
        // 0x1d595c: 0x27b600ac  addiu       $s6, $sp, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5958) {
            ctx->pc = 0x1D5984u;
            goto label_1d5984;
        }
    }
    ctx->pc = 0x1D5960u;
label_1d5960:
    // 0x1d5960: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_1d5964:
    if (ctx->pc == 0x1D5964u) {
        ctx->pc = 0x1D5964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5960u;
        // 0x1d5964: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5968u;
        goto label_1d5968;
    }
    ctx->pc = 0x1D5960u;
    {
        const bool branch_taken_0x1d5960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5960) {
            ctx->pc = 0x1D5964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5960u;
            // 0x1d5964: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D597Cu;
            goto label_1d597c;
        }
    }
    ctx->pc = 0x1D5968u;
label_1d5968:
    // 0x1d5968: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d5968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d596c:
    // 0x1d596c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d596cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1d5970:
    // 0x1d5970: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1d5970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1d5974:
    // 0x1d5974: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1d5974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1d5978:
    // 0x1d5978: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d5978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1d597c:
    // 0x1d597c: 0x14b5fff8  bne         $a1, $s5, . + 4 + (-0x8 << 2)
label_1d5980:
    if (ctx->pc == 0x1D5980u) {
        ctx->pc = 0x1D5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D597Cu;
        // 0x1d5980: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5984u;
        goto label_1d5984;
    }
    ctx->pc = 0x1D597Cu;
    {
        const bool branch_taken_0x1d597c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        ctx->pc = 0x1D5980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D597Cu;
        // 0x1d5980: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d597c) {
            ctx->pc = 0x1D5960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5960;
        }
    }
    ctx->pc = 0x1D5984u;
label_1d5984:
    // 0x1d5984: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1d5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1d5988:
    // 0x1d5988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d5988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d598c:
    // 0x1d598c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_1d5990:
    if (ctx->pc == 0x1D5990u) {
        ctx->pc = 0x1D5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D598Cu;
        // 0x1d5990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5994u;
        goto label_1d5994;
    }
    ctx->pc = 0x1D598Cu;
    {
        const bool branch_taken_0x1d598c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D598Cu;
        // 0x1d5990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d598c) {
            ctx->pc = 0x1D59B4u;
            goto label_1d59b4;
        }
    }
    ctx->pc = 0x1D5994u;
label_1d5994:
    // 0x1d5994: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
label_1d5998:
    if (ctx->pc == 0x1D5998u) {
        ctx->pc = 0x1D5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5994u;
        // 0x1d5998: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D599Cu;
        goto label_1d599c;
    }
    ctx->pc = 0x1D5994u;
    {
        const bool branch_taken_0x1d5994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5994) {
            ctx->pc = 0x1D5998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5994u;
            // 0x1d5998: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D59E8u;
            goto label_1d59e8;
        }
    }
    ctx->pc = 0x1D599Cu;
label_1d599c:
    // 0x1d599c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1d59a0:
    // 0x1d59a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d59a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1d59a4:
    // 0x1d59a4: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1d59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1d59a8:
    // 0x1d59a8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1d59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1d59ac:
    // 0x1d59ac: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d59b0:
    if (ctx->pc == 0x1D59B0u) {
        ctx->pc = 0x1D59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59ACu;
        // 0x1d59b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59B4u;
        goto label_1d59b4;
    }
    ctx->pc = 0x1D59ACu;
    {
        const bool branch_taken_0x1d59ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59ACu;
        // 0x1d59b0: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59ac) {
            ctx->pc = 0x1D59E8u;
            goto label_1d59e8;
        }
    }
    ctx->pc = 0x1D59B4u;
label_1d59b4:
    // 0x1d59b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d59b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d59b8:
    // 0x1d59b8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1d59bc:
    if (ctx->pc == 0x1D59BCu) {
        ctx->pc = 0x1D59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59B8u;
        // 0x1d59bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59C0u;
        goto label_1d59c0;
    }
    ctx->pc = 0x1D59B8u;
    {
        const bool branch_taken_0x1d59b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59B8u;
        // 0x1d59bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59b8) {
            ctx->pc = 0x1D59E0u;
            goto label_1d59e0;
        }
    }
    ctx->pc = 0x1D59C0u;
label_1d59c0:
    // 0x1d59c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1d59c4:
    if (ctx->pc == 0x1D59C4u) {
        ctx->pc = 0x1D59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59C0u;
        // 0x1d59c4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59C8u;
        goto label_1d59c8;
    }
    ctx->pc = 0x1D59C0u;
    {
        const bool branch_taken_0x1d59c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59C0u;
        // 0x1d59c4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59c0) {
            ctx->pc = 0x1D59D8u;
            goto label_1d59d8;
        }
    }
    ctx->pc = 0x1D59C8u;
label_1d59c8:
    // 0x1d59c8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x1d59c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_1d59cc:
    // 0x1d59cc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d59ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1d59d0:
    // 0x1d59d0: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1d59d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_1d59d4:
    // 0x1d59d4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1d59d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1d59d8:
    // 0x1d59d8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
label_1d59dc:
    if (ctx->pc == 0x1D59DCu) {
        ctx->pc = 0x1D59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59D8u;
        // 0x1d59dc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59E0u;
        goto label_1d59e0;
    }
    ctx->pc = 0x1D59D8u;
    {
        const bool branch_taken_0x1d59d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D59DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59D8u;
        // 0x1d59dc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59d8) {
            ctx->pc = 0x1D59C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d59c0;
        }
    }
    ctx->pc = 0x1D59E0u;
label_1d59e0:
    // 0x1d59e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d59e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d59e4:
    // 0x1d59e4: 0x0  nop
    ctx->pc = 0x1d59e4u;
    // NOP
label_1d59e8:
    // 0x1d59e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d59e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d59ec:
    // 0x1d59ec: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d59ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d59f0:
    // 0x1d59f0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1d59f4:
    if (ctx->pc == 0x1D59F4u) {
        ctx->pc = 0x1D59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59F0u;
        // 0x1d59f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D59F8u;
        goto label_1d59f8;
    }
    ctx->pc = 0x1D59F0u;
    {
        const bool branch_taken_0x1d59f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D59F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D59F0u;
        // 0x1d59f4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d59f0) {
            ctx->pc = 0x1D5A18u;
            goto label_1d5a18;
        }
    }
    ctx->pc = 0x1D59F8u;
label_1d59f8:
    // 0x1d59f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d59f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1d59fc:
    // 0x1d59fc: 0x0  nop
    ctx->pc = 0x1d59fcu;
    // NOP
label_1d5a00:
    // 0x1d5a00: 0x0  nop
    ctx->pc = 0x1d5a00u;
    // NOP
label_1d5a04:
    // 0x1d5a04: 0x0  nop
    ctx->pc = 0x1d5a04u;
    // NOP
label_1d5a08:
    // 0x1d5a08: 0x0  nop
    ctx->pc = 0x1d5a08u;
    // NOP
label_1d5a0c:
    // 0x1d5a0c: 0x0  nop
    ctx->pc = 0x1d5a0cu;
    // NOP
label_1d5a10:
    // 0x1d5a10: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_1d5a14:
    if (ctx->pc == 0x1D5A14u) {
        ctx->pc = 0x1D5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A10u;
        // 0x1d5a14: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A18u;
        goto label_1d5a18;
    }
    ctx->pc = 0x1D5A10u;
    {
        const bool branch_taken_0x1d5a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A10u;
        // 0x1d5a14: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a10) {
            ctx->pc = 0x1D5A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5a00;
        }
    }
    ctx->pc = 0x1D5A18u;
label_1d5a18:
    // 0x1d5a18: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d5a1c:
    if (ctx->pc == 0x1D5A1Cu) {
        ctx->pc = 0x1D5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A18u;
        // 0x1d5a1c: 0x3d41021  addu        $v0, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A20u;
        goto label_1d5a20;
    }
    ctx->pc = 0x1D5A18u;
    {
        const bool branch_taken_0x1d5a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A18u;
        // 0x1d5a1c: 0x3d41021  addu        $v0, $fp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a18) {
            ctx->pc = 0x1D5A2Cu;
            goto label_1d5a2c;
        }
    }
    ctx->pc = 0x1D5A20u;
label_1d5a20:
    // 0x1d5a20: 0xc0f5222  jal         func_3D4888
label_1d5a24:
    if (ctx->pc == 0x1D5A24u) {
        ctx->pc = 0x1D5A28u;
        goto label_1d5a28;
    }
    ctx->pc = 0x1D5A20u;
    SET_GPR_U32(ctx, 31, 0x1D5A28u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D5A20u, 0x1D5A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5A28u;
label_1d5a28:
    // 0x1d5a28: 0x3d41021  addu        $v0, $fp, $s4
    ctx->pc = 0x1d5a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
label_1d5a2c:
    // 0x1d5a2c: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x1d5a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
label_1d5a30:
    // 0x1d5a30: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1d5a30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1d5a34:
    // 0x1d5a34: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1d5a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_1d5a38:
    // 0x1d5a38: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d5a3c:
    // 0x1d5a3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1d5a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a40:
    // 0x1d5a40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a44:
    // 0x1d5a44: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5a48:
    // 0x1d5a48: 0x40f809  jalr        $v0
label_1d5a4c:
    if (ctx->pc == 0x1D5A4Cu) {
        ctx->pc = 0x1D5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A48u;
        // 0x1d5a4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A50u;
        goto label_1d5a50;
    }
    ctx->pc = 0x1D5A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5A50u);
        ctx->pc = 0x1D5A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A48u;
        // 0x1d5a4c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5A48u, 0x1D5A50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5A50u;
label_1d5a50:
    // 0x1d5a50: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1d5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1d5a54:
    // 0x1d5a54: 0x28fc2  srl         $s1, $v0, 31
    ctx->pc = 0x1d5a54u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1d5a58:
    // 0x1d5a58: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_1d5a5c:
    if (ctx->pc == 0x1D5A5Cu) {
        ctx->pc = 0x1D5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A58u;
        // 0x1d5a5c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A60u;
        goto label_1d5a60;
    }
    ctx->pc = 0x1D5A58u;
    {
        const bool branch_taken_0x1d5a58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A58u;
        // 0x1d5a5c: 0x21023  negu        $v0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a58) {
            ctx->pc = 0x1D5AECu;
            goto label_1d5aec;
        }
    }
    ctx->pc = 0x1D5A60u;
label_1d5a60:
    // 0x1d5a60: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
label_1d5a64:
    if (ctx->pc == 0x1D5A64u) {
        ctx->pc = 0x1D5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A60u;
        // 0x1d5a64: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A68u;
        goto label_1d5a68;
    }
    ctx->pc = 0x1D5A60u;
    {
        const bool branch_taken_0x1d5a60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A60u;
        // 0x1d5a64: 0xafa200ac  sw          $v0, 0xAC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5a60) {
            ctx->pc = 0x1D5AECu;
            goto label_1d5aec;
        }
    }
    ctx->pc = 0x1D5A68u;
label_1d5a68:
    // 0x1d5a68: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d5a6c:
    // 0x1d5a6c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x1d5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1d5a70:
    // 0x1d5a70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a74:
    // 0x1d5a74: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5a78:
    // 0x1d5a78: 0x40f809  jalr        $v0
label_1d5a7c:
    if (ctx->pc == 0x1D5A7Cu) {
        ctx->pc = 0x1D5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A78u;
        // 0x1d5a7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A80u;
        goto label_1d5a80;
    }
    ctx->pc = 0x1D5A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5A80u);
        ctx->pc = 0x1D5A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A78u;
        // 0x1d5a7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5A78u, 0x1D5A80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5A80u;
label_1d5a80:
    // 0x1d5a80: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d5a84:
    // 0x1d5a84: 0x27a500b4  addiu       $a1, $sp, 0xB4
    ctx->pc = 0x1d5a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_1d5a88:
    // 0x1d5a88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5a8c:
    // 0x1d5a8c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5a90:
    // 0x1d5a90: 0x40f809  jalr        $v0
label_1d5a94:
    if (ctx->pc == 0x1D5A94u) {
        ctx->pc = 0x1D5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A90u;
        // 0x1d5a94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5A98u;
        goto label_1d5a98;
    }
    ctx->pc = 0x1D5A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5A98u);
        ctx->pc = 0x1D5A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5A90u;
        // 0x1d5a94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5A90u, 0x1D5A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5A98u;
label_1d5a98:
    // 0x1d5a98: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1d5a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d5a9c:
    // 0x1d5a9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5aa0:
    // 0x1d5aa0: 0xc0747ee  jal         func_1D1FB8
label_1d5aa4:
    if (ctx->pc == 0x1D5AA4u) {
        ctx->pc = 0x1D5AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AA0u;
        // 0x1d5aa4: 0x8fa600b4  lw          $a2, 0xB4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AA8u;
        goto label_1d5aa8;
    }
    ctx->pc = 0x1D5AA0u;
    SET_GPR_U32(ctx, 31, 0x1D5AA8u);
    ctx->pc = 0x1D5AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AA0u;
    // 0x1d5aa4: 0x8fa600b4  lw          $a2, 0xB4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1FB8u, 0x1D5AA0u, 0x1D5AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AA8u;
label_1d5aa8:
    // 0x1d5aa8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d5aac:
    // 0x1d5aac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d5aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ab0:
    // 0x1d5ab0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x1d5ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_1d5ab4:
    // 0x1d5ab4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5ab8:
    // 0x1d5ab8: 0x40f809  jalr        $v0
label_1d5abc:
    if (ctx->pc == 0x1D5ABCu) {
        ctx->pc = 0x1D5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AB8u;
        // 0x1d5abc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AC0u;
        goto label_1d5ac0;
    }
    ctx->pc = 0x1D5AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5AC0u);
        ctx->pc = 0x1D5ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AB8u;
        // 0x1d5abc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5AB8u, 0x1D5AC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5AC0u;
label_1d5ac0:
    // 0x1d5ac0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1d5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1d5ac4:
    // 0x1d5ac4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5ac8:
    // 0x1d5ac8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1d5ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1d5acc:
    // 0x1d5acc: 0xc075570  jal         func_1D55C0
label_1d5ad0:
    if (ctx->pc == 0x1D5AD0u) {
        ctx->pc = 0x1D5AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ACCu;
        // 0x1d5ad0: 0xa6430008  sh          $v1, 0x8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AD4u;
        goto label_1d5ad4;
    }
    ctx->pc = 0x1D5ACCu;
    SET_GPR_U32(ctx, 31, 0x1D5AD4u);
    ctx->pc = 0x1D5AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5ACCu;
    // 0x1d5ad0: 0xa6430008  sh          $v1, 0x8($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D55C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D55C0u, 0x1D5ACCu, 0x1D5AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5AD4u;
label_1d5ad4:
    // 0x1d5ad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d5ad8:
    if (ctx->pc == 0x1D5AD8u) {
        ctx->pc = 0x1D5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AD4u;
        // 0x1d5ad8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5ADCu;
        goto label_1d5adc;
    }
    ctx->pc = 0x1D5AD4u;
    {
        const bool branch_taken_0x1d5ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AD4u;
        // 0x1d5ad8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ad4) {
            ctx->pc = 0x1D5AE4u;
            goto label_1d5ae4;
        }
    }
    ctx->pc = 0x1D5ADCu;
label_1d5adc:
    // 0x1d5adc: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d5ae0:
    if (ctx->pc == 0x1D5AE0u) {
        ctx->pc = 0x1D5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ADCu;
        // 0x1d5ae0: 0xa244001b  sb          $a0, 0x1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AE4u;
        goto label_1d5ae4;
    }
    ctx->pc = 0x1D5ADCu;
    {
        const bool branch_taken_0x1d5adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5ADCu;
        // 0x1d5ae0: 0xa244001b  sb          $a0, 0x1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5adc) {
            ctx->pc = 0x1D5B20u;
            goto label_1d5b20;
        }
    }
    ctx->pc = 0x1D5AE4u;
label_1d5ae4:
    // 0x1d5ae4: 0x1000000e  b           . + 4 + (0xE << 2)
label_1d5ae8:
    if (ctx->pc == 0x1D5AE8u) {
        ctx->pc = 0x1D5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AE4u;
        // 0x1d5ae8: 0xa240001b  sb          $zero, 0x1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5AECu;
        goto label_1d5aec;
    }
    ctx->pc = 0x1D5AE4u;
    {
        const bool branch_taken_0x1d5ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AE4u;
        // 0x1d5ae8: 0xa240001b  sb          $zero, 0x1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ae4) {
            ctx->pc = 0x1D5B20u;
            goto label_1d5b20;
        }
    }
    ctx->pc = 0x1D5AECu;
label_1d5aec:
    // 0x1d5aec: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x1d5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_1d5af0:
    // 0x1d5af0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d5af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5af4:
    // 0x1d5af4: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1d5af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1d5af8:
    // 0x1d5af8: 0xc075570  jal         func_1D55C0
label_1d5afc:
    if (ctx->pc == 0x1D5AFCu) {
        ctx->pc = 0x1D5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5AF8u;
        // 0x1d5afc: 0xa6420008  sh          $v0, 0x8($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B00u;
        goto label_1d5b00;
    }
    ctx->pc = 0x1D5AF8u;
    SET_GPR_U32(ctx, 31, 0x1D5B00u);
    ctx->pc = 0x1D5AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5AF8u;
    // 0x1d5afc: 0xa6420008  sh          $v0, 0x8($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D55C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D55C0u, 0x1D5AF8u, 0x1D5B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B00u;
label_1d5b00:
    // 0x1d5b00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d5b04:
    if (ctx->pc == 0x1D5B04u) {
        ctx->pc = 0x1D5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B00u;
        // 0x1d5b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B08u;
        goto label_1d5b08;
    }
    ctx->pc = 0x1D5B00u;
    {
        const bool branch_taken_0x1d5b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B00u;
        // 0x1d5b04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b00) {
            ctx->pc = 0x1D5B10u;
            goto label_1d5b10;
        }
    }
    ctx->pc = 0x1D5B08u;
label_1d5b08:
    // 0x1d5b08: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d5b0c:
    if (ctx->pc == 0x1D5B0Cu) {
        ctx->pc = 0x1D5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B08u;
        // 0x1d5b0c: 0xa242001b  sb          $v0, 0x1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B10u;
        goto label_1d5b10;
    }
    ctx->pc = 0x1D5B08u;
    {
        const bool branch_taken_0x1d5b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B08u;
        // 0x1d5b0c: 0xa242001b  sb          $v0, 0x1B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b08) {
            ctx->pc = 0x1D5B14u;
            goto label_1d5b14;
        }
    }
    ctx->pc = 0x1D5B10u;
label_1d5b10:
    // 0x1d5b10: 0xa240001b  sb          $zero, 0x1B($s2)
    ctx->pc = 0x1d5b10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 27), (uint8_t)GPR_U32(ctx, 0));
label_1d5b14:
    // 0x1d5b14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b18:
    // 0x1d5b18: 0xc074802  jal         func_1D2008
label_1d5b1c:
    if (ctx->pc == 0x1D5B1Cu) {
        ctx->pc = 0x1D5B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B18u;
        // 0x1d5b1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B20u;
        goto label_1d5b20;
    }
    ctx->pc = 0x1D5B18u;
    SET_GPR_U32(ctx, 31, 0x1D5B20u);
    ctx->pc = 0x1D5B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B18u;
    // 0x1d5b1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2008u, 0x1D5B18u, 0x1D5B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B20u;
label_1d5b20:
    // 0x1d5b20: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d5b24:
    // 0x1d5b24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b28:
    // 0x1d5b28: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d5b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b2c:
    // 0x1d5b2c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5b30:
    // 0x1d5b30: 0x40f809  jalr        $v0
label_1d5b34:
    if (ctx->pc == 0x1D5B34u) {
        ctx->pc = 0x1D5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B30u;
        // 0x1d5b34: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B38u;
        goto label_1d5b38;
    }
    ctx->pc = 0x1D5B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5B38u);
        ctx->pc = 0x1D5B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B30u;
        // 0x1d5b34: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B30u, 0x1D5B38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5B38u;
label_1d5b38:
    // 0x1d5b38: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x1d5b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_1d5b3c:
    // 0x1d5b3c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1d5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_1d5b40:
    // 0x1d5b40: 0x628018  mult        $s0, $v1, $v0
    ctx->pc = 0x1d5b40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_1d5b44:
    // 0x1d5b44: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1d5b48:
    if (ctx->pc == 0x1D5B48u) {
        ctx->pc = 0x1D5B4Cu;
        goto label_1d5b4c;
    }
    ctx->pc = 0x1D5B44u;
    {
        const bool branch_taken_0x1d5b44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5b44) {
            ctx->pc = 0x1D5B78u;
            goto label_1d5b78;
        }
    }
    ctx->pc = 0x1D5B4Cu;
label_1d5b4c:
    // 0x1d5b4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d5b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b50:
    // 0x1d5b50: 0xc07498e  jal         func_1D2638
label_1d5b54:
    if (ctx->pc == 0x1D5B54u) {
        ctx->pc = 0x1D5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B50u;
        // 0x1d5b54: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B58u;
        goto label_1d5b58;
    }
    ctx->pc = 0x1D5B50u;
    SET_GPR_U32(ctx, 31, 0x1D5B58u);
    ctx->pc = 0x1D5B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B50u;
    // 0x1d5b54: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2638u, 0x1D5B50u, 0x1D5B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B58u;
label_1d5b58:
    // 0x1d5b58: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d5b5c:
    // 0x1d5b5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d5b60:
    // 0x1d5b60: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x1d5b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1d5b64:
    // 0x1d5b64: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d5b68:
    // 0x1d5b68: 0x40f809  jalr        $v0
label_1d5b6c:
    if (ctx->pc == 0x1D5B6Cu) {
        ctx->pc = 0x1D5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B68u;
        // 0x1d5b6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B70u;
        goto label_1d5b70;
    }
    ctx->pc = 0x1D5B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D5B70u);
        ctx->pc = 0x1D5B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B68u;
        // 0x1d5b6c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5B68u, 0x1D5B70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D5B70u;
label_1d5b70:
    // 0x1d5b70: 0xc0749aa  jal         func_1D26A8
label_1d5b74:
    if (ctx->pc == 0x1D5B74u) {
        ctx->pc = 0x1D5B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B70u;
        // 0x1d5b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B78u;
        goto label_1d5b78;
    }
    ctx->pc = 0x1D5B70u;
    SET_GPR_U32(ctx, 31, 0x1D5B78u);
    ctx->pc = 0x1D5B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B70u;
    // 0x1d5b74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D26A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D26A8u, 0x1D5B70u, 0x1D5B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B78u;
label_1d5b78:
    // 0x1d5b78: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_1d5b7c:
    if (ctx->pc == 0x1D5B7Cu) {
        ctx->pc = 0x1D5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B78u;
        // 0x1d5b7c: 0x8fa300bc  lw          $v1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B80u;
        goto label_1d5b80;
    }
    ctx->pc = 0x1D5B78u;
    {
        const bool branch_taken_0x1d5b78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B78u;
        // 0x1d5b7c: 0x8fa300bc  lw          $v1, 0xBC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b78) {
            ctx->pc = 0x1D5B98u;
            goto label_1d5b98;
        }
    }
    ctx->pc = 0x1D5B80u;
label_1d5b80:
    // 0x1d5b80: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1d5b84:
    if (ctx->pc == 0x1D5B84u) {
        ctx->pc = 0x1D5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B80u;
        // 0x1d5b84: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B88u;
        goto label_1d5b88;
    }
    ctx->pc = 0x1D5B80u;
    {
        const bool branch_taken_0x1d5b80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B80u;
        // 0x1d5b84: 0x8fa400b8  lw          $a0, 0xB8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5b80) {
            ctx->pc = 0x1D5B9Cu;
            goto label_1d5b9c;
        }
    }
    ctx->pc = 0x1D5B88u;
label_1d5b88:
    // 0x1d5b88: 0xc074920  jal         func_1D2480
label_1d5b8c:
    if (ctx->pc == 0x1D5B8Cu) {
        ctx->pc = 0x1D5B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B88u;
        // 0x1d5b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B90u;
        goto label_1d5b90;
    }
    ctx->pc = 0x1D5B88u;
    SET_GPR_U32(ctx, 31, 0x1D5B90u);
    ctx->pc = 0x1D5B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B88u;
    // 0x1d5b8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2480u, 0x1D5B88u, 0x1D5B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B90u;
label_1d5b90:
    // 0x1d5b90: 0xc07493a  jal         func_1D24E8
label_1d5b94:
    if (ctx->pc == 0x1D5B94u) {
        ctx->pc = 0x1D5B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5B90u;
        // 0x1d5b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5B98u;
        goto label_1d5b98;
    }
    ctx->pc = 0x1D5B90u;
    SET_GPR_U32(ctx, 31, 0x1D5B98u);
    ctx->pc = 0x1D5B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5B90u;
    // 0x1d5b94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D24E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D24E8u, 0x1D5B90u, 0x1D5B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5B98u;
label_1d5b98:
    // 0x1d5b98: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1d5b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_1d5b9c:
    // 0x1d5b9c: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x1d5b9cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1d5ba0:
    // 0x1d5ba0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1d5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d5ba4:
    // 0x1d5ba4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1d5ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d5ba8:
    // 0x1d5ba8: 0x1440ff1d  bnez        $v0, . + 4 + (-0xE3 << 2)
label_1d5bac:
    if (ctx->pc == 0x1D5BACu) {
        ctx->pc = 0x1D5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BA8u;
        // 0x1d5bac: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5BB0u;
        goto label_1d5bb0;
    }
    ctx->pc = 0x1D5BA8u;
    {
        const bool branch_taken_0x1d5ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BA8u;
        // 0x1d5bac: 0x24030034  addiu       $v1, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5ba8) {
            ctx->pc = 0x1D5820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5820;
        }
    }
    ctx->pc = 0x1D5BB0u;
label_1d5bb0:
    // 0x1d5bb0: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1d5bb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1d5bb4:
    // 0x1d5bb4: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1d5bb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_1d5bb8:
    // 0x1d5bb8: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1d5bb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1d5bbc:
    // 0x1d5bbc: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1d5bbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_1d5bc0:
    // 0x1d5bc0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1d5bc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1d5bc4:
    // 0x1d5bc4: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1d5bc4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_1d5bc8:
    // 0x1d5bc8: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1d5bc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1d5bcc:
    // 0x1d5bcc: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x1d5bccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_1d5bd0:
    // 0x1d5bd0: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x1d5bd0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_1d5bd4:
    // 0x1d5bd4: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x1d5bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
label_1d5bd8:
    // 0x1d5bd8: 0x3e00008  jr          $ra
label_1d5bdc:
    if (ctx->pc == 0x1D5BDCu) {
        ctx->pc = 0x1D5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BD8u;
        // 0x1d5bdc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D5BE0u;
        goto label_fallthrough_0x1d5bd8;
    }
    ctx->pc = 0x1D5BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5BD8u;
        // 0x1d5bdc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d5bd8:
    ctx->pc = 0x1D5BE0u;
}
